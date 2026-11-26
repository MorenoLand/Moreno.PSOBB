#include "protos.h"

void f_0083b118(void) /* sub_83B118 */
{
    FN_ENTER(0x0083b118);
    /* 0083b118: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b119: call dword ptr [0xa21bd8] */ { u32 t = R32((u32)(0xa21bd8u)); r_esp -= 4; W32(r_esp, 0x83b11fu); call_ind(t); }
    /* 0083b11f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083b120: ret  */ FN_RET(0x0083b118); r_esp += 4; return;
}

void f_0083b124(void) /* sub_83B124 */
{
    FN_ENTER(0x0083b124);
    /* 0083b124: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b125: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b126: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083b127: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b128: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083b12b: mov esi, edx */ r_esi = r_edx;
    /* 0083b12d: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 0083b12f: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0083b133: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0083b137: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083b13b: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0083b13f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0083b143: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0083b145: lea eax, [ecx + ebx] */ r_eax = (u32)(r_ecx+r_ebx);
    /* 0083b148: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0083b14a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b14d: lea ebx, [ecx + ebx + 4] */ r_ebx = (u32)(r_ecx+r_ebx+0x4u);
    /* 0083b151: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083b153: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0083b157: add dword ptr [esi], 8 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b15a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0083b15d: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 0083b160: mov ecx, edx */ r_ecx = r_edx;
    /* 0083b162: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0083b166: and ecx, 0xff00 */ {  u32 a = r_ecx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0083b16c: mov eax, edx */ r_eax = r_edx;
    /* 0083b16e: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0083b171: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0083b174: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b176: mov ecx, edx */ r_ecx = r_edx;
    /* 0083b178: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0083b17e: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0083b181: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b183: and edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0083b189: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0083b18c: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b18e: cmp eax, 0x4e4a494e */ {  u32 a = r_eax; u32 b = 0x4e4a494eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b193: je 0x83b3de */ if (fZ) goto L_0083b3de;
L_0083b199:; BB(0x0083b199);
    /* 0083b199: cmp eax, 0x4e4a434d */ {  u32 a = r_eax; u32 b = 0x4e4a434du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b19e: je 0x83b3d0 */ if (fZ) goto L_0083b3d0;
L_0083b1a4:; BB(0x0083b1a4);
    /* 0083b1a4: cmp eax, 0x4e4a544c */ {  u32 a = r_eax; u32 b = 0x4e4a544cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b1a9: je 0x83b3c2 */ if (fZ) goto L_0083b3c2;
L_0083b1af:; BB(0x0083b1af);
    /* 0083b1af: cmp eax, 0x4e4a4c49 */ {  u32 a = r_eax; u32 b = 0x4e4a4c49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b1b4: je 0x83b3b4 */ if (fZ) goto L_0083b3b4;
L_0083b1ba:; BB(0x0083b1ba);
    /* 0083b1ba: cmp eax, 0x4e4a4341 */ {  u32 a = r_eax; u32 b = 0x4e4a4341u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b1bf: je 0x83b1f7 */ if (fZ) goto L_0083b1f7;
L_0083b1c1:; BB(0x0083b1c1);
    /* 0083b1c1: cmp eax, 0x4e4d444d */ {  u32 a = r_eax; u32 b = 0x4e4d444du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b1c6: jne 0x83b1d3 */ if (!fZ) goto L_0083b1d3;
L_0083b1c8:; BB(0x0083b1c8);
    /* 0083b1c8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b1cb: mov dword ptr [edi], 0x4e4d444d */ W32((u32)(r_edi), 0x4e4d444du);
    /* 0083b1d1: jmp 0x83b200 */ goto L_0083b200;
L_0083b1d3:; BB(0x0083b1d3);
    /* 0083b1d3: cmp eax, 0x4e53534d */ {  u32 a = r_eax; u32 b = 0x4e53534du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b1d8: jne 0x83b1e5 */ if (!fZ) goto L_0083b1e5;
L_0083b1da:; BB(0x0083b1da);
    /* 0083b1da: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b1dd: mov dword ptr [edi], 0x4e53534d */ W32((u32)(r_edi), 0x4e53534du);
    /* 0083b1e3: jmp 0x83b200 */ goto L_0083b200;
L_0083b1e5:; BB(0x0083b1e5);
    /* 0083b1e5: mov dword ptr [edi], 0x2a2a2a2a */ W32((u32)(r_edi), 0x2a2a2a2au);
    /* 0083b1eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083b1ed: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083b1f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083b1f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083b1f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083b1f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083b1f4: ret 0xc */ FN_RET(0x0083b124); r_esp += 16; return;
L_0083b1f7:; BB(0x0083b1f7);
    /* 0083b1f7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b1fa: mov dword ptr [edi], 0x4e4a4341 */ W32((u32)(r_edi), 0x4e4a4341u);
L_0083b200:; BB(0x0083b200);
    /* 0083b200: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083b204: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b206: je 0x83b39e */ if (fZ) goto L_0083b39e;
L_0083b20c:; BB(0x0083b20c);
    /* 0083b20c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b20e: je 0x83b3ec */ if (fZ) goto L_0083b3ec;
L_0083b214:; BB(0x0083b214);
    /* 0083b214: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0083b218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b21a: je 0x83b226 */ if (fZ) goto L_0083b226;
L_0083b21c:; BB(0x0083b21c);
    /* 0083b21c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083b220: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0083b224: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0083b226:; BB(0x0083b226);
    /* 0083b226: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083b22a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0083b22e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b22f: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0083b233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b234: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x83b239u); f_0086b6b8();
    /* 0083b239: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083b23c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083b240: add dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b242: lea ebx, [eax + ebx + 4] */ r_ebx = (u32)(r_eax+r_ebx+0x4u);
    /* 0083b246: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0083b248: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0083b24b: add dword ptr [esi], 4 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b24e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0083b251: lea ecx, [ebx + 4] */ r_ecx = (u32)(r_ebx+0x4u);
    /* 0083b254: mov eax, edx */ r_eax = r_edx;
    /* 0083b256: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0083b259: mov edi, edx */ r_edi = r_edx;
    /* 0083b25b: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0083b261: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0083b264: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b266: mov edi, edx */ r_edi = r_edx;
    /* 0083b268: and edi, 0xff0000 */ {  u32 a = r_edi; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0083b26e: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0083b271: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b273: and edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0083b279: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0083b27c: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b27e: cmp eax, 0x504f4630 */ {  u32 a = r_eax; u32 b = 0x504f4630u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b283: jne 0x83b390 */ if (!fZ) goto L_0083b390;
L_0083b289:; BB(0x0083b289);
    /* 0083b289: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b28c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0083b28e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0083b292: add dword ptr [esi], 4 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b295: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083b299: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0083b29c:; BB(0x0083b29c);
    /* 0083b29c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0083b29e: jbe 0x83b390 */ if ((fC||fZ)) goto L_0083b390;
L_0083b2a4:; BB(0x0083b2a4);
    /* 0083b2a4: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 0083b2a7: mov byte ptr [esp + 8], al */ W8((u32)(r_esp+0x8u), (u8)r_eax);
    /* 0083b2ab: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0083b2b0: add dword ptr [esi], 1 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b2b3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083b2b6: mov ecx, eax */ r_ecx = r_eax;
    /* 0083b2b8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083b2bc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083b2bf: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0083b2c3: and ecx, 0xc0 */ {  u32 a = r_ecx; u32 b = 0xc0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0083b2c9: je 0x83b29c */ if (fZ) goto L_0083b29c;
L_0083b2cb:; BB(0x0083b2cb);
    /* 0083b2cb: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b2ce: je 0x83b362 */ if (fZ) goto L_0083b362;
L_0083b2d4:; BB(0x0083b2d4);
    /* 0083b2d4: cmp ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b2da: jne 0x83b302 */ if (!fZ) goto L_0083b302;
L_0083b2dc:; BB(0x0083b2dc);
    /* 0083b2dc: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 0083b2df: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 0083b2e3: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0083b2e8: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 0083b2ed: add dword ptr [esp + 4], -1 */ { u32 ad = (u32)(r_esp+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b2f2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083b2f5: add dword ptr [esi], 1 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b2f8: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083b2fb: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0083b2fe: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b300: jmp 0x83b365 */ goto L_0083b365;
L_0083b302:; BB(0x0083b302);
    /* 0083b302: cmp ecx, 0xc0 */ {  u32 a = r_ecx; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b308: jne 0x83b29c */ if (!fZ) goto L_0083b29c;
L_0083b30a:; BB(0x0083b30a);
    /* 0083b30a: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 0083b30d: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 0083b311: add dword ptr [esp + 4], -1 */ { u32 ad = (u32)(r_esp+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b316: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083b319: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 0083b31c: mov byte ptr [esp + 0x10], al */ W8((u32)(r_esp+0x10u), (u8)r_eax);
    /* 0083b320: add dword ptr [esp + 4], -1 */ { u32 ad = (u32)(r_esp+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b325: lea edi, [ebx + 1] */ r_edi = (u32)(r_ebx+0x1u);
    /* 0083b328: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 0083b32b: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 0083b32f: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0083b334: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 0083b339: movzx edi, byte ptr [esp + 0x10] */ r_edi = (u32)R8((u32)(r_esp+0x10u));
    /* 0083b33e: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083b341: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083b344: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0083b347: add dword ptr [esp + 4], -1 */ { u32 ad = (u32)(r_esp+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b34c: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0083b34f: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b351: movzx ecx, byte ptr [esp + 0x14] */ r_ecx = (u32)R8((u32)(r_esp+0x14u));
    /* 0083b356: add dword ptr [esi], 3 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0083b359: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0083b35c: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b35e: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b360: jmp 0x83b365 */ goto L_0083b365;
L_0083b362:; BB(0x0083b362);
    /* 0083b362: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0083b365:; BB(0x0083b365);
    /* 0083b365: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083b367: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083b369: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083b36b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083b36f: lea ecx, [eax + ebp] */ r_ecx = (u32)(r_eax+r_ebp);
    /* 0083b372: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0083b374: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b376: jne 0x83b381 */ if (!fZ) goto L_0083b381;
L_0083b378:; BB(0x0083b378);
    /* 0083b378: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083b37c: jmp 0x83b29c */ goto L_0083b29c;
L_0083b381:; BB(0x0083b381);
    /* 0083b381: add eax, dword ptr [esp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083b385: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0083b387: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083b38b: jmp 0x83b29c */ goto L_0083b29c;
L_0083b390:; BB(0x0083b390);
    /* 0083b390: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083b394: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083b397: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083b398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083b399: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083b39a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083b39b: ret 0xc */ FN_RET(0x0083b124); r_esp += 16; return;
L_0083b39e:; BB(0x0083b39e);
    /* 0083b39e: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083b3a2: call dword ptr [0xa21bdc] */ { u32 t = R32((u32)(0xa21bdcu)); r_esp -= 4; W32(r_esp, 0x83b3a8u); call_ind(t); }
    /* 0083b3a8: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0083b3ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083b3af: jmp 0x83b20c */ goto L_0083b20c;
L_0083b3b4:; BB(0x0083b3b4);
    /* 0083b3b4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b3b7: mov dword ptr [edi], 0x4e4a4c49 */ W32((u32)(r_edi), 0x4e4a4c49u);
    /* 0083b3bd: jmp 0x83b200 */ goto L_0083b200;
L_0083b3c2:; BB(0x0083b3c2);
    /* 0083b3c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b3c5: mov dword ptr [edi], 0x4e4a544c */ W32((u32)(r_edi), 0x4e4a544cu);
    /* 0083b3cb: jmp 0x83b200 */ goto L_0083b200;
L_0083b3d0:; BB(0x0083b3d0);
    /* 0083b3d0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b3d3: mov dword ptr [edi], 0x4e4a434d */ W32((u32)(r_edi), 0x4e4a434du);
    /* 0083b3d9: jmp 0x83b200 */ goto L_0083b200;
L_0083b3de:; BB(0x0083b3de);
    /* 0083b3de: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b3e1: mov dword ptr [edi], 0x4e4a494e */ W32((u32)(r_edi), 0x4e4a494eu);
    /* 0083b3e7: jmp 0x83b200 */ goto L_0083b200;
L_0083b3ec:; BB(0x0083b3ec);
    /* 0083b3ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083b3ee: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083b3f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083b3f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083b3f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083b3f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083b3f5: ret 0xc */ FN_RET(0x0083b124); r_esp += 16; return;
}

void f_0083b3f8(void) /* sub_83B3F8 */
{
    FN_ENTER(0x0083b3f8);
    /* 0083b3f8: mov dword ptr [0xa21bdc], ecx */ W32((u32)(0xa21bdcu), r_ecx);
    /* 0083b3fe: mov dword ptr [0xa21bd8], edx */ W32((u32)(0xa21bd8u), r_edx);
    /* 0083b404: ret  */ FN_RET(0x0083b3f8); r_esp += 4; return;
}

void f_0083b408(void) /* sub_83B408 */
{
    FN_ENTER(0x0083b408);
    /* 0083b408: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083b40a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083b40c: ret  */ FN_RET(0x0083b408); r_esp += 4; return;
}

void f_0083b410(void) /* sub_83B410 */
{
    FN_ENTER(0x0083b410);
    /* 0083b410: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083b412: je 0x83b473 */ if (fZ) goto L_0083b473;
L_0083b414:; BB(0x0083b414);
    /* 0083b414: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0083b416: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0083b418: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0083b41b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0083b41e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0083b421: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0083b424: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0083b427: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0083b42a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0083b42d: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0083b430: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0083b433: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0083b436: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0083b439: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0083b43c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0083b43f: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0083b442: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0083b445: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0083b448: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0083b44b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0083b44e: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0083b451: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0083b454: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0083b457: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0083b45a: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0083b45d: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0083b460: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0083b463: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0083b466: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0083b469: mov edx, dword ptr [edx + 0x3c] */ r_edx = R32((u32)(r_edx+0x3cu));
    /* 0083b46c: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0083b46f: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0083b472: ret  */ FN_RET(0x0083b410); r_esp += 4; return;
L_0083b473:; BB(0x0083b473);
    /* 0083b473: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0083b479: jmp 0x83b414 */ goto L_0083b414;
}

void f_0083b47c(void) /* sub_83B47C */
{
    FN_ENTER(0x0083b47c);
    /* 0083b47c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b47d: mov ebx, esp */ r_ebx = r_esp;
    /* 0083b47f: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0083b482: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b483: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083b485: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083b488: mov edi, edx */ r_edi = r_edx;
    /* 0083b48a: mov esi, ecx */ r_esi = r_ecx;
    /* 0083b48c: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0083b48f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083b491: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0083b494: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083b496: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083b498: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b499: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083b49c: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83b4a1u); f_0082dc9c();
    /* 0083b4a1: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0083b4a5: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0083b4a8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083b4aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b4ab: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0083b4af: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083b4b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083b4b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083b4b6: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83b4bbu); f_0082dc9c();
    /* 0083b4bb: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0083b4bf: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0083b4c2: fcom dword ptr [0x98ac20] */ fx_compare(ST(0), R_F32((u32)(0x98ac20u))); 
    /* 0083b4c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083b4ca: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0083b4ce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083b4cf: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0083b4d3: jb 0x83b519 */ if (fC) goto L_0083b519;
L_0083b4d5:; BB(0x0083b4d5);
    /* 0083b4d5: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0083b4d9: fdiv dword ptr [esp + 0x20] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x20u));
    /* 0083b4dd: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0083b4e0: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x83b4e5u); f_0084d15c();
    /* 0083b4e5: fmul qword ptr [0x98ac10] */ ST(0) = ST(0) * R_F64((u32)(0x98ac10u));
    /* 0083b4eb: fdiv qword ptr [0x98ac08] */ ST(0) = ST(0) / R_F64((u32)(0x98ac08u));
    /* 0083b4f1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0083b4f5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0083b4fa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b4ff: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0083b503: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0083b507: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0083b50b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0083b50f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083b513: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083b515: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
L_0083b519:; BB(0x0083b519);
    /* 0083b519: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0083b51d: fcomp dword ptr [0x98ac20] */ fx_compare(ST(0), R_F32((u32)(0x98ac20u))); FPOP();
    /* 0083b523: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083b525: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083b526: jae 0x83b56a */ if (!fC) goto L_0083b56a;
L_0083b528:; BB(0x0083b528);
    /* 0083b528: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0083b52c: fdivr dword ptr [esp + 0x28] */ ST(0) = R_F32((u32)(r_esp+0x28u)) / ST(0);
    /* 0083b530: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0083b533: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x83b538u); f_0084d15c();
    /* 0083b538: fmul qword ptr [0x98ac10] */ ST(0) = ST(0) * R_F64((u32)(0x98ac10u));
    /* 0083b53e: fdiv qword ptr [0x98ac08] */ ST(0) = ST(0) / R_F64((u32)(0x98ac08u));
    /* 0083b544: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0083b548: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0083b54d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b552: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0083b556: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0083b55a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0083b55e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0083b562: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0083b566: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
L_0083b56a:; BB(0x0083b56a);
    /* 0083b56a: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0083b56d: fcom dword ptr [0x98ac20] */ fx_compare(ST(0), R_F32((u32)(0x98ac20u))); 
    /* 0083b573: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083b575: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0083b579: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083b57a: jb 0x83b5b9 */ if (fC) goto L_0083b5b9;
L_0083b57c:; BB(0x0083b57c);
    /* 0083b57c: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0083b57f: fdiv dword ptr [esp + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x28u));
    /* 0083b583: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0083b586: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x83b58bu); f_0084d15c();
    /* 0083b58b: fmul qword ptr [0x98ac10] */ ST(0) = ST(0) * R_F64((u32)(0x98ac10u));
    /* 0083b591: fdiv qword ptr [0x98ac08] */ ST(0) = ST(0) / R_F64((u32)(0x98ac08u));
    /* 0083b597: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0083b59b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0083b5a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b5a5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0083b5a9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0083b5ad: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0083b5b1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0083b5b5: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
L_0083b5b9:; BB(0x0083b5b9);
    /* 0083b5b9: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0083b5bd: fcomp dword ptr [0x98ac20] */ fx_compare(ST(0), R_F32((u32)(0x98ac20u))); FPOP();
    /* 0083b5c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083b5c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083b5c6: jae 0x83b607 */ if (!fC) goto L_0083b607;
L_0083b5c8:; BB(0x0083b5c8);
    /* 0083b5c8: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0083b5cb: fdiv dword ptr [esp + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x28u));
    /* 0083b5cf: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0083b5d2: call 0x84d15c */ r_esp -= 4; W32(r_esp, 0x83b5d7u); f_0084d15c();
    /* 0083b5d7: fmul qword ptr [0x98ac10] */ ST(0) = ST(0) * R_F64((u32)(0x98ac10u));
    /* 0083b5dd: fdiv qword ptr [0x98ac08] */ ST(0) = ST(0) / R_F64((u32)(0x98ac08u));
    /* 0083b5e3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0083b5e7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0083b5ec: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083b5f1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0083b5f5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0083b5f9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0083b5fd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0083b601: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0083b605: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_0083b607:; BB(0x0083b607);
    /* 0083b607: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b609: je 0x83b68f */ if (fZ) goto L_0083b68f;
L_0083b60f:; BB(0x0083b60f);
    /* 0083b60f: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083b612: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083b615: mov ecx, esi */ r_ecx = r_esi;
    /* 0083b617: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 0083b619: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x83b61eu); f_00830b74();
    /* 0083b61e: mov ecx, esi */ r_ecx = r_esi;
    /* 0083b620: mov edx, ebp */ r_edx = r_ebp;
    /* 0083b622: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x83b627u); f_0082d8bc();
    /* 0083b627: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0083b62b: mov ecx, esi */ r_ecx = r_esi;
    /* 0083b62d: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x83b632u); f_0082e9e4();
    /* 0083b632: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b637: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b63c: mov ecx, esi */ r_ecx = r_esi;
    /* 0083b63e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b643: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x83b648u); f_0082fa0c();
    /* 0083b648: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0083b64c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0083b64e: mov ecx, esi */ r_ecx = r_esi;
    /* 0083b650: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x83b655u); f_0082e9e4();
    /* 0083b655: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0083b657: mov ecx, esi */ r_ecx = r_esi;
    /* 0083b659: mov edx, ebp */ r_edx = r_ebp;
    /* 0083b65b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x83b660u); f_0082d8bc();
    /* 0083b660: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0083b662: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0083b665: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0083b668: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083b66b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083b66d: fchs  */ ST(0) = -ST(0);
    /* 0083b66f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083b672: fchs  */ ST(0) = -ST(0);
    /* 0083b674: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0083b678: fchs  */ ST(0) = -ST(0);
    /* 0083b67a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0083b67e: mov ecx, esi */ r_ecx = r_esi;
    /* 0083b680: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x83b685u); f_00830b74();
    /* 0083b685: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083b688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083b689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083b68a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083b68b: mov esp, ebx */ r_esp = r_ebx;
    /* 0083b68d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083b68e: ret  */ FN_RET(0x0083b47c); r_esp += 4; return;
L_0083b68f:; BB(0x0083b68f);
    /* 0083b68f: mov esi, dword ptr [0xaf0328] */ r_esi = R32((u32)(0xaf0328u));
    /* 0083b695: jmp 0x83b60f */ goto L_0083b60f;
}

void f_0083b69c(void) /* sub_83B69C */
{
    FN_ENTER(0x0083b69c);
    /* 0083b69c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b69d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b69e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083b69f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083b6a2: mov eax, dword ptr [0xad97e0] */ r_eax = R32((u32)(0xad97e0u));
    /* 0083b6a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b6a9: jne 0x83b6b7 */ if (!fZ) goto L_0083b6b7;
L_0083b6ab:; BB(0x0083b6ab);
    /* 0083b6ab: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083b6b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083b6b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083b6b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083b6b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083b6b6: ret  */ FN_RET(0x0083b69c); r_esp += 4; return;
L_0083b6b7:; BB(0x0083b6b7);
    /* 0083b6b7: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0083b6bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0083b6be:; BB(0x0083b6be);
    /* 0083b6be: mov edx, dword ptr [eax*8 + 0xad96e0] */ r_edx = R32((u32)(r_eax*8+0xad96e0u));
    /* 0083b6c5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b6c8: je 0x83b7e6 */ if (fZ) goto L_0083b7e6;
L_0083b6ce:; BB(0x0083b6ce);
    /* 0083b6ce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083b6d1: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083b6d4: jb 0x83b6be */ if (fC) goto L_0083b6be;
L_0083b6d6:; BB(0x0083b6d6);
    /* 0083b6d6: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b6d9: je 0x83b7d7 */ if (fZ) goto L_0083b7d7;
L_0083b6df:; BB(0x0083b6df);
    /* 0083b6df: mov edi, dword ptr [0xa21be0] */ r_edi = R32((u32)(0xa21be0u));
    /* 0083b6e5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0083b6e7: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0083b6ea: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0083b6ee: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0083b6f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083b6f4: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0083b6f6: mov ecx, edi */ r_ecx = r_edi;
    /* 0083b6f8: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083b6fa: je 0x83b708 */ if (fZ) goto L_0083b708;
L_0083b6fc:; BB(0x0083b6fc);
    /* 0083b6fc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083b6ff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083b702: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0083b704: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083b706: jne 0x83b6fc */ if (!fZ) goto L_0083b6fc;
L_0083b708:; BB(0x0083b708);
    /* 0083b708: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0083b70b: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0083b70f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b710: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b711: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b712: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b713: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b714: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b715: call 0x8940e7 */ r_esp -= 4; W32(r_esp, 0x83b71au); f_008940e7();
    /* 0083b71a: mov edi, dword ptr [0xa21be4] */ r_edi = R32((u32)(0xa21be4u));
    /* 0083b720: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083b722: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0083b724: mov ecx, edi */ r_ecx = r_edi;
    /* 0083b726: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083b728: je 0x83b736 */ if (fZ) goto L_0083b736;
L_0083b72a:; BB(0x0083b72a);
    /* 0083b72a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083b72d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083b730: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0083b732: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083b734: jne 0x83b72a */ if (!fZ) goto L_0083b72a;
L_0083b736:; BB(0x0083b736);
    /* 0083b736: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0083b73a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083b73c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b73d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b73e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b73f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b741: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b742: call 0x8940e7 */ r_esp -= 4; W32(r_esp, 0x83b747u); f_008940e7();
    /* 0083b747: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0083b74b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b74d: je 0x83b75f */ if (fZ) goto L_0083b75f;
L_0083b74f:; BB(0x0083b74f);
    /* 0083b74f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b750: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b752: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x83b755u); call_ind(t); }
    /* 0083b755: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0083b759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b75a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b75c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x83b75fu); call_ind(t); }
L_0083b75f:; BB(0x0083b75f);
    /* 0083b75f: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0083b762: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b764: je 0x83b7e0 */ if (fZ) goto L_0083b7e0;
L_0083b766:; BB(0x0083b766);
    /* 0083b766: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083b76a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b76c: je 0x83b7b8 */ if (fZ) goto L_0083b7b8;
L_0083b76e:; BB(0x0083b76e);
    /* 0083b76e: mov edi, dword ptr [0xacd528] */ r_edi = R32((u32)(0xacd528u));
    /* 0083b774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b775: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b777: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x83b77au); call_ind(t); }
    /* 0083b77a: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0083b77c: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 0083b780: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083b782: lea edx, [esi + esi + 0xad96e0] */ r_edx = (u32)(r_esi+r_esi+0xad96e0u);
    /* 0083b789: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b78a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b78b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b78c: call dword ptr [ecx + 0x15c] */ { u32 t = R32((u32)(r_ecx+0x15cu)); r_esp -= 4; W32(r_esp, 0x83b792u); call_ind(t); }
    /* 0083b792: mov edi, dword ptr [0xacd528] */ r_edi = R32((u32)(0xacd528u));
    /* 0083b798: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083b79c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b79d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b79f: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x83b7a2u); call_ind(t); }
    /* 0083b7a2: lea esi, [esi + esi + 0xad96e4] */ r_esi = (u32)(r_esi+r_esi+0xad96e4u);
    /* 0083b7a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b7aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b7ab: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0083b7ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083b7ae: call dword ptr [edx + 0x15c] */ { u32 t = R32((u32)(r_edx+0x15cu)); r_esp -= 4; W32(r_esp, 0x83b7b4u); call_ind(t); }
    /* 0083b7b4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
L_0083b7b8:; BB(0x0083b7b8);
    /* 0083b7b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b7ba: je 0x83b7ca */ if (fZ) goto L_0083b7ca;
L_0083b7bc:; BB(0x0083b7bc);
    /* 0083b7bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b7bd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0083b7bf: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x83b7c2u); call_ind(t); }
    /* 0083b7c2: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
L_0083b7ca:; BB(0x0083b7ca);
    /* 0083b7ca: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0083b7cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b7cf: je 0x83b7d7 */ if (fZ) goto L_0083b7d7;
L_0083b7d1:; BB(0x0083b7d1);
    /* 0083b7d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b7d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b7d4: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x83b7d7u); call_ind(t); }
L_0083b7d7:; BB(0x0083b7d7);
    /* 0083b7d7: mov eax, ebp */ r_eax = r_ebp;
    /* 0083b7d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083b7dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083b7dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083b7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083b7df: ret  */ FN_RET(0x0083b69c); r_esp += 4; return;
L_0083b7e0:; BB(0x0083b7e0);
    /* 0083b7e0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083b7e4: jmp 0x83b7b8 */ goto L_0083b7b8;
L_0083b7e6:; BB(0x0083b7e6);
    /* 0083b7e6: mov ebp, eax */ r_ebp = r_eax;
    /* 0083b7e8: jmp 0x83b6d6 */ goto L_0083b6d6;
}

void f_0083b7f0(void) /* sub_83B7F0 */
{
    FN_ENTER(0x0083b7f0);
    /* 0083b7f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b7f1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083b7f4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083b7f6: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b7f9: je 0x83b850 */ if (fZ) goto L_0083b850;
L_0083b7fb:; BB(0x0083b7fb);
    /* 0083b7fb: mov eax, dword ptr [ebx*8 + 0xad96e0] */ r_eax = R32((u32)(r_ebx*8+0xad96e0u));
    /* 0083b802: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083b805: mov eax, dword ptr [ebx*8 + 0xad96e4] */ r_eax = R32((u32)(r_ebx*8+0xad96e4u));
    /* 0083b80c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b80f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0083b813: je 0x83b825 */ if (fZ) goto L_0083b825;
L_0083b815:; BB(0x0083b815);
    /* 0083b815: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083b81b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b81c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b81d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083b81f: call dword ptr [ecx + 0x168] */ { u32 t = R32((u32)(r_ecx+0x168u)); r_esp -= 4; W32(r_esp, 0x83b825u); call_ind(t); }
L_0083b825:; BB(0x0083b825);
    /* 0083b825: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0083b828: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083b82b: je 0x83b83d */ if (fZ) goto L_0083b83d;
L_0083b82d:; BB(0x0083b82d);
    /* 0083b82d: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083b833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b834: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b835: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083b837: call dword ptr [ecx + 0x168] */ { u32 t = R32((u32)(r_ecx+0x168u)); r_esp -= 4; W32(r_esp, 0x83b83du); call_ind(t); }
L_0083b83d:; BB(0x0083b83d);
    /* 0083b83d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083b842: mov dword ptr [ebx*8 + 0xad96e0], eax */ W32((u32)(r_ebx*8+0xad96e0u), r_eax);
    /* 0083b849: mov dword ptr [ebx*8 + 0xad96e4], eax */ W32((u32)(r_ebx*8+0xad96e4u), r_eax);
L_0083b850:; BB(0x0083b850);
    /* 0083b850: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083b853: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083b854: ret  */ FN_RET(0x0083b7f0); r_esp += 4; return;
}

void f_0083b858(void) /* sub_83B858 */
{
    FN_ENTER(0x0083b858);
    /* 0083b858: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083b85b: je 0x83b87f */ if (fZ) goto L_0083b87f;
L_0083b85d:; BB(0x0083b85d);
    /* 0083b85d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083b85f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083b861: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083b863: mov eax, dword ptr [ecx + edx*4 + 0xad96dc] */ r_eax = R32((u32)(r_ecx+r_edx*4+0xad96dcu));
    /* 0083b86a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083b86d: je 0x83b87f */ if (fZ) goto L_0083b87f;
L_0083b86f:; BB(0x0083b86f);
    /* 0083b86f: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083b875: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b876: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b877: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083b879: call dword ptr [ecx + 0x160] */ { u32 t = R32((u32)(r_ecx+0x160u)); r_esp -= 4; W32(r_esp, 0x83b87fu); call_ind(t); }
L_0083b87f:; BB(0x0083b87f);
    /* 0083b87f: ret  */ FN_RET(0x0083b858); r_esp += 4; return;
}

void f_0083b880(void) /* sub_83B880 */
{
    FN_ENTER(0x0083b880);
    /* 0083b880: mov eax, dword ptr [0xad97e0] */ r_eax = R32((u32)(0xad97e0u));
    /* 0083b885: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083b887: je 0x83b899 */ if (fZ) goto L_0083b899;
L_0083b889:; BB(0x0083b889);
    /* 0083b889: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083b88e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083b890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b891: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083b893: call dword ptr [edx + 0x160] */ { u32 t = R32((u32)(r_edx+0x160u)); r_esp -= 4; W32(r_esp, 0x83b899u); call_ind(t); }
L_0083b899:; BB(0x0083b899);
    /* 0083b899: ret  */ FN_RET(0x0083b880); r_esp += 4; return;
}

void f_0083b89c(void) /* sub_83B89C */
{
    FN_ENTER(0x0083b89c);
    /* 0083b89c: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083b8a2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083b8a8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083b8ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083b8ac: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083b8ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083b8af: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x83b8b2u); call_ind(t); }
    /* 0083b8b2: movzx eax, word ptr [esp + 0xcc] */ r_eax = (u32)R16((u32)(r_esp+0xccu));
    /* 0083b8ba: cmp eax, 0x101 */ {  u32 a = r_eax; u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083b8bf: jb 0x83b8cd */ if (fC) goto L_0083b8cd;
L_0083b8c1:; BB(0x0083b8c1);
    /* 0083b8c1: mov dword ptr [0xad97e0], 1 */ W32((u32)(0xad97e0u), 0x1u);
    /* 0083b8cb: jmp 0x83b8d7 */ goto L_0083b8d7;
L_0083b8cd:; BB(0x0083b8cd);
    /* 0083b8cd: mov dword ptr [0xad97e0], 0 */ W32((u32)(0xad97e0u), 0x0u);
L_0083b8d7:; BB(0x0083b8d7);
    /* 0083b8d7: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0083b8dc: mov dword ptr [0xad96e0], eax */ W32((u32)(0xad96e0u), r_eax);
    /* 0083b8e1: mov dword ptr [0xad96e4], eax */ W32((u32)(0xad96e4u), r_eax);
    /* 0083b8e6: mov dword ptr [0xad96e8], eax */ W32((u32)(0xad96e8u), r_eax);
    /* 0083b8eb: mov dword ptr [0xad96ec], eax */ W32((u32)(0xad96ecu), r_eax);
    /* 0083b8f0: mov dword ptr [0xad96f0], eax */ W32((u32)(0xad96f0u), r_eax);
    /* 0083b8f5: mov dword ptr [0xad96f4], eax */ W32((u32)(0xad96f4u), r_eax);
    /* 0083b8fa: mov dword ptr [0xad96f8], eax */ W32((u32)(0xad96f8u), r_eax);
    /* 0083b8ff: mov dword ptr [0xad96fc], eax */ W32((u32)(0xad96fcu), r_eax);
    /* 0083b904: mov dword ptr [0xad9700], eax */ W32((u32)(0xad9700u), r_eax);
    /* 0083b909: mov dword ptr [0xad9704], eax */ W32((u32)(0xad9704u), r_eax);
    /* 0083b90e: mov dword ptr [0xad9708], eax */ W32((u32)(0xad9708u), r_eax);
    /* 0083b913: mov dword ptr [0xad970c], eax */ W32((u32)(0xad970cu), r_eax);
    /* 0083b918: mov dword ptr [0xad9710], eax */ W32((u32)(0xad9710u), r_eax);
    /* 0083b91d: mov dword ptr [0xad9714], eax */ W32((u32)(0xad9714u), r_eax);
    /* 0083b922: mov dword ptr [0xad9718], eax */ W32((u32)(0xad9718u), r_eax);
    /* 0083b927: mov dword ptr [0xad971c], eax */ W32((u32)(0xad971cu), r_eax);
    /* 0083b92c: mov dword ptr [0xad9720], eax */ W32((u32)(0xad9720u), r_eax);
    /* 0083b931: mov dword ptr [0xad9724], eax */ W32((u32)(0xad9724u), r_eax);
    /* 0083b936: mov dword ptr [0xad9728], eax */ W32((u32)(0xad9728u), r_eax);
    /* 0083b93b: mov dword ptr [0xad972c], eax */ W32((u32)(0xad972cu), r_eax);
    /* 0083b940: mov dword ptr [0xad9730], eax */ W32((u32)(0xad9730u), r_eax);
    /* 0083b945: mov dword ptr [0xad9734], eax */ W32((u32)(0xad9734u), r_eax);
    /* 0083b94a: mov dword ptr [0xad9738], eax */ W32((u32)(0xad9738u), r_eax);
    /* 0083b94f: mov dword ptr [0xad973c], eax */ W32((u32)(0xad973cu), r_eax);
    /* 0083b954: mov dword ptr [0xad9740], eax */ W32((u32)(0xad9740u), r_eax);
    /* 0083b959: mov dword ptr [0xad9744], eax */ W32((u32)(0xad9744u), r_eax);
    /* 0083b95e: mov dword ptr [0xad9748], eax */ W32((u32)(0xad9748u), r_eax);
    /* 0083b963: mov dword ptr [0xad974c], eax */ W32((u32)(0xad974cu), r_eax);
    /* 0083b968: mov dword ptr [0xad9750], eax */ W32((u32)(0xad9750u), r_eax);
    /* 0083b96d: mov dword ptr [0xad9754], eax */ W32((u32)(0xad9754u), r_eax);
    /* 0083b972: mov dword ptr [0xad9758], eax */ W32((u32)(0xad9758u), r_eax);
    /* 0083b977: mov dword ptr [0xad975c], eax */ W32((u32)(0xad975cu), r_eax);
    /* 0083b97c: mov dword ptr [0xad9760], eax */ W32((u32)(0xad9760u), r_eax);
    /* 0083b981: mov dword ptr [0xad9764], eax */ W32((u32)(0xad9764u), r_eax);
    /* 0083b986: mov dword ptr [0xad9768], eax */ W32((u32)(0xad9768u), r_eax);
    /* 0083b98b: mov dword ptr [0xad976c], eax */ W32((u32)(0xad976cu), r_eax);
    /* 0083b990: mov dword ptr [0xad9770], eax */ W32((u32)(0xad9770u), r_eax);
    /* 0083b995: mov dword ptr [0xad9774], eax */ W32((u32)(0xad9774u), r_eax);
    /* 0083b99a: mov dword ptr [0xad9778], eax */ W32((u32)(0xad9778u), r_eax);
    /* 0083b99f: mov dword ptr [0xad977c], eax */ W32((u32)(0xad977cu), r_eax);
    /* 0083b9a4: mov dword ptr [0xad9780], eax */ W32((u32)(0xad9780u), r_eax);
    /* 0083b9a9: mov dword ptr [0xad9784], eax */ W32((u32)(0xad9784u), r_eax);
    /* 0083b9ae: mov dword ptr [0xad9788], eax */ W32((u32)(0xad9788u), r_eax);
    /* 0083b9b3: mov dword ptr [0xad978c], eax */ W32((u32)(0xad978cu), r_eax);
    /* 0083b9b8: mov dword ptr [0xad9790], eax */ W32((u32)(0xad9790u), r_eax);
    /* 0083b9bd: mov dword ptr [0xad9794], eax */ W32((u32)(0xad9794u), r_eax);
    /* 0083b9c2: mov dword ptr [0xad9798], eax */ W32((u32)(0xad9798u), r_eax);
    /* 0083b9c7: mov dword ptr [0xad979c], eax */ W32((u32)(0xad979cu), r_eax);
    /* 0083b9cc: mov dword ptr [0xad97a0], eax */ W32((u32)(0xad97a0u), r_eax);
    /* 0083b9d1: mov dword ptr [0xad97a4], eax */ W32((u32)(0xad97a4u), r_eax);
    /* 0083b9d6: mov dword ptr [0xad97a8], eax */ W32((u32)(0xad97a8u), r_eax);
    /* 0083b9db: mov dword ptr [0xad97ac], eax */ W32((u32)(0xad97acu), r_eax);
    /* 0083b9e0: mov dword ptr [0xad97b0], eax */ W32((u32)(0xad97b0u), r_eax);
    /* 0083b9e5: mov dword ptr [0xad97b4], eax */ W32((u32)(0xad97b4u), r_eax);
    /* 0083b9ea: mov dword ptr [0xad97b8], eax */ W32((u32)(0xad97b8u), r_eax);
    /* 0083b9ef: mov dword ptr [0xad97bc], eax */ W32((u32)(0xad97bcu), r_eax);
    /* 0083b9f4: mov dword ptr [0xad97c0], eax */ W32((u32)(0xad97c0u), r_eax);
    /* 0083b9f9: mov dword ptr [0xad97c4], eax */ W32((u32)(0xad97c4u), r_eax);
    /* 0083b9fe: mov dword ptr [0xad97c8], eax */ W32((u32)(0xad97c8u), r_eax);
    /* 0083ba03: mov dword ptr [0xad97cc], eax */ W32((u32)(0xad97ccu), r_eax);
    /* 0083ba08: mov dword ptr [0xad97d0], eax */ W32((u32)(0xad97d0u), r_eax);
    /* 0083ba0d: mov dword ptr [0xad97d4], eax */ W32((u32)(0xad97d4u), r_eax);
    /* 0083ba12: mov dword ptr [0xad97d8], eax */ W32((u32)(0xad97d8u), r_eax);
    /* 0083ba17: mov dword ptr [0xad97dc], eax */ W32((u32)(0xad97dcu), r_eax);
    /* 0083ba1c: add esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083ba22: ret  */ FN_RET(0x0083b89c); r_esp += 4; return;
}

void f_0083ba24(void) /* sub_83BA24 */
{
    FN_ENTER(0x0083ba24);
    /* 0083ba24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083ba25: mov ebx, esp */ r_ebx = r_esp;
    /* 0083ba27: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0083ba2a: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083ba2d: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0083ba30: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0083ba35: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0083ba37: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0083ba3a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0083ba3d: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0083ba41: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0083ba44: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0083ba48: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0083ba4b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0083ba4f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0083ba52: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0083ba56: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0083ba59: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0083ba5d: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0083ba60: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0083ba64: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0083ba67: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0083ba6b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0083ba6e: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0083ba72: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0083ba75: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0083ba79: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0083ba7c: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0083ba80: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0083ba83: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0083ba87: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0083ba8a: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0083ba8e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0083ba91: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 0083ba95: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0083ba98: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0083ba9b: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0083ba9f: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0083baa3: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 0083baa8: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083baaa: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083baad: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083bab0: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 0083bab4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bab6: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0083bab9: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0083babd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083babf: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0083bac2: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 0083bac6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bac8: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0083baca: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083bacc: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0083bad0: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083bad3: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0083bad7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bad9: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0083badc: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 0083bae0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bae2: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0083bae5: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 0083bae9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083baeb: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0083baee: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083baf0: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0083baf4: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083baf7: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0083bafb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bafd: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0083bb00: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 0083bb04: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb06: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0083bb09: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0083bb0d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb0f: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0083bb12: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083bb14: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0083bb18: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083bb1b: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 0083bb1f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb21: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0083bb24: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0083bb28: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb2a: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0083bb2d: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 0083bb31: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb33: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0083bb36: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0083bb39: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083bb3c: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0083bb3f: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 0083bb43: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb45: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0083bb48: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0083bb4c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb4e: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0083bb51: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 0083bb55: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb57: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 0083bb5a: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0083bb5d: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0083bb61: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0083bb64: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0083bb68: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb6a: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0083bb6d: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 0083bb71: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb73: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0083bb76: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 0083bb7a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb7c: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 0083bb7f: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0083bb82: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0083bb86: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0083bb89: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0083bb8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb8f: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0083bb92: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 0083bb96: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bb98: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0083bb9b: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0083bb9f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bba1: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 0083bba4: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0083bba7: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0083bbab: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0083bbae: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 0083bbb2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bbb4: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 0083bbb7: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0083bbbb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bbbd: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0083bbc0: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 0083bbc4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bbc6: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0083bbc9: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0083bbcc: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083bbcf: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0083bbd2: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 0083bbd6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bbd8: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 0083bbdb: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0083bbdf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bbe1: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 0083bbe4: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 0083bbe8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bbea: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0083bbed: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0083bbf0: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0083bbf4: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0083bbf7: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0083bbfb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bbfd: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 0083bc00: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 0083bc04: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc06: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 0083bc09: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 0083bc0d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc0f: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0083bc12: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0083bc15: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0083bc19: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0083bc1c: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0083bc20: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc22: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 0083bc25: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 0083bc29: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc2b: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 0083bc2e: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0083bc32: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc34: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 0083bc37: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0083bc3a: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0083bc3e: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0083bc41: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 0083bc45: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc47: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 0083bc4a: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0083bc4e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc50: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 0083bc53: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 0083bc57: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc59: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 0083bc5c: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 0083bc5f: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083bc62: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 0083bc65: fmul dword ptr [esp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x10u));
    /* 0083bc69: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc6b: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0083bc6e: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0083bc72: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc74: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0083bc77: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 0083bc7b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc7d: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 0083bc80: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 0083bc83: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 0083bc87: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 0083bc8a: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 0083bc8e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc90: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0083bc93: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 0083bc97: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bc99: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0083bc9c: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 0083bca0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bca2: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 0083bca5: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 0083bca8: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 0083bcac: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 0083bcaf: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0083bcb3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bcb5: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0083bcb8: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 0083bcbc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bcbe: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0083bcc1: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0083bcc5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bcc7: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0083bcca: fld dword ptr [edx + 0x30] */ FPUSH(R_F32((u32)(r_edx+0x30u)));
    /* 0083bccd: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 0083bcd1: fld dword ptr [edx + 0x34] */ FPUSH(R_F32((u32)(r_edx+0x34u)));
    /* 0083bcd4: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 0083bcd8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bcda: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0083bcdd: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 0083bce1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bce3: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 0083bce6: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 0083bcea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083bcec: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 0083bcef: mov esp, ebx */ r_esp = r_ebx;
    /* 0083bcf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083bcf2: ret  */ FN_RET(0x0083ba24); r_esp += 4; return;
}

void f_0083bd00(void) /* sub_83BD00 */
{
    FN_ENTER(0x0083bd00);
    /* 0083bd00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bd01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083bd03: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083bd07: mov ecx, edx */ r_ecx = r_edx;
    /* 0083bd09: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x83bd0eu); f_008304c8();
    /* 0083bd0e: call 0x831df4 */ r_esp -= 4; W32(r_esp, 0x83bd13u); f_00831df4();
    /* 0083bd13: call 0x831e2c */ r_esp -= 4; W32(r_esp, 0x83bd18u); f_00831e2c();
    /* 0083bd18: call 0x8362e4 */ r_esp -= 4; W32(r_esp, 0x83bd1du); f_008362e4();
    /* 0083bd1d: mov eax, dword ptr [0xad93e0] */ r_eax = R32((u32)(0xad93e0u));
    /* 0083bd22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bd24: je 0x83bd74 */ if (fZ) goto L_0083bd74;
L_0083bd26:; BB(0x0083bd26);
    /* 0083bd26: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x83bd2bu); f_0082d7b0();
    /* 0083bd2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083bd2d: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x83bd32u); f_008305ec();
    /* 0083bd32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bd33: call dword ptr [0xad93e0] */ { u32 t = R32((u32)(0xad93e0u)); r_esp -= 4; W32(r_esp, 0x83bd39u); call_ind(t); }
    /* 0083bd39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083bd3a: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0083bd3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bd3f: je 0x83bd4e */ if (fZ) goto L_0083bd4e;
L_0083bd41:; BB(0x0083bd41);
    /* 0083bd41: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083bd43: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083bd45: jne 0x83bd4e */ if (!fZ) goto L_0083bd4e;
L_0083bd47:; BB(0x0083bd47);
    /* 0083bd47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bd48: call 0x832208 */ r_esp -= 4; W32(r_esp, 0x83bd4du); f_00832208();
    /* 0083bd4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083bd4e:; BB(0x0083bd4e);
    /* 0083bd4e: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0083bd51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bd53: je 0x83bd5f */ if (fZ) goto L_0083bd5f;
L_0083bd55:; BB(0x0083bd55);
    /* 0083bd55: mov edx, 0x832208 */ r_edx = 0x832208u;
    /* 0083bd5a: call 0x83bdf4 */ r_esp -= 4; W32(r_esp, 0x83bd5fu); f_0083bdf4();
L_0083bd5f:; BB(0x0083bd5f);
    /* 0083bd5f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83bd64u); f_0082da80();
    /* 0083bd64: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0083bd67: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bd69: jne 0x83bd26 */ if (!fZ) goto L_0083bd26;
L_0083bd6b:; BB(0x0083bd6b);
    /* 0083bd6b: call 0x8321a8 */ r_esp -= 4; W32(r_esp, 0x83bd70u); f_008321a8();
    /* 0083bd70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083bd71: ret 4 */ FN_RET(0x0083bd00); r_esp += 8; return;
L_0083bd74:; BB(0x0083bd74);
    /* 0083bd74: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x83bd79u); f_0082d7b0();
    /* 0083bd79: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083bd7b: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x83bd80u); f_008305ec();
    /* 0083bd80: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0083bd83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bd85: je 0x83bd94 */ if (fZ) goto L_0083bd94;
L_0083bd87:; BB(0x0083bd87);
    /* 0083bd87: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083bd89: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083bd8b: jne 0x83bd94 */ if (!fZ) goto L_0083bd94;
L_0083bd8d:; BB(0x0083bd8d);
    /* 0083bd8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bd8e: call 0x832208 */ r_esp -= 4; W32(r_esp, 0x83bd93u); f_00832208();
    /* 0083bd93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083bd94:; BB(0x0083bd94);
    /* 0083bd94: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0083bd97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bd99: je 0x83bda5 */ if (fZ) goto L_0083bda5;
L_0083bd9b:; BB(0x0083bd9b);
    /* 0083bd9b: mov edx, 0x832208 */ r_edx = 0x832208u;
    /* 0083bda0: call 0x83bdb4 */ r_esp -= 4; W32(r_esp, 0x83bda5u); f_0083bdb4();
L_0083bda5:; BB(0x0083bda5);
    /* 0083bda5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83bdaau); f_0082da80();
    /* 0083bdaa: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0083bdad: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bdaf: jne 0x83bd74 */ if (!fZ) goto L_0083bd74;
L_0083bdb1:; BB(0x0083bdb1);
    /* 0083bdb1: jmp 0x83bd6b */ goto L_0083bd6b;
}

void f_0083bdb4(void) /* sub_83BDB4 */
{
    FN_ENTER(0x0083bdb4);
    /* 0083bdb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083bdb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bdb6: mov esi, edx */ r_esi = r_edx;
    /* 0083bdb8: mov ebx, ecx */ r_ebx = r_ecx;
L_0083bdba:; BB(0x0083bdba);
    /* 0083bdba: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x83bdbfu); f_0082d7b0();
    /* 0083bdbf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083bdc1: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x83bdc6u); f_008305ec();
    /* 0083bdc6: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0083bdc9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bdcb: je 0x83bdd7 */ if (fZ) goto L_0083bdd7;
L_0083bdcd:; BB(0x0083bdcd);
    /* 0083bdcd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083bdcf: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083bdd1: jne 0x83bdd7 */ if (!fZ) goto L_0083bdd7;
L_0083bdd3:; BB(0x0083bdd3);
    /* 0083bdd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bdd4: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x83bdd6u); call_ind(t); }
    /* 0083bdd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083bdd7:; BB(0x0083bdd7);
    /* 0083bdd7: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0083bdda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bddc: je 0x83bde5 */ if (fZ) goto L_0083bde5;
L_0083bdde:; BB(0x0083bdde);
    /* 0083bdde: mov edx, esi */ r_edx = r_esi;
    /* 0083bde0: call 0x83bdb4 */ r_esp -= 4; W32(r_esp, 0x83bde5u); f_0083bdb4();
L_0083bde5:; BB(0x0083bde5);
    /* 0083bde5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83bdeau); f_0082da80();
    /* 0083bdea: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0083bded: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083bdef: jne 0x83bdba */ if (!fZ) goto L_0083bdba;
L_0083bdf1:; BB(0x0083bdf1);
    /* 0083bdf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083bdf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083bdf3: ret  */ FN_RET(0x0083bdb4); r_esp += 4; return;
}

void f_0083bdf4(void) /* sub_83BDF4 */
{
    FN_ENTER(0x0083bdf4);
    /* 0083bdf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083bdf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bdf6: mov esi, edx */ r_esi = r_edx;
    /* 0083bdf8: mov ebx, ecx */ r_ebx = r_ecx;
L_0083bdfa:; BB(0x0083bdfa);
    /* 0083bdfa: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x83bdffu); f_0082d7b0();
    /* 0083bdff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083be01: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x83be06u); f_008305ec();
    /* 0083be06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083be07: call dword ptr [0xad93e0] */ { u32 t = R32((u32)(0xad93e0u)); r_esp -= 4; W32(r_esp, 0x83be0du); call_ind(t); }
    /* 0083be0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083be0e: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0083be11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083be13: je 0x83be1f */ if (fZ) goto L_0083be1f;
L_0083be15:; BB(0x0083be15);
    /* 0083be15: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083be17: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083be19: jne 0x83be1f */ if (!fZ) goto L_0083be1f;
L_0083be1b:; BB(0x0083be1b);
    /* 0083be1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083be1c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x83be1eu); call_ind(t); }
    /* 0083be1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083be1f:; BB(0x0083be1f);
    /* 0083be1f: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0083be22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083be24: je 0x83be2d */ if (fZ) goto L_0083be2d;
L_0083be26:; BB(0x0083be26);
    /* 0083be26: mov edx, esi */ r_edx = r_esi;
    /* 0083be28: call 0x83bdf4 */ r_esp -= 4; W32(r_esp, 0x83be2du); f_0083bdf4();
L_0083be2d:; BB(0x0083be2d);
    /* 0083be2d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83be32u); f_0082da80();
    /* 0083be32: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0083be35: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083be37: jne 0x83bdfa */ if (!fZ) goto L_0083bdfa;
L_0083be39:; BB(0x0083be39);
    /* 0083be39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083be3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083be3b: ret  */ FN_RET(0x0083bdf4); r_esp += 4; return;
}

void f_0083be48(void) /* sub_83BE48 */
{
    FN_ENTER(0x0083be48);
    /* 0083be48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083be49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083be4b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083be4f: mov ecx, edx */ r_ecx = r_edx;
    /* 0083be51: call 0x830328 */ r_esp -= 4; W32(r_esp, 0x83be56u); f_00830328();
    /* 0083be56: call 0x831e2c */ r_esp -= 4; W32(r_esp, 0x83be5bu); f_00831e2c();
    /* 0083be5b: call 0x831df4 */ r_esp -= 4; W32(r_esp, 0x83be60u); f_00831df4();
    /* 0083be60: call 0x8362e4 */ r_esp -= 4; W32(r_esp, 0x83be65u); f_008362e4();
    /* 0083be65: mov eax, dword ptr [0xad93e0] */ r_eax = R32((u32)(0xad93e0u));
    /* 0083be6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083be6c: je 0x83bebc */ if (fZ) goto L_0083bebc;
L_0083be6e:; BB(0x0083be6e);
    /* 0083be6e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x83be73u); f_0082d7b0();
    /* 0083be73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083be75: call 0x82fcbc */ r_esp -= 4; W32(r_esp, 0x83be7au); f_0082fcbc();
    /* 0083be7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083be7b: call dword ptr [0xad93e0] */ { u32 t = R32((u32)(0xad93e0u)); r_esp -= 4; W32(r_esp, 0x83be81u); call_ind(t); }
    /* 0083be81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083be82: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0083be85: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083be87: je 0x83be96 */ if (fZ) goto L_0083be96;
L_0083be89:; BB(0x0083be89);
    /* 0083be89: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083be8b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083be8d: jne 0x83be96 */ if (!fZ) goto L_0083be96;
L_0083be8f:; BB(0x0083be8f);
    /* 0083be8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083be90: call 0x832208 */ r_esp -= 4; W32(r_esp, 0x83be95u); f_00832208();
    /* 0083be95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083be96:; BB(0x0083be96);
    /* 0083be96: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0083be99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083be9b: je 0x83bea7 */ if (fZ) goto L_0083bea7;
L_0083be9d:; BB(0x0083be9d);
    /* 0083be9d: mov edx, 0x832208 */ r_edx = 0x832208u;
    /* 0083bea2: call 0x83bf3c */ r_esp -= 4; W32(r_esp, 0x83bea7u); f_0083bf3c();
L_0083bea7:; BB(0x0083bea7);
    /* 0083bea7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83beacu); f_0082da80();
    /* 0083beac: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0083beaf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083beb1: jne 0x83be6e */ if (!fZ) goto L_0083be6e;
L_0083beb3:; BB(0x0083beb3);
    /* 0083beb3: call 0x8321a8 */ r_esp -= 4; W32(r_esp, 0x83beb8u); f_008321a8();
    /* 0083beb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083beb9: ret 4 */ FN_RET(0x0083be48); r_esp += 8; return;
L_0083bebc:; BB(0x0083bebc);
    /* 0083bebc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x83bec1u); f_0082d7b0();
    /* 0083bec1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083bec3: call 0x82fcbc */ r_esp -= 4; W32(r_esp, 0x83bec8u); f_0082fcbc();
    /* 0083bec8: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0083becb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083becd: je 0x83bedc */ if (fZ) goto L_0083bedc;
L_0083becf:; BB(0x0083becf);
    /* 0083becf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083bed1: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083bed3: jne 0x83bedc */ if (!fZ) goto L_0083bedc;
L_0083bed5:; BB(0x0083bed5);
    /* 0083bed5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bed6: call 0x832208 */ r_esp -= 4; W32(r_esp, 0x83bedbu); f_00832208();
    /* 0083bedb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083bedc:; BB(0x0083bedc);
    /* 0083bedc: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0083bedf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bee1: je 0x83beed */ if (fZ) goto L_0083beed;
L_0083bee3:; BB(0x0083bee3);
    /* 0083bee3: mov edx, 0x832208 */ r_edx = 0x832208u;
    /* 0083bee8: call 0x83befc */ r_esp -= 4; W32(r_esp, 0x83beedu); f_0083befc();
L_0083beed:; BB(0x0083beed);
    /* 0083beed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83bef2u); f_0082da80();
    /* 0083bef2: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0083bef5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bef7: jne 0x83bebc */ if (!fZ) goto L_0083bebc;
L_0083bef9:; BB(0x0083bef9);
    /* 0083bef9: jmp 0x83beb3 */ goto L_0083beb3;
}

void f_0083befc(void) /* sub_83BEFC */
{
    FN_ENTER(0x0083befc);
    /* 0083befc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083befd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083befe: mov esi, edx */ r_esi = r_edx;
    /* 0083bf00: mov ebx, ecx */ r_ebx = r_ecx;
L_0083bf02:; BB(0x0083bf02);
    /* 0083bf02: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x83bf07u); f_0082d7b0();
    /* 0083bf07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083bf09: call 0x82fcbc */ r_esp -= 4; W32(r_esp, 0x83bf0eu); f_0082fcbc();
    /* 0083bf0e: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0083bf11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bf13: je 0x83bf1f */ if (fZ) goto L_0083bf1f;
L_0083bf15:; BB(0x0083bf15);
    /* 0083bf15: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083bf17: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083bf19: jne 0x83bf1f */ if (!fZ) goto L_0083bf1f;
L_0083bf1b:; BB(0x0083bf1b);
    /* 0083bf1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bf1c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x83bf1eu); call_ind(t); }
    /* 0083bf1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083bf1f:; BB(0x0083bf1f);
    /* 0083bf1f: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0083bf22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bf24: je 0x83bf2d */ if (fZ) goto L_0083bf2d;
L_0083bf26:; BB(0x0083bf26);
    /* 0083bf26: mov edx, esi */ r_edx = r_esi;
    /* 0083bf28: call 0x83befc */ r_esp -= 4; W32(r_esp, 0x83bf2du); f_0083befc();
L_0083bf2d:; BB(0x0083bf2d);
    /* 0083bf2d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83bf32u); f_0082da80();
    /* 0083bf32: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0083bf35: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083bf37: jne 0x83bf02 */ if (!fZ) goto L_0083bf02;
L_0083bf39:; BB(0x0083bf39);
    /* 0083bf39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083bf3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083bf3b: ret  */ FN_RET(0x0083befc); r_esp += 4; return;
}

void f_0083bf3c(void) /* sub_83BF3C */
{
    FN_ENTER(0x0083bf3c);
    /* 0083bf3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083bf3d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bf3e: mov esi, edx */ r_esi = r_edx;
    /* 0083bf40: mov ebx, ecx */ r_ebx = r_ecx;
L_0083bf42:; BB(0x0083bf42);
    /* 0083bf42: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x83bf47u); f_0082d7b0();
    /* 0083bf47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0083bf49: call 0x82fcbc */ r_esp -= 4; W32(r_esp, 0x83bf4eu); f_0082fcbc();
    /* 0083bf4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bf4f: call dword ptr [0xad93e0] */ { u32 t = R32((u32)(0xad93e0u)); r_esp -= 4; W32(r_esp, 0x83bf55u); call_ind(t); }
    /* 0083bf55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083bf56: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0083bf59: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bf5b: je 0x83bf67 */ if (fZ) goto L_0083bf67;
L_0083bf5d:; BB(0x0083bf5d);
    /* 0083bf5d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0083bf5f: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083bf61: jne 0x83bf67 */ if (!fZ) goto L_0083bf67;
L_0083bf63:; BB(0x0083bf63);
    /* 0083bf63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083bf64: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x83bf66u); call_ind(t); }
    /* 0083bf66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083bf67:; BB(0x0083bf67);
    /* 0083bf67: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0083bf6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bf6c: je 0x83bf75 */ if (fZ) goto L_0083bf75;
L_0083bf6e:; BB(0x0083bf6e);
    /* 0083bf6e: mov edx, esi */ r_edx = r_esi;
    /* 0083bf70: call 0x83bf3c */ r_esp -= 4; W32(r_esp, 0x83bf75u); f_0083bf3c();
L_0083bf75:; BB(0x0083bf75);
    /* 0083bf75: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83bf7au); f_0082da80();
    /* 0083bf7a: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0083bf7d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083bf7f: jne 0x83bf42 */ if (!fZ) goto L_0083bf42;
L_0083bf81:; BB(0x0083bf81);
    /* 0083bf81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083bf82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083bf83: ret  */ FN_RET(0x0083bf3c); r_esp += 4; return;
}

void f_0083bf84(void) /* sub_83BF84 */
{
    FN_ENTER(0x0083bf84);
    /* 0083bf84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083bf85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083bf86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083bf87: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083bf8d: mov ebp, edx */ r_ebp = r_edx;
    /* 0083bf8f: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083bf92: jl 0x83bf9e */ if ((fS!=fO)) goto L_0083bf9e;
L_0083bf94:; BB(0x0083bf94);
    /* 0083bf94: add esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083bf9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083bf9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083bf9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083bf9d: ret  */ FN_RET(0x0083bf84); r_esp += 4; return;
L_0083bf9e:; BB(0x0083bf9e);
    /* 0083bf9e: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0083bfa1: mov edi, 0xaf05e0 */ r_edi = 0xaf05e0u;
L_0083bfa6:; BB(0x0083bfa6);
    /* 0083bfa6: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0083bfa8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083bfab: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0083bfad: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083bfb0: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083bfb2: jne 0x83bfa6 */ if (!fZ) goto L_0083bfa6;
L_0083bfb4:; BB(0x0083bfb4);
    /* 0083bfb4: mov edx, dword ptr [ecx*4 + 0xa21c40] */ r_edx = R32((u32)(r_ecx*4+0xa21c40u));
    /* 0083bfbb: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 0083bfbe: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0083bfc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083bfc5: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0083bfc7: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0083bfca:; BB(0x0083bfca);
    /* 0083bfca: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0083bfcc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083bfcf: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0083bfd1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083bfd4: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083bfd6: jne 0x83bfca */ if (!fZ) goto L_0083bfca;
L_0083bfd8:; BB(0x0083bfd8);
    /* 0083bfd8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083bfdb: push 0x98af4c */ { u32 v = 0x98af4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0083bfe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083bfe1: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x83bfe6u); f_0085957c();
    /* 0083bfe6: mov esi, eax */ r_esi = r_eax;
    /* 0083bfe8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083bfeb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083bfed: je 0x83c00a */ if (fZ) goto L_0083c00a;
L_0083bfef:; BB(0x0083bfef);
    /* 0083bfef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083bff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083bff1: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x83bff6u); f_0085b5fd();
    /* 0083bff6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083bff7: push 0x98af48 */ { u32 v = 0x98af48u; r_esp -= 4; W32(r_esp, v); }
    /* 0083bffc: call 0x85b5fd */ r_esp -= 4; W32(r_esp, 0x83c001u); f_0085b5fd();
    /* 0083c001: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c002: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x83c007u); f_00859710();
    /* 0083c007: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083c00a:; BB(0x0083c00a);
    /* 0083c00a: add esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083c010: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083c011: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083c012: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083c013: ret  */ FN_RET(0x0083bf84); r_esp += 4; return;
}

