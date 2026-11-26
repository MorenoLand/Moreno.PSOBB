#include "protos.h"

void f_0080a104(void) /* sub_80A104 */
{
    FN_ENTER(0x0080a104);
    /* 0080a104: mov dword ptr [0xaafc20], 0x3f800000 */ W32((u32)(0xaafc20u), 0x3f800000u);
    /* 0080a10e: mov dword ptr [0xaafc24], 0x41000000 */ W32((u32)(0xaafc24u), 0x41000000u);
    /* 0080a118: mov dword ptr [0xaafc28], 0x3fc00000 */ W32((u32)(0xaafc28u), 0x3fc00000u);
    /* 0080a122: ret  */ FN_RET(0x0080a104); r_esp += 4; return;
}

void f_0080a124(void) /* sub_80A124 */
{
    FN_ENTER(0x0080a124);
    /* 0080a124: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080a128: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a129: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a12a: sub esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080a130: mov ebp, eax */ r_ebp = r_eax;
    /* 0080a132: mov dword ptr [0xaafc8c], 0xffffffff */ W32((u32)(0xaafc8cu), 0xffffffffu);
    /* 0080a13c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a13e: mov dword ptr [0xaafca4], edx */ W32((u32)(0xaafca4u), r_edx);
    /* 0080a144: mov dword ptr [0xaafc74], edx */ W32((u32)(0xaafc74u), r_edx);
    /* 0080a14a: mov dword ptr [0xaafc60], edx */ W32((u32)(0xaafc60u), r_edx);
    /* 0080a150: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x80a155u); f_00482a28();
    /* 0080a155: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0080a158: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a15b: je 0x80a180 */ if (fZ) goto L_0080a180;
L_0080a15d:; BB(0x0080a15d);
    /* 0080a15d: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080a161: push 0x97f208 */ { u32 v = 0x97f208u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a166: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a167: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a168: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a16du); f_0078e574();
    /* 0080a16d: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0080a171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a172: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a177u); f_005b9328();
    /* 0080a177: mov edi, eax */ r_edi = r_eax;
    /* 0080a179: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a17c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a17e: jg 0x80a19f */ if ((!fZ&&fS==fO)) goto L_0080a19f;
L_0080a180:; BB(0x0080a180);
    /* 0080a180: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080a184: push 0x97d368 */ { u32 v = 0x97d368u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a189: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a18a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a18b: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a190u); f_0078e574();
    /* 0080a190: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0080a194: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a195: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a19au); f_005b9328();
    /* 0080a19a: mov edi, eax */ r_edi = r_eax;
    /* 0080a19c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080a19f:; BB(0x0080a19f);
    /* 0080a19f: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080a1a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1a4: push 0x97f210 */ { u32 v = 0x97f210u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1aa: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x80a1afu); f_00858bf5();
    /* 0080a1af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a1b2: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080a1b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a1b8: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x80a1bdu); f_0083bf84();
    /* 0080a1bd: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x80a1c2u); f_0080a640();
    /* 0080a1c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a1c4: je 0x80a21f */ if (fZ) goto L_0080a21f;
L_0080a1c6:; BB(0x0080a1c6);
    /* 0080a1c6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a1c8: jle 0x80a3a3 */ if ((fZ||fS!=fO)) goto L_0080a3a3;
L_0080a1ce:; BB(0x0080a1ce);
    /* 0080a1ce: cmp edi, 0xc0000 */ {  u32 a = r_edi; u32 b = 0xc0000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0080a1d4: jbe 0x80a1e1 */ if ((fC||fZ)) goto L_0080a1e1;
L_0080a1d6:; BB(0x0080a1d6);
    /* 0080a1d6: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 0080a1dc: jmp 0x80a25f */ goto L_0080a25f;
L_0080a1e1:; BB(0x0080a1e1);
    /* 0080a1e1: push 0xc0000 */ { u32 v = 0xc0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1e6: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a1ebu); f_0082e940();
    /* 0080a1eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a1ec: mov dword ptr [0xaafc74], eax */ W32((u32)(0xaafc74u), r_eax);
    /* 0080a1f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a1f3: je 0x80a217 */ if (fZ) goto L_0080a217;
L_0080a1f5:; BB(0x0080a1f5);
    /* 0080a1f5: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080a1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1fb: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a200u); f_005b9bf4();
    /* 0080a200: mov ebp, eax */ r_ebp = r_eax;
    /* 0080a202: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a205: mov dword ptr [0xaafc60], 0xc0000 */ W32((u32)(0xaafc60u), 0xc0000u);
    /* 0080a20f: mov dword ptr [0xaafca4], ebp */ W32((u32)(0xaafca4u), r_ebp);
    /* 0080a215: jmp 0x80a25f */ goto L_0080a25f;
L_0080a217:; BB(0x0080a217);
    /* 0080a217: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 0080a21d: jmp 0x80a25f */ goto L_0080a25f;
L_0080a21f:; BB(0x0080a21f);
    /* 0080a21f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a221: jle 0x80a259 */ if ((fZ||fS!=fO)) goto L_0080a259;
L_0080a223:; BB(0x0080a223);
    /* 0080a223: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a224: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a229u); f_0082e940();
    /* 0080a229: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a22a: mov dword ptr [0xaafc74], eax */ W32((u32)(0xaafc74u), r_eax);
    /* 0080a22f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a231: je 0x80a251 */ if (fZ) goto L_0080a251;
L_0080a233:; BB(0x0080a233);
    /* 0080a233: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080a237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a239: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a23eu); f_005b9bf4();
    /* 0080a23e: mov ebp, eax */ r_ebp = r_eax;
    /* 0080a240: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a243: mov dword ptr [0xaafca4], ebp */ W32((u32)(0xaafca4u), r_ebp);
    /* 0080a249: mov dword ptr [0xaafc60], edi */ W32((u32)(0xaafc60u), r_edi);
    /* 0080a24f: jmp 0x80a25f */ goto L_0080a25f;
L_0080a251:; BB(0x0080a251);
    /* 0080a251: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 0080a257: jmp 0x80a25f */ goto L_0080a25f;
L_0080a259:; BB(0x0080a259);
    /* 0080a259: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
L_0080a25f:; BB(0x0080a25f);
    /* 0080a25f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a261: je 0x80a296 */ if (fZ) goto L_0080a296;
L_0080a263:; BB(0x0080a263);
    /* 0080a263: mov edx, dword ptr [0xa114b0] */ r_edx = R32((u32)(0xa114b0u));
    /* 0080a269: mov edi, 0xa114b0 */ r_edi = 0xa114b0u;
    /* 0080a26e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a270: je 0x80a296 */ if (fZ) goto L_0080a296;
L_0080a272:; BB(0x0080a272);
    /* 0080a272: mov edx, dword ptr [0xa114b0] */ r_edx = R32((u32)(0xa114b0u));
L_0080a278:; BB(0x0080a278);
    /* 0080a278: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a27a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a27b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a27c: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x80a281u); f_008598c0();
    /* 0080a281: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a286: je 0x80a3ae */ if (fZ) goto L_0080a3ae;
L_0080a28c:; BB(0x0080a28c);
    /* 0080a28c: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0080a28f: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a292: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a294: jne 0x80a278 */ if (!fZ) goto L_0080a278;
L_0080a296:; BB(0x0080a296);
    /* 0080a296: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a298: je 0x80a39a */ if (fZ) goto L_0080a39a;
L_0080a29e:; BB(0x0080a29e);
    /* 0080a29e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0080a2a2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a2a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a2a8: je 0x80a2ce */ if (fZ) goto L_0080a2ce;
L_0080a2aa:; BB(0x0080a2aa);
    /* 0080a2aa: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0080a2ad: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 0080a2b0: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2b2: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2b4: lea ebp, [ecx + ebp*4] */ r_ebp = (u32)(r_ecx+r_ebp*4);
    /* 0080a2b7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2b9: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2bb: lea eax, [eax + ebp + 0x28] */ r_eax = (u32)(r_eax+r_ebp+0x28u);
L_0080a2bf:; BB(0x0080a2bf);
    /* 0080a2bf: add edi, dword ptr [eax] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2c1: add edi, dword ptr [eax + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2c4: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080a2c7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a2ca: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a2cc: jne 0x80a2bf */ if (!fZ) goto L_0080a2bf;
L_0080a2ce:; BB(0x0080a2ce);
    /* 0080a2ce: mov dword ptr [0xaafc2c], edi */ W32((u32)(0xaafc2cu), r_edi);
    /* 0080a2d4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2d6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a2d9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80a2deu); f_008581c5();
    /* 0080a2de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a2df: mov dword ptr [0xaafc30], eax */ W32((u32)(0xaafc30u), r_eax);
    /* 0080a2e4: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 0080a2e9: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0080a2ec: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080a2f0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a2f4: je 0x80a39a */ if (fZ) goto L_0080a39a;
L_0080a2fa:; BB(0x0080a2fa);
    /* 0080a2fa: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0080a2fe: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_0080a302:; BB(0x0080a302);
    /* 0080a302: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 0080a305: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 0080a308: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a30a: je 0x80a344 */ if (fZ) goto L_0080a344;
L_0080a30c:; BB(0x0080a30c);
    /* 0080a30c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0080a310: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0080a313:; BB(0x0080a313);
    /* 0080a313: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0080a315: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0080a318: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a31d: je 0x80a321 */ if (fZ) goto L_0080a321;
L_0080a31f:; BB(0x0080a31f);
    /* 0080a31f: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_0080a321:; BB(0x0080a321);
    /* 0080a321: mov ecx, edi */ r_ecx = r_edi;
    /* 0080a323: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x80a328u); f_00834c58();
    /* 0080a328: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
    /* 0080a32d: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 0080a330: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080a333: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080a336: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a339: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a33b: jne 0x80a313 */ if (!fZ) goto L_0080a313;
L_0080a33d:; BB(0x0080a33d);
    /* 0080a33d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080a341: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080a344:; BB(0x0080a344);
    /* 0080a344: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 0080a347: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 0080a34a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a34c: je 0x80a386 */ if (fZ) goto L_0080a386;
L_0080a34e:; BB(0x0080a34e);
    /* 0080a34e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0080a352: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0080a355:; BB(0x0080a355);
    /* 0080a355: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0080a357: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0080a35a: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a35f: je 0x80a363 */ if (fZ) goto L_0080a363;
L_0080a361:; BB(0x0080a361);
    /* 0080a361: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_0080a363:; BB(0x0080a363);
    /* 0080a363: mov ecx, edi */ r_ecx = r_edi;
    /* 0080a365: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x80a36au); f_00834c58();
    /* 0080a36a: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
    /* 0080a36f: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 0080a372: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080a375: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080a378: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a37b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a37d: jne 0x80a355 */ if (!fZ) goto L_0080a355;
L_0080a37f:; BB(0x0080a37f);
    /* 0080a37f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080a383: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080a386:; BB(0x0080a386);
    /* 0080a386: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a389: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0080a38c: jne 0x80a302 */ if (!fZ) goto L_0080a302;
L_0080a392:; BB(0x0080a392);
    /* 0080a392: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080a396: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0080a39a:; BB(0x0080a39a);
    /* 0080a39a: add esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a3a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080a3a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080a3a2: ret  */ FN_RET(0x0080a124); r_esp += 4; return;
L_0080a3a3:; BB(0x0080a3a3);
    /* 0080a3a3: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 0080a3a9: jmp 0x80a25f */ goto L_0080a25f;
L_0080a3ae:; BB(0x0080a3ae);
    /* 0080a3ae: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0080a3b1: mov dword ptr [0xaafc8c], edx */ W32((u32)(0xaafc8cu), r_edx);
    /* 0080a3b7: jmp 0x80a296 */ goto L_0080a296;
}

void f_0080a128(void)
{
    FN_ENTER(0x0080a128);
    /* 0080a128: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a129: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a12a: sub esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080a130: mov ebp, eax */ r_ebp = r_eax;
    /* 0080a132: mov dword ptr [0xaafc8c], 0xffffffff */ W32((u32)(0xaafc8cu), 0xffffffffu);
    /* 0080a13c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a13e: mov dword ptr [0xaafca4], edx */ W32((u32)(0xaafca4u), r_edx);
    /* 0080a144: mov dword ptr [0xaafc74], edx */ W32((u32)(0xaafc74u), r_edx);
    /* 0080a14a: mov dword ptr [0xaafc60], edx */ W32((u32)(0xaafc60u), r_edx);
    /* 0080a150: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x80a155u); f_00482a28();
    /* 0080a155: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0080a158: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a15b: je 0x80a180 */ if (fZ) goto L_0080a180;
L_0080a15d:; BB(0x0080a15d);
    /* 0080a15d: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080a161: push 0x97f208 */ { u32 v = 0x97f208u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a166: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a167: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a168: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a16du); f_0078e574();
    /* 0080a16d: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0080a171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a172: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a177u); f_005b9328();
    /* 0080a177: mov edi, eax */ r_edi = r_eax;
    /* 0080a179: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a17c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a17e: jg 0x80a19f */ if ((!fZ&&fS==fO)) goto L_0080a19f;
L_0080a180:; BB(0x0080a180);
    /* 0080a180: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080a184: push 0x97d368 */ { u32 v = 0x97d368u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a189: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a18a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a18b: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a190u); f_0078e574();
    /* 0080a190: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0080a194: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a195: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a19au); f_005b9328();
    /* 0080a19a: mov edi, eax */ r_edi = r_eax;
    /* 0080a19c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080a19f:; BB(0x0080a19f);
    /* 0080a19f: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080a1a3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1a4: push 0x97f210 */ { u32 v = 0x97f210u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1aa: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x80a1afu); f_00858bf5();
    /* 0080a1af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a1b2: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080a1b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a1b8: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x80a1bdu); f_0083bf84();
    /* 0080a1bd: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x80a1c2u); f_0080a640();
    /* 0080a1c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a1c4: je 0x80a21f */ if (fZ) goto L_0080a21f;
L_0080a1c6:; BB(0x0080a1c6);
    /* 0080a1c6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a1c8: jle 0x80a3a3 */ if ((fZ||fS!=fO)) goto L_0080a3a3;
L_0080a1ce:; BB(0x0080a1ce);
    /* 0080a1ce: cmp edi, 0xc0000 */ {  u32 a = r_edi; u32 b = 0xc0000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0080a1d4: jbe 0x80a1e1 */ if ((fC||fZ)) goto L_0080a1e1;
L_0080a1d6:; BB(0x0080a1d6);
    /* 0080a1d6: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 0080a1dc: jmp 0x80a25f */ goto L_0080a25f;
L_0080a1e1:; BB(0x0080a1e1);
    /* 0080a1e1: push 0xc0000 */ { u32 v = 0xc0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1e6: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a1ebu); f_0082e940();
    /* 0080a1eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a1ec: mov dword ptr [0xaafc74], eax */ W32((u32)(0xaafc74u), r_eax);
    /* 0080a1f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a1f3: je 0x80a217 */ if (fZ) goto L_0080a217;
L_0080a1f5:; BB(0x0080a1f5);
    /* 0080a1f5: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080a1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a1fb: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a200u); f_005b9bf4();
    /* 0080a200: mov ebp, eax */ r_ebp = r_eax;
    /* 0080a202: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a205: mov dword ptr [0xaafc60], 0xc0000 */ W32((u32)(0xaafc60u), 0xc0000u);
    /* 0080a20f: mov dword ptr [0xaafca4], ebp */ W32((u32)(0xaafca4u), r_ebp);
    /* 0080a215: jmp 0x80a25f */ goto L_0080a25f;
L_0080a217:; BB(0x0080a217);
    /* 0080a217: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 0080a21d: jmp 0x80a25f */ goto L_0080a25f;
L_0080a21f:; BB(0x0080a21f);
    /* 0080a21f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a221: jle 0x80a259 */ if ((fZ||fS!=fO)) goto L_0080a259;
L_0080a223:; BB(0x0080a223);
    /* 0080a223: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a224: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a229u); f_0082e940();
    /* 0080a229: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a22a: mov dword ptr [0xaafc74], eax */ W32((u32)(0xaafc74u), r_eax);
    /* 0080a22f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a231: je 0x80a251 */ if (fZ) goto L_0080a251;
L_0080a233:; BB(0x0080a233);
    /* 0080a233: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0080a237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a238: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a239: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a23eu); f_005b9bf4();
    /* 0080a23e: mov ebp, eax */ r_ebp = r_eax;
    /* 0080a240: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a243: mov dword ptr [0xaafca4], ebp */ W32((u32)(0xaafca4u), r_ebp);
    /* 0080a249: mov dword ptr [0xaafc60], edi */ W32((u32)(0xaafc60u), r_edi);
    /* 0080a24f: jmp 0x80a25f */ goto L_0080a25f;
L_0080a251:; BB(0x0080a251);
    /* 0080a251: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 0080a257: jmp 0x80a25f */ goto L_0080a25f;
L_0080a259:; BB(0x0080a259);
    /* 0080a259: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
L_0080a25f:; BB(0x0080a25f);
    /* 0080a25f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a261: je 0x80a296 */ if (fZ) goto L_0080a296;
L_0080a263:; BB(0x0080a263);
    /* 0080a263: mov edx, dword ptr [0xa114b0] */ r_edx = R32((u32)(0xa114b0u));
    /* 0080a269: mov edi, 0xa114b0 */ r_edi = 0xa114b0u;
    /* 0080a26e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a270: je 0x80a296 */ if (fZ) goto L_0080a296;
L_0080a272:; BB(0x0080a272);
    /* 0080a272: mov edx, dword ptr [0xa114b0] */ r_edx = R32((u32)(0xa114b0u));
L_0080a278:; BB(0x0080a278);
    /* 0080a278: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a27a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a27b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a27c: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x80a281u); f_008598c0();
    /* 0080a281: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a286: je 0x80a3ae */ if (fZ) goto L_0080a3ae;
L_0080a28c:; BB(0x0080a28c);
    /* 0080a28c: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0080a28f: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a292: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a294: jne 0x80a278 */ if (!fZ) goto L_0080a278;
L_0080a296:; BB(0x0080a296);
    /* 0080a296: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a298: je 0x80a39a */ if (fZ) goto L_0080a39a;
L_0080a29e:; BB(0x0080a29e);
    /* 0080a29e: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0080a2a2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a2a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a2a8: je 0x80a2ce */ if (fZ) goto L_0080a2ce;
L_0080a2aa:; BB(0x0080a2aa);
    /* 0080a2aa: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0080a2ad: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 0080a2b0: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2b2: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2b4: lea ebp, [ecx + ebp*4] */ r_ebp = (u32)(r_ecx+r_ebp*4);
    /* 0080a2b7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2b9: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2bb: lea eax, [eax + ebp + 0x28] */ r_eax = (u32)(r_eax+r_ebp+0x28u);
L_0080a2bf:; BB(0x0080a2bf);
    /* 0080a2bf: add edi, dword ptr [eax] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2c1: add edi, dword ptr [eax + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2c4: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080a2c7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a2ca: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a2cc: jne 0x80a2bf */ if (!fZ) goto L_0080a2bf;
L_0080a2ce:; BB(0x0080a2ce);
    /* 0080a2ce: mov dword ptr [0xaafc2c], edi */ W32((u32)(0xaafc2cu), r_edi);
    /* 0080a2d4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2d6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a2d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a2d9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80a2deu); f_008581c5();
    /* 0080a2de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a2df: mov dword ptr [0xaafc30], eax */ W32((u32)(0xaafc30u), r_eax);
    /* 0080a2e4: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 0080a2e9: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0080a2ec: movsx eax, word ptr [eax + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080a2f0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a2f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a2f4: je 0x80a39a */ if (fZ) goto L_0080a39a;
L_0080a2fa:; BB(0x0080a2fa);
    /* 0080a2fa: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0080a2fe: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
L_0080a302:; BB(0x0080a302);
    /* 0080a302: mov esi, dword ptr [edx + 0x20] */ r_esi = R32((u32)(r_edx+0x20u));
    /* 0080a305: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 0080a308: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a30a: je 0x80a344 */ if (fZ) goto L_0080a344;
L_0080a30c:; BB(0x0080a30c);
    /* 0080a30c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0080a310: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0080a313:; BB(0x0080a313);
    /* 0080a313: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0080a315: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0080a318: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a31d: je 0x80a321 */ if (fZ) goto L_0080a321;
L_0080a31f:; BB(0x0080a31f);
    /* 0080a31f: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_0080a321:; BB(0x0080a321);
    /* 0080a321: mov ecx, edi */ r_ecx = r_edi;
    /* 0080a323: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x80a328u); f_00834c58();
    /* 0080a328: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
    /* 0080a32d: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 0080a330: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080a333: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080a336: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a339: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a33b: jne 0x80a313 */ if (!fZ) goto L_0080a313;
L_0080a33d:; BB(0x0080a33d);
    /* 0080a33d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080a341: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080a344:; BB(0x0080a344);
    /* 0080a344: mov esi, dword ptr [edx + 0x24] */ r_esi = R32((u32)(r_edx+0x24u));
    /* 0080a347: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 0080a34a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a34c: je 0x80a386 */ if (fZ) goto L_0080a386;
L_0080a34e:; BB(0x0080a34e);
    /* 0080a34e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0080a352: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_0080a355:; BB(0x0080a355);
    /* 0080a355: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0080a357: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0080a35a: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a35f: je 0x80a363 */ if (fZ) goto L_0080a363;
L_0080a361:; BB(0x0080a361);
    /* 0080a361: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_0080a363:; BB(0x0080a363);
    /* 0080a363: mov ecx, edi */ r_ecx = r_edi;
    /* 0080a365: call 0x834c58 */ r_esp -= 4; W32(r_esp, 0x80a36au); f_00834c58();
    /* 0080a36a: mov eax, dword ptr [0xaafc30] */ r_eax = R32((u32)(0xaafc30u));
    /* 0080a36f: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 0080a372: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080a375: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080a378: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080a37b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a37d: jne 0x80a355 */ if (!fZ) goto L_0080a355;
L_0080a37f:; BB(0x0080a37f);
    /* 0080a37f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080a383: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080a386:; BB(0x0080a386);
    /* 0080a386: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a389: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0080a38c: jne 0x80a302 */ if (!fZ) goto L_0080a302;
L_0080a392:; BB(0x0080a392);
    /* 0080a392: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0080a396: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0080a39a:; BB(0x0080a39a);
    /* 0080a39a: add esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a3a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080a3a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080a3a2: ret  */ FN_RET(0x0080a128); r_esp += 4; return;
L_0080a3a3:; BB(0x0080a3a3);
    /* 0080a3a3: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 0080a3a9: jmp 0x80a25f */ goto L_0080a25f;
L_0080a3ae:; BB(0x0080a3ae);
    /* 0080a3ae: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0080a3b1: mov dword ptr [0xaafc8c], edx */ W32((u32)(0xaafc8cu), r_edx);
    /* 0080a3b7: jmp 0x80a296 */ goto L_0080a296;
}

void f_0080a3bc(void) /* sub_80A3BC */
{
    FN_ENTER(0x0080a3bc);
    /* 0080a3bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080a3c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3c1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080a3c4: mov esi, eax */ r_esi = r_eax;
    /* 0080a3c6: call 0x7814a0 */ r_esp -= 4; W32(r_esp, 0x80a3cbu); f_007814a0();
    /* 0080a3cb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0080a3ce: push 0x96f148 */ { u32 v = 0x96f148u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a3d6: mov dword ptr [0xa9bcac], edx */ W32((u32)(0xa9bcacu), r_edx);
    /* 0080a3dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3dd: mov dword ptr [0xaafc70], edx */ W32((u32)(0xaafc70u), r_edx);
    /* 0080a3e3: mov dword ptr [0xaafc5c], edx */ W32((u32)(0xaafc5cu), r_edx);
    /* 0080a3e9: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a3eeu); f_0078e574();
    /* 0080a3ee: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0080a3f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3f3: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a3f8u); f_005b9328();
    /* 0080a3f8: mov esi, eax */ r_esi = r_eax;
    /* 0080a3fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a3fd: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x80a402u); f_0080a640();
    /* 0080a402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a404: je 0x80a456 */ if (fZ) goto L_0080a456;
L_0080a406:; BB(0x0080a406);
    /* 0080a406: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a408: jle 0x80a4ba */ if ((fZ||fS!=fO)) goto L_0080a4ba;
L_0080a40e:; BB(0x0080a40e);
    /* 0080a40e: cmp esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0080a414: jbe 0x80a41d */ if ((fC||fZ)) goto L_0080a41d;
L_0080a416:; BB(0x0080a416);
    /* 0080a416: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
    /* 0080a41b: jmp 0x80a490 */ goto L_0080a490;
L_0080a41d:; BB(0x0080a41d);
    /* 0080a41d: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a422: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a427u); f_0082e940();
    /* 0080a427: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a428: mov dword ptr [0xaafc70], eax */ W32((u32)(0xaafc70u), r_eax);
    /* 0080a42d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a42f: je 0x80a44f */ if (fZ) goto L_0080a44f;
L_0080a431:; BB(0x0080a431);
    /* 0080a431: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a435: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a436: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a43bu); f_005b9bf4();
    /* 0080a43b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a43e: mov dword ptr [0xaafc5c], 0x10000 */ W32((u32)(0xaafc5cu), 0x10000u);
    /* 0080a448: mov dword ptr [0xa9bcac], eax */ W32((u32)(0xa9bcacu), r_eax);
    /* 0080a44d: jmp 0x80a490 */ goto L_0080a490;
L_0080a44f:; BB(0x0080a44f);
    /* 0080a44f: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
    /* 0080a454: jmp 0x80a490 */ goto L_0080a490;
L_0080a456:; BB(0x0080a456);
    /* 0080a456: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a458: jle 0x80a48b */ if ((fZ||fS!=fO)) goto L_0080a48b;
L_0080a45a:; BB(0x0080a45a);
    /* 0080a45a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a45b: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a460u); f_0082e940();
    /* 0080a460: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a461: mov dword ptr [0xaafc70], eax */ W32((u32)(0xaafc70u), r_eax);
    /* 0080a466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a468: je 0x80a484 */ if (fZ) goto L_0080a484;
L_0080a46a:; BB(0x0080a46a);
    /* 0080a46a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a46d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a46e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a46f: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a474u); f_005b9bf4();
    /* 0080a474: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a477: mov dword ptr [0xa9bcac], eax */ W32((u32)(0xa9bcacu), r_eax);
    /* 0080a47c: mov dword ptr [0xaafc5c], esi */ W32((u32)(0xaafc5cu), r_esi);
    /* 0080a482: jmp 0x80a490 */ goto L_0080a490;
L_0080a484:; BB(0x0080a484);
    /* 0080a484: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
    /* 0080a489: jmp 0x80a490 */ goto L_0080a490;
L_0080a48b:; BB(0x0080a48b);
    /* 0080a48b: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
L_0080a490:; BB(0x0080a490);
    /* 0080a490: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a492: je 0x80a4aa */ if (fZ) goto L_0080a4aa;
L_0080a494:; BB(0x0080a494);
    /* 0080a494: mov ecx, dword ptr [0xaab3f0] */ r_ecx = R32((u32)(0xaab3f0u));
    /* 0080a49a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a49c: je 0x80a4aa */ if (fZ) goto L_0080a4aa;
L_0080a49e:; BB(0x0080a49e);
    /* 0080a49e: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0080a4a0: call 0x7a7b0c */ r_esp -= 4; W32(r_esp, 0x80a4a5u); f_007a7b0c();
    /* 0080a4a5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a4a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080a4a9: ret  */ FN_RET(0x0080a3bc); r_esp += 4; return;
L_0080a4aa:; BB(0x0080a4aa);
    /* 0080a4aa: push 0x97f21c */ { u32 v = 0x97f21cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4af: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80a4b4u); f_0061cdb0();
    /* 0080a4b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a4b5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a4b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080a4b9: ret  */ FN_RET(0x0080a3bc); r_esp += 4; return;
L_0080a4ba:; BB(0x0080a4ba);
    /* 0080a4ba: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
    /* 0080a4bf: jmp 0x80a490 */ goto L_0080a490;
}

void f_0080a3c0(void)
{
    FN_ENTER(0x0080a3c0);
    /* 0080a3c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3c1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080a3c4: mov esi, eax */ r_esi = r_eax;
    /* 0080a3c6: call 0x7814a0 */ r_esp -= 4; W32(r_esp, 0x80a3cbu); f_007814a0();
    /* 0080a3cb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0080a3ce: push 0x96f148 */ { u32 v = 0x96f148u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a3d6: mov dword ptr [0xa9bcac], edx */ W32((u32)(0xa9bcacu), r_edx);
    /* 0080a3dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3dd: mov dword ptr [0xaafc70], edx */ W32((u32)(0xaafc70u), r_edx);
    /* 0080a3e3: mov dword ptr [0xaafc5c], edx */ W32((u32)(0xaafc5cu), r_edx);
    /* 0080a3e9: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a3eeu); f_0078e574();
    /* 0080a3ee: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0080a3f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a3f3: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a3f8u); f_005b9328();
    /* 0080a3f8: mov esi, eax */ r_esi = r_eax;
    /* 0080a3fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a3fd: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x80a402u); f_0080a640();
    /* 0080a402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a404: je 0x80a456 */ if (fZ) goto L_0080a456;
L_0080a406:; BB(0x0080a406);
    /* 0080a406: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a408: jle 0x80a4ba */ if ((fZ||fS!=fO)) goto L_0080a4ba;
L_0080a40e:; BB(0x0080a40e);
    /* 0080a40e: cmp esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0080a414: jbe 0x80a41d */ if ((fC||fZ)) goto L_0080a41d;
L_0080a416:; BB(0x0080a416);
    /* 0080a416: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
    /* 0080a41b: jmp 0x80a490 */ goto L_0080a490;
L_0080a41d:; BB(0x0080a41d);
    /* 0080a41d: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a422: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a427u); f_0082e940();
    /* 0080a427: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a428: mov dword ptr [0xaafc70], eax */ W32((u32)(0xaafc70u), r_eax);
    /* 0080a42d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a42f: je 0x80a44f */ if (fZ) goto L_0080a44f;
L_0080a431:; BB(0x0080a431);
    /* 0080a431: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a435: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a436: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a43bu); f_005b9bf4();
    /* 0080a43b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a43e: mov dword ptr [0xaafc5c], 0x10000 */ W32((u32)(0xaafc5cu), 0x10000u);
    /* 0080a448: mov dword ptr [0xa9bcac], eax */ W32((u32)(0xa9bcacu), r_eax);
    /* 0080a44d: jmp 0x80a490 */ goto L_0080a490;
L_0080a44f:; BB(0x0080a44f);
    /* 0080a44f: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
    /* 0080a454: jmp 0x80a490 */ goto L_0080a490;
L_0080a456:; BB(0x0080a456);
    /* 0080a456: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a458: jle 0x80a48b */ if ((fZ||fS!=fO)) goto L_0080a48b;
L_0080a45a:; BB(0x0080a45a);
    /* 0080a45a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a45b: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a460u); f_0082e940();
    /* 0080a460: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a461: mov dword ptr [0xaafc70], eax */ W32((u32)(0xaafc70u), r_eax);
    /* 0080a466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a468: je 0x80a484 */ if (fZ) goto L_0080a484;
L_0080a46a:; BB(0x0080a46a);
    /* 0080a46a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a46d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a46e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a46f: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a474u); f_005b9bf4();
    /* 0080a474: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a477: mov dword ptr [0xa9bcac], eax */ W32((u32)(0xa9bcacu), r_eax);
    /* 0080a47c: mov dword ptr [0xaafc5c], esi */ W32((u32)(0xaafc5cu), r_esi);
    /* 0080a482: jmp 0x80a490 */ goto L_0080a490;
L_0080a484:; BB(0x0080a484);
    /* 0080a484: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
    /* 0080a489: jmp 0x80a490 */ goto L_0080a490;
L_0080a48b:; BB(0x0080a48b);
    /* 0080a48b: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
L_0080a490:; BB(0x0080a490);
    /* 0080a490: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a492: je 0x80a4aa */ if (fZ) goto L_0080a4aa;
L_0080a494:; BB(0x0080a494);
    /* 0080a494: mov ecx, dword ptr [0xaab3f0] */ r_ecx = R32((u32)(0xaab3f0u));
    /* 0080a49a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a49c: je 0x80a4aa */ if (fZ) goto L_0080a4aa;
L_0080a49e:; BB(0x0080a49e);
    /* 0080a49e: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0080a4a0: call 0x7a7b0c */ r_esp -= 4; W32(r_esp, 0x80a4a5u); f_007a7b0c();
    /* 0080a4a5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a4a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080a4a9: ret  */ FN_RET(0x0080a3c0); r_esp += 4; return;
L_0080a4aa:; BB(0x0080a4aa);
    /* 0080a4aa: push 0x97f21c */ { u32 v = 0x97f21cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4af: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80a4b4u); f_0061cdb0();
    /* 0080a4b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a4b5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a4b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080a4b9: ret  */ FN_RET(0x0080a3c0); r_esp += 4; return;
L_0080a4ba:; BB(0x0080a4ba);
    /* 0080a4ba: mov eax, dword ptr [0xa9bcac] */ r_eax = R32((u32)(0xa9bcacu));
    /* 0080a4bf: jmp 0x80a490 */ goto L_0080a490;
}

void f_0080a4c4(void) /* sub_80A4C4 */
{
    FN_ENTER(0x0080a4c4);
    /* 0080a4c4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080a4c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4ca: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080a4cd: mov ebp, eax */ r_ebp = r_eax;
    /* 0080a4cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a4d1: mov dword ptr [0xaafc6c], edx */ W32((u32)(0xaafc6cu), r_edx);
    /* 0080a4d7: mov dword ptr [0xaafc58], edx */ W32((u32)(0xaafc58u), r_edx);
    /* 0080a4dd: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x80a4e2u); f_00482a28();
    /* 0080a4e2: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0080a4e5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a4e8: je 0x80a50c */ if (fZ) goto L_0080a50c;
L_0080a4ea:; BB(0x0080a4ea);
    /* 0080a4ea: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a4ed: push 0x97f240 */ { u32 v = 0x97f240u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4f4: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a4f9u); f_0078e574();
    /* 0080a4f9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0080a4fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4fe: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a503u); f_005b9328();
    /* 0080a503: mov ebx, eax */ r_ebx = r_eax;
    /* 0080a505: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a508: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a50a: jg 0x80a52a */ if ((!fZ&&fS==fO)) goto L_0080a52a;
L_0080a50c:; BB(0x0080a50c);
    /* 0080a50c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a50f: push 0x97f248 */ { u32 v = 0x97f248u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a515: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a516: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a51bu); f_0078e574();
    /* 0080a51b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0080a51f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a520: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a525u); f_005b9328();
    /* 0080a525: mov ebx, eax */ r_ebx = r_eax;
    /* 0080a527: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080a52a:; BB(0x0080a52a);
    /* 0080a52a: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x80a52fu); f_0080a640();
    /* 0080a52f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a531: je 0x80a570 */ if (fZ) goto L_0080a570;
L_0080a533:; BB(0x0080a533);
    /* 0080a533: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a535: jle 0x80a597 */ if ((fZ||fS!=fO)) goto L_0080a597;
L_0080a537:; BB(0x0080a537);
    /* 0080a537: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0080a53d: ja 0x80a597 */ if ((!fC&&!fZ)) goto L_0080a597;
L_0080a53f:; BB(0x0080a53f);
    /* 0080a53f: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a544: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a549u); f_0082e940();
    /* 0080a549: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a54a: mov dword ptr [0xaafc6c], eax */ W32((u32)(0xaafc6cu), r_eax);
    /* 0080a54f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a551: je 0x80a597 */ if (fZ) goto L_0080a597;
L_0080a553:; BB(0x0080a553);
    /* 0080a553: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a556: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a558: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80a55du); f_005b9910();
    /* 0080a55d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a560: mov dword ptr [0xaafc58], 0x100 */ W32((u32)(0xaafc58u), 0x100u);
    /* 0080a56a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a56d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080a56e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080a56f: ret  */ FN_RET(0x0080a4c4); r_esp += 4; return;
L_0080a570:; BB(0x0080a570);
    /* 0080a570: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a572: jle 0x80a597 */ if ((fZ||fS!=fO)) goto L_0080a597;
L_0080a574:; BB(0x0080a574);
    /* 0080a574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a575: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a57au); f_0082e940();
    /* 0080a57a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a57b: mov dword ptr [0xaafc6c], eax */ W32((u32)(0xaafc6cu), r_eax);
    /* 0080a580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a582: je 0x80a597 */ if (fZ) goto L_0080a597;
L_0080a584:; BB(0x0080a584);
    /* 0080a584: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a588: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a589: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80a58eu); f_005b9910();
    /* 0080a58e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a591: mov dword ptr [0xaafc58], ebx */ W32((u32)(0xaafc58u), r_ebx);
L_0080a597:; BB(0x0080a597);
    /* 0080a597: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a59a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080a59b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080a59c: ret  */ FN_RET(0x0080a4c4); r_esp += 4; return;
}

void f_0080a4c8(void)
{
    FN_ENTER(0x0080a4c8);
    /* 0080a4c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4ca: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080a4cd: mov ebp, eax */ r_ebp = r_eax;
    /* 0080a4cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a4d1: mov dword ptr [0xaafc6c], edx */ W32((u32)(0xaafc6cu), r_edx);
    /* 0080a4d7: mov dword ptr [0xaafc58], edx */ W32((u32)(0xaafc58u), r_edx);
    /* 0080a4dd: call 0x482a28 */ r_esp -= 4; W32(r_esp, 0x80a4e2u); f_00482a28();
    /* 0080a4e2: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0080a4e5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a4e8: je 0x80a50c */ if (fZ) goto L_0080a50c;
L_0080a4ea:; BB(0x0080a4ea);
    /* 0080a4ea: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a4ed: push 0x97f240 */ { u32 v = 0x97f240u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4f4: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a4f9u); f_0078e574();
    /* 0080a4f9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0080a4fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a4fe: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a503u); f_005b9328();
    /* 0080a503: mov ebx, eax */ r_ebx = r_eax;
    /* 0080a505: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a508: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a50a: jg 0x80a52a */ if ((!fZ&&fS==fO)) goto L_0080a52a;
L_0080a50c:; BB(0x0080a50c);
    /* 0080a50c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a50f: push 0x97f248 */ { u32 v = 0x97f248u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a515: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a516: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a51bu); f_0078e574();
    /* 0080a51b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0080a51f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a520: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a525u); f_005b9328();
    /* 0080a525: mov ebx, eax */ r_ebx = r_eax;
    /* 0080a527: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080a52a:; BB(0x0080a52a);
    /* 0080a52a: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x80a52fu); f_0080a640();
    /* 0080a52f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a531: je 0x80a570 */ if (fZ) goto L_0080a570;
L_0080a533:; BB(0x0080a533);
    /* 0080a533: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a535: jle 0x80a597 */ if ((fZ||fS!=fO)) goto L_0080a597;
L_0080a537:; BB(0x0080a537);
    /* 0080a537: cmp ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0080a53d: ja 0x80a597 */ if ((!fC&&!fZ)) goto L_0080a597;
L_0080a53f:; BB(0x0080a53f);
    /* 0080a53f: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a544: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a549u); f_0082e940();
    /* 0080a549: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a54a: mov dword ptr [0xaafc6c], eax */ W32((u32)(0xaafc6cu), r_eax);
    /* 0080a54f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a551: je 0x80a597 */ if (fZ) goto L_0080a597;
L_0080a553:; BB(0x0080a553);
    /* 0080a553: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a556: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a558: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80a55du); f_005b9910();
    /* 0080a55d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a560: mov dword ptr [0xaafc58], 0x100 */ W32((u32)(0xaafc58u), 0x100u);
    /* 0080a56a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a56d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080a56e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080a56f: ret  */ FN_RET(0x0080a4c8); r_esp += 4; return;
L_0080a570:; BB(0x0080a570);
    /* 0080a570: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a572: jle 0x80a597 */ if ((fZ||fS!=fO)) goto L_0080a597;
L_0080a574:; BB(0x0080a574);
    /* 0080a574: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a575: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a57au); f_0082e940();
    /* 0080a57a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a57b: mov dword ptr [0xaafc6c], eax */ W32((u32)(0xaafc6cu), r_eax);
    /* 0080a580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a582: je 0x80a597 */ if (fZ) goto L_0080a597;
L_0080a584:; BB(0x0080a584);
    /* 0080a584: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a588: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a589: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80a58eu); f_005b9910();
    /* 0080a58e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a591: mov dword ptr [0xaafc58], ebx */ W32((u32)(0xaafc58u), r_ebx);
L_0080a597:; BB(0x0080a597);
    /* 0080a597: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a59a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080a59b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080a59c: ret  */ FN_RET(0x0080a4c8); r_esp += 4; return;
}

void f_0080a5a0(void) /* sub_80A5A0 */
{
    FN_ENTER(0x0080a5a0);
    /* 0080a5a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0080a5a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5a5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080a5a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a5aa: mov dword ptr [0xaafc50], edx */ W32((u32)(0xaafc50u), r_edx);
    /* 0080a5b0: mov dword ptr [0xaafc68], edx */ W32((u32)(0xaafc68u), r_edx);
    /* 0080a5b6: mov dword ptr [0xaafc54], edx */ W32((u32)(0xaafc54u), r_edx);
    /* 0080a5bc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0080a5bf: push 0x97f250 */ { u32 v = 0x97f250u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5c6: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a5cbu); f_0078e574();
    /* 0080a5cb: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0080a5cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5d0: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a5d5u); f_005b9328();
    /* 0080a5d5: mov ebx, eax */ r_ebx = r_eax;
    /* 0080a5d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a5da: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a5dc: jle 0x80a606 */ if ((fZ||fS!=fO)) goto L_0080a606;
L_0080a5de:; BB(0x0080a5de);
    /* 0080a5de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5df: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a5e4u); f_0082e940();
    /* 0080a5e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a5e5: mov dword ptr [0xaafc68], eax */ W32((u32)(0xaafc68u), r_eax);
    /* 0080a5ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a5ec: je 0x80a606 */ if (fZ) goto L_0080a606;
L_0080a5ee:; BB(0x0080a5ee);
    /* 0080a5ee: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a5f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5f3: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a5f8u); f_005b9bf4();
    /* 0080a5f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a5fb: mov dword ptr [0xaafc50], eax */ W32((u32)(0xaafc50u), r_eax);
    /* 0080a600: mov dword ptr [0xaafc54], ebx */ W32((u32)(0xaafc54u), r_ebx);
L_0080a606:; BB(0x0080a606);
    /* 0080a606: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a609: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080a60a: ret  */ FN_RET(0x0080a5a0); r_esp += 4; return;
}

void f_0080a5a4(void)
{
    FN_ENTER(0x0080a5a4);
    /* 0080a5a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5a5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080a5a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a5aa: mov dword ptr [0xaafc50], edx */ W32((u32)(0xaafc50u), r_edx);
    /* 0080a5b0: mov dword ptr [0xaafc68], edx */ W32((u32)(0xaafc68u), r_edx);
    /* 0080a5b6: mov dword ptr [0xaafc54], edx */ W32((u32)(0xaafc54u), r_edx);
    /* 0080a5bc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0080a5bf: push 0x97f250 */ { u32 v = 0x97f250u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5c6: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80a5cbu); f_0078e574();
    /* 0080a5cb: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0080a5cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5d0: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x80a5d5u); f_005b9328();
    /* 0080a5d5: mov ebx, eax */ r_ebx = r_eax;
    /* 0080a5d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a5da: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a5dc: jle 0x80a606 */ if ((fZ||fS!=fO)) goto L_0080a606;
L_0080a5de:; BB(0x0080a5de);
    /* 0080a5de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5df: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80a5e4u); f_0082e940();
    /* 0080a5e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a5e5: mov dword ptr [0xaafc68], eax */ W32((u32)(0xaafc68u), r_eax);
    /* 0080a5ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a5ec: je 0x80a606 */ if (fZ) goto L_0080a606;
L_0080a5ee:; BB(0x0080a5ee);
    /* 0080a5ee: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0080a5f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a5f3: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x80a5f8u); f_005b9bf4();
    /* 0080a5f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a5fb: mov dword ptr [0xaafc50], eax */ W32((u32)(0xaafc50u), r_eax);
    /* 0080a600: mov dword ptr [0xaafc54], ebx */ W32((u32)(0xaafc54u), r_ebx);
L_0080a606:; BB(0x0080a606);
    /* 0080a606: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080a609: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080a60a: ret  */ FN_RET(0x0080a5a4); r_esp += 4; return;
}

void f_0080a60c(void) /* sub_80A60C */
{
    FN_ENTER(0x0080a60c);
    /* 0080a60c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a60d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0080a60f: mov edx, ecx */ r_edx = r_ecx;
    /* 0080a611: and edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0080a617: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080a61a: mov edi, ecx */ r_edi = r_ecx;
    /* 0080a61c: and edi, 0xff0000 */ {  u32 a = r_edi; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080a622: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0080a625: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0080a627: mov edi, ecx */ r_edi = r_ecx;
    /* 0080a629: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080a62f: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0080a632: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0080a634: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0080a637: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080a639: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0080a63b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080a63c: ret  */ FN_RET(0x0080a60c); r_esp += 4; return;
}

void f_0080a640(void) /* sub_80A640 */
{
    FN_ENTER(0x0080a640);
    /* 0080a640: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080a641: mov eax, dword ptr [0xaafc9c] */ r_eax = R32((u32)(0xaafc9cu));
    /* 0080a646: call 0x8076d8 */ r_esp -= 4; W32(r_esp, 0x80a64bu); f_008076d8();
    /* 0080a64b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080a64c: ret  */ FN_RET(0x0080a640); r_esp += 4; return;
}

void f_0080a650(void) /* sub_80A650 */
{
    FN_ENTER(0x0080a650);
    /* 0080a650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080a651: mov ebp, esp */ r_ebp = r_esp;
    /* 0080a653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080a655: push 0x8f7206 */ { u32 v = 0x8f7206u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a65a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080a660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a661: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080a668: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080a66b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080a66e: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 0080a671: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 0080a674: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 0080a677: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0080a67a: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 0080a680: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080a682: je 0x80a741 */ if (fZ) goto L_0080a741;
L_0080a688:; BB(0x0080a688);
    /* 0080a688: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0080a68b: movsx ecx, word ptr [ecx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0080a68f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0080a692: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a694: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080a696: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0080a699: jle 0x80a741 */ if ((fZ||fS!=fO)) goto L_0080a741;
L_0080a69f:; BB(0x0080a69f);
    /* 0080a69f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a6a2: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0080a6a5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0080a6a8: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0080a6ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a6ad: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0080a6b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a6b2: jle 0x80a6e3 */ if ((fZ||fS!=fO)) goto L_0080a6e3;
L_0080a6b4:; BB(0x0080a6b4);
    /* 0080a6b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080a6b7: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0080a6ba: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a6c0: je 0x80a6d2 */ if (fZ) goto L_0080a6d2;
L_0080a6c2:; BB(0x0080a6c2);
    /* 0080a6c2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0080a6c4: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0080a6c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080a6ca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a6cc: je 0x80a8c3 */ if (fZ) goto L_0080a8c3;
L_0080a6d2:; BB(0x0080a6d2);
    /* 0080a6d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080a6d5: add dword ptr [ebp - 0x18], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a6d9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a6dc: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a6de: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0080a6e1: jl 0x80a6b4 */ if ((fS!=fO)) goto L_0080a6b4;
L_0080a6e3:; BB(0x0080a6e3);
    /* 0080a6e3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a6e6: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0080a6e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080a6ec: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0080a6ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a6f1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080a6f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a6f6: jle 0x80a723 */ if ((fZ||fS!=fO)) goto L_0080a723;
L_0080a6f8:; BB(0x0080a6f8);
    /* 0080a6f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080a6fb: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0080a6fe: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a704: je 0x80a712 */ if (fZ) goto L_0080a712;
L_0080a706:; BB(0x0080a706);
    /* 0080a706: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0080a708: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0080a70b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0080a70e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a710: je 0x80a758 */ if (fZ) goto L_0080a758;
L_0080a712:; BB(0x0080a712);
    /* 0080a712: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080a715: add dword ptr [ebp - 0x14], 0x20 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a719: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a71c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a71e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080a721: jl 0x80a6f8 */ if ((fS!=fO)) goto L_0080a6f8;
L_0080a723:; BB(0x0080a723);
    /* 0080a723: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0080a726: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 0080a72b: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080a72f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a732: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0080a735: add dword ptr [ebp - 0x28], 0x34 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a739: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080a73b: jl 0x80a69f */ if ((fS!=fO)) goto L_0080a69f;
L_0080a741:; BB(0x0080a741);
    /* 0080a741: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0080a744: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0080a747: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0080a74a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080a74d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080a754: mov esp, ebp */ r_esp = r_ebp;
    /* 0080a756: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080a757: ret  */ FN_RET(0x0080a650); r_esp += 4; return;
L_0080a758:; BB(0x0080a758);
    /* 0080a758: mov eax, ecx */ r_eax = r_ecx;
    /* 0080a75a: mov ebx, dword ptr [0xaafc48] */ r_ebx = R32((u32)(0xaafc48u));
    /* 0080a760: movzx eax, word ptr [eax + 0xc] */ r_eax = (u32)R16((u32)(r_eax+0xcu));
    /* 0080a764: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a766: je 0x80a805 */ if (fZ) goto L_0080a805;
L_0080a76c:; BB(0x0080a76c);
    /* 0080a76c: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0080a76f: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0080a772: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a775: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a777: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0080a77c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0080a77f: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0080a782: jle 0x80a805 */ if ((fZ||fS!=fO)) goto L_0080a805;
L_0080a788:; BB(0x0080a788);
    /* 0080a788: mov edx, ebx */ r_edx = r_ebx;
    /* 0080a78a: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a78d: jl 0x80a7e7 */ if ((fS!=fO)) goto L_0080a7e7;
L_0080a78f:; BB(0x0080a78f);
    /* 0080a78f: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0080a792: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0080a795:; BB(0x0080a795);
    /* 0080a795: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a798: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a79b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a79d: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a79f:; BB(0x0080a79f);
    /* 0080a79f: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7a2: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7a5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7a8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7aa: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7ac:; BB(0x0080a7ac);
    /* 0080a7ac: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7af: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7b2: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7b5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7b7: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7b9:; BB(0x0080a7b9);
    /* 0080a7b9: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7bc: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7bf: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7c2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7c4: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7c6:; BB(0x0080a7c6);
    /* 0080a7c6: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7c9: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7cc: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7cf: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7d1: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7d3:; BB(0x0080a7d3);
    /* 0080a7d3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a7d6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a7d9: add dword ptr [ebp - 0x20], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a7dd: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7e0: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a7e3: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a7e5: jle 0x80a795 */ if ((fZ||fS!=fO)) goto L_0080a795;
L_0080a7e7:; BB(0x0080a7e7);
    /* 0080a7e7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a7ea: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7ed: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7ef: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7f1:; BB(0x0080a7f1);
    /* 0080a7f1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a7f4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a7f7: add dword ptr [ebp - 0x20], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a7fb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7fe: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a801: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a803: jl 0x80a7e7 */ if ((fS!=fO)) goto L_0080a7e7;
L_0080a805:; BB(0x0080a805);
    /* 0080a805: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a807: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0080a80a:; BB(0x0080a80a);
    /* 0080a80a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a80d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a80f: je 0x80a8a0 */ if (fZ) goto L_0080a8a0;
L_0080a815:; BB(0x0080a815);
    /* 0080a815: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0080a81c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a81e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80a823u); f_005caba4();
    /* 0080a823: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080a826: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a829: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0080a82c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a82e: je 0x80a8bc */ if (fZ) goto L_0080a8bc;
L_0080a834:; BB(0x0080a834);
    /* 0080a834: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0080a83b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0080a842: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a845: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0080a848: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a84b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a84c: movzx ebx, byte ptr [eax + 4] */ r_ebx = (u32)R8((u32)(r_eax+0x4u));
    /* 0080a850: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a851: call 0x504b58 */ r_esp -= 4; W32(r_esp, 0x80a856u); f_00504b58();
    /* 0080a856: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0080a85d:; BB(0x0080a85d);
    /* 0080a85d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a860: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a863: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080a866: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080a86d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a870: movzx esi, byte ptr [ecx + 2] */ r_esi = (u32)R8((u32)(r_ecx+0x2u));
    /* 0080a874: mov edi, dword ptr [esi*4 + 0x97f11c] */ r_edi = R32((u32)(r_esi*4+0x97f11cu));
    /* 0080a87b: mov esi, edx */ r_esi = r_edx;
    /* 0080a87d: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 0080a880: movzx eax, byte ptr [ecx + 3] */ r_eax = (u32)R8((u32)(r_ecx+0x3u));
    /* 0080a884: movzx edx, byte ptr [eax + 0x97f114] */ r_edx = (u32)R8((u32)(r_eax+0x97f114u));
    /* 0080a88b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a88e: mov byte ptr [esi + 0xe], dl */ W8((u32)(r_esi+0xeu), (u8)r_edx);
    /* 0080a891: movzx ebx, byte ptr [ecx + 4] */ r_ebx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0080a895: mov byte ptr [esi + 0xf], bl */ W8((u32)(r_esi+0xfu), (u8)r_ebx);
    /* 0080a898: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0080a89b: jmp 0x80a712 */ goto L_0080a712;
L_0080a8a0:; BB(0x0080a8a0);
    /* 0080a8a0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a8a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a8a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a8a8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080a8ab: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080a8ae: mov byte ptr [edx + 0xe], al */ W8((u32)(r_edx+0xeu), (u8)r_eax);
    /* 0080a8b1: mov byte ptr [edx + 0xf], al */ W8((u32)(r_edx+0xfu), (u8)r_eax);
    /* 0080a8b4: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0080a8b7: jmp 0x80a712 */ goto L_0080a712;
L_0080a8bc:; BB(0x0080a8bc);
    /* 0080a8bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a8be: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080a8c1: jmp 0x80a85d */ goto L_0080a85d;
L_0080a8c3:; BB(0x0080a8c3);
    /* 0080a8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 0080a8c5: mov ebx, dword ptr [0xaafc48] */ r_ebx = R32((u32)(0xaafc48u));
    /* 0080a8cb: movzx eax, word ptr [eax + 0xc] */ r_eax = (u32)R16((u32)(r_eax+0xcu));
    /* 0080a8cf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a8d1: je 0x80a970 */ if (fZ) goto L_0080a970;
L_0080a8d7:; BB(0x0080a8d7);
    /* 0080a8d7: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0080a8da: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0080a8dd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a8e0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a8e2: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0080a8e7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0080a8ea: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 0080a8ed: jle 0x80a970 */ if ((fZ||fS!=fO)) goto L_0080a970;
L_0080a8f3:; BB(0x0080a8f3);
    /* 0080a8f3: mov edx, ebx */ r_edx = r_ebx;
    /* 0080a8f5: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a8f8: jl 0x80a952 */ if ((fS!=fO)) goto L_0080a952;
L_0080a8fa:; BB(0x0080a8fa);
    /* 0080a8fa: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0080a8fd: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0080a900:; BB(0x0080a900);
    /* 0080a900: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a903: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a906: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a908: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a90a:; BB(0x0080a90a);
    /* 0080a90a: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a90d: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a910: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a913: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a915: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a917:; BB(0x0080a917);
    /* 0080a917: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a91a: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a91d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a920: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a922: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a924:; BB(0x0080a924);
    /* 0080a924: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a927: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a92a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a92d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a92f: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a931:; BB(0x0080a931);
    /* 0080a931: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a934: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a937: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a93a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a93c: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a93e:; BB(0x0080a93e);
    /* 0080a93e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a941: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a944: add dword ptr [ebp - 0x1c], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a948: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a94b: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a94e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a950: jle 0x80a900 */ if ((fZ||fS!=fO)) goto L_0080a900;
L_0080a952:; BB(0x0080a952);
    /* 0080a952: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a955: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a958: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a95a: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a95c:; BB(0x0080a95c);
    /* 0080a95c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a95f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a962: add dword ptr [ebp - 0x1c], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a966: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a969: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a96c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a96e: jl 0x80a952 */ if ((fS!=fO)) goto L_0080a952;
L_0080a970:; BB(0x0080a970);
    /* 0080a970: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a972: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0080a975:; BB(0x0080a975);
    /* 0080a975: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a97a: je 0x80aa0b */ if (fZ) goto L_0080aa0b;
L_0080a980:; BB(0x0080a980);
    /* 0080a980: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0080a987: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a989: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80a98eu); f_005caba4();
    /* 0080a98e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080a991: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a994: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0080a997: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a999: je 0x80aa27 */ if (fZ) goto L_0080aa27;
L_0080a99f:; BB(0x0080a99f);
    /* 0080a99f: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 0080a9a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080a9ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a9b0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0080a9b3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a9b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a9b7: movzx ebx, byte ptr [eax + 4] */ r_ebx = (u32)R8((u32)(r_eax+0x4u));
    /* 0080a9bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a9bc: call 0x504b58 */ r_esp -= 4; W32(r_esp, 0x80a9c1u); f_00504b58();
    /* 0080a9c1: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0080a9c8:; BB(0x0080a9c8);
    /* 0080a9c8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a9cb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a9ce: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080a9d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080a9d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a9db: movzx esi, byte ptr [ecx + 2] */ r_esi = (u32)R8((u32)(r_ecx+0x2u));
    /* 0080a9df: mov edi, dword ptr [esi*4 + 0x97f11c] */ r_edi = R32((u32)(r_esi*4+0x97f11cu));
    /* 0080a9e6: mov esi, edx */ r_esi = r_edx;
    /* 0080a9e8: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 0080a9eb: movzx eax, byte ptr [ecx + 3] */ r_eax = (u32)R8((u32)(r_ecx+0x3u));
    /* 0080a9ef: movzx edx, byte ptr [eax + 0x97f114] */ r_edx = (u32)R8((u32)(r_eax+0x97f114u));
    /* 0080a9f6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a9f9: mov byte ptr [esi + 0xe], dl */ W8((u32)(r_esi+0xeu), (u8)r_edx);
    /* 0080a9fc: movzx ebx, byte ptr [ecx + 4] */ r_ebx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0080aa00: mov byte ptr [esi + 0xf], bl */ W8((u32)(r_esi+0xfu), (u8)r_ebx);
    /* 0080aa03: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 0080aa06: jmp 0x80a6d2 */ goto L_0080a6d2;
L_0080aa0b:; BB(0x0080aa0b);
    /* 0080aa0b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080aa0e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080aa11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080aa13: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080aa16: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080aa19: mov byte ptr [edx + 0xe], al */ W8((u32)(r_edx+0xeu), (u8)r_eax);
    /* 0080aa1c: mov byte ptr [edx + 0xf], al */ W8((u32)(r_edx+0xfu), (u8)r_eax);
    /* 0080aa1f: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0080aa22: jmp 0x80a6d2 */ goto L_0080a6d2;
L_0080aa27:; BB(0x0080aa27);
    /* 0080aa27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080aa29: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080aa2c: jmp 0x80a9c8 */ goto L_0080a9c8;
}

void f_0080a6b3(void)
{
    FN_ENTER(0x0080a6b3);
    goto L_0080a6b3;
L_0080a69f:; BB(0x0080a69f);
    /* 0080a69f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a6a2: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0080a6a5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0080a6a8: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0080a6ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a6ad: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0080a6b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a6b2: jle 0x80a6e3 */ if ((fZ||fS!=fO)) goto L_0080a6e3;
L_0080a6b3:; BB(0x0080a6b3);
    /* 0080a6b3: das  */ UNSUP(0x0080a6b3, "das ");
L_0080a6b4:; BB(0x0080a6b4);
    /* 0080a6b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080a6b7: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0080a6ba: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a6c0: je 0x80a6d2 */ if (fZ) goto L_0080a6d2;
L_0080a6c2:; BB(0x0080a6c2);
    /* 0080a6c2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0080a6c4: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0080a6c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080a6ca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a6cc: je 0x80a8c3 */ if (fZ) goto L_0080a8c3;
L_0080a6d2:; BB(0x0080a6d2);
    /* 0080a6d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080a6d5: add dword ptr [ebp - 0x18], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a6d9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a6dc: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a6de: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0080a6e1: jl 0x80a6b4 */ if ((fS!=fO)) goto L_0080a6b4;
L_0080a6e3:; BB(0x0080a6e3);
    /* 0080a6e3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a6e6: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0080a6e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080a6ec: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0080a6ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a6f1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080a6f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a6f6: jle 0x80a723 */ if ((fZ||fS!=fO)) goto L_0080a723;
L_0080a6f8:; BB(0x0080a6f8);
    /* 0080a6f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080a6fb: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0080a6fe: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a704: je 0x80a712 */ if (fZ) goto L_0080a712;
L_0080a706:; BB(0x0080a706);
    /* 0080a706: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0080a708: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0080a70b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0080a70e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a710: je 0x80a758 */ if (fZ) goto L_0080a758;
L_0080a712:; BB(0x0080a712);
    /* 0080a712: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080a715: add dword ptr [ebp - 0x14], 0x20 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a719: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a71c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a71e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080a721: jl 0x80a6f8 */ if ((fS!=fO)) goto L_0080a6f8;
L_0080a723:; BB(0x0080a723);
    /* 0080a723: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0080a726: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 0080a72b: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080a72f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a732: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0080a735: add dword ptr [ebp - 0x28], 0x34 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a739: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080a73b: jl 0x80a69f */ if ((fS!=fO)) goto L_0080a69f;
L_0080a741:; BB(0x0080a741);
    /* 0080a741: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0080a744: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0080a747: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0080a74a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080a74d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080a754: mov esp, ebp */ r_esp = r_ebp;
    /* 0080a756: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080a757: ret  */ FN_RET(0x0080a6b3); r_esp += 4; return;
L_0080a758:; BB(0x0080a758);
    /* 0080a758: mov eax, ecx */ r_eax = r_ecx;
    /* 0080a75a: mov ebx, dword ptr [0xaafc48] */ r_ebx = R32((u32)(0xaafc48u));
    /* 0080a760: movzx eax, word ptr [eax + 0xc] */ r_eax = (u32)R16((u32)(r_eax+0xcu));
    /* 0080a764: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a766: je 0x80a805 */ if (fZ) goto L_0080a805;
L_0080a76c:; BB(0x0080a76c);
    /* 0080a76c: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0080a76f: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0080a772: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a775: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a777: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0080a77c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0080a77f: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0080a782: jle 0x80a805 */ if ((fZ||fS!=fO)) goto L_0080a805;
L_0080a788:; BB(0x0080a788);
    /* 0080a788: mov edx, ebx */ r_edx = r_ebx;
    /* 0080a78a: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a78d: jl 0x80a7e7 */ if ((fS!=fO)) goto L_0080a7e7;
L_0080a78f:; BB(0x0080a78f);
    /* 0080a78f: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0080a792: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0080a795:; BB(0x0080a795);
    /* 0080a795: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a798: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a79b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a79d: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a79f:; BB(0x0080a79f);
    /* 0080a79f: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7a2: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7a5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7a8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7aa: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7ac:; BB(0x0080a7ac);
    /* 0080a7ac: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7af: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7b2: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7b5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7b7: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7b9:; BB(0x0080a7b9);
    /* 0080a7b9: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7bc: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7bf: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7c2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7c4: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7c6:; BB(0x0080a7c6);
    /* 0080a7c6: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7c9: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7cc: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7cf: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7d1: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7d3:; BB(0x0080a7d3);
    /* 0080a7d3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a7d6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a7d9: add dword ptr [ebp - 0x20], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a7dd: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7e0: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a7e3: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a7e5: jle 0x80a795 */ if ((fZ||fS!=fO)) goto L_0080a795;
L_0080a7e7:; BB(0x0080a7e7);
    /* 0080a7e7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a7ea: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7ed: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7ef: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7f1:; BB(0x0080a7f1);
    /* 0080a7f1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a7f4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a7f7: add dword ptr [ebp - 0x20], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a7fb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7fe: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a801: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a803: jl 0x80a7e7 */ if ((fS!=fO)) goto L_0080a7e7;
L_0080a805:; BB(0x0080a805);
    /* 0080a805: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a807: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0080a80a:; BB(0x0080a80a);
    /* 0080a80a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a80d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a80f: je 0x80a8a0 */ if (fZ) goto L_0080a8a0;
L_0080a815:; BB(0x0080a815);
    /* 0080a815: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0080a81c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a81e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80a823u); f_005caba4();
    /* 0080a823: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080a826: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a829: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0080a82c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a82e: je 0x80a8bc */ if (fZ) goto L_0080a8bc;
L_0080a834:; BB(0x0080a834);
    /* 0080a834: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0080a83b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0080a842: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a845: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0080a848: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a84b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a84c: movzx ebx, byte ptr [eax + 4] */ r_ebx = (u32)R8((u32)(r_eax+0x4u));
    /* 0080a850: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a851: call 0x504b58 */ r_esp -= 4; W32(r_esp, 0x80a856u); f_00504b58();
    /* 0080a856: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0080a85d:; BB(0x0080a85d);
    /* 0080a85d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a860: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a863: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080a866: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080a86d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a870: movzx esi, byte ptr [ecx + 2] */ r_esi = (u32)R8((u32)(r_ecx+0x2u));
    /* 0080a874: mov edi, dword ptr [esi*4 + 0x97f11c] */ r_edi = R32((u32)(r_esi*4+0x97f11cu));
    /* 0080a87b: mov esi, edx */ r_esi = r_edx;
    /* 0080a87d: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 0080a880: movzx eax, byte ptr [ecx + 3] */ r_eax = (u32)R8((u32)(r_ecx+0x3u));
    /* 0080a884: movzx edx, byte ptr [eax + 0x97f114] */ r_edx = (u32)R8((u32)(r_eax+0x97f114u));
    /* 0080a88b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a88e: mov byte ptr [esi + 0xe], dl */ W8((u32)(r_esi+0xeu), (u8)r_edx);
    /* 0080a891: movzx ebx, byte ptr [ecx + 4] */ r_ebx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0080a895: mov byte ptr [esi + 0xf], bl */ W8((u32)(r_esi+0xfu), (u8)r_ebx);
    /* 0080a898: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0080a89b: jmp 0x80a712 */ goto L_0080a712;
L_0080a8a0:; BB(0x0080a8a0);
    /* 0080a8a0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a8a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a8a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a8a8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080a8ab: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080a8ae: mov byte ptr [edx + 0xe], al */ W8((u32)(r_edx+0xeu), (u8)r_eax);
    /* 0080a8b1: mov byte ptr [edx + 0xf], al */ W8((u32)(r_edx+0xfu), (u8)r_eax);
    /* 0080a8b4: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0080a8b7: jmp 0x80a712 */ goto L_0080a712;
L_0080a8bc:; BB(0x0080a8bc);
    /* 0080a8bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a8be: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080a8c1: jmp 0x80a85d */ goto L_0080a85d;
L_0080a8c3:; BB(0x0080a8c3);
    /* 0080a8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 0080a8c5: mov ebx, dword ptr [0xaafc48] */ r_ebx = R32((u32)(0xaafc48u));
    /* 0080a8cb: movzx eax, word ptr [eax + 0xc] */ r_eax = (u32)R16((u32)(r_eax+0xcu));
    /* 0080a8cf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a8d1: je 0x80a970 */ if (fZ) goto L_0080a970;
L_0080a8d7:; BB(0x0080a8d7);
    /* 0080a8d7: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0080a8da: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0080a8dd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a8e0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a8e2: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0080a8e7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0080a8ea: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 0080a8ed: jle 0x80a970 */ if ((fZ||fS!=fO)) goto L_0080a970;
L_0080a8f3:; BB(0x0080a8f3);
    /* 0080a8f3: mov edx, ebx */ r_edx = r_ebx;
    /* 0080a8f5: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a8f8: jl 0x80a952 */ if ((fS!=fO)) goto L_0080a952;
L_0080a8fa:; BB(0x0080a8fa);
    /* 0080a8fa: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0080a8fd: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0080a900:; BB(0x0080a900);
    /* 0080a900: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a903: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a906: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a908: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a90a:; BB(0x0080a90a);
    /* 0080a90a: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a90d: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a910: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a913: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a915: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a917:; BB(0x0080a917);
    /* 0080a917: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a91a: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a91d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a920: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a922: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a924:; BB(0x0080a924);
    /* 0080a924: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a927: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a92a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a92d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a92f: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a931:; BB(0x0080a931);
    /* 0080a931: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a934: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a937: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a93a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a93c: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a93e:; BB(0x0080a93e);
    /* 0080a93e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a941: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a944: add dword ptr [ebp - 0x1c], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a948: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a94b: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a94e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a950: jle 0x80a900 */ if ((fZ||fS!=fO)) goto L_0080a900;
L_0080a952:; BB(0x0080a952);
    /* 0080a952: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a955: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a958: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a95a: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a95c:; BB(0x0080a95c);
    /* 0080a95c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a95f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a962: add dword ptr [ebp - 0x1c], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a966: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a969: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a96c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a96e: jl 0x80a952 */ if ((fS!=fO)) goto L_0080a952;
L_0080a970:; BB(0x0080a970);
    /* 0080a970: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a972: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0080a975:; BB(0x0080a975);
    /* 0080a975: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a97a: je 0x80aa0b */ if (fZ) goto L_0080aa0b;
L_0080a980:; BB(0x0080a980);
    /* 0080a980: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0080a987: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a989: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80a98eu); f_005caba4();
    /* 0080a98e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080a991: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a994: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0080a997: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a999: je 0x80aa27 */ if (fZ) goto L_0080aa27;
L_0080a99f:; BB(0x0080a99f);
    /* 0080a99f: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 0080a9a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080a9ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a9b0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0080a9b3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a9b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a9b7: movzx ebx, byte ptr [eax + 4] */ r_ebx = (u32)R8((u32)(r_eax+0x4u));
    /* 0080a9bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a9bc: call 0x504b58 */ r_esp -= 4; W32(r_esp, 0x80a9c1u); f_00504b58();
    /* 0080a9c1: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0080a9c8:; BB(0x0080a9c8);
    /* 0080a9c8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a9cb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a9ce: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080a9d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080a9d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a9db: movzx esi, byte ptr [ecx + 2] */ r_esi = (u32)R8((u32)(r_ecx+0x2u));
    /* 0080a9df: mov edi, dword ptr [esi*4 + 0x97f11c] */ r_edi = R32((u32)(r_esi*4+0x97f11cu));
    /* 0080a9e6: mov esi, edx */ r_esi = r_edx;
    /* 0080a9e8: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 0080a9eb: movzx eax, byte ptr [ecx + 3] */ r_eax = (u32)R8((u32)(r_ecx+0x3u));
    /* 0080a9ef: movzx edx, byte ptr [eax + 0x97f114] */ r_edx = (u32)R8((u32)(r_eax+0x97f114u));
    /* 0080a9f6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a9f9: mov byte ptr [esi + 0xe], dl */ W8((u32)(r_esi+0xeu), (u8)r_edx);
    /* 0080a9fc: movzx ebx, byte ptr [ecx + 4] */ r_ebx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0080aa00: mov byte ptr [esi + 0xf], bl */ W8((u32)(r_esi+0xfu), (u8)r_ebx);
    /* 0080aa03: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 0080aa06: jmp 0x80a6d2 */ goto L_0080a6d2;
L_0080aa0b:; BB(0x0080aa0b);
    /* 0080aa0b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080aa0e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080aa11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080aa13: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080aa16: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080aa19: mov byte ptr [edx + 0xe], al */ W8((u32)(r_edx+0xeu), (u8)r_eax);
    /* 0080aa1c: mov byte ptr [edx + 0xf], al */ W8((u32)(r_edx+0xfu), (u8)r_eax);
    /* 0080aa1f: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0080aa22: jmp 0x80a6d2 */ goto L_0080a6d2;
L_0080aa27:; BB(0x0080aa27);
    /* 0080aa27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080aa29: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080aa2c: jmp 0x80a9c8 */ goto L_0080a9c8;
}

void f_0080a6be(void)
{
    FN_ENTER(0x0080a6be);
    goto L_0080a6be;
L_0080a69f:; BB(0x0080a69f);
    /* 0080a69f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a6a2: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0080a6a5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0080a6a8: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0080a6ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a6ad: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0080a6b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a6b2: jle 0x80a6e3 */ if ((fZ||fS!=fO)) goto L_0080a6e3;
L_0080a6b4:; BB(0x0080a6b4);
    /* 0080a6b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080a6b7: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0080a6ba: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_0080a6be:; BB(0x0080a6be);
    /* 0080a6be: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0080a6c0: je 0x80a6d2 */ if (fZ) goto L_0080a6d2;
L_0080a6c2:; BB(0x0080a6c2);
    /* 0080a6c2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0080a6c4: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0080a6c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080a6ca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a6cc: je 0x80a8c3 */ if (fZ) goto L_0080a8c3;
L_0080a6d2:; BB(0x0080a6d2);
    /* 0080a6d2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080a6d5: add dword ptr [ebp - 0x18], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a6d9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a6dc: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a6de: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0080a6e1: jl 0x80a6b4 */ if ((fS!=fO)) goto L_0080a6b4;
L_0080a6e3:; BB(0x0080a6e3);
    /* 0080a6e3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a6e6: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0080a6e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080a6ec: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0080a6ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080a6f1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080a6f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a6f6: jle 0x80a723 */ if ((fZ||fS!=fO)) goto L_0080a723;
L_0080a6f8:; BB(0x0080a6f8);
    /* 0080a6f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080a6fb: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0080a6fe: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a704: je 0x80a712 */ if (fZ) goto L_0080a712;
L_0080a706:; BB(0x0080a706);
    /* 0080a706: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0080a708: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 0080a70b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0080a70e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a710: je 0x80a758 */ if (fZ) goto L_0080a758;
L_0080a712:; BB(0x0080a712);
    /* 0080a712: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080a715: add dword ptr [ebp - 0x14], 0x20 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a719: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a71c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a71e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080a721: jl 0x80a6f8 */ if ((fS!=fO)) goto L_0080a6f8;
L_0080a723:; BB(0x0080a723);
    /* 0080a723: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0080a726: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 0080a72b: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080a72f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a732: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0080a735: add dword ptr [ebp - 0x28], 0x34 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a739: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080a73b: jl 0x80a69f */ if ((fS!=fO)) goto L_0080a69f;
L_0080a741:; BB(0x0080a741);
    /* 0080a741: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0080a744: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0080a747: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0080a74a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080a74d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080a754: mov esp, ebp */ r_esp = r_ebp;
    /* 0080a756: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080a757: ret  */ FN_RET(0x0080a6be); r_esp += 4; return;
L_0080a758:; BB(0x0080a758);
    /* 0080a758: mov eax, ecx */ r_eax = r_ecx;
    /* 0080a75a: mov ebx, dword ptr [0xaafc48] */ r_ebx = R32((u32)(0xaafc48u));
    /* 0080a760: movzx eax, word ptr [eax + 0xc] */ r_eax = (u32)R16((u32)(r_eax+0xcu));
    /* 0080a764: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a766: je 0x80a805 */ if (fZ) goto L_0080a805;
L_0080a76c:; BB(0x0080a76c);
    /* 0080a76c: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0080a76f: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0080a772: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a775: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a777: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0080a77c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0080a77f: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0080a782: jle 0x80a805 */ if ((fZ||fS!=fO)) goto L_0080a805;
L_0080a788:; BB(0x0080a788);
    /* 0080a788: mov edx, ebx */ r_edx = r_ebx;
    /* 0080a78a: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a78d: jl 0x80a7e7 */ if ((fS!=fO)) goto L_0080a7e7;
L_0080a78f:; BB(0x0080a78f);
    /* 0080a78f: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0080a792: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0080a795:; BB(0x0080a795);
    /* 0080a795: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a798: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a79b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a79d: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a79f:; BB(0x0080a79f);
    /* 0080a79f: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7a2: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7a5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7a8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7aa: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7ac:; BB(0x0080a7ac);
    /* 0080a7ac: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7af: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7b2: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7b5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7b7: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7b9:; BB(0x0080a7b9);
    /* 0080a7b9: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7bc: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7bf: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7c2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7c4: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7c6:; BB(0x0080a7c6);
    /* 0080a7c6: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7c9: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7cc: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080a7cf: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7d1: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7d3:; BB(0x0080a7d3);
    /* 0080a7d3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a7d6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a7d9: add dword ptr [ebp - 0x20], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a7dd: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7e0: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a7e3: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a7e5: jle 0x80a795 */ if ((fZ||fS!=fO)) goto L_0080a795;
L_0080a7e7:; BB(0x0080a7e7);
    /* 0080a7e7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a7ea: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a7ed: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a7ef: je 0x80a80a */ if (fZ) goto L_0080a80a;
L_0080a7f1:; BB(0x0080a7f1);
    /* 0080a7f1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a7f4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a7f7: add dword ptr [ebp - 0x20], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a7fb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a7fe: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a801: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a803: jl 0x80a7e7 */ if ((fS!=fO)) goto L_0080a7e7;
L_0080a805:; BB(0x0080a805);
    /* 0080a805: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a807: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0080a80a:; BB(0x0080a80a);
    /* 0080a80a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a80d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a80f: je 0x80a8a0 */ if (fZ) goto L_0080a8a0;
L_0080a815:; BB(0x0080a815);
    /* 0080a815: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0080a81c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a81e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80a823u); f_005caba4();
    /* 0080a823: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080a826: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a829: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0080a82c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a82e: je 0x80a8bc */ if (fZ) goto L_0080a8bc;
L_0080a834:; BB(0x0080a834);
    /* 0080a834: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0080a83b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0080a842: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a845: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0080a848: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a84b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a84c: movzx ebx, byte ptr [eax + 4] */ r_ebx = (u32)R8((u32)(r_eax+0x4u));
    /* 0080a850: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a851: call 0x504b58 */ r_esp -= 4; W32(r_esp, 0x80a856u); f_00504b58();
    /* 0080a856: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0080a85d:; BB(0x0080a85d);
    /* 0080a85d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a860: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a863: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080a866: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080a86d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a870: movzx esi, byte ptr [ecx + 2] */ r_esi = (u32)R8((u32)(r_ecx+0x2u));
    /* 0080a874: mov edi, dword ptr [esi*4 + 0x97f11c] */ r_edi = R32((u32)(r_esi*4+0x97f11cu));
    /* 0080a87b: mov esi, edx */ r_esi = r_edx;
    /* 0080a87d: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 0080a880: movzx eax, byte ptr [ecx + 3] */ r_eax = (u32)R8((u32)(r_ecx+0x3u));
    /* 0080a884: movzx edx, byte ptr [eax + 0x97f114] */ r_edx = (u32)R8((u32)(r_eax+0x97f114u));
    /* 0080a88b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a88e: mov byte ptr [esi + 0xe], dl */ W8((u32)(r_esi+0xeu), (u8)r_edx);
    /* 0080a891: movzx ebx, byte ptr [ecx + 4] */ r_ebx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0080a895: mov byte ptr [esi + 0xf], bl */ W8((u32)(r_esi+0xfu), (u8)r_ebx);
    /* 0080a898: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0080a89b: jmp 0x80a712 */ goto L_0080a712;
L_0080a8a0:; BB(0x0080a8a0);
    /* 0080a8a0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a8a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a8a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a8a8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080a8ab: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080a8ae: mov byte ptr [edx + 0xe], al */ W8((u32)(r_edx+0xeu), (u8)r_eax);
    /* 0080a8b1: mov byte ptr [edx + 0xf], al */ W8((u32)(r_edx+0xfu), (u8)r_eax);
    /* 0080a8b4: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0080a8b7: jmp 0x80a712 */ goto L_0080a712;
L_0080a8bc:; BB(0x0080a8bc);
    /* 0080a8bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a8be: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080a8c1: jmp 0x80a85d */ goto L_0080a85d;
L_0080a8c3:; BB(0x0080a8c3);
    /* 0080a8c3: mov eax, ecx */ r_eax = r_ecx;
    /* 0080a8c5: mov ebx, dword ptr [0xaafc48] */ r_ebx = R32((u32)(0xaafc48u));
    /* 0080a8cb: movzx eax, word ptr [eax + 0xc] */ r_eax = (u32)R16((u32)(r_eax+0xcu));
    /* 0080a8cf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a8d1: je 0x80a970 */ if (fZ) goto L_0080a970;
L_0080a8d7:; BB(0x0080a8d7);
    /* 0080a8d7: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0080a8da: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 0080a8dd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a8e0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080a8e2: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0080a8e7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0080a8ea: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 0080a8ed: jle 0x80a970 */ if ((fZ||fS!=fO)) goto L_0080a970;
L_0080a8f3:; BB(0x0080a8f3);
    /* 0080a8f3: mov edx, ebx */ r_edx = r_ebx;
    /* 0080a8f5: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a8f8: jl 0x80a952 */ if ((fS!=fO)) goto L_0080a952;
L_0080a8fa:; BB(0x0080a8fa);
    /* 0080a8fa: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0080a8fd: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0080a900:; BB(0x0080a900);
    /* 0080a900: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a903: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a906: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a908: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a90a:; BB(0x0080a90a);
    /* 0080a90a: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a90d: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a910: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a913: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a915: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a917:; BB(0x0080a917);
    /* 0080a917: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a91a: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a91d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a920: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a922: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a924:; BB(0x0080a924);
    /* 0080a924: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a927: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a92a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a92d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a92f: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a931:; BB(0x0080a931);
    /* 0080a931: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a934: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a937: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080a93a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a93c: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a93e:; BB(0x0080a93e);
    /* 0080a93e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a941: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a944: add dword ptr [ebp - 0x1c], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a948: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a94b: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a94e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a950: jle 0x80a900 */ if ((fZ||fS!=fO)) goto L_0080a900;
L_0080a952:; BB(0x0080a952);
    /* 0080a952: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a955: movzx ecx, word ptr [edx] */ r_ecx = (u32)R16((u32)(r_edx));
    /* 0080a958: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a95a: je 0x80a975 */ if (fZ) goto L_0080a975;
L_0080a95c:; BB(0x0080a95c);
    /* 0080a95c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080a95f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080a962: add dword ptr [ebp - 0x1c], 8 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080a966: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080a969: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0080a96c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080a96e: jl 0x80a952 */ if ((fS!=fO)) goto L_0080a952;
L_0080a970:; BB(0x0080a970);
    /* 0080a970: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080a972: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0080a975:; BB(0x0080a975);
    /* 0080a975: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a97a: je 0x80aa0b */ if (fZ) goto L_0080aa0b;
L_0080a980:; BB(0x0080a980);
    /* 0080a980: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0080a987: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0080a989: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x80a98eu); f_005caba4();
    /* 0080a98e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080a991: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a994: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0080a997: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a999: je 0x80aa27 */ if (fZ) goto L_0080aa27;
L_0080a99f:; BB(0x0080a99f);
    /* 0080a99f: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 0080a9a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080a9ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a9b0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0080a9b3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a9b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a9b7: movzx ebx, byte ptr [eax + 4] */ r_ebx = (u32)R8((u32)(r_eax+0x4u));
    /* 0080a9bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080a9bc: call 0x504b58 */ r_esp -= 4; W32(r_esp, 0x80a9c1u); f_00504b58();
    /* 0080a9c1: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0080a9c8:; BB(0x0080a9c8);
    /* 0080a9c8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080a9cb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080a9ce: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080a9d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080a9d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080a9db: movzx esi, byte ptr [ecx + 2] */ r_esi = (u32)R8((u32)(r_ecx+0x2u));
    /* 0080a9df: mov edi, dword ptr [esi*4 + 0x97f11c] */ r_edi = R32((u32)(r_esi*4+0x97f11cu));
    /* 0080a9e6: mov esi, edx */ r_esi = r_edx;
    /* 0080a9e8: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 0080a9eb: movzx eax, byte ptr [ecx + 3] */ r_eax = (u32)R8((u32)(r_ecx+0x3u));
    /* 0080a9ef: movzx edx, byte ptr [eax + 0x97f114] */ r_edx = (u32)R8((u32)(r_eax+0x97f114u));
    /* 0080a9f6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080a9f9: mov byte ptr [esi + 0xe], dl */ W8((u32)(r_esi+0xeu), (u8)r_edx);
    /* 0080a9fc: movzx ebx, byte ptr [ecx + 4] */ r_ebx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0080aa00: mov byte ptr [esi + 0xf], bl */ W8((u32)(r_esi+0xfu), (u8)r_ebx);
    /* 0080aa03: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 0080aa06: jmp 0x80a6d2 */ goto L_0080a6d2;
L_0080aa0b:; BB(0x0080aa0b);
    /* 0080aa0b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080aa0e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080aa11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080aa13: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0080aa16: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080aa19: mov byte ptr [edx + 0xe], al */ W8((u32)(r_edx+0xeu), (u8)r_eax);
    /* 0080aa1c: mov byte ptr [edx + 0xf], al */ W8((u32)(r_edx+0xfu), (u8)r_eax);
    /* 0080aa1f: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0080aa22: jmp 0x80a6d2 */ goto L_0080a6d2;
L_0080aa27:; BB(0x0080aa27);
    /* 0080aa27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080aa29: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080aa2c: jmp 0x80a9c8 */ goto L_0080a9c8;
}

void f_0080aa30(void) /* sub_80AA30 */
{
    FN_ENTER(0x0080aa30);
    /* 0080aa30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080aa33: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 0080aa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080aa3b: je 0x80ab5a */ if (fZ) goto L_0080ab5a;
L_0080aa41:; BB(0x0080aa41);
    /* 0080aa41: movsx eax, word ptr [ecx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0080aa45: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080aa47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080aa49: jle 0x80ab5a */ if ((fZ||fS!=fO)) goto L_0080ab5a;
L_0080aa4f:; BB(0x0080aa4f);
    /* 0080aa4f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0080aa53: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0080aa57: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0080aa5b: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0080aa5f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0080aa62: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080aa64: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0080aa66: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 0080aa69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080aa6b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0080aa6d:; BB(0x0080aa6d);
    /* 0080aa6d: mov ebx, dword ptr [ecx + 0x10] */ r_ebx = R32((u32)(r_ecx+0x10u));
    /* 0080aa70: mov ecx, dword ptr [eax + ebx + 0x28] */ r_ecx = R32((u32)(r_eax+r_ebx+0x28u));
    /* 0080aa74: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080aa76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080aa78: jle 0x80aad0 */ if ((fZ||fS!=fO)) goto L_0080aad0;
L_0080aa7a:; BB(0x0080aa7a);
    /* 0080aa7a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0080aa7e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080aa81: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 0080aa84: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080aa86: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080aa88: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0080aa8a:; BB(0x0080aa8a);
    /* 0080aa8a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0080aa8e: mov eax, dword ptr [eax + ebx + 0x20] */ r_eax = R32((u32)(r_eax+r_ebx+0x20u));
    /* 0080aa92: mov edx, dword ptr [ebp + eax + 0xc] */ r_edx = R32((u32)(r_ebp+r_eax+0xcu));
    /* 0080aa96: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080aa99: je 0x80aabf */ if (fZ) goto L_0080aabf;
L_0080aa9b:; BB(0x0080aa9b);
    /* 0080aa9b: mov edi, dword ptr [ebp + eax + 4] */ r_edi = R32((u32)(r_ebp+r_eax+0x4u));
    /* 0080aa9f: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0080aaa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080aaa4: je 0x80aabf */ if (fZ) goto L_0080aabf;
L_0080aaa6:; BB(0x0080aaa6);
    /* 0080aaa6: je 0x80aab0 */ if (fZ) goto L_0080aab0;
L_0080aaa8:; BB(0x0080aaa8);
    /* 0080aaa8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080aaaa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080aaac: mov ecx, eax */ r_ecx = r_eax;
    /* 0080aaae: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x80aab0u); call_ind(t); }
L_0080aab0:; BB(0x0080aab0);
    /* 0080aab0: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0080aab4: mov dword ptr [edi + 0x14], 0 */ W32((u32)(r_edi+0x14u), 0x0u);
    /* 0080aabb: mov ecx, dword ptr [eax + ebx + 0x28] */ r_ecx = R32((u32)(r_eax+r_ebx+0x28u));
L_0080aabf:; BB(0x0080aabf);
    /* 0080aabf: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080aac2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080aac5: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080aac7: jl 0x80aa8a */ if ((fS!=fO)) goto L_0080aa8a;
L_0080aac9:; BB(0x0080aac9);
    /* 0080aac9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0080aacd: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080aad0:; BB(0x0080aad0);
    /* 0080aad0: mov ecx, dword ptr [eax + ebx + 0x2c] */ r_ecx = R32((u32)(r_eax+r_ebx+0x2cu));
    /* 0080aad4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080aad6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080aad8: jle 0x80ab32 */ if ((fZ||fS!=fO)) goto L_0080ab32;
L_0080aada:; BB(0x0080aada);
    /* 0080aada: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0080aade: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0080aae1: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 0080aae4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080aae6: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080aae8: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080aaea: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0080aaec:; BB(0x0080aaec);
    /* 0080aaec: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0080aaf0: mov eax, dword ptr [eax + ebx + 0x24] */ r_eax = R32((u32)(r_eax+r_ebx+0x24u));
    /* 0080aaf4: mov edx, dword ptr [ebp + eax + 0x1c] */ r_edx = R32((u32)(r_ebp+r_eax+0x1cu));
    /* 0080aaf8: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080aafb: je 0x80ab21 */ if (fZ) goto L_0080ab21;
L_0080aafd:; BB(0x0080aafd);
    /* 0080aafd: mov edi, dword ptr [ebp + eax + 0x14] */ r_edi = R32((u32)(r_ebp+r_eax+0x14u));
    /* 0080ab01: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0080ab04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ab06: je 0x80ab21 */ if (fZ) goto L_0080ab21;
L_0080ab08:; BB(0x0080ab08);
    /* 0080ab08: je 0x80ab12 */ if (fZ) goto L_0080ab12;
L_0080ab0a:; BB(0x0080ab0a);
    /* 0080ab0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ab0c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080ab0e: mov ecx, eax */ r_ecx = r_eax;
    /* 0080ab10: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x80ab12u); call_ind(t); }
L_0080ab12:; BB(0x0080ab12);
    /* 0080ab12: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0080ab16: mov dword ptr [edi + 0x14], 0 */ W32((u32)(r_edi+0x14u), 0x0u);
    /* 0080ab1d: mov ecx, dword ptr [eax + ebx + 0x2c] */ r_ecx = R32((u32)(r_eax+r_ebx+0x2cu));
L_0080ab21:; BB(0x0080ab21);
    /* 0080ab21: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080ab24: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ab27: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080ab29: jl 0x80aaec */ if ((fS!=fO)) goto L_0080aaec;
L_0080ab2b:; BB(0x0080ab2b);
    /* 0080ab2b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0080ab2f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_0080ab32:; BB(0x0080ab32);
    /* 0080ab32: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 0080ab38: movsx ebx, word ptr [ecx + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0080ab3c: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080ab3f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ab42: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080ab44: jl 0x80aa6d */ if ((fS!=fO)) goto L_0080aa6d;
L_0080ab4a:; BB(0x0080ab4a);
    /* 0080ab4a: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0080ab4e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0080ab52: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0080ab56: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_0080ab5a:; BB(0x0080ab5a);
    /* 0080ab5a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ab5d: ret  */ FN_RET(0x0080aa30); r_esp += 4; return;
}

void f_0080ab60(void) /* sub_80AB60 */
{
    FN_ENTER(0x0080ab60);
    /* 0080ab60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080ab61: mov ebp, esp */ r_ebp = r_esp;
    /* 0080ab63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080ab65: push 0x8f7246 */ { u32 v = 0x8f7246u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ab6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080ab70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080ab71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080ab78: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080ab7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080ab7e: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 0080ab81: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0080ab84: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0080ab87: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080ab8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ab8e: je 0x80ad65 */ if (fZ) goto L_0080ad65;
L_0080ab94:; BB(0x0080ab94);
    /* 0080ab94: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 0080ab9a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ab9c: je 0x80ad65 */ if (fZ) goto L_0080ad65;
L_0080aba2:; BB(0x0080aba2);
    /* 0080aba2: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0080aba5: movsx ecx, word ptr [ecx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 0080aba9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0080abac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080abae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080abb0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0080abb3: jle 0x80ad65 */ if ((fZ||fS!=fO)) goto L_0080ad65;
L_0080abb9:; BB(0x0080abb9);
    /* 0080abb9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080abbc: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0080abbf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080abc2: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0080abc5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080abc7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080abca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080abcc: jle 0x80ac80 */ if ((fZ||fS!=fO)) goto L_0080ac80;
L_0080abd2:; BB(0x0080abd2);
    /* 0080abd2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080abd5: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0080abd8: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080abdb: je 0x80abef */ if (fZ) goto L_0080abef;
L_0080abdd:; BB(0x0080abdd);
    /* 0080abdd: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0080abe0: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0080abe3: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0080abe6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080abe8: jne 0x80abfa */ if (!fZ) goto L_0080abfa;
L_0080abea:; BB(0x0080abea);
    /* 0080abea: jmp 0x80aeee */ goto L_0080aeee;
L_0080abef:; BB(0x0080abef);
    /* 0080abef: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080abf2: jne 0x80ac0d */ if (!fZ) goto L_0080ac0d;
L_0080abf4:; BB(0x0080abf4);
    /* 0080abf4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080abf7: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_0080abfa:; BB(0x0080abfa);
    /* 0080abfa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080abfd: add dword ptr [ebp - 0x14], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080ac01: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ac04: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080ac06: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080ac09: jl 0x80abd2 */ if ((fS!=fO)) goto L_0080abd2;
L_0080ac0b:; BB(0x0080ac0b);
    /* 0080ac0b: jmp 0x80ac80 */ goto L_0080ac80;
L_0080ac0d:; BB(0x0080ac0d);
    /* 0080ac0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080ac10: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0080ac13: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080ac18: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080ac1b: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ac1e: je 0x80ac6c */ if (fZ) goto L_0080ac6c;
L_0080ac20:; BB(0x0080ac20);
    /* 0080ac20: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
L_0080ac23:; BB(0x0080ac23);
    /* 0080ac23: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080ac26: je 0x80ac3d */ if (fZ) goto L_0080ac3d;
L_0080ac28:; BB(0x0080ac28);
    /* 0080ac28: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080ac2c: lea ebx, [esi] */ r_ebx = (u32)(r_esi);
    /* 0080ac2e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080ac31: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ac33: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080ac35: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ac37: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
    /* 0080ac3b: jmp 0x80ac64 */ goto L_0080ac64;
L_0080ac3d:; BB(0x0080ac3d);
    /* 0080ac3d: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080ac40: je 0x80ac6c */ if (fZ) goto L_0080ac6c;
L_0080ac42:; BB(0x0080ac42);
    /* 0080ac42: movzx ebx, word ptr [edx] */ r_ebx = (u32)R16((u32)(r_edx));
    /* 0080ac45: movsx esi, word ptr [eax + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0080ac49: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ac4b: je 0x80b032 */ if (fZ) goto L_0080b032;
L_0080ac51:; BB(0x0080ac51);
    /* 0080ac51: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080ac55: lea ebx, [esi] */ r_ebx = (u32)(r_esi);
    /* 0080ac57: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080ac5a: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ac5c: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080ac5e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ac60: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
L_0080ac64:; BB(0x0080ac64);
    /* 0080ac64: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080ac67: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ac6a: jne 0x80ac23 */ if (!fZ) goto L_0080ac23;
L_0080ac6c:; BB(0x0080ac6c);
    /* 0080ac6c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080ac6f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080ac72: and ecx, 0xffffffbf */ {  u32 a = r_ecx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ac75: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0080ac78: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0080ac7b: jmp 0x80abfa */ goto L_0080abfa;
L_0080ac80:; BB(0x0080ac80);
    /* 0080ac80: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080ac83: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0080ac86: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0080ac89: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0080ac8c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080ac8e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080ac91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080ac93: jle 0x80ad47 */ if ((fZ||fS!=fO)) goto L_0080ad47;
L_0080ac99:; BB(0x0080ac99);
    /* 0080ac99: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ac9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0080ac9f: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080aca2: je 0x80acb6 */ if (fZ) goto L_0080acb6;
L_0080aca4:; BB(0x0080aca4);
    /* 0080aca4: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 0080aca7: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0080acaa: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0080acad: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080acaf: jne 0x80acc1 */ if (!fZ) goto L_0080acc1;
L_0080acb1:; BB(0x0080acb1);
    /* 0080acb1: jmp 0x80ad7c */ goto L_0080ad7c;
L_0080acb6:; BB(0x0080acb6);
    /* 0080acb6: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080acb9: jne 0x80acd4 */ if (!fZ) goto L_0080acd4;
L_0080acbb:; BB(0x0080acbb);
    /* 0080acbb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080acbe: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
L_0080acc1:; BB(0x0080acc1);
    /* 0080acc1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080acc4: add dword ptr [ebp - 0x18], 0x20 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080acc8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080accb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080accd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080acd0: jl 0x80ac99 */ if ((fS!=fO)) goto L_0080ac99;
L_0080acd2:; BB(0x0080acd2);
    /* 0080acd2: jmp 0x80ad47 */ goto L_0080ad47;
L_0080acd4:; BB(0x0080acd4);
    /* 0080acd4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080acd7: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0080acda: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080acdf: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080ace2: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ace5: je 0x80ad33 */ if (fZ) goto L_0080ad33;
L_0080ace7:; BB(0x0080ace7);
    /* 0080ace7: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
L_0080acea:; BB(0x0080acea);
    /* 0080acea: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080aced: je 0x80ad04 */ if (fZ) goto L_0080ad04;
L_0080acef:; BB(0x0080acef);
    /* 0080acef: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080acf3: lea ebx, [esi] */ r_ebx = (u32)(r_esi);
    /* 0080acf5: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080acf8: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080acfa: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080acfc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080acfe: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
    /* 0080ad02: jmp 0x80ad2b */ goto L_0080ad2b;
L_0080ad04:; BB(0x0080ad04);
    /* 0080ad04: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080ad07: je 0x80ad33 */ if (fZ) goto L_0080ad33;
L_0080ad09:; BB(0x0080ad09);
    /* 0080ad09: movzx ebx, word ptr [edx] */ r_ebx = (u32)R16((u32)(r_edx));
    /* 0080ad0c: movsx esi, word ptr [eax + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0080ad10: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ad12: je 0x80aec0 */ if (fZ) goto L_0080aec0;
L_0080ad18:; BB(0x0080ad18);
    /* 0080ad18: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080ad1c: lea ebx, [esi] */ r_ebx = (u32)(r_esi);
    /* 0080ad1e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080ad21: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ad23: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080ad25: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ad27: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
L_0080ad2b:; BB(0x0080ad2b);
    /* 0080ad2b: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080ad2e: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ad31: jne 0x80acea */ if (!fZ) goto L_0080acea;
L_0080ad33:; BB(0x0080ad33);
    /* 0080ad33: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ad36: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080ad39: and ecx, 0xffffffbf */ {  u32 a = r_ecx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ad3c: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0080ad3f: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0080ad42: jmp 0x80acc1 */ goto L_0080acc1;
L_0080ad47:; BB(0x0080ad47);
    /* 0080ad47: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080ad4a: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 0080ad4f: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080ad53: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ad56: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0080ad59: add dword ptr [ebp - 0x24], 0x34 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080ad5d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080ad5f: jl 0x80abb9 */ if ((fS!=fO)) goto L_0080abb9;
L_0080ad65:; BB(0x0080ad65);
    /* 0080ad65: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0080ad68: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0080ad6b: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0080ad6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080ad71: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080ad78: mov esp, ebp */ r_esp = r_ebp;
    /* 0080ad7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080ad7b: ret  */ FN_RET(0x0080ab60); r_esp += 4; return;
L_0080ad7c:; BB(0x0080ad7c);
    /* 0080ad7c: mov eax, ebx */ r_eax = r_ebx;
    /* 0080ad7e: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0080ad81: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0080ad84: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 0080ad8a: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080ad8d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080ad8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080ad91: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ad94: je 0x80adc5 */ if (fZ) goto L_0080adc5;
L_0080ad96:; BB(0x0080ad96);
    /* 0080ad96: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ad9c: jne 0x80aeb4 */ if (!fZ) goto L_0080aeb4;
L_0080ada2:; BB(0x0080ada2);
    /* 0080ada2: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ada8: je 0x80ade0 */ if (fZ) goto L_0080ade0;
L_0080adaa:; BB(0x0080adaa);
    /* 0080adaa: movsx edi, word ptr [edx + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0080adae: lea esi, [edi] */ r_esi = (u32)(r_edi);
    /* 0080adb0: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0080adb3: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080adb5: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080adb7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080adb9: lea edx, [edx + edi + 4] */ r_edx = (u32)(r_edx+r_edi+0x4u);
    /* 0080adbd: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080adc0: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080adc3: jne 0x80ad96 */ if (!fZ) goto L_0080ad96;
L_0080adc5:; BB(0x0080adc5);
    /* 0080adc5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080adc7: jle 0x80ade0 */ if ((fZ||fS!=fO)) goto L_0080ade0;
L_0080adc9:; BB(0x0080adc9);
    /* 0080adc9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080adcc: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0080adcf: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080add1: je 0x80adee */ if (fZ) goto L_0080adee;
L_0080add3:; BB(0x0080add3);
    /* 0080add3: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080add6: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080add9: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0080addc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080adde: jg 0x80adc9 */ if ((!fZ&&fS==fO)) goto L_0080adc9;
L_0080ade0:; BB(0x0080ade0);
    /* 0080ade0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ade3: and ecx, 0xffffffdf */ {  u32 a = r_ecx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ade6: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0080ade9: jmp 0x80acb6 */ goto L_0080acb6;
L_0080adee:; BB(0x0080adee);
    /* 0080adee: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0080adf2: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0080adf5: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0080adf8: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0080adfb: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0080adfe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080ae01: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080ae04: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0080ae07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080ae0a: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 0080ae0e: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 0080ae11: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0080ae14: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 0080ae17: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0080ae1a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ae1d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0080ae1f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080ae22: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0080ae25: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ae2a: je 0x80ae34 */ if (fZ) goto L_0080ae34;
L_0080ae2c:; BB(0x0080ae2c);
    /* 0080ae2c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080ae2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080ae31: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_0080ae34:; BB(0x0080ae34);
    /* 0080ae34: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0080ae3b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ae3d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80ae42u); f_008581c5();
    /* 0080ae42: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080ae45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080ae48: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0080ae4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ae4d: je 0x80aead */ if (fZ) goto L_0080aead;
L_0080ae4f:; BB(0x0080ae4f);
    /* 0080ae4f: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0080ae56: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0080ae5d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080ae60: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080ae63: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080ae66: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 0080ae6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ae6b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ae6c: call 0x66f58c */ r_esp -= 4; W32(r_esp, 0x80ae71u); f_0066f58c();
    /* 0080ae71: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0080ae78:; BB(0x0080ae78);
    /* 0080ae78: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080ae7b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080ae7e: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0080ae81: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080ae88: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ae8b: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0080ae8e: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ae94: je 0x80acb6 */ if (fZ) goto L_0080acb6;
L_0080ae9a:; BB(0x0080ae9a);
    /* 0080ae9a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080ae9d: call 0x4ba6b8 */ r_esp -= 4; W32(r_esp, 0x80aea2u); f_004ba6b8();
    /* 0080aea2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080aea5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0080aea8: jmp 0x80acb6 */ goto L_0080acb6;
L_0080aead:; BB(0x0080aead);
    /* 0080aead: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080aeaf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080aeb2: jmp 0x80ae78 */ goto L_0080ae78;
L_0080aeb4:; BB(0x0080aeb4);
    /* 0080aeb4: movsx ebx, word ptr [edx + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0080aeb8: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 0080aebb: jmp 0x80adc5 */ goto L_0080adc5;
L_0080aec0:; BB(0x0080aec0);
    /* 0080aec0: movsx ebx, word ptr [edx + 6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 0080aec4: cmp bx, word ptr [eax + 6] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_eax+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080aec8: jl 0x80aed2 */ if ((fS!=fO)) goto L_0080aed2;
L_0080aeca:; BB(0x0080aeca);
    /* 0080aeca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080aecc: mov word ptr [edx + 6], cx */ W16((u32)(r_edx+0x6u), (u16)r_ecx);
    /* 0080aed0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0080aed2:; BB(0x0080aed2);
    /* 0080aed2: movzx ecx, word ptr [eax + ebx*4 + 8] */ r_ecx = (u32)R16((u32)(r_eax+r_ebx*4+0x8u));
    /* 0080aed7: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 0080aedb: movsx eax, word ptr [eax + ebx*4 + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_ebx*4+0xau));
    /* 0080aee0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080aee3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080aee6: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0080aee9: jmp 0x80acc1 */ goto L_0080acc1;
L_0080aeee:; BB(0x0080aeee);
    /* 0080aeee: mov eax, ebx */ r_eax = r_ebx;
    /* 0080aef0: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0080aef3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080aef6: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 0080aefc: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080aeff: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080af01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080af03: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af06: je 0x80af37 */ if (fZ) goto L_0080af37;
L_0080af08:; BB(0x0080af08);
    /* 0080af08: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af0e: jne 0x80b026 */ if (!fZ) goto L_0080b026;
L_0080af14:; BB(0x0080af14);
    /* 0080af14: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af1a: je 0x80af52 */ if (fZ) goto L_0080af52;
L_0080af1c:; BB(0x0080af1c);
    /* 0080af1c: movsx edi, word ptr [edx + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0080af20: lea esi, [edi] */ r_esi = (u32)(r_edi);
    /* 0080af22: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0080af25: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080af27: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080af29: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080af2b: lea edx, [edx + edi + 4] */ r_edx = (u32)(r_edx+r_edi+0x4u);
    /* 0080af2f: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080af32: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af35: jne 0x80af08 */ if (!fZ) goto L_0080af08;
L_0080af37:; BB(0x0080af37);
    /* 0080af37: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080af39: jle 0x80af52 */ if ((fZ||fS!=fO)) goto L_0080af52;
L_0080af3b:; BB(0x0080af3b);
    /* 0080af3b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080af3e: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0080af41: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af43: je 0x80af60 */ if (fZ) goto L_0080af60;
L_0080af45:; BB(0x0080af45);
    /* 0080af45: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080af48: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080af4b: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0080af4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080af50: jg 0x80af3b */ if ((!fZ&&fS==fO)) goto L_0080af3b;
L_0080af52:; BB(0x0080af52);
    /* 0080af52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080af55: and ecx, 0xffffffdf */ {  u32 a = r_ecx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080af58: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0080af5b: jmp 0x80abef */ goto L_0080abef;
L_0080af60:; BB(0x0080af60);
    /* 0080af60: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0080af64: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0080af67: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0080af6a: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0080af6d: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0080af70: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0080af73: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080af76: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0080af79: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080af7c: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 0080af80: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 0080af83: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0080af86: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 0080af89: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0080af8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080af8f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0080af91: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080af94: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0080af97: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af9c: je 0x80afa6 */ if (fZ) goto L_0080afa6;
L_0080af9e:; BB(0x0080af9e);
    /* 0080af9e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080afa1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080afa3: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_0080afa6:; BB(0x0080afa6);
    /* 0080afa6: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0080afad: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0080afaf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80afb4u); f_008581c5();
    /* 0080afb4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080afb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080afba: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0080afbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080afbf: je 0x80b01f */ if (fZ) goto L_0080b01f;
L_0080afc1:; BB(0x0080afc1);
    /* 0080afc1: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0080afc8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080afcf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080afd2: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080afd5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080afd8: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 0080afdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080afdd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080afde: call 0x66f58c */ r_esp -= 4; W32(r_esp, 0x80afe3u); f_0066f58c();
    /* 0080afe3: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0080afea:; BB(0x0080afea);
    /* 0080afea: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080afed: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080aff0: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0080aff3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080affa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080affd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0080b000: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b006: je 0x80abef */ if (fZ) goto L_0080abef;
L_0080b00c:; BB(0x0080b00c);
    /* 0080b00c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080b00f: call 0x4ba6b8 */ r_esp -= 4; W32(r_esp, 0x80b014u); f_004ba6b8();
    /* 0080b014: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080b017: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0080b01a: jmp 0x80abef */ goto L_0080abef;
L_0080b01f:; BB(0x0080b01f);
    /* 0080b01f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080b021: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080b024: jmp 0x80afea */ goto L_0080afea;
L_0080b026:; BB(0x0080b026);
    /* 0080b026: movsx ebx, word ptr [edx + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0080b02a: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 0080b02d: jmp 0x80af37 */ goto L_0080af37;
L_0080b032:; BB(0x0080b032);
    /* 0080b032: movsx ebx, word ptr [edx + 6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 0080b036: cmp bx, word ptr [eax + 6] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_eax+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080b03a: jl 0x80b044 */ if ((fS!=fO)) goto L_0080b044;
L_0080b03c:; BB(0x0080b03c);
    /* 0080b03c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080b03e: mov word ptr [edx + 6], cx */ W16((u32)(r_edx+0x6u), (u16)r_ecx);
    /* 0080b042: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0080b044:; BB(0x0080b044);
    /* 0080b044: movzx ecx, word ptr [eax + ebx*4 + 8] */ r_ecx = (u32)R16((u32)(r_eax+r_ebx*4+0x8u));
    /* 0080b049: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 0080b04d: movsx eax, word ptr [eax + ebx*4 + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_ebx*4+0xau));
    /* 0080b052: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080b055: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080b058: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0080b05b: jmp 0x80abfa */ goto L_0080abfa;
}

void f_0080aec9(void)
{
    FN_ENTER(0x0080aec9);
    goto L_0080aec9;
L_0080abb9:; BB(0x0080abb9);
    /* 0080abb9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080abbc: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0080abbf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080abc2: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0080abc5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080abc7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080abca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080abcc: jle 0x80ac80 */ if ((fZ||fS!=fO)) goto L_0080ac80;
L_0080abd2:; BB(0x0080abd2);
    /* 0080abd2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080abd5: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0080abd8: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080abdb: je 0x80abef */ if (fZ) goto L_0080abef;
L_0080abdd:; BB(0x0080abdd);
    /* 0080abdd: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0080abe0: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0080abe3: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0080abe6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080abe8: jne 0x80abfa */ if (!fZ) goto L_0080abfa;
L_0080abea:; BB(0x0080abea);
    /* 0080abea: jmp 0x80aeee */ goto L_0080aeee;
L_0080abef:; BB(0x0080abef);
    /* 0080abef: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080abf2: jne 0x80ac0d */ if (!fZ) goto L_0080ac0d;
L_0080abf4:; BB(0x0080abf4);
    /* 0080abf4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080abf7: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_0080abfa:; BB(0x0080abfa);
    /* 0080abfa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080abfd: add dword ptr [ebp - 0x14], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080ac01: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ac04: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080ac06: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0080ac09: jl 0x80abd2 */ if ((fS!=fO)) goto L_0080abd2;
L_0080ac0b:; BB(0x0080ac0b);
    /* 0080ac0b: jmp 0x80ac80 */ goto L_0080ac80;
L_0080ac0d:; BB(0x0080ac0d);
    /* 0080ac0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080ac10: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0080ac13: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080ac18: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080ac1b: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ac1e: je 0x80ac6c */ if (fZ) goto L_0080ac6c;
L_0080ac20:; BB(0x0080ac20);
    /* 0080ac20: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
L_0080ac23:; BB(0x0080ac23);
    /* 0080ac23: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080ac26: je 0x80ac3d */ if (fZ) goto L_0080ac3d;
L_0080ac28:; BB(0x0080ac28);
    /* 0080ac28: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080ac2c: lea ebx, [esi] */ r_ebx = (u32)(r_esi);
    /* 0080ac2e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080ac31: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ac33: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080ac35: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ac37: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
    /* 0080ac3b: jmp 0x80ac64 */ goto L_0080ac64;
L_0080ac3d:; BB(0x0080ac3d);
    /* 0080ac3d: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080ac40: je 0x80ac6c */ if (fZ) goto L_0080ac6c;
L_0080ac42:; BB(0x0080ac42);
    /* 0080ac42: movzx ebx, word ptr [edx] */ r_ebx = (u32)R16((u32)(r_edx));
    /* 0080ac45: movsx esi, word ptr [eax + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0080ac49: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ac4b: je 0x80b032 */ if (fZ) goto L_0080b032;
L_0080ac51:; BB(0x0080ac51);
    /* 0080ac51: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080ac55: lea ebx, [esi] */ r_ebx = (u32)(r_esi);
    /* 0080ac57: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080ac5a: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ac5c: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080ac5e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ac60: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
L_0080ac64:; BB(0x0080ac64);
    /* 0080ac64: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080ac67: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ac6a: jne 0x80ac23 */ if (!fZ) goto L_0080ac23;
L_0080ac6c:; BB(0x0080ac6c);
    /* 0080ac6c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080ac6f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080ac72: and ecx, 0xffffffbf */ {  u32 a = r_ecx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ac75: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0080ac78: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0080ac7b: jmp 0x80abfa */ goto L_0080abfa;
L_0080ac80:; BB(0x0080ac80);
    /* 0080ac80: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080ac83: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0080ac86: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0080ac89: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0080ac8c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080ac8e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080ac91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080ac93: jle 0x80ad47 */ if ((fZ||fS!=fO)) goto L_0080ad47;
L_0080ac99:; BB(0x0080ac99);
    /* 0080ac99: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ac9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0080ac9f: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080aca2: je 0x80acb6 */ if (fZ) goto L_0080acb6;
L_0080aca4:; BB(0x0080aca4);
    /* 0080aca4: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 0080aca7: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0080acaa: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0080acad: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080acaf: jne 0x80acc1 */ if (!fZ) goto L_0080acc1;
L_0080acb1:; BB(0x0080acb1);
    /* 0080acb1: jmp 0x80ad7c */ goto L_0080ad7c;
L_0080acb6:; BB(0x0080acb6);
    /* 0080acb6: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080acb9: jne 0x80acd4 */ if (!fZ) goto L_0080acd4;
L_0080acbb:; BB(0x0080acbb);
    /* 0080acbb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080acbe: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
L_0080acc1:; BB(0x0080acc1);
    /* 0080acc1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080acc4: add dword ptr [ebp - 0x18], 0x20 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080acc8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080accb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080accd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0080acd0: jl 0x80ac99 */ if ((fS!=fO)) goto L_0080ac99;
L_0080acd2:; BB(0x0080acd2);
    /* 0080acd2: jmp 0x80ad47 */ goto L_0080ad47;
L_0080acd4:; BB(0x0080acd4);
    /* 0080acd4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080acd7: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0080acda: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 0080acdf: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080ace2: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ace5: je 0x80ad33 */ if (fZ) goto L_0080ad33;
L_0080ace7:; BB(0x0080ace7);
    /* 0080ace7: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
L_0080acea:; BB(0x0080acea);
    /* 0080acea: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080aced: je 0x80ad04 */ if (fZ) goto L_0080ad04;
L_0080acef:; BB(0x0080acef);
    /* 0080acef: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080acf3: lea ebx, [esi] */ r_ebx = (u32)(r_esi);
    /* 0080acf5: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080acf8: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080acfa: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080acfc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080acfe: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
    /* 0080ad02: jmp 0x80ad2b */ goto L_0080ad2b;
L_0080ad04:; BB(0x0080ad04);
    /* 0080ad04: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080ad07: je 0x80ad33 */ if (fZ) goto L_0080ad33;
L_0080ad09:; BB(0x0080ad09);
    /* 0080ad09: movzx ebx, word ptr [edx] */ r_ebx = (u32)R16((u32)(r_edx));
    /* 0080ad0c: movsx esi, word ptr [eax + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0080ad10: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ad12: je 0x80aec0 */ if (fZ) goto L_0080aec0;
L_0080ad18:; BB(0x0080ad18);
    /* 0080ad18: movsx esi, word ptr [eax + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0080ad1c: lea ebx, [esi] */ r_ebx = (u32)(r_esi);
    /* 0080ad1e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0080ad21: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ad23: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0080ad25: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080ad27: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
L_0080ad2b:; BB(0x0080ad2b);
    /* 0080ad2b: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0080ad2e: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ad31: jne 0x80acea */ if (!fZ) goto L_0080acea;
L_0080ad33:; BB(0x0080ad33);
    /* 0080ad33: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ad36: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080ad39: and ecx, 0xffffffbf */ {  u32 a = r_ecx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ad3c: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0080ad3f: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0080ad42: jmp 0x80acc1 */ goto L_0080acc1;
L_0080ad47:; BB(0x0080ad47);
    /* 0080ad47: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0080ad4a: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 0080ad4f: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 0080ad53: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ad56: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0080ad59: add dword ptr [ebp - 0x24], 0x34 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080ad5d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0080ad5f: jl 0x80abb9 */ if ((fS!=fO)) goto L_0080abb9;
L_0080ad65:; BB(0x0080ad65);
    /* 0080ad65: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0080ad68: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0080ad6b: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 0080ad6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080ad71: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080ad78: mov esp, ebp */ r_esp = r_ebp;
    /* 0080ad7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080ad7b: ret  */ FN_RET(0x0080aec9); r_esp += 4; return;
L_0080ad7c:; BB(0x0080ad7c);
    /* 0080ad7c: mov eax, ebx */ r_eax = r_ebx;
    /* 0080ad7e: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0080ad81: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0080ad84: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 0080ad8a: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080ad8d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080ad8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080ad91: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ad94: je 0x80adc5 */ if (fZ) goto L_0080adc5;
L_0080ad96:; BB(0x0080ad96);
    /* 0080ad96: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ad9c: jne 0x80aeb4 */ if (!fZ) goto L_0080aeb4;
L_0080ada2:; BB(0x0080ada2);
    /* 0080ada2: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ada8: je 0x80ade0 */ if (fZ) goto L_0080ade0;
L_0080adaa:; BB(0x0080adaa);
    /* 0080adaa: movsx edi, word ptr [edx + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0080adae: lea esi, [edi] */ r_esi = (u32)(r_edi);
    /* 0080adb0: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0080adb3: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080adb5: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080adb7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080adb9: lea edx, [edx + edi + 4] */ r_edx = (u32)(r_edx+r_edi+0x4u);
    /* 0080adbd: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080adc0: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080adc3: jne 0x80ad96 */ if (!fZ) goto L_0080ad96;
L_0080adc5:; BB(0x0080adc5);
    /* 0080adc5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080adc7: jle 0x80ade0 */ if ((fZ||fS!=fO)) goto L_0080ade0;
L_0080adc9:; BB(0x0080adc9);
    /* 0080adc9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080adcc: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0080adcf: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080add1: je 0x80adee */ if (fZ) goto L_0080adee;
L_0080add3:; BB(0x0080add3);
    /* 0080add3: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080add6: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080add9: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0080addc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080adde: jg 0x80adc9 */ if ((!fZ&&fS==fO)) goto L_0080adc9;
L_0080ade0:; BB(0x0080ade0);
    /* 0080ade0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ade3: and ecx, 0xffffffdf */ {  u32 a = r_ecx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ade6: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0080ade9: jmp 0x80acb6 */ goto L_0080acb6;
L_0080adee:; BB(0x0080adee);
    /* 0080adee: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0080adf2: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0080adf5: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0080adf8: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0080adfb: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0080adfe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0080ae01: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080ae04: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0080ae07: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080ae0a: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 0080ae0e: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 0080ae11: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0080ae14: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 0080ae17: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0080ae1a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ae1d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0080ae1f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080ae22: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0080ae25: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ae2a: je 0x80ae34 */ if (fZ) goto L_0080ae34;
L_0080ae2c:; BB(0x0080ae2c);
    /* 0080ae2c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080ae2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080ae31: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_0080ae34:; BB(0x0080ae34);
    /* 0080ae34: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0080ae3b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0080ae3d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80ae42u); f_008581c5();
    /* 0080ae42: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080ae45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080ae48: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0080ae4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ae4d: je 0x80aead */ if (fZ) goto L_0080aead;
L_0080ae4f:; BB(0x0080ae4f);
    /* 0080ae4f: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0080ae56: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0080ae5d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080ae60: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080ae63: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080ae66: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 0080ae6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ae6b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ae6c: call 0x66f58c */ r_esp -= 4; W32(r_esp, 0x80ae71u); f_0066f58c();
    /* 0080ae71: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0080ae78:; BB(0x0080ae78);
    /* 0080ae78: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080ae7b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080ae7e: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0080ae81: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080ae88: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080ae8b: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0080ae8e: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080ae94: je 0x80acb6 */ if (fZ) goto L_0080acb6;
L_0080ae9a:; BB(0x0080ae9a);
    /* 0080ae9a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080ae9d: call 0x4ba6b8 */ r_esp -= 4; W32(r_esp, 0x80aea2u); f_004ba6b8();
    /* 0080aea2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0080aea5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0080aea8: jmp 0x80acb6 */ goto L_0080acb6;
L_0080aead:; BB(0x0080aead);
    /* 0080aead: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080aeaf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080aeb2: jmp 0x80ae78 */ goto L_0080ae78;
L_0080aeb4:; BB(0x0080aeb4);
    /* 0080aeb4: movsx ebx, word ptr [edx + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0080aeb8: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 0080aebb: jmp 0x80adc5 */ goto L_0080adc5;
L_0080aec0:; BB(0x0080aec0);
    /* 0080aec0: movsx ebx, word ptr [edx + 6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 0080aec4: cmp bx, word ptr [eax + 6] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_eax+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080aec8: jl 0x80aed2 */ if ((fS!=fO)) goto L_0080aed2;
L_0080aec9:; BB(0x0080aec9);
    /* 0080aec9: or byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0080aeca:; BB(0x0080aeca);
    /* 0080aeca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080aecb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0080aecc: mov word ptr [edx + 6], cx */ W16((u32)(r_edx+0x6u), (u16)r_ecx);
    /* 0080aed0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0080aed2:; BB(0x0080aed2);
    /* 0080aed2: movzx ecx, word ptr [eax + ebx*4 + 8] */ r_ecx = (u32)R16((u32)(r_eax+r_ebx*4+0x8u));
    /* 0080aed7: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 0080aedb: movsx eax, word ptr [eax + ebx*4 + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_ebx*4+0xau));
    /* 0080aee0: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080aee3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080aee6: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0080aee9: jmp 0x80acc1 */ goto L_0080acc1;
L_0080aeee:; BB(0x0080aeee);
    /* 0080aeee: mov eax, ebx */ r_eax = r_ebx;
    /* 0080aef0: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0080aef3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0080aef6: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 0080aefc: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080aeff: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080af01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080af03: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af06: je 0x80af37 */ if (fZ) goto L_0080af37;
L_0080af08:; BB(0x0080af08);
    /* 0080af08: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af0e: jne 0x80b026 */ if (!fZ) goto L_0080b026;
L_0080af14:; BB(0x0080af14);
    /* 0080af14: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af1a: je 0x80af52 */ if (fZ) goto L_0080af52;
L_0080af1c:; BB(0x0080af1c);
    /* 0080af1c: movsx edi, word ptr [edx + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0080af20: lea esi, [edi] */ r_esi = (u32)(r_edi);
    /* 0080af22: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0080af25: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080af27: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080af29: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080af2b: lea edx, [edx + edi + 4] */ r_edx = (u32)(r_edx+r_edi+0x4u);
    /* 0080af2f: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080af32: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af35: jne 0x80af08 */ if (!fZ) goto L_0080af08;
L_0080af37:; BB(0x0080af37);
    /* 0080af37: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080af39: jle 0x80af52 */ if ((fZ||fS!=fO)) goto L_0080af52;
L_0080af3b:; BB(0x0080af3b);
    /* 0080af3b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080af3e: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 0080af41: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af43: je 0x80af60 */ if (fZ) goto L_0080af60;
L_0080af45:; BB(0x0080af45);
    /* 0080af45: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080af48: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080af4b: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0080af4e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080af50: jg 0x80af3b */ if ((!fZ&&fS==fO)) goto L_0080af3b;
L_0080af52:; BB(0x0080af52);
    /* 0080af52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080af55: and ecx, 0xffffffdf */ {  u32 a = r_ecx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080af58: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0080af5b: jmp 0x80abef */ goto L_0080abef;
L_0080af60:; BB(0x0080af60);
    /* 0080af60: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0080af64: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0080af67: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0080af6a: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0080af6d: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0080af70: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0080af73: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080af76: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0080af79: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080af7c: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 0080af80: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 0080af83: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0080af86: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 0080af89: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0080af8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0080af8f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0080af91: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0080af94: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0080af97: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080af9c: je 0x80afa6 */ if (fZ) goto L_0080afa6;
L_0080af9e:; BB(0x0080af9e);
    /* 0080af9e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080afa1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0080afa3: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_0080afa6:; BB(0x0080afa6);
    /* 0080afa6: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0080afad: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0080afaf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x80afb4u); f_008581c5();
    /* 0080afb4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080afb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080afba: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0080afbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080afbf: je 0x80b01f */ if (fZ) goto L_0080b01f;
L_0080afc1:; BB(0x0080afc1);
    /* 0080afc1: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0080afc8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0080afcf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080afd2: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0080afd5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080afd8: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 0080afdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080afdd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080afde: call 0x66f58c */ r_esp -= 4; W32(r_esp, 0x80afe3u); f_0066f58c();
    /* 0080afe3: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0080afea:; BB(0x0080afea);
    /* 0080afea: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080afed: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0080aff0: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0080aff3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080affa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080affd: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0080b000: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080b006: je 0x80abef */ if (fZ) goto L_0080abef;
L_0080b00c:; BB(0x0080b00c);
    /* 0080b00c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0080b00f: call 0x4ba6b8 */ r_esp -= 4; W32(r_esp, 0x80b014u); f_004ba6b8();
    /* 0080b014: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0080b017: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0080b01a: jmp 0x80abef */ goto L_0080abef;
L_0080b01f:; BB(0x0080b01f);
    /* 0080b01f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080b021: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0080b024: jmp 0x80afea */ goto L_0080afea;
L_0080b026:; BB(0x0080b026);
    /* 0080b026: movsx ebx, word ptr [edx + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0080b02a: lea eax, [edx + 8] */ r_eax = (u32)(r_edx+0x8u);
    /* 0080b02d: jmp 0x80af37 */ goto L_0080af37;
L_0080b032:; BB(0x0080b032);
    /* 0080b032: movsx ebx, word ptr [edx + 6] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 0080b036: cmp bx, word ptr [eax + 6] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_eax+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080b03a: jl 0x80b044 */ if ((fS!=fO)) goto L_0080b044;
L_0080b03c:; BB(0x0080b03c);
    /* 0080b03c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080b03e: mov word ptr [edx + 6], cx */ W16((u32)(r_edx+0x6u), (u16)r_ecx);
    /* 0080b042: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0080b044:; BB(0x0080b044);
    /* 0080b044: movzx ecx, word ptr [eax + ebx*4 + 8] */ r_ecx = (u32)R16((u32)(r_eax+r_ebx*4+0x8u));
    /* 0080b049: mov word ptr [edx + 4], cx */ W16((u32)(r_edx+0x4u), (u16)r_ecx);
    /* 0080b04d: movsx eax, word ptr [eax + ebx*4 + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+r_ebx*4+0xau));
    /* 0080b052: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0080b055: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0080b058: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0080b05b: jmp 0x80abfa */ goto L_0080abfa;
}

