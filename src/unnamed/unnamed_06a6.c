#include "protos.h"

void f_006a60dc(void) /* sub_6A60DC */
{
    FN_ENTER(0x006a60dc);
    /* 006a60dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a60dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a60df: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a60e2: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a60e7u); f_008173b4();
    /* 006a60e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a60e9: jne 0x6a60ef */ if (!fZ) goto L_006a60ef;
L_006a60eb:; BB(0x006a60eb);
    /* 006a60eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a60ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a60ee: ret  */ FN_RET(0x006a60dc); r_esp += 4; return;
L_006a60ef:; BB(0x006a60ef);
    /* 006a60ef: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 006a60f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a60f3: ret  */ FN_RET(0x006a60dc); r_esp += 4; return;
}

void f_006a60f4(void) /* sub_6A60F4 */
{
    FN_ENTER(0x006a60f4);
    /* 006a60f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a60f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006a60f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a60f9: push 0x8eb920 */ { u32 v = 0x8eb920u; r_esp -= 4; W32(r_esp, v); }
    /* 006a60fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006a6104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a6105: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006a610c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a610f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006a6112: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006a6115: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006a6118: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006a611b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006a611e: mov ecx, dword ptr [ecx + 0x1c4] */ r_ecx = R32((u32)(r_ecx+0x1c4u));
    /* 006a6124: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6126: je 0x6a6444 */ if (fZ) goto L_006a6444;
L_006a612c:; BB(0x006a612c);
    /* 006a612c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006a612f: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6135: jne 0x6a614b */ if (!fZ) goto L_006a614b;
L_006a6137:; BB(0x006a6137);
    /* 006a6137: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a613cu); f_008173b4();
    /* 006a613c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a613e: je 0x6a6147 */ if (fZ) goto L_006a6147;
L_006a6140:; BB(0x006a6140);
    /* 006a6140: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6145: jmp 0x6a614d */ goto L_006a614d;
L_006a6147:; BB(0x006a6147);
    /* 006a6147: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6149: jmp 0x6a614d */ goto L_006a614d;
L_006a614b:; BB(0x006a614b);
    /* 006a614b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a614d:; BB(0x006a614d);
    /* 006a614d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a614f: je 0x6a6444 */ if (fZ) goto L_006a6444;
L_006a6155:; BB(0x006a6155);
    /* 006a6155: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a6158: movsx eax, word ptr [eax + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 006a615c: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a615f: jg 0x6a6165 */ if ((!fZ&&fS==fO)) goto L_006a6165;
L_006a6161:; BB(0x006a6161);
    /* 006a6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6163: jg 0x6a6175 */ if ((!fZ&&fS==fO)) goto L_006a6175;
L_006a6165:; BB(0x006a6165);
    /* 006a6165: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6167: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a616a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a6171: mov esp, ebp */ r_esp = r_ebp;
    /* 006a6173: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6174: ret  */ FN_RET(0x006a60f4); r_esp += 4; return;
L_006a6175:; BB(0x006a6175);
    /* 006a6175: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006a617c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a617e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a6183u); f_008581c5();
    /* 006a6183: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a6186: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a6189: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006a618c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a618e: je 0x6a6533 */ if (fZ) goto L_006a6533;
L_006a6194:; BB(0x006a6194);
    /* 006a6194: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006a619b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a61a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a61a5: movsx ebx, word ptr [ebx + 0x1c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x1cu));
    /* 006a61a9: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 006a61ab: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006a61ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a61b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a61b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a61b3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a61b8u); f_008581c5();
    /* 006a61b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a61b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a61bb: je 0x6a652c */ if (fZ) goto L_006a652c;
L_006a61c1:; BB(0x006a61c1);
    /* 006a61c1: mov edx, eax */ r_edx = r_eax;
    /* 006a61c3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a61c5: je 0x6a61dc */ if (fZ) goto L_006a61dc;
L_006a61c7:; BB(0x006a61c7);
    /* 006a61c7: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 006a61cd: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 006a61d4: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a61d7: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 006a61da: jne 0x6a61c7 */ if (!fZ) goto L_006a61c7;
L_006a61dc:; BB(0x006a61dc);
    /* 006a61dc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a61df: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006a61e6: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_006a61e9:; BB(0x006a61e9);
    /* 006a61e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a61f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a61f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a61f5: je 0x6a6444 */ if (fZ) goto L_006a6444;
L_006a61fb:; BB(0x006a61fb);
    /* 006a61fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006a61fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6200: je 0x6a650a */ if (fZ) goto L_006a650a;
L_006a6206:; BB(0x006a6206);
    /* 006a6206: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a6209: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 006a620f: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 006a6212: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006a6214: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6216: je 0x6a6260 */ if (fZ) goto L_006a6260;
L_006a6218:; BB(0x006a6218);
    /* 006a6218: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a621b: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6221: jne 0x6a6239 */ if (!fZ) goto L_006a6239;
L_006a6223:; BB(0x006a6223);
    /* 006a6223: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6225: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a622au); f_008173b4();
    /* 006a622a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a622c: je 0x6a6235 */ if (fZ) goto L_006a6235;
L_006a622e:; BB(0x006a622e);
    /* 006a622e: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6233: jmp 0x6a623b */ goto L_006a623b;
L_006a6235:; BB(0x006a6235);
    /* 006a6235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6237: jmp 0x6a623b */ goto L_006a623b;
L_006a6239:; BB(0x006a6239);
    /* 006a6239: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a623b:; BB(0x006a623b);
    /* 006a623b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a623d: je 0x6a6259 */ if (fZ) goto L_006a6259;
L_006a623f:; BB(0x006a623f);
    /* 006a623f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a6242: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6247u); f_008173b4();
    /* 006a6247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6249: jne 0x6a624f */ if (!fZ) goto L_006a624f;
L_006a624b:; BB(0x006a624b);
    /* 006a624b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a624d: jmp 0x6a6252 */ goto L_006a6252;
L_006a624f:; BB(0x006a624f);
    /* 006a624f: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_006a6252:; BB(0x006a6252);
    /* 006a6252: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6254: je 0x6a6259 */ if (fZ) goto L_006a6259;
L_006a6256:; BB(0x006a6256);
    /* 006a6256: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006a6259:; BB(0x006a6259);
    /* 006a6259: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a625c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a625e: jne 0x6a6218 */ if (!fZ) goto L_006a6218;
L_006a6260:; BB(0x006a6260);
    /* 006a6260: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a6263: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 006a6267: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6269: je 0x6a6294 */ if (fZ) goto L_006a6294;
L_006a626b:; BB(0x006a626b);
    /* 006a626b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a626e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6270: je 0x6a627b */ if (fZ) goto L_006a627b;
L_006a6272:; BB(0x006a6272);
    /* 006a6272: mov ecx, eax */ r_ecx = r_eax;
    /* 006a6274: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a6276: call 0x6a3a40 */ r_esp -= 4; W32(r_esp, 0x6a627bu); f_006a3a40();
L_006a627b:; BB(0x006a627b);
    /* 006a627b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a627e: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a6281: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a6284: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6286: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a6289: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a6290: mov esp, ebp */ r_esp = r_ebp;
    /* 006a6292: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6293: ret  */ FN_RET(0x006a60f4); r_esp += 4; return;
L_006a6294:; BB(0x006a6294);
    /* 006a6294: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a6297: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a629a: mov ecx, dword ptr [edx + 0x1c4] */ r_ecx = R32((u32)(r_edx+0x1c4u));
    /* 006a62a0: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 006a62a3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006a62a5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62a7: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006a62aa: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006a62ad: je 0x6a6379 */ if (fZ) goto L_006a6379;
L_006a62b3:; BB(0x006a62b3);
    /* 006a62b3: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a62b6: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62bc: jne 0x6a62d4 */ if (!fZ) goto L_006a62d4;
L_006a62be:; BB(0x006a62be);
    /* 006a62be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a62c0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a62c5u); f_008173b4();
    /* 006a62c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62c7: je 0x6a62d0 */ if (fZ) goto L_006a62d0;
L_006a62c9:; BB(0x006a62c9);
    /* 006a62c9: mov eax, 1 */ r_eax = 0x1u;
    /* 006a62ce: jmp 0x6a62d6 */ goto L_006a62d6;
L_006a62d0:; BB(0x006a62d0);
    /* 006a62d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a62d2: jmp 0x6a62d6 */ goto L_006a62d6;
L_006a62d4:; BB(0x006a62d4);
    /* 006a62d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a62d6:; BB(0x006a62d6);
    /* 006a62d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62d8: je 0x6a6368 */ if (fZ) goto L_006a6368;
L_006a62de:; BB(0x006a62de);
    /* 006a62de: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a62e1: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a62e6u); f_008173b4();
    /* 006a62e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62e8: jne 0x6a62ee */ if (!fZ) goto L_006a62ee;
L_006a62ea:; BB(0x006a62ea);
    /* 006a62ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a62ec: jmp 0x6a62f1 */ goto L_006a62f1;
L_006a62ee:; BB(0x006a62ee);
    /* 006a62ee: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_006a62f1:; BB(0x006a62f1);
    /* 006a62f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62f3: je 0x6a6368 */ if (fZ) goto L_006a6368;
L_006a62f5:; BB(0x006a62f5);
    /* 006a62f5: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 006a62fb: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 006a62fe: movzx eax, byte ptr [edx + 0xf2] */ r_eax = (u32)R8((u32)(r_edx+0xf2u));
    /* 006a6305: shl eax, 0x19 */ { u32 c = (25u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006a6308: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006a630a: movzx edi, byte ptr [edx + 0xf2] */ r_edi = (u32)R8((u32)(r_edx+0xf2u));
    /* 006a6311: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6314: je 0x6a64f1 */ if (fZ) goto L_006a64f1;
L_006a631a:; BB(0x006a631a);
    /* 006a631a: movzx edi, byte ptr [edx + 0xf3] */ r_edi = (u32)R8((u32)(r_edx+0xf3u));
    /* 006a6321: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006a6324: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006a632a: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a632c: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_006a632e:; BB(0x006a632e);
    /* 006a632e: movzx edi, byte ptr [edx + 0xf4] */ r_edi = (u32)R8((u32)(r_edx+0xf4u));
    /* 006a6335: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a6337: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006a6339: mov edx, dword ptr [edx + 0xdc] */ r_edx = R32((u32)(r_edx+0xdcu));
    /* 006a633f: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a6342: jne 0x6a6348 */ if (!fZ) goto L_006a6348;
L_006a6344:; BB(0x006a6344);
    /* 006a6344: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6346: jmp 0x6a6356 */ goto L_006a6356;
L_006a6348:; BB(0x006a6348);
    /* 006a6348: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a634b: je 0x6a6354 */ if (fZ) goto L_006a6354;
L_006a634d:; BB(0x006a634d);
    /* 006a634d: mov edx, 1 */ r_edx = 0x1u;
    /* 006a6352: jmp 0x6a6356 */ goto L_006a6356;
L_006a6354:; BB(0x006a6354);
    /* 006a6354: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a6356:; BB(0x006a6356);
    /* 006a6356: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6358: jne 0x6a6361 */ if (!fZ) goto L_006a6361;
L_006a635a:; BB(0x006a635a);
    /* 006a635a: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a635f: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_006a6361:; BB(0x006a6361);
    /* 006a6361: add dword ptr [ebp - 0x20], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a6365: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006a6368:; BB(0x006a6368);
    /* 006a6368: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a636b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a636d: jne 0x6a62b3 */ if (!fZ) goto L_006a62b3;
L_006a6373:; BB(0x006a6373);
    /* 006a6373: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a6376: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_006a6379:; BB(0x006a6379);
    /* 006a6379: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006a637b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a637e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006a6381: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6383: jle 0x6a63c9 */ if ((fZ||fS!=fO)) goto L_006a63c9;
L_006a6385:; BB(0x006a6385);
    /* 006a6385: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a6388: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a638a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a638c: jle 0x6a63bc */ if ((fZ||fS!=fO)) goto L_006a63bc;
L_006a638e:; BB(0x006a638e);
    /* 006a638e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006a6390: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 006a6393: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 006a6396: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006a6398: jbe 0x6a63aa */ if ((fC||fZ)) goto L_006a63aa;
L_006a639a:; BB(0x006a639a);
    /* 006a639a: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006a639d: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 006a639f: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 006a63a2: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 006a63a5: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006a63a7: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_006a63aa:; BB(0x006a63aa);
    /* 006a63aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a63ad: mov esi, ecx */ r_esi = r_ecx;
    /* 006a63af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a63b2: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a63b4: jl 0x6a638e */ if ((fS!=fO)) goto L_006a638e;
L_006a63b6:; BB(0x006a63b6);
    /* 006a63b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a63b9: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_006a63bc:; BB(0x006a63bc);
    /* 006a63bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a63bf: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a63c2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006a63c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a63c7: jg 0x6a6385 */ if ((!fZ&&fS==fO)) goto L_006a6385;
L_006a63c9:; BB(0x006a63c9);
    /* 006a63c9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a63cc: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 006a63d2: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 006a63d5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006a63d7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a63d9: je 0x6a642d */ if (fZ) goto L_006a642d;
L_006a63db:; BB(0x006a63db);
    /* 006a63db: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a63de: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a63e4: jne 0x6a63fc */ if (!fZ) goto L_006a63fc;
L_006a63e6:; BB(0x006a63e6);
    /* 006a63e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a63e8: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a63edu); f_008173b4();
    /* 006a63ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a63ef: je 0x6a63f8 */ if (fZ) goto L_006a63f8;
L_006a63f1:; BB(0x006a63f1);
    /* 006a63f1: mov eax, 1 */ r_eax = 0x1u;
    /* 006a63f6: jmp 0x6a63fe */ goto L_006a63fe;
L_006a63f8:; BB(0x006a63f8);
    /* 006a63f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a63fa: jmp 0x6a63fe */ goto L_006a63fe;
L_006a63fc:; BB(0x006a63fc);
    /* 006a63fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a63fe:; BB(0x006a63fe);
    /* 006a63fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6400: je 0x6a6426 */ if (fZ) goto L_006a6426;
L_006a6402:; BB(0x006a6402);
    /* 006a6402: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a6405: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a640au); f_008173b4();
    /* 006a640a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a640c: jne 0x6a6412 */ if (!fZ) goto L_006a6412;
L_006a640e:; BB(0x006a640e);
    /* 006a640e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6410: jmp 0x6a6415 */ goto L_006a6415;
L_006a6412:; BB(0x006a6412);
    /* 006a6412: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_006a6415:; BB(0x006a6415);
    /* 006a6415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6417: je 0x6a6426 */ if (fZ) goto L_006a6426;
L_006a6419:; BB(0x006a6419);
    /* 006a6419: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006a641c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a641e: je 0x6a6426 */ if (fZ) goto L_006a6426;
L_006a6420:; BB(0x006a6420);
    /* 006a6420: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a6423: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_006a6426:; BB(0x006a6426);
    /* 006a6426: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a6429: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a642b: jne 0x6a63db */ if (!fZ) goto L_006a63db;
L_006a642d:; BB(0x006a642d);
    /* 006a642d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a6430: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6432: je 0x6a645d */ if (fZ) goto L_006a645d;
L_006a6434:; BB(0x006a6434);
    /* 006a6434: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a6437: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6439: je 0x6a6444 */ if (fZ) goto L_006a6444;
L_006a643b:; BB(0x006a643b);
    /* 006a643b: mov ecx, eax */ r_ecx = r_eax;
    /* 006a643d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a643f: call 0x6a3a40 */ r_esp -= 4; W32(r_esp, 0x6a6444u); f_006a3a40();
L_006a6444:; BB(0x006a6444);
    /* 006a6444: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a6447: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a644a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a644d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a644f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a6452: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a6459: mov esp, ebp */ r_esp = r_ebp;
    /* 006a645b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a645c: ret  */ FN_RET(0x006a60f4); r_esp += 4; return;
L_006a645d:; BB(0x006a645d);
    /* 006a645d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a6460: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a6463: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 006a6466: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 006a646c: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 006a646f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6471: je 0x6a64c5 */ if (fZ) goto L_006a64c5;
L_006a6473:; BB(0x006a6473);
    /* 006a6473: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a6476: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a647c: jne 0x6a6494 */ if (!fZ) goto L_006a6494;
L_006a647e:; BB(0x006a647e);
    /* 006a647e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6480: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6485u); f_008173b4();
    /* 006a6485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6487: je 0x6a6490 */ if (fZ) goto L_006a6490;
L_006a6489:; BB(0x006a6489);
    /* 006a6489: mov eax, 1 */ r_eax = 0x1u;
    /* 006a648e: jmp 0x6a6496 */ goto L_006a6496;
L_006a6490:; BB(0x006a6490);
    /* 006a6490: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6492: jmp 0x6a6496 */ goto L_006a6496;
L_006a6494:; BB(0x006a6494);
    /* 006a6494: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a6496:; BB(0x006a6496);
    /* 006a6496: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6498: je 0x6a64be */ if (fZ) goto L_006a64be;
L_006a649a:; BB(0x006a649a);
    /* 006a649a: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a649d: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a64a2u); f_008173b4();
    /* 006a64a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a64a4: jne 0x6a64aa */ if (!fZ) goto L_006a64aa;
L_006a64a6:; BB(0x006a64a6);
    /* 006a64a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a64a8: jmp 0x6a64ad */ goto L_006a64ad;
L_006a64aa:; BB(0x006a64aa);
    /* 006a64aa: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_006a64ad:; BB(0x006a64ad);
    /* 006a64ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a64af: je 0x6a64be */ if (fZ) goto L_006a64be;
L_006a64b1:; BB(0x006a64b1);
    /* 006a64b1: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006a64b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a64b6: je 0x6a64be */ if (fZ) goto L_006a64be;
L_006a64b8:; BB(0x006a64b8);
    /* 006a64b8: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006a64bb: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006a64be:; BB(0x006a64be);
    /* 006a64be: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a64c1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a64c3: jne 0x6a6473 */ if (!fZ) goto L_006a6473;
L_006a64c5:; BB(0x006a64c5);
    /* 006a64c5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a64c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a64ca: je 0x6a64d5 */ if (fZ) goto L_006a64d5;
L_006a64cc:; BB(0x006a64cc);
    /* 006a64cc: mov ecx, eax */ r_ecx = r_eax;
    /* 006a64ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a64d0: call 0x6a3a40 */ r_esp -= 4; W32(r_esp, 0x6a64d5u); f_006a3a40();
L_006a64d5:; BB(0x006a64d5);
    /* 006a64d5: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a64d8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a64db: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a64de: mov eax, 1 */ r_eax = 0x1u;
    /* 006a64e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a64e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a64ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006a64ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a64f0: ret  */ FN_RET(0x006a60f4); r_esp += 4; return;
L_006a64f1:; BB(0x006a64f1);
    /* 006a64f1: movzx edi, byte ptr [edx + 0xf3] */ r_edi = (u32)R8((u32)(r_edx+0xf3u));
    /* 006a64f8: shl edi, 0x11 */ { u32 c = (17u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006a64fb: and edi, 0x1fe0000 */ {  u32 a = r_edi; u32 b = 0x1fe0000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006a6501: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a6503: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006a6505: jmp 0x6a632e */ goto L_006a632e;
L_006a650a:; BB(0x006a650a);
    /* 006a650a: mov ecx, eax */ r_ecx = r_eax;
    /* 006a650c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a650e: call 0x6a3a40 */ r_esp -= 4; W32(r_esp, 0x6a6513u); f_006a3a40();
    /* 006a6513: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a6516: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a6519: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a651c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a651e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a6521: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a6528: mov esp, ebp */ r_esp = r_ebp;
    /* 006a652a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a652b: ret  */ FN_RET(0x006a60f4); r_esp += 4; return;
L_006a652c:; BB(0x006a652c);
    /* 006a652c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a652e: jmp 0x6a61dc */ goto L_006a61dc;
L_006a6533:; BB(0x006a6533);
    /* 006a6533: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6535: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a6538: jmp 0x6a61e9 */ goto L_006a61e9;
}

void f_006a610e(void)
{
    FN_ENTER(0x006a610e);
    goto L_006a610e;
L_006a60f0:; BB(0x006a60f0);
    /* 006a60f0: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a60f1: sbb al, 0x5b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x5bu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = ((u64)a < (u64)b + c); }
    /* 006a60f3: ret  */ FN_RET(0x006a610e); r_esp += 4; return;
L_006a610e:; BB(0x006a610e);
    /* 006a610e: sub byte ptr [ecx + 0x7d89f065], cl */ { u32 ad = (u32)(r_ecx+0x7d89f065u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu; W8(ad, r); fZ = (r == 0); fC = (a < b); }
    /* 006a6114: aam 0x89 */ UNSUP(0x006a6114, "aam 0x89");
    /* 006a6116: jne 0x6a60f0 */ if (!fZ) goto L_006a60f0;
L_006a6118:; BB(0x006a6118);
    /* 006a6118: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006a611b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006a611e: mov ecx, dword ptr [ecx + 0x1c4] */ r_ecx = R32((u32)(r_ecx+0x1c4u));
    /* 006a6124: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6126: je 0x6a6444 */ if (fZ) goto L_006a6444;
L_006a612c:; BB(0x006a612c);
    /* 006a612c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006a612f: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6135: jne 0x6a614b */ if (!fZ) goto L_006a614b;
L_006a6137:; BB(0x006a6137);
    /* 006a6137: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a613cu); f_008173b4();
    /* 006a613c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a613e: je 0x6a6147 */ if (fZ) goto L_006a6147;
L_006a6140:; BB(0x006a6140);
    /* 006a6140: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6145: jmp 0x6a614d */ goto L_006a614d;
L_006a6147:; BB(0x006a6147);
    /* 006a6147: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6149: jmp 0x6a614d */ goto L_006a614d;
L_006a614b:; BB(0x006a614b);
    /* 006a614b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a614d:; BB(0x006a614d);
    /* 006a614d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a614f: je 0x6a6444 */ if (fZ) goto L_006a6444;
L_006a6155:; BB(0x006a6155);
    /* 006a6155: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a6158: movsx eax, word ptr [eax + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 006a615c: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a615f: jg 0x6a6165 */ if ((!fZ&&fS==fO)) goto L_006a6165;
L_006a6161:; BB(0x006a6161);
    /* 006a6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6163: jg 0x6a6175 */ if ((!fZ&&fS==fO)) goto L_006a6175;
L_006a6165:; BB(0x006a6165);
    /* 006a6165: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6167: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a616a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a6171: mov esp, ebp */ r_esp = r_ebp;
    /* 006a6173: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6174: ret  */ FN_RET(0x006a610e); r_esp += 4; return;
L_006a6175:; BB(0x006a6175);
    /* 006a6175: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006a617c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006a617e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a6183u); f_008581c5();
    /* 006a6183: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a6186: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a6189: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006a618c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a618e: je 0x6a6533 */ if (fZ) goto L_006a6533;
L_006a6194:; BB(0x006a6194);
    /* 006a6194: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006a619b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006a61a2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a61a5: movsx ebx, word ptr [ebx + 0x1c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x1cu));
    /* 006a61a9: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 006a61ab: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006a61ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a61b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a61b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a61b3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a61b8u); f_008581c5();
    /* 006a61b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a61b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a61bb: je 0x6a652c */ if (fZ) goto L_006a652c;
L_006a61c1:; BB(0x006a61c1);
    /* 006a61c1: mov edx, eax */ r_edx = r_eax;
    /* 006a61c3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a61c5: je 0x6a61dc */ if (fZ) goto L_006a61dc;
L_006a61c7:; BB(0x006a61c7);
    /* 006a61c7: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 006a61cd: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 006a61d4: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a61d7: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 006a61da: jne 0x6a61c7 */ if (!fZ) goto L_006a61c7;
L_006a61dc:; BB(0x006a61dc);
    /* 006a61dc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a61df: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006a61e6: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_006a61e9:; BB(0x006a61e9);
    /* 006a61e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006a61f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a61f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a61f5: je 0x6a6444 */ if (fZ) goto L_006a6444;
L_006a61fb:; BB(0x006a61fb);
    /* 006a61fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006a61fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6200: je 0x6a650a */ if (fZ) goto L_006a650a;
L_006a6206:; BB(0x006a6206);
    /* 006a6206: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a6209: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 006a620f: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 006a6212: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006a6214: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6216: je 0x6a6260 */ if (fZ) goto L_006a6260;
L_006a6218:; BB(0x006a6218);
    /* 006a6218: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a621b: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6221: jne 0x6a6239 */ if (!fZ) goto L_006a6239;
L_006a6223:; BB(0x006a6223);
    /* 006a6223: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6225: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a622au); f_008173b4();
    /* 006a622a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a622c: je 0x6a6235 */ if (fZ) goto L_006a6235;
L_006a622e:; BB(0x006a622e);
    /* 006a622e: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6233: jmp 0x6a623b */ goto L_006a623b;
L_006a6235:; BB(0x006a6235);
    /* 006a6235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6237: jmp 0x6a623b */ goto L_006a623b;
L_006a6239:; BB(0x006a6239);
    /* 006a6239: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a623b:; BB(0x006a623b);
    /* 006a623b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a623d: je 0x6a6259 */ if (fZ) goto L_006a6259;
L_006a623f:; BB(0x006a623f);
    /* 006a623f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a6242: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6247u); f_008173b4();
    /* 006a6247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6249: jne 0x6a624f */ if (!fZ) goto L_006a624f;
L_006a624b:; BB(0x006a624b);
    /* 006a624b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a624d: jmp 0x6a6252 */ goto L_006a6252;
L_006a624f:; BB(0x006a624f);
    /* 006a624f: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_006a6252:; BB(0x006a6252);
    /* 006a6252: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6254: je 0x6a6259 */ if (fZ) goto L_006a6259;
L_006a6256:; BB(0x006a6256);
    /* 006a6256: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006a6259:; BB(0x006a6259);
    /* 006a6259: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a625c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a625e: jne 0x6a6218 */ if (!fZ) goto L_006a6218;
L_006a6260:; BB(0x006a6260);
    /* 006a6260: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a6263: movsx edx, word ptr [eax + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 006a6267: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6269: je 0x6a6294 */ if (fZ) goto L_006a6294;
L_006a626b:; BB(0x006a626b);
    /* 006a626b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a626e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6270: je 0x6a627b */ if (fZ) goto L_006a627b;
L_006a6272:; BB(0x006a6272);
    /* 006a6272: mov ecx, eax */ r_ecx = r_eax;
    /* 006a6274: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a6276: call 0x6a3a40 */ r_esp -= 4; W32(r_esp, 0x6a627bu); f_006a3a40();
L_006a627b:; BB(0x006a627b);
    /* 006a627b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a627e: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a6281: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a6284: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6286: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a6289: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a6290: mov esp, ebp */ r_esp = r_ebp;
    /* 006a6292: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6293: ret  */ FN_RET(0x006a610e); r_esp += 4; return;
L_006a6294:; BB(0x006a6294);
    /* 006a6294: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a6297: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a629a: mov ecx, dword ptr [edx + 0x1c4] */ r_ecx = R32((u32)(r_edx+0x1c4u));
    /* 006a62a0: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 006a62a3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006a62a5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62a7: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006a62aa: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006a62ad: je 0x6a6379 */ if (fZ) goto L_006a6379;
L_006a62b3:; BB(0x006a62b3);
    /* 006a62b3: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a62b6: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62bc: jne 0x6a62d4 */ if (!fZ) goto L_006a62d4;
L_006a62be:; BB(0x006a62be);
    /* 006a62be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a62c0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a62c5u); f_008173b4();
    /* 006a62c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62c7: je 0x6a62d0 */ if (fZ) goto L_006a62d0;
L_006a62c9:; BB(0x006a62c9);
    /* 006a62c9: mov eax, 1 */ r_eax = 0x1u;
    /* 006a62ce: jmp 0x6a62d6 */ goto L_006a62d6;
L_006a62d0:; BB(0x006a62d0);
    /* 006a62d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a62d2: jmp 0x6a62d6 */ goto L_006a62d6;
L_006a62d4:; BB(0x006a62d4);
    /* 006a62d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a62d6:; BB(0x006a62d6);
    /* 006a62d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62d8: je 0x6a6368 */ if (fZ) goto L_006a6368;
L_006a62de:; BB(0x006a62de);
    /* 006a62de: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a62e1: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a62e6u); f_008173b4();
    /* 006a62e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62e8: jne 0x6a62ee */ if (!fZ) goto L_006a62ee;
L_006a62ea:; BB(0x006a62ea);
    /* 006a62ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a62ec: jmp 0x6a62f1 */ goto L_006a62f1;
L_006a62ee:; BB(0x006a62ee);
    /* 006a62ee: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_006a62f1:; BB(0x006a62f1);
    /* 006a62f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a62f3: je 0x6a6368 */ if (fZ) goto L_006a6368;
L_006a62f5:; BB(0x006a62f5);
    /* 006a62f5: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 006a62fb: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 006a62fe: movzx eax, byte ptr [edx + 0xf2] */ r_eax = (u32)R8((u32)(r_edx+0xf2u));
    /* 006a6305: shl eax, 0x19 */ { u32 c = (25u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006a6308: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006a630a: movzx edi, byte ptr [edx + 0xf2] */ r_edi = (u32)R8((u32)(r_edx+0xf2u));
    /* 006a6311: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6314: je 0x6a64f1 */ if (fZ) goto L_006a64f1;
L_006a631a:; BB(0x006a631a);
    /* 006a631a: movzx edi, byte ptr [edx + 0xf3] */ r_edi = (u32)R8((u32)(r_edx+0xf3u));
    /* 006a6321: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006a6324: and edi, 0xff00 */ {  u32 a = r_edi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006a632a: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a632c: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_006a632e:; BB(0x006a632e);
    /* 006a632e: movzx edi, byte ptr [edx + 0xf4] */ r_edi = (u32)R8((u32)(r_edx+0xf4u));
    /* 006a6335: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a6337: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006a6339: mov edx, dword ptr [edx + 0xdc] */ r_edx = R32((u32)(r_edx+0xdcu));
    /* 006a633f: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a6342: jne 0x6a6348 */ if (!fZ) goto L_006a6348;
L_006a6344:; BB(0x006a6344);
    /* 006a6344: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6346: jmp 0x6a6356 */ goto L_006a6356;
L_006a6348:; BB(0x006a6348);
    /* 006a6348: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a634b: je 0x6a6354 */ if (fZ) goto L_006a6354;
L_006a634d:; BB(0x006a634d);
    /* 006a634d: mov edx, 1 */ r_edx = 0x1u;
    /* 006a6352: jmp 0x6a6356 */ goto L_006a6356;
L_006a6354:; BB(0x006a6354);
    /* 006a6354: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a6356:; BB(0x006a6356);
    /* 006a6356: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6358: jne 0x6a6361 */ if (!fZ) goto L_006a6361;
L_006a635a:; BB(0x006a635a);
    /* 006a635a: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a635f: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_006a6361:; BB(0x006a6361);
    /* 006a6361: add dword ptr [ebp - 0x20], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a6365: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006a6368:; BB(0x006a6368);
    /* 006a6368: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a636b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a636d: jne 0x6a62b3 */ if (!fZ) goto L_006a62b3;
L_006a6373:; BB(0x006a6373);
    /* 006a6373: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a6376: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_006a6379:; BB(0x006a6379);
    /* 006a6379: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006a637b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a637e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006a6381: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6383: jle 0x6a63c9 */ if ((fZ||fS!=fO)) goto L_006a63c9;
L_006a6385:; BB(0x006a6385);
    /* 006a6385: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a6388: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a638a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a638c: jle 0x6a63bc */ if ((fZ||fS!=fO)) goto L_006a63bc;
L_006a638e:; BB(0x006a638e);
    /* 006a638e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006a6390: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 006a6393: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 006a6396: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006a6398: jbe 0x6a63aa */ if ((fC||fZ)) goto L_006a63aa;
L_006a639a:; BB(0x006a639a);
    /* 006a639a: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006a639d: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 006a639f: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 006a63a2: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 006a63a5: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006a63a7: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_006a63aa:; BB(0x006a63aa);
    /* 006a63aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a63ad: mov esi, ecx */ r_esi = r_ecx;
    /* 006a63af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a63b2: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a63b4: jl 0x6a638e */ if ((fS!=fO)) goto L_006a638e;
L_006a63b6:; BB(0x006a63b6);
    /* 006a63b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a63b9: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
L_006a63bc:; BB(0x006a63bc);
    /* 006a63bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006a63bf: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a63c2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006a63c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a63c7: jg 0x6a6385 */ if ((!fZ&&fS==fO)) goto L_006a6385;
L_006a63c9:; BB(0x006a63c9);
    /* 006a63c9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a63cc: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 006a63d2: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 006a63d5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006a63d7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a63d9: je 0x6a642d */ if (fZ) goto L_006a642d;
L_006a63db:; BB(0x006a63db);
    /* 006a63db: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a63de: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a63e4: jne 0x6a63fc */ if (!fZ) goto L_006a63fc;
L_006a63e6:; BB(0x006a63e6);
    /* 006a63e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a63e8: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a63edu); f_008173b4();
    /* 006a63ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a63ef: je 0x6a63f8 */ if (fZ) goto L_006a63f8;
L_006a63f1:; BB(0x006a63f1);
    /* 006a63f1: mov eax, 1 */ r_eax = 0x1u;
    /* 006a63f6: jmp 0x6a63fe */ goto L_006a63fe;
L_006a63f8:; BB(0x006a63f8);
    /* 006a63f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a63fa: jmp 0x6a63fe */ goto L_006a63fe;
L_006a63fc:; BB(0x006a63fc);
    /* 006a63fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a63fe:; BB(0x006a63fe);
    /* 006a63fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6400: je 0x6a6426 */ if (fZ) goto L_006a6426;
L_006a6402:; BB(0x006a6402);
    /* 006a6402: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a6405: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a640au); f_008173b4();
    /* 006a640a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a640c: jne 0x6a6412 */ if (!fZ) goto L_006a6412;
L_006a640e:; BB(0x006a640e);
    /* 006a640e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6410: jmp 0x6a6415 */ goto L_006a6415;
L_006a6412:; BB(0x006a6412);
    /* 006a6412: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_006a6415:; BB(0x006a6415);
    /* 006a6415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6417: je 0x6a6426 */ if (fZ) goto L_006a6426;
L_006a6419:; BB(0x006a6419);
    /* 006a6419: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006a641c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a641e: je 0x6a6426 */ if (fZ) goto L_006a6426;
L_006a6420:; BB(0x006a6420);
    /* 006a6420: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a6423: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_006a6426:; BB(0x006a6426);
    /* 006a6426: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a6429: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a642b: jne 0x6a63db */ if (!fZ) goto L_006a63db;
L_006a642d:; BB(0x006a642d);
    /* 006a642d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006a6430: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6432: je 0x6a645d */ if (fZ) goto L_006a645d;
L_006a6434:; BB(0x006a6434);
    /* 006a6434: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a6437: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6439: je 0x6a6444 */ if (fZ) goto L_006a6444;
L_006a643b:; BB(0x006a643b);
    /* 006a643b: mov ecx, eax */ r_ecx = r_eax;
    /* 006a643d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a643f: call 0x6a3a40 */ r_esp -= 4; W32(r_esp, 0x6a6444u); f_006a3a40();
L_006a6444:; BB(0x006a6444);
    /* 006a6444: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a6447: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a644a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a644d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a644f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a6452: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a6459: mov esp, ebp */ r_esp = r_ebp;
    /* 006a645b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a645c: ret  */ FN_RET(0x006a610e); r_esp += 4; return;
L_006a645d:; BB(0x006a645d);
    /* 006a645d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a6460: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006a6463: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 006a6466: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 006a646c: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 006a646f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6471: je 0x6a64c5 */ if (fZ) goto L_006a64c5;
L_006a6473:; BB(0x006a6473);
    /* 006a6473: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a6476: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a647c: jne 0x6a6494 */ if (!fZ) goto L_006a6494;
L_006a647e:; BB(0x006a647e);
    /* 006a647e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6480: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6485u); f_008173b4();
    /* 006a6485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6487: je 0x6a6490 */ if (fZ) goto L_006a6490;
L_006a6489:; BB(0x006a6489);
    /* 006a6489: mov eax, 1 */ r_eax = 0x1u;
    /* 006a648e: jmp 0x6a6496 */ goto L_006a6496;
L_006a6490:; BB(0x006a6490);
    /* 006a6490: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6492: jmp 0x6a6496 */ goto L_006a6496;
L_006a6494:; BB(0x006a6494);
    /* 006a6494: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a6496:; BB(0x006a6496);
    /* 006a6496: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6498: je 0x6a64be */ if (fZ) goto L_006a64be;
L_006a649a:; BB(0x006a649a);
    /* 006a649a: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a649d: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a64a2u); f_008173b4();
    /* 006a64a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a64a4: jne 0x6a64aa */ if (!fZ) goto L_006a64aa;
L_006a64a6:; BB(0x006a64a6);
    /* 006a64a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a64a8: jmp 0x6a64ad */ goto L_006a64ad;
L_006a64aa:; BB(0x006a64aa);
    /* 006a64aa: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_006a64ad:; BB(0x006a64ad);
    /* 006a64ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a64af: je 0x6a64be */ if (fZ) goto L_006a64be;
L_006a64b1:; BB(0x006a64b1);
    /* 006a64b1: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006a64b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a64b6: je 0x6a64be */ if (fZ) goto L_006a64be;
L_006a64b8:; BB(0x006a64b8);
    /* 006a64b8: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006a64bb: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006a64be:; BB(0x006a64be);
    /* 006a64be: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a64c1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a64c3: jne 0x6a6473 */ if (!fZ) goto L_006a6473;
L_006a64c5:; BB(0x006a64c5);
    /* 006a64c5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006a64c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a64ca: je 0x6a64d5 */ if (fZ) goto L_006a64d5;
L_006a64cc:; BB(0x006a64cc);
    /* 006a64cc: mov ecx, eax */ r_ecx = r_eax;
    /* 006a64ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a64d0: call 0x6a3a40 */ r_esp -= 4; W32(r_esp, 0x6a64d5u); f_006a3a40();
L_006a64d5:; BB(0x006a64d5);
    /* 006a64d5: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a64d8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a64db: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a64de: mov eax, 1 */ r_eax = 0x1u;
    /* 006a64e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a64e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a64ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006a64ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a64f0: ret  */ FN_RET(0x006a610e); r_esp += 4; return;
L_006a64f1:; BB(0x006a64f1);
    /* 006a64f1: movzx edi, byte ptr [edx + 0xf3] */ r_edi = (u32)R8((u32)(r_edx+0xf3u));
    /* 006a64f8: shl edi, 0x11 */ { u32 c = (17u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006a64fb: and edi, 0x1fe0000 */ {  u32 a = r_edi; u32 b = 0x1fe0000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006a6501: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a6503: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006a6505: jmp 0x6a632e */ goto L_006a632e;
L_006a650a:; BB(0x006a650a);
    /* 006a650a: mov ecx, eax */ r_ecx = r_eax;
    /* 006a650c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a650e: call 0x6a3a40 */ r_esp -= 4; W32(r_esp, 0x6a6513u); f_006a3a40();
    /* 006a6513: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006a6516: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006a6519: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006a651c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a651e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006a6521: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006a6528: mov esp, ebp */ r_esp = r_ebp;
    /* 006a652a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a652b: ret  */ FN_RET(0x006a610e); r_esp += 4; return;
L_006a652c:; BB(0x006a652c);
    /* 006a652c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a652e: jmp 0x6a61dc */ goto L_006a61dc;
L_006a6533:; BB(0x006a6533);
    /* 006a6533: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6535: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006a6538: jmp 0x6a61e9 */ goto L_006a61e9;
}

void f_006a6540(void) /* sub_6A6540 */
{
    FN_ENTER(0x006a6540);
    /* 006a6540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a6541: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a6543: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006a6547: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a654a: je 0x6a6573 */ if (fZ) goto L_006a6573;
L_006a654c:; BB(0x006a654c);
    /* 006a654c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a654d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a654f: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x6a6554u); f_006a6a60();
    /* 006a6554: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6556: je 0x6a658a */ if (fZ) goto L_006a658a;
L_006a6558:; BB(0x006a6558);
    /* 006a6558: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006a655c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a655d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a655e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a6560: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006a6564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a6565: call 0x6a6590 */ r_esp -= 4; W32(r_esp, 0x6a656au); f_006a6590();
    /* 006a656a: mov eax, 1 */ r_eax = 0x1u;
    /* 006a656f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6570: ret 0xc */ FN_RET(0x006a6540); r_esp += 16; return;
L_006a6573:; BB(0x006a6573);
    /* 006a6573: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006a6577: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a6578: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a657c: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x6a6581u); f_007772bc();
    /* 006a6581: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6586: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6587: ret 0xc */ FN_RET(0x006a6540); r_esp += 16; return;
L_006a658a:; BB(0x006a658a);
    /* 006a658a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a658c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a658d: ret 0xc */ FN_RET(0x006a6540); r_esp += 16; return;
}

void f_006a6590(void) /* sub_6A6590 */
{
    FN_ENTER(0x006a6590);
    /* 006a6590: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6591: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6592: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6593: mov edi, ecx */ r_edi = r_ecx;
    /* 006a6595: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 006a6599: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006a659d: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a65a2u); f_006a60dc();
    /* 006a65a2: mov ebx, eax */ r_ebx = r_eax;
    /* 006a65a4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a65a6: je 0x6a65c7 */ if (fZ) goto L_006a65c7;
L_006a65a8:; BB(0x006a65a8);
    /* 006a65a8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a65aa: jl 0x6a65c7 */ if ((fS!=fO)) goto L_006a65c7;
L_006a65ac:; BB(0x006a65ac);
    /* 006a65ac: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a65ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a65b0: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a65b6u); call_ind(t); }
    /* 006a65b6: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006a65b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a65ba: jle 0x6a65cd */ if ((fZ||fS!=fO)) goto L_006a65cd;
L_006a65bc:; BB(0x006a65bc);
    /* 006a65bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a65bd: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a65bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a65c1: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a65c7u); call_ind(t); }
L_006a65c7:; BB(0x006a65c7);
    /* 006a65c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a65c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a65c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a65ca: ret 0xc */ FN_RET(0x006a6590); r_esp += 16; return;
L_006a65cd:; BB(0x006a65cd);
    /* 006a65cd: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 006a65d3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a65d6: jne 0x6a65dc */ if (!fZ) goto L_006a65dc;
L_006a65d8:; BB(0x006a65d8);
    /* 006a65d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a65da: jmp 0x6a65ea */ goto L_006a65ea;
L_006a65dc:; BB(0x006a65dc);
    /* 006a65dc: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a65df: je 0x6a65e8 */ if (fZ) goto L_006a65e8;
L_006a65e1:; BB(0x006a65e1);
    /* 006a65e1: mov edx, 1 */ r_edx = 0x1u;
    /* 006a65e6: jmp 0x6a65ea */ goto L_006a65ea;
L_006a65e8:; BB(0x006a65e8);
    /* 006a65e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a65ea:; BB(0x006a65ea);
    /* 006a65ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a65ec: je 0x6a65fb */ if (fZ) goto L_006a65fb;
L_006a65ee:; BB(0x006a65ee);
    /* 006a65ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a65ef: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a65f3: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a65f8u); f_0068e8a8();
    /* 006a65f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a65fb:; BB(0x006a65fb);
    /* 006a65fb: add word ptr [edi + 0x1c], -1 */ { u32 ad = (u32)(r_edi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a6600: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a6602: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6604: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a6607u); call_ind(t); }
    /* 006a6607: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006a660b: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006a660f: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006a6613: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6619: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 006a661d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a661e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a661f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6620: ret 0xc */ FN_RET(0x006a6590); r_esp += 16; return;
}

void f_006a6624(void) /* sub_6A6624 */
{
    FN_ENTER(0x006a6624);
    /* 006a6624: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6625: mov edi, ecx */ r_edi = r_ecx;
    /* 006a6627: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006a662b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006a662f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6632: je 0x6a6675 */ if (fZ) goto L_006a6675;
L_006a6634:; BB(0x006a6634);
    /* 006a6634: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6636: jne 0x6a6642 */ if (!fZ) goto L_006a6642;
L_006a6638:; BB(0x006a6638);
    /* 006a6638: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6639: mov ecx, edi */ r_ecx = r_edi;
    /* 006a663b: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x6a6640u); f_006a6a60();
    /* 006a6640: jmp 0x6a6650 */ goto L_006a6650;
L_006a6642:; BB(0x006a6642);
    /* 006a6642: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6645: jne 0x6a666f */ if (!fZ) goto L_006a666f;
L_006a6647:; BB(0x006a6647);
    /* 006a6647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a6648: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6649: mov ecx, edi */ r_ecx = r_edi;
    /* 006a664b: call 0x6a668c */ r_esp -= 4; W32(r_esp, 0x6a6650u); f_006a668c();
L_006a6650:; BB(0x006a6650);
    /* 006a6650: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6652: je 0x6a666f */ if (fZ) goto L_006a666f;
L_006a6654:; BB(0x006a6654);
    /* 006a6654: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006a6658: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a665a: mov ecx, edi */ r_ecx = r_edi;
    /* 006a665c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006a6660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a6661: call 0x6a6590 */ r_esp -= 4; W32(r_esp, 0x6a6666u); f_006a6590();
    /* 006a6666: mov eax, 1 */ r_eax = 0x1u;
    /* 006a666b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a666c: ret 0x10 */ FN_RET(0x006a6624); r_esp += 20; return;
L_006a666f:; BB(0x006a666f);
    /* 006a666f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6671: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6672: ret 0x10 */ FN_RET(0x006a6624); r_esp += 20; return;
L_006a6675:; BB(0x006a6675);
    /* 006a6675: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006a6679: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a667a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a667e: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x6a6683u); f_007772bc();
    /* 006a6683: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6688: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6689: ret 0x10 */ FN_RET(0x006a6624); r_esp += 20; return;
}

void f_006a668c(void) /* sub_6A668C */
{
    FN_ENTER(0x006a668c);
    /* 006a668c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a668f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006a6693: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006a6697: mov dword ptr [0xa94370], edx */ W32((u32)(0xa94370u), r_edx);
    /* 006a669d: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a66a3: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 006a66a6: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006a66a9: mov esi, eax */ r_esi = r_eax;
    /* 006a66ab: mov dword ptr [0xa94374], 0 */ W32((u32)(0xa94374u), 0x0u);
    /* 006a66b5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006a66b9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006a66bd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a66bf: jmp 0x6a66c4 */ goto L_006a66c4;
L_006a66c1:; BB(0x006a66c1);
    /* 006a66c1: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
L_006a66c4:; BB(0x006a66c4);
    /* 006a66c4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66c6: je 0x6a67e5 */ if (fZ) goto L_006a67e5;
L_006a66cc:; BB(0x006a66cc);
    /* 006a66cc: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 006a66cf: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66d5: jne 0x6a66ed */ if (!fZ) goto L_006a66ed;
L_006a66d7:; BB(0x006a66d7);
    /* 006a66d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a66d9: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a66deu); f_008173b4();
    /* 006a66de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66e0: je 0x6a66e9 */ if (fZ) goto L_006a66e9;
L_006a66e2:; BB(0x006a66e2);
    /* 006a66e2: mov edx, 1 */ r_edx = 0x1u;
    /* 006a66e7: jmp 0x6a66ef */ goto L_006a66ef;
L_006a66e9:; BB(0x006a66e9);
    /* 006a66e9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a66eb: jmp 0x6a66ef */ goto L_006a66ef;
L_006a66ed:; BB(0x006a66ed);
    /* 006a66ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a66ef:; BB(0x006a66ef);
    /* 006a66ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66f1: je 0x6a6747 */ if (fZ) goto L_006a6747;
L_006a66f3:; BB(0x006a66f3);
    /* 006a66f3: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006a66f6: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a66fbu); f_008173b4();
    /* 006a66fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66fd: jne 0x6a6703 */ if (!fZ) goto L_006a6703;
L_006a66ff:; BB(0x006a66ff);
    /* 006a66ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a6701: jmp 0x6a6706 */ goto L_006a6706;
L_006a6703:; BB(0x006a6703);
    /* 006a6703: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
L_006a6706:; BB(0x006a6706);
    /* 006a6706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6708: je 0x6a6747 */ if (fZ) goto L_006a6747;
L_006a670a:; BB(0x006a670a);
    /* 006a670a: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 006a6710: cmp edx, dword ptr [0xa94370] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa94370u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6716: jne 0x6a6740 */ if (!fZ) goto L_006a6740;
L_006a6718:; BB(0x006a6718);
    /* 006a6718: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a671a: jne 0x6a672e */ if (!fZ) goto L_006a672e;
L_006a671c:; BB(0x006a671c);
    /* 006a671c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a671f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a6723: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a6725: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006a6729: jmp 0x6a67ca */ goto L_006a67ca;
L_006a672e:; BB(0x006a672e);
    /* 006a672e: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6731: jne 0x6a6740 */ if (!fZ) goto L_006a6740;
L_006a6733:; BB(0x006a6733);
    /* 006a6733: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x6a6738u); f_005c443c();
    /* 006a6738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a673a: je 0x6a67d2 */ if (fZ) goto L_006a67d2;
L_006a6740:; BB(0x006a6740);
    /* 006a6740: add dword ptr [0xa94374], 1 */ { u32 ad = (u32)(0xa94374u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a6747:; BB(0x006a6747);
    /* 006a6747: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 006a674a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a674c: je 0x6a67b3 */ if (fZ) goto L_006a67b3;
L_006a674e:; BB(0x006a674e);
    /* 006a674e: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 006a6751: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6757: jne 0x6a676f */ if (!fZ) goto L_006a676f;
L_006a6759:; BB(0x006a6759);
    /* 006a6759: mov ecx, edi */ r_ecx = r_edi;
    /* 006a675b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6760u); f_008173b4();
    /* 006a6760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6762: je 0x6a676b */ if (fZ) goto L_006a676b;
L_006a6764:; BB(0x006a6764);
    /* 006a6764: mov edx, 1 */ r_edx = 0x1u;
    /* 006a6769: jmp 0x6a6771 */ goto L_006a6771;
L_006a676b:; BB(0x006a676b);
    /* 006a676b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a676d: jmp 0x6a6771 */ goto L_006a6771;
L_006a676f:; BB(0x006a676f);
    /* 006a676f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a6771:; BB(0x006a6771);
    /* 006a6771: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6773: je 0x6a67a1 */ if (fZ) goto L_006a67a1;
L_006a6775:; BB(0x006a6775);
    /* 006a6775: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006a6778: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a677du); f_008173b4();
    /* 006a677d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a677f: jne 0x6a6785 */ if (!fZ) goto L_006a6785;
L_006a6781:; BB(0x006a6781);
    /* 006a6781: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6783: jmp 0x6a6788 */ goto L_006a6788;
L_006a6785:; BB(0x006a6785);
    /* 006a6785: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
L_006a6788:; BB(0x006a6788);
    /* 006a6788: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a678a: je 0x6a67a1 */ if (fZ) goto L_006a67a1;
L_006a678c:; BB(0x006a678c);
    /* 006a678c: mov edx, dword ptr [edx + 0xd8] */ r_edx = R32((u32)(r_edx+0xd8u));
    /* 006a6792: cmp edx, dword ptr [0xa94370] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa94370u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6798: je 0x6a67e1 */ if (fZ) goto L_006a67e1;
L_006a679a:; BB(0x006a679a);
    /* 006a679a: add dword ptr [0xa94374], 1 */ { u32 ad = (u32)(0xa94374u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a67a1:; BB(0x006a67a1);
    /* 006a67a1: mov ecx, edi */ r_ecx = r_edi;
    /* 006a67a3: call 0x6a3d5c */ r_esp -= 4; W32(r_esp, 0x6a67a8u); f_006a3d5c();
    /* 006a67a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a67aa: jne 0x6a67b5 */ if (!fZ) goto L_006a67b5;
L_006a67ac:; BB(0x006a67ac);
    /* 006a67ac: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 006a67af: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a67b1: jne 0x6a674e */ if (!fZ) goto L_006a674e;
L_006a67b3:; BB(0x006a67b3);
    /* 006a67b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a67b5:; BB(0x006a67b5);
    /* 006a67b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a67b7: je 0x6a66c1 */ if (fZ) goto L_006a66c1;
L_006a67bd:; BB(0x006a67bd);
    /* 006a67bd: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a67c0: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a67c4: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006a67c8: mov ecx, eax */ r_ecx = r_eax;
L_006a67ca:; BB(0x006a67ca);
    /* 006a67ca: mov eax, ecx */ r_eax = r_ecx;
    /* 006a67cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a67cf: ret 8 */ FN_RET(0x006a668c); r_esp += 12; return;
L_006a67d2:; BB(0x006a67d2);
    /* 006a67d2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a67d5: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a67d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a67db: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006a67df: jmp 0x6a67ca */ goto L_006a67ca;
L_006a67e1:; BB(0x006a67e1);
    /* 006a67e1: mov eax, edi */ r_eax = r_edi;
    /* 006a67e3: jmp 0x6a67b5 */ goto L_006a67b5;
L_006a67e5:; BB(0x006a67e5);
    /* 006a67e5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a67e8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a67ec: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006a67f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a67f2: jmp 0x6a67ca */ goto L_006a67ca;
}

void f_006a672e(void)
{
    FN_ENTER(0x006a672e);
    goto L_006a672e;
L_006a66c1:; BB(0x006a66c1);
    /* 006a66c1: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 006a66c4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66c6: je 0x6a67e5 */ if (fZ) goto L_006a67e5;
L_006a66cc:; BB(0x006a66cc);
    /* 006a66cc: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 006a66cf: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66d5: jne 0x6a66ed */ if (!fZ) goto L_006a66ed;
L_006a66d7:; BB(0x006a66d7);
    /* 006a66d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a66d9: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a66deu); f_008173b4();
    /* 006a66de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66e0: je 0x6a66e9 */ if (fZ) goto L_006a66e9;
L_006a66e2:; BB(0x006a66e2);
    /* 006a66e2: mov edx, 1 */ r_edx = 0x1u;
    /* 006a66e7: jmp 0x6a66ef */ goto L_006a66ef;
L_006a66e9:; BB(0x006a66e9);
    /* 006a66e9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a66eb: jmp 0x6a66ef */ goto L_006a66ef;
L_006a66ed:; BB(0x006a66ed);
    /* 006a66ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a66ef:; BB(0x006a66ef);
    /* 006a66ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66f1: je 0x6a6747 */ if (fZ) goto L_006a6747;
L_006a66f3:; BB(0x006a66f3);
    /* 006a66f3: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006a66f6: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a66fbu); f_008173b4();
    /* 006a66fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a66fd: jne 0x6a6703 */ if (!fZ) goto L_006a6703;
L_006a66ff:; BB(0x006a66ff);
    /* 006a66ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a6701: jmp 0x6a6706 */ goto L_006a6706;
L_006a6703:; BB(0x006a6703);
    /* 006a6703: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
L_006a6706:; BB(0x006a6706);
    /* 006a6706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6708: je 0x6a6747 */ if (fZ) goto L_006a6747;
L_006a670a:; BB(0x006a670a);
    /* 006a670a: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 006a6710: cmp edx, dword ptr [0xa94370] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa94370u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6716: jne 0x6a6740 */ if (!fZ) goto L_006a6740;
L_006a6718:; BB(0x006a6718);
    /* 006a6718: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a671a: jne 0x6a672e */ if (!fZ) goto L_006a672e;
L_006a671c:; BB(0x006a671c);
    /* 006a671c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a671f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a6723: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a6725: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006a6729: jmp 0x6a67ca */ goto L_006a67ca;
L_006a672e:; BB(0x006a672e);
    /* 006a672e: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6731: jne 0x6a6740 */ if (!fZ) goto L_006a6740;
L_006a6733:; BB(0x006a6733);
    /* 006a6733: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x6a6738u); f_005c443c();
    /* 006a6738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a673a: je 0x6a67d2 */ if (fZ) goto L_006a67d2;
L_006a6740:; BB(0x006a6740);
    /* 006a6740: add dword ptr [0xa94374], 1 */ { u32 ad = (u32)(0xa94374u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a6747:; BB(0x006a6747);
    /* 006a6747: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 006a674a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a674c: je 0x6a67b3 */ if (fZ) goto L_006a67b3;
L_006a674e:; BB(0x006a674e);
    /* 006a674e: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 006a6751: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6757: jne 0x6a676f */ if (!fZ) goto L_006a676f;
L_006a6759:; BB(0x006a6759);
    /* 006a6759: mov ecx, edi */ r_ecx = r_edi;
    /* 006a675b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6760u); f_008173b4();
    /* 006a6760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6762: je 0x6a676b */ if (fZ) goto L_006a676b;
L_006a6764:; BB(0x006a6764);
    /* 006a6764: mov edx, 1 */ r_edx = 0x1u;
    /* 006a6769: jmp 0x6a6771 */ goto L_006a6771;
L_006a676b:; BB(0x006a676b);
    /* 006a676b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a676d: jmp 0x6a6771 */ goto L_006a6771;
L_006a676f:; BB(0x006a676f);
    /* 006a676f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a6771:; BB(0x006a6771);
    /* 006a6771: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6773: je 0x6a67a1 */ if (fZ) goto L_006a67a1;
L_006a6775:; BB(0x006a6775);
    /* 006a6775: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006a6778: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a677du); f_008173b4();
    /* 006a677d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a677f: jne 0x6a6785 */ if (!fZ) goto L_006a6785;
L_006a6781:; BB(0x006a6781);
    /* 006a6781: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6783: jmp 0x6a6788 */ goto L_006a6788;
L_006a6785:; BB(0x006a6785);
    /* 006a6785: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
L_006a6788:; BB(0x006a6788);
    /* 006a6788: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a678a: je 0x6a67a1 */ if (fZ) goto L_006a67a1;
L_006a678c:; BB(0x006a678c);
    /* 006a678c: mov edx, dword ptr [edx + 0xd8] */ r_edx = R32((u32)(r_edx+0xd8u));
    /* 006a6792: cmp edx, dword ptr [0xa94370] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa94370u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6798: je 0x6a67e1 */ if (fZ) goto L_006a67e1;
L_006a679a:; BB(0x006a679a);
    /* 006a679a: add dword ptr [0xa94374], 1 */ { u32 ad = (u32)(0xa94374u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a67a1:; BB(0x006a67a1);
    /* 006a67a1: mov ecx, edi */ r_ecx = r_edi;
    /* 006a67a3: call 0x6a3d5c */ r_esp -= 4; W32(r_esp, 0x6a67a8u); f_006a3d5c();
    /* 006a67a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a67aa: jne 0x6a67b5 */ if (!fZ) goto L_006a67b5;
L_006a67ac:; BB(0x006a67ac);
    /* 006a67ac: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 006a67af: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a67b1: jne 0x6a674e */ if (!fZ) goto L_006a674e;
L_006a67b3:; BB(0x006a67b3);
    /* 006a67b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a67b5:; BB(0x006a67b5);
    /* 006a67b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a67b7: je 0x6a66c1 */ if (fZ) goto L_006a66c1;
L_006a67bd:; BB(0x006a67bd);
    /* 006a67bd: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a67c0: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a67c4: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006a67c8: mov ecx, eax */ r_ecx = r_eax;
L_006a67ca:; BB(0x006a67ca);
    /* 006a67ca: mov eax, ecx */ r_eax = r_ecx;
    /* 006a67cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a67cf: ret 8 */ FN_RET(0x006a672e); r_esp += 12; return;
L_006a67d2:; BB(0x006a67d2);
    /* 006a67d2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a67d5: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a67d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a67db: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006a67df: jmp 0x6a67ca */ goto L_006a67ca;
L_006a67e1:; BB(0x006a67e1);
    /* 006a67e1: mov eax, edi */ r_eax = r_edi;
    /* 006a67e3: jmp 0x6a67b5 */ goto L_006a67b5;
L_006a67e5:; BB(0x006a67e5);
    /* 006a67e5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a67e8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a67ec: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006a67f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a67f2: jmp 0x6a67ca */ goto L_006a67ca;
}

void f_006a67f4(void) /* sub_6A67F4 */
{
    FN_ENTER(0x006a67f4);
    /* 006a67f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a67f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a67f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a67f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a67f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a67f9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006a67fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a67fe: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006a6802: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006a6806: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6808: jle 0x6a6912 */ if ((fZ||fS!=fO)) goto L_006a6912;
L_006a680e:; BB(0x006a680e);
    /* 006a680e: mov ebx, eax */ r_ebx = r_eax;
    /* 006a6810: mov ebp, edx */ r_ebp = r_edx;
L_006a6812:; BB(0x006a6812);
    /* 006a6812: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a6815: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 006a6818: mov edi, dword ptr [esi + 0x1c4] */ r_edi = R32((u32)(r_esi+0x1c4u));
    /* 006a681e: mov edi, dword ptr [edi + 0x18] */ r_edi = R32((u32)(r_edi+0x18u));
    /* 006a6821: mov dword ptr [0xa94370], ecx */ W32((u32)(0xa94370u), r_ecx);
    /* 006a6827: mov dword ptr [0xa94374], 0 */ W32((u32)(0xa94374u), 0x0u);
    /* 006a6831: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6833: je 0x6a68a0 */ if (fZ) goto L_006a68a0;
L_006a6835:; BB(0x006a6835);
    /* 006a6835: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 006a6838: cmp esi, dword ptr [0x9cba2c] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a683e: jne 0x6a6856 */ if (!fZ) goto L_006a6856;
L_006a6840:; BB(0x006a6840);
    /* 006a6840: mov ecx, edi */ r_ecx = r_edi;
    /* 006a6842: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6847u); f_008173b4();
    /* 006a6847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6849: je 0x6a6852 */ if (fZ) goto L_006a6852;
L_006a684b:; BB(0x006a684b);
    /* 006a684b: mov esi, 1 */ r_esi = 0x1u;
    /* 006a6850: jmp 0x6a6858 */ goto L_006a6858;
L_006a6852:; BB(0x006a6852);
    /* 006a6852: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006a6854: jmp 0x6a6858 */ goto L_006a6858;
L_006a6856:; BB(0x006a6856);
    /* 006a6856: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006a6858:; BB(0x006a6858);
    /* 006a6858: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a685a: je 0x6a688c */ if (fZ) goto L_006a688c;
L_006a685c:; BB(0x006a685c);
    /* 006a685c: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006a685f: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6864u); f_008173b4();
    /* 006a6864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6866: jne 0x6a686c */ if (!fZ) goto L_006a686c;
L_006a6868:; BB(0x006a6868);
    /* 006a6868: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006a686a: jmp 0x6a686f */ goto L_006a686f;
L_006a686c:; BB(0x006a686c);
    /* 006a686c: mov esi, dword ptr [edi + 0x1c] */ r_esi = R32((u32)(r_edi+0x1cu));
L_006a686f:; BB(0x006a686f);
    /* 006a686f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6871: je 0x6a688c */ if (fZ) goto L_006a688c;
L_006a6873:; BB(0x006a6873);
    /* 006a6873: mov esi, dword ptr [esi + 0xd8] */ r_esi = R32((u32)(r_esi+0xd8u));
    /* 006a6879: cmp esi, dword ptr [0xa94370] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa94370u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a687f: je 0x6a691f */ if (fZ) goto L_006a691f;
L_006a6885:; BB(0x006a6885);
    /* 006a6885: add dword ptr [0xa94374], 1 */ { u32 ad = (u32)(0xa94374u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a688c:; BB(0x006a688c);
    /* 006a688c: mov ecx, edi */ r_ecx = r_edi;
    /* 006a688e: call 0x6a3d5c */ r_esp -= 4; W32(r_esp, 0x6a6893u); f_006a3d5c();
    /* 006a6893: mov esi, eax */ r_esi = r_eax;
    /* 006a6895: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6897: jne 0x6a68a2 */ if (!fZ) goto L_006a68a2;
L_006a6899:; BB(0x006a6899);
    /* 006a6899: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 006a689c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a689e: jne 0x6a6835 */ if (!fZ) goto L_006a6835;
L_006a68a0:; BB(0x006a68a0);
    /* 006a68a0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006a68a2:; BB(0x006a68a2);
    /* 006a68a2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a68a4: je 0x6a6926 */ if (fZ) goto L_006a6926;
L_006a68aa:; BB(0x006a68aa);
    /* 006a68aa: mov ecx, esi */ r_ecx = r_esi;
    /* 006a68ac: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a68b1u); f_006a60dc();
    /* 006a68b1: mov edi, eax */ r_edi = r_eax;
    /* 006a68b3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a68b5: je 0x6a6900 */ if (fZ) goto L_006a6900;
L_006a68b7:; BB(0x006a68b7);
    /* 006a68b7: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 006a68bd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a68bf: jne 0x6a68c5 */ if (!fZ) goto L_006a68c5;
L_006a68c1:; BB(0x006a68c1);
    /* 006a68c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a68c3: jmp 0x6a68d2 */ goto L_006a68d2;
L_006a68c5:; BB(0x006a68c5);
    /* 006a68c5: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a68c7: je 0x6a68d0 */ if (fZ) goto L_006a68d0;
L_006a68c9:; BB(0x006a68c9);
    /* 006a68c9: mov eax, 1 */ r_eax = 0x1u;
    /* 006a68ce: jmp 0x6a68d2 */ goto L_006a68d2;
L_006a68d0:; BB(0x006a68d0);
    /* 006a68d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a68d2:; BB(0x006a68d2);
    /* 006a68d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a68d4: je 0x6a68e3 */ if (fZ) goto L_006a68e3;
L_006a68d6:; BB(0x006a68d6);
    /* 006a68d6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a68d7: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a68db: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a68e0u); f_0068e8a8();
    /* 006a68e0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a68e3:; BB(0x006a68e3);
    /* 006a68e3: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006a68e6: add word ptr [eax + 0x1c], -1 */ { u32 ad = (u32)(r_eax+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a68eb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006a68ed: mov ecx, edi */ r_ecx = r_edi;
    /* 006a68ef: call dword ptr [eax + 0x6c] */ { u32 t = R32((u32)(r_eax+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a68f2u); call_ind(t); }
    /* 006a68f2: movzx edi, word ptr [esi + 8] */ r_edi = (u32)R16((u32)(r_esi+0x8u));
    /* 006a68f6: or edi, 0xffff0001 */ {  u32 a = r_edi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006a68fc: mov word ptr [esi + 8], di */ W16((u32)(r_esi+0x8u), (u16)r_edi);
L_006a6900:; BB(0x006a6900);
    /* 006a6900: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006a6904: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a6907: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a690a: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a690c: jl 0x6a6812 */ if ((fS!=fO)) goto L_006a6812;
L_006a6912:; BB(0x006a6912);
    /* 006a6912: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6917: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a6918: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6919: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a691a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a691b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a691c: ret 0xc */ FN_RET(0x006a67f4); r_esp += 16; return;
L_006a691f:; BB(0x006a691f);
    /* 006a691f: mov esi, edi */ r_esi = r_edi;
    /* 006a6921: jmp 0x6a68a2 */ goto L_006a68a2;
L_006a6926:; BB(0x006a6926);
    /* 006a6926: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6928: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a6929: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a692a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a692b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a692c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a692d: ret 0xc */ FN_RET(0x006a67f4); r_esp += 16; return;
}

void f_006a6930(void) /* sub_6A6930 */
{
    FN_ENTER(0x006a6930);
    /* 006a6930: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6931: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6932: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a6933: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6934: mov edi, ecx */ r_edi = r_ecx;
    /* 006a6936: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 006a693a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a693c: jl 0x6a69fd */ if ((fS!=fO)) goto L_006a69fd;
L_006a6942:; BB(0x006a6942);
    /* 006a6942: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a6946: mov ecx, edi */ r_ecx = r_edi;
    /* 006a6948: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x6a694du); f_006a6a60();
    /* 006a694d: mov ebp, eax */ r_ebp = r_eax;
    /* 006a694f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6951: je 0x6a69fd */ if (fZ) goto L_006a69fd;
L_006a6957:; BB(0x006a6957);
    /* 006a6957: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a6959: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a695eu); f_006a60dc();
    /* 006a695e: mov ebx, eax */ r_ebx = r_eax;
    /* 006a6960: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6962: je 0x6a69fd */ if (fZ) goto L_006a69fd;
L_006a6968:; BB(0x006a6968);
    /* 006a6968: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a696a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a696c: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a6972u); call_ind(t); }
    /* 006a6972: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006a6974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6976: jle 0x6a698f */ if ((fZ||fS!=fO)) goto L_006a698f;
L_006a6978:; BB(0x006a6978);
    /* 006a6978: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6979: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a697b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a697d: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a6983u); call_ind(t); }
    /* 006a6983: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6988: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6989: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a698a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a698b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a698c: ret 0x14 */ FN_RET(0x006a6930); r_esp += 24; return;
L_006a698f:; BB(0x006a698f);
    /* 006a698f: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 006a6995: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a6998: jne 0x6a699e */ if (!fZ) goto L_006a699e;
L_006a699a:; BB(0x006a699a);
    /* 006a699a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a699c: jmp 0x6a69ac */ goto L_006a69ac;
L_006a699e:; BB(0x006a699e);
    /* 006a699e: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a69a1: je 0x6a69aa */ if (fZ) goto L_006a69aa;
L_006a69a3:; BB(0x006a69a3);
    /* 006a69a3: mov edx, 1 */ r_edx = 0x1u;
    /* 006a69a8: jmp 0x6a69ac */ goto L_006a69ac;
L_006a69aa:; BB(0x006a69aa);
    /* 006a69aa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a69ac:; BB(0x006a69ac);
    /* 006a69ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a69ae: je 0x6a69be */ if (fZ) goto L_006a69be;
L_006a69b0:; BB(0x006a69b0);
    /* 006a69b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a69b1: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006a69b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a69b6: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a69bbu); f_0068e8a8();
    /* 006a69bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a69be:; BB(0x006a69be);
    /* 006a69be: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006a69c2: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x6a69c7u); f_007ba980();
    /* 006a69c7: movsx edx, word ptr [esp + 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x24u));
    /* 006a69cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a69ce: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a69d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a69d3: mov word ptr [ebx + 0x28], ax */ W16((u32)(r_ebx+0x28u), (u16)r_eax);
    /* 006a69d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a69d9: call 0x5c4874 */ r_esp -= 4; W32(r_esp, 0x6a69deu); f_005c4874();
    /* 006a69de: add word ptr [edi + 0x1c], -1 */ { u32 ad = (u32)(r_edi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a69e3: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 006a69e7: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a69ed: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 006a69f1: mov eax, 1 */ r_eax = 0x1u;
    /* 006a69f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a69f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a69f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a69f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a69fa: ret 0x14 */ FN_RET(0x006a6930); r_esp += 24; return;
L_006a69fd:; BB(0x006a69fd);
    /* 006a69fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a69ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6a00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6a01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6a02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6a03: ret 0x14 */ FN_RET(0x006a6930); r_esp += 24; return;
}

void f_006a6a08(void) /* sub_6A6A08 */
{
    FN_ENTER(0x006a6a08);
    /* 006a6a08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6a09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6a0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6a0b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a6a0d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a6a11: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6a13: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x6a6a18u); f_006a6a60();
    /* 006a6a18: mov edi, eax */ r_edi = r_eax;
    /* 006a6a1a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6a1c: je 0x6a6a58 */ if (fZ) goto L_006a6a58;
L_006a6a1e:; BB(0x006a6a1e);
    /* 006a6a1e: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a6a22: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6a24: call 0x6a6a60 */ r_esp -= 4; W32(r_esp, 0x6a6a29u); f_006a6a60();
    /* 006a6a29: mov esi, eax */ r_esi = r_eax;
    /* 006a6a2b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6a2d: je 0x6a6a58 */ if (fZ) goto L_006a6a58;
L_006a6a2f:; BB(0x006a6a2f);
    /* 006a6a2f: mov ecx, edi */ r_ecx = r_edi;
    /* 006a6a31: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a6a36u); f_006a60dc();
    /* 006a6a36: mov ebx, eax */ r_ebx = r_eax;
    /* 006a6a38: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6a3a: je 0x6a6a58 */ if (fZ) goto L_006a6a58;
L_006a6a3c:; BB(0x006a6a3c);
    /* 006a6a3c: mov ecx, esi */ r_ecx = r_esi;
    /* 006a6a3e: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a6a43u); f_006a60dc();
    /* 006a6a43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6a45: je 0x6a6a58 */ if (fZ) goto L_006a6a58;
L_006a6a47:; BB(0x006a6a47);
    /* 006a6a47: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006a6a4a: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 006a6a4d: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6a52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6a53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6a54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6a55: ret 8 */ FN_RET(0x006a6a08); r_esp += 12; return;
L_006a6a58:; BB(0x006a6a58);
    /* 006a6a58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6a5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6a5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6a5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6a5d: ret 8 */ FN_RET(0x006a6a08); r_esp += 12; return;
}

void f_006a6a60(void) /* sub_6A6A60 */
{
    FN_ENTER(0x006a6a60);
    /* 006a6a60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6a61: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a6a65: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a6a6b: mov dword ptr [0xa94370], eax */ W32((u32)(0xa94370u), r_eax);
    /* 006a6a70: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006a6a73: mov dword ptr [0xa94374], 0 */ W32((u32)(0xa94374u), 0x0u);
    /* 006a6a7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6a7f: je 0x6a6aee */ if (fZ) goto L_006a6aee;
L_006a6a81:; BB(0x006a6a81);
    /* 006a6a81: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a6a84: mov ebx, eax */ r_ebx = r_eax;
L_006a6a86:; BB(0x006a6a86);
    /* 006a6a86: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a6a89: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6a8f: jne 0x6a6aa7 */ if (!fZ) goto L_006a6aa7;
L_006a6a91:; BB(0x006a6a91);
    /* 006a6a91: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6a93: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6a98u); f_008173b4();
    /* 006a6a98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6a9a: je 0x6a6aa3 */ if (fZ) goto L_006a6aa3;
L_006a6a9c:; BB(0x006a6a9c);
    /* 006a6a9c: mov edx, 1 */ r_edx = 0x1u;
    /* 006a6aa1: jmp 0x6a6aa9 */ goto L_006a6aa9;
L_006a6aa3:; BB(0x006a6aa3);
    /* 006a6aa3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6aa5: jmp 0x6a6aa9 */ goto L_006a6aa9;
L_006a6aa7:; BB(0x006a6aa7);
    /* 006a6aa7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a6aa9:; BB(0x006a6aa9);
    /* 006a6aa9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6aab: je 0x6a6ad9 */ if (fZ) goto L_006a6ad9;
L_006a6aad:; BB(0x006a6aad);
    /* 006a6aad: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a6ab0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a6ab5u); f_008173b4();
    /* 006a6ab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6ab7: jne 0x6a6abd */ if (!fZ) goto L_006a6abd;
L_006a6ab9:; BB(0x006a6ab9);
    /* 006a6ab9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6abb: jmp 0x6a6ac0 */ goto L_006a6ac0;
L_006a6abd:; BB(0x006a6abd);
    /* 006a6abd: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_006a6ac0:; BB(0x006a6ac0);
    /* 006a6ac0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6ac2: je 0x6a6ad9 */ if (fZ) goto L_006a6ad9;
L_006a6ac4:; BB(0x006a6ac4);
    /* 006a6ac4: mov edx, dword ptr [edx + 0xd8] */ r_edx = R32((u32)(r_edx+0xd8u));
    /* 006a6aca: cmp edx, dword ptr [0xa94370] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa94370u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6ad0: je 0x6a6af9 */ if (fZ) goto L_006a6af9;
L_006a6ad2:; BB(0x006a6ad2);
    /* 006a6ad2: add dword ptr [0xa94374], 1 */ { u32 ad = (u32)(0xa94374u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006a6ad9:; BB(0x006a6ad9);
    /* 006a6ad9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6adb: call 0x6a3d5c */ r_esp -= 4; W32(r_esp, 0x6a6ae0u); f_006a3d5c();
    /* 006a6ae0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6ae2: jne 0x6a6af2 */ if (!fZ) goto L_006a6af2;
L_006a6ae4:; BB(0x006a6ae4);
    /* 006a6ae4: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a6ae7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6ae9: jne 0x6a6a86 */ if (!fZ) goto L_006a6a86;
L_006a6aeb:; BB(0x006a6aeb);
    /* 006a6aeb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a6aee:; BB(0x006a6aee);
    /* 006a6aee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6af0: jmp 0x6a6af5 */ goto L_006a6af5;
L_006a6af2:; BB(0x006a6af2);
    /* 006a6af2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a6af5:; BB(0x006a6af5);
    /* 006a6af5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a6af6: ret 4 */ FN_RET(0x006a6a60); r_esp += 8; return;
L_006a6af9:; BB(0x006a6af9);
    /* 006a6af9: mov eax, ebx */ r_eax = r_ebx;
    /* 006a6afb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a6afe: jmp 0x6a6af5 */ goto L_006a6af5;
}

void f_006a6b00(void) /* sub_6A6B00 */
{
    FN_ENTER(0x006a6b00);
    /* 006a6b00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6b01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a6b02: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 006a6b06: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006a6b0a: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 006a6b0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a6b0e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a6b10: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a6b15u); f_005c425c();
    /* 006a6b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6b17: je 0x6a6b33 */ if (fZ) goto L_006a6b33;
L_006a6b19:; BB(0x006a6b19);
    /* 006a6b19: movzx edx, byte ptr [ebp + 0xf1] */ r_edx = (u32)R8((u32)(r_ebp+0xf1u));
    /* 006a6b20: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006a6b22: mov ecx, dword ptr [ebp + 0xdc] */ r_ecx = R32((u32)(r_ebp+0xdcu));
    /* 006a6b28: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 006a6b2b: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6b30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6b31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6b32: ret  */ FN_RET(0x006a6b00); r_esp += 4; return;
L_006a6b33:; BB(0x006a6b33);
    /* 006a6b33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6b35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6b36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6b37: ret  */ FN_RET(0x006a6b00); r_esp += 4; return;
}

void f_006a6b38(void) /* sub_6A6B38 */
{
    FN_ENTER(0x006a6b38);
    /* 006a6b38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a6b39: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006a6b3d: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a6b42: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x6a6b47u); f_006c1bcc();
    /* 006a6b47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a6b48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6b4a: je 0x6a6c74 */ if (fZ) goto L_006a6c74;
L_006a6b50:; BB(0x006a6b50);
    /* 006a6b50: cmp ebp, dword ptr [eax + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6b53: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6b59:; BB(0x006a6b59);
    /* 006a6b59: cmp ebp, dword ptr [eax + 0x34] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6b5c: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6b62:; BB(0x006a6b62);
    /* 006a6b62: cmp ebp, dword ptr [eax + 0x50] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x50u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6b65: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6b6b:; BB(0x006a6b6b);
    /* 006a6b6b: cmp ebp, dword ptr [eax + 0x6c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6b6e: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6b74:; BB(0x006a6b74);
    /* 006a6b74: cmp ebp, dword ptr [eax + 0x88] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6b7a: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6b80:; BB(0x006a6b80);
    /* 006a6b80: cmp ebp, dword ptr [eax + 0xa4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0xa4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6b86: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6b8c:; BB(0x006a6b8c);
    /* 006a6b8c: cmp ebp, dword ptr [eax + 0xc0] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6b92: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6b98:; BB(0x006a6b98);
    /* 006a6b98: cmp ebp, dword ptr [eax + 0xdc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0xdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6b9e: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6ba4:; BB(0x006a6ba4);
    /* 006a6ba4: cmp ebp, dword ptr [eax + 0xf8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0xf8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6baa: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6bb0:; BB(0x006a6bb0);
    /* 006a6bb0: cmp ebp, dword ptr [eax + 0x114] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x114u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6bb6: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6bbc:; BB(0x006a6bbc);
    /* 006a6bbc: cmp ebp, dword ptr [eax + 0x130] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x130u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6bc2: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6bc8:; BB(0x006a6bc8);
    /* 006a6bc8: cmp ebp, dword ptr [eax + 0x14c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6bce: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6bd4:; BB(0x006a6bd4);
    /* 006a6bd4: cmp ebp, dword ptr [eax + 0x168] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x168u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6bda: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6be0:; BB(0x006a6be0);
    /* 006a6be0: cmp ebp, dword ptr [eax + 0x184] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x184u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6be6: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6bec:; BB(0x006a6bec);
    /* 006a6bec: cmp ebp, dword ptr [eax + 0x1a0] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x1a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6bf2: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6bf8:; BB(0x006a6bf8);
    /* 006a6bf8: cmp ebp, dword ptr [eax + 0x1bc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x1bcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6bfe: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c04:; BB(0x006a6c04);
    /* 006a6c04: cmp ebp, dword ptr [eax + 0x1d8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x1d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c0a: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c0c:; BB(0x006a6c0c);
    /* 006a6c0c: cmp ebp, dword ptr [eax + 0x1f4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x1f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c12: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c14:; BB(0x006a6c14);
    /* 006a6c14: cmp ebp, dword ptr [eax + 0x210] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x210u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c1a: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c1c:; BB(0x006a6c1c);
    /* 006a6c1c: cmp ebp, dword ptr [eax + 0x22c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x22cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c22: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c24:; BB(0x006a6c24);
    /* 006a6c24: cmp ebp, dword ptr [eax + 0x248] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x248u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c2a: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c2c:; BB(0x006a6c2c);
    /* 006a6c2c: cmp ebp, dword ptr [eax + 0x264] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x264u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c32: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c34:; BB(0x006a6c34);
    /* 006a6c34: cmp ebp, dword ptr [eax + 0x280] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x280u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c3a: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c3c:; BB(0x006a6c3c);
    /* 006a6c3c: cmp ebp, dword ptr [eax + 0x29c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x29cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c42: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c44:; BB(0x006a6c44);
    /* 006a6c44: cmp ebp, dword ptr [eax + 0x2b8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x2b8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c4a: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c4c:; BB(0x006a6c4c);
    /* 006a6c4c: cmp ebp, dword ptr [eax + 0x2d4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x2d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c52: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c54:; BB(0x006a6c54);
    /* 006a6c54: cmp ebp, dword ptr [eax + 0x2f0] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x2f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c5a: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c5c:; BB(0x006a6c5c);
    /* 006a6c5c: cmp ebp, dword ptr [eax + 0x30c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x30cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c62: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c64:; BB(0x006a6c64);
    /* 006a6c64: cmp ebp, dword ptr [eax + 0x328] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x328u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c6a: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c6c:; BB(0x006a6c6c);
    /* 006a6c6c: cmp ebp, dword ptr [eax + 0x344] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x344u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6c72: je 0x6a6c78 */ if (fZ) goto L_006a6c78;
L_006a6c74:; BB(0x006a6c74);
    /* 006a6c74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6c76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6c77: ret  */ FN_RET(0x006a6b38); r_esp += 4; return;
L_006a6c78:; BB(0x006a6c78);
    /* 006a6c78: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6c7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6c7e: ret  */ FN_RET(0x006a6b38); r_esp += 4; return;
}

void f_006a6c80(void) /* sub_6A6C80 */
{
    FN_ENTER(0x006a6c80);
    /* 006a6c80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6c82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a6c83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6c84: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a6c87: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006a6c8c: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x6a6c91u); f_006c1bcc();
    /* 006a6c91: mov esi, eax */ r_esi = r_eax;
    /* 006a6c93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a6c96: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6c98: je 0x6a6d11 */ if (fZ) goto L_006a6d11;
L_006a6c9a:; BB(0x006a6c9a);
    /* 006a6c9a: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 006a6c9d: lea ebp, [esi + 4] */ r_ebp = (u32)(r_esi+0x4u);
    /* 006a6ca0: mov ebx, eax */ r_ebx = r_eax;
    /* 006a6ca2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6ca4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006a6ca8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6caa: jle 0x6a6cc1 */ if ((fZ||fS!=fO)) goto L_006a6cc1;
L_006a6cac:; BB(0x006a6cac);
    /* 006a6cac: mov edi, edx */ r_edi = r_edx;
L_006a6cae:; BB(0x006a6cae);
    /* 006a6cae: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006a6cb1: cmp edx, dword ptr [esp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6cb5: je 0x6a6cc9 */ if (fZ) goto L_006a6cc9;
L_006a6cb7:; BB(0x006a6cb7);
    /* 006a6cb7: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a6cba: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006a6cbd: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a6cbf: jl 0x6a6cae */ if ((fS!=fO)) goto L_006a6cae;
L_006a6cc1:; BB(0x006a6cc1);
    /* 006a6cc1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a6cc4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6cc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6cc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6cc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6cc8: ret  */ FN_RET(0x006a6c80); r_esp += 4; return;
L_006a6cc9:; BB(0x006a6cc9);
    /* 006a6cc9: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 006a6ccd: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006a6cd1: lea edi, [ebp + 8] */ r_edi = (u32)(r_ebp+0x8u);
    /* 006a6cd4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6cd7: je 0x6a6d28 */ if (fZ) goto L_006a6d28;
L_006a6cd9:; BB(0x006a6cd9);
    /* 006a6cd9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a6cdb:; BB(0x006a6cdb);
    /* 006a6cdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6cdd: je 0x6a6ce9 */ if (fZ) goto L_006a6ce9;
L_006a6cdf:; BB(0x006a6cdf);
    /* 006a6cdf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a6ce1: call 0x6c1a08 */ r_esp -= 4; W32(r_esp, 0x6a6ce6u); f_006c1a08();
    /* 006a6ce6: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
L_006a6ce9:; BB(0x006a6ce9);
    /* 006a6ce9: sub ebx, dword ptr [esp + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006a6ced: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a6cf0: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006a6cf2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6cf4: jle 0x6a6d19 */ if ((fZ||fS!=fO)) goto L_006a6d19;
L_006a6cf6:; BB(0x006a6cf6);
    /* 006a6cf6: lea edx, [ebp + 0x1c] */ r_edx = (u32)(r_ebp+0x1cu);
    /* 006a6cf9: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a6cfb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a6cfd: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006a6d00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a6d02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a6d04: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006a6d06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a6d07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6d08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a6d09: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6a6d0eu); f_0086b6b8();
    /* 006a6d0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a6d11:; BB(0x006a6d11);
    /* 006a6d11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a6d14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6d15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6d16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6d17: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6d18: ret  */ FN_RET(0x006a6c80); r_esp += 4; return;
L_006a6d19:; BB(0x006a6d19);
    /* 006a6d19: mov eax, ebp */ r_eax = r_ebp;
    /* 006a6d1b: call 0x6a43a0 */ r_esp -= 4; W32(r_esp, 0x6a6d20u); f_006a43a0();
    /* 006a6d20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a6d23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6d24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a6d25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6d26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6d27: ret  */ FN_RET(0x006a6c80); r_esp += 4; return;
L_006a6d28:; BB(0x006a6d28);
    /* 006a6d28: movzx edx, byte ptr [edi + 1] */ r_edx = (u32)R8((u32)(r_edi+0x1u));
    /* 006a6d2c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6d2f: jne 0x6a6cd9 */ if (!fZ) goto L_006a6cd9;
L_006a6d31:; BB(0x006a6d31);
    /* 006a6d31: mov edx, 1 */ r_edx = 0x1u;
    /* 006a6d36: jmp 0x6a6cdb */ goto L_006a6cdb;
}

void f_006a6d38(void) /* sub_6A6D38 */
{
    FN_ENTER(0x006a6d38);
    /* 006a6d38: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a6d3b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a6d3f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006a6d43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a6d45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6d47: jle 0x6a6dd6 */ if ((fZ||fS!=fO)) goto L_006a6dd6;
L_006a6d4d:; BB(0x006a6d4d);
    /* 006a6d4d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006a6d51: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006a6d55: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_006a6d58:; BB(0x006a6d58);
    /* 006a6d58: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 006a6d5b: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6d61: je 0x6a6dc5 */ if (fZ) goto L_006a6dc5;
L_006a6d63:; BB(0x006a6d63);
    /* 006a6d63: movzx esi, byte ptr [edx + 8] */ r_esi = (u32)R8((u32)(r_edx+0x8u));
    /* 006a6d67: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6d69: jne 0x6a6d97 */ if (!fZ) goto L_006a6d97;
L_006a6d6b:; BB(0x006a6d6b);
    /* 006a6d6b: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 006a6d6d: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 006a6d6f: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 006a6d72: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 006a6d75: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 006a6d78: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 006a6d7b: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 006a6d7e: mov dword ptr [ebx + 0xc], esi */ W32((u32)(r_ebx+0xcu), r_esi);
    /* 006a6d81: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 006a6d84: mov dword ptr [ebx + 0x10], esi */ W32((u32)(r_ebx+0x10u), r_esi);
    /* 006a6d87: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 006a6d8a: mov dword ptr [ebx + 0x14], esi */ W32((u32)(r_ebx+0x14u), r_esi);
    /* 006a6d8d: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 006a6d90: mov dword ptr [ebx + 0x18], esi */ W32((u32)(r_ebx+0x18u), r_esi);
    /* 006a6d93: movzx esi, byte ptr [edx + 8] */ r_esi = (u32)R8((u32)(r_edx+0x8u));
L_006a6d97:; BB(0x006a6d97);
    /* 006a6d97: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6d9a: jne 0x6a6dc5 */ if (!fZ) goto L_006a6dc5;
L_006a6d9c:; BB(0x006a6d9c);
    /* 006a6d9c: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 006a6d9e: mov dword ptr [ebx + 0x1c], esi */ W32((u32)(r_ebx+0x1cu), r_esi);
    /* 006a6da1: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 006a6da4: mov dword ptr [ebx + 0x20], esi */ W32((u32)(r_ebx+0x20u), r_esi);
    /* 006a6da7: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 006a6daa: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 006a6dad: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 006a6db0: mov dword ptr [ebx + 0x28], esi */ W32((u32)(r_ebx+0x28u), r_esi);
    /* 006a6db3: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 006a6db6: mov dword ptr [ebx + 0x2c], esi */ W32((u32)(r_ebx+0x2cu), r_esi);
    /* 006a6db9: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 006a6dbc: mov dword ptr [ebx + 0x30], esi */ W32((u32)(r_ebx+0x30u), r_esi);
    /* 006a6dbf: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 006a6dc2: mov dword ptr [ebx + 0x34], esi */ W32((u32)(r_ebx+0x34u), r_esi);
L_006a6dc5:; BB(0x006a6dc5);
    /* 006a6dc5: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a6dc8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a6dcb: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a6dcd: jl 0x6a6d58 */ if ((fS!=fO)) goto L_006a6d58;
L_006a6dcf:; BB(0x006a6dcf);
    /* 006a6dcf: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006a6dd3: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006a6dd6:; BB(0x006a6dd6);
    /* 006a6dd6: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6ddb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a6dde: ret  */ FN_RET(0x006a6d38); r_esp += 4; return;
}

void f_006a6de0(void) /* sub_6A6DE0 */
{
    FN_ENTER(0x006a6de0);
    /* 006a6de0: mov dword ptr [0xa943a8], 0x3f800000 */ W32((u32)(0xa943a8u), 0x3f800000u);
    /* 006a6dea: mov dword ptr [0xa943ac], 0x41000000 */ W32((u32)(0xa943acu), 0x41000000u);
    /* 006a6df4: mov dword ptr [0xa943b0], 0x3fc00000 */ W32((u32)(0xa943b0u), 0x3fc00000u);
    /* 006a6dfe: ret  */ FN_RET(0x006a6de0); r_esp += 4; return;
}

void f_006a6e00(void) /* sub_6A6E00 */
{
    FN_ENTER(0x006a6e00);
    /* 006a6e00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6e01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6e02: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a6e05: mov esi, ecx */ r_esi = r_ecx;
    /* 006a6e07: movsx ebx, byte ptr [esi + 0x1d] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esi+0x1du));
    /* 006a6e0b: mov byte ptr [esi + 0x1e], 0 */ W8((u32)(r_esi+0x1eu), 0x0u);
    /* 006a6e0f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6e11: jne 0x6a6e1e */ if (!fZ) goto L_006a6e1e;
L_006a6e13:; BB(0x006a6e13);
    /* 006a6e13: mov byte ptr [esi + 0x1f], 1 */ W8((u32)(r_esi+0x1fu), 0x1u);
    /* 006a6e17: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006a6e1c: jmp 0x6a6e29 */ goto L_006a6e29;
L_006a6e1e:; BB(0x006a6e1e);
    /* 006a6e1e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006a6e21: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a6e23: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 006a6e26: mov byte ptr [esi + 0x1f], cl */ W8((u32)(r_esi+0x1fu), (u8)r_ecx);
L_006a6e29:; BB(0x006a6e29);
    /* 006a6e29: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 006a6e2e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a6e31: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006a6e34: fmul dword ptr [0x93db68] */ ST(0) = ST(0) * R_F32((u32)(0x93db68u));
    /* 006a6e3a: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 006a6e3d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6e3f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006a6e3f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006a6e3f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006a6e41: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 006a6e44: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006a6e47: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 006a6e4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a6e4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6e4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6e4f: ret  */ FN_RET(0x006a6e00); r_esp += 4; return;
}

void f_006a6e2e(void)
{
    FN_ENTER(0x006a6e2e);
    /* 006a6e2e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a6e31: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006a6e34: fmul dword ptr [0x93db68] */ ST(0) = ST(0) * R_F32((u32)(0x93db68u));
    /* 006a6e3a: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 006a6e3d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6e3f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006a6e3f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006a6e3f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006a6e41: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 006a6e44: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006a6e47: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 006a6e4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a6e4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6e4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6e4f: ret  */ FN_RET(0x006a6e2e); r_esp += 4; return;
}

void f_006a6e50(void) /* sub_6A6E50 */
{
    FN_ENTER(0x006a6e50);
    /* 006a6e50: mov dword ptr [ecx], 0xb39458 */ W32((u32)(r_ecx), 0xb39458u);
    /* 006a6e56: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6e58: mov byte ptr [ecx + 4], dl */ W8((u32)(r_ecx+0x4u), (u8)r_edx);
    /* 006a6e5b: mov byte ptr [ecx + 5], dl */ W8((u32)(r_ecx+0x5u), (u8)r_edx);
    /* 006a6e5e: mov byte ptr [ecx + 6], dl */ W8((u32)(r_ecx+0x6u), (u8)r_edx);
    /* 006a6e61: mov byte ptr [ecx + 7], dl */ W8((u32)(r_ecx+0x7u), (u8)r_edx);
    /* 006a6e64: mov byte ptr [ecx + 8], dl */ W8((u32)(r_ecx+0x8u), (u8)r_edx);
    /* 006a6e67: mov byte ptr [ecx + 9], dl */ W8((u32)(r_ecx+0x9u), (u8)r_edx);
    /* 006a6e6a: mov byte ptr [ecx + 0xa], dl */ W8((u32)(r_ecx+0xau), (u8)r_edx);
    /* 006a6e6d: mov byte ptr [ecx + 0xb], dl */ W8((u32)(r_ecx+0xbu), (u8)r_edx);
    /* 006a6e70: mov eax, ecx */ r_eax = r_ecx;
    /* 006a6e72: ret  */ FN_RET(0x006a6e50); r_esp += 4; return;
}

void f_006a6e74(void) /* sub_6A6E74 */
{
    FN_ENTER(0x006a6e74);
    /* 006a6e74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6e75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6e76: call 0x6a6ea8 */ r_esp -= 4; W32(r_esp, 0x6a6e7bu); f_006a6ea8();
    /* 006a6e7b: mov edi, eax */ r_edi = r_eax;
    /* 006a6e7d: movsx eax, byte ptr [esp + 0xc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0xcu));
    /* 006a6e82: call 0x6a6ed1 */ r_esp -= 4; W32(r_esp, 0x6a6e87u); f_006a6ed1();
    /* 006a6e87: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006a6e8d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006a6e90: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6e92: jl 0x6a6e9e */ if ((fS!=fO)) goto L_006a6e9e;
L_006a6e94:; BB(0x006a6e94);
    /* 006a6e94: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6e99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a6e9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6e9b: ret 4 */ FN_RET(0x006a6e74); r_esp += 8; return;
L_006a6e9e:; BB(0x006a6e9e);
    /* 006a6e9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6ea0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a6ea1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6ea2: ret 4 */ FN_RET(0x006a6e74); r_esp += 8; return;
}

void f_006a6ea8(void) /* sub_6A6EA8 */
{
    FN_ENTER(0x006a6ea8);
    /* 006a6ea8: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 006a6eac: movzx eax, byte ptr [ecx + 5] */ r_eax = (u32)R8((u32)(r_ecx+0x5u));
    /* 006a6eb0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a6eb2: movzx edx, byte ptr [ecx + 6] */ r_edx = (u32)R8((u32)(r_ecx+0x6u));
    /* 006a6eb6: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a6eb8: movzx eax, byte ptr [ecx + 7] */ r_eax = (u32)R8((u32)(r_ecx+0x7u));
    /* 006a6ebc: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a6ebe: movzx edx, byte ptr [ecx + 8] */ r_edx = (u32)R8((u32)(r_ecx+0x8u));
    /* 006a6ec2: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a6ec4: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 006a6ec7: mov eax, edx */ r_eax = r_edx;
    /* 006a6ec9: ret  */ FN_RET(0x006a6ea8); r_esp += 4; return;
}

void f_006a6ed1(void) /* sub_6A6ED1 */
{
    FN_ENTER(0x006a6ed1);
    /* 006a6ed1: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006a6ed4: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a6ed7: ja 0x6a6eee */ if ((!fC&&!fZ)) goto L_006a6eee;
L_006a6ed9:; BB(0x006a6ed9);
    /* 006a6ed9: mov eax, dword ptr [eax*4 + 0x93db94] */ r_eax = R32((u32)(r_eax*4+0x93db94u));
    /* 006a6ee0: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a6eee:; BB(0x006a6eee);
    /* 006a6eee: mov eax, 0xfa */ r_eax = 0xfau;
    /* 006a6ef3: ret  */ FN_RET(0x006a6ed1); r_esp += 4; return;
}

void f_006a6ee2(void)
{
    FN_ENTER(0x006a6ee2);
    /* 006a6ee2: mov eax, 0x96 */ r_eax = 0x96u;
    /* 006a6ee7: ret  */ FN_RET(0x006a6ee2); r_esp += 4; return;
}

void f_006a6ee8(void)
{
    FN_ENTER(0x006a6ee8);
    /* 006a6ee8: mov eax, 0x96 */ r_eax = 0x96u;
    /* 006a6eed: ret  */ FN_RET(0x006a6ee8); r_esp += 4; return;
}

void f_006a6eee(void)
{
    FN_ENTER(0x006a6eee);
    /* 006a6eee: mov eax, 0xfa */ r_eax = 0xfau;
    /* 006a6ef3: ret  */ FN_RET(0x006a6eee); r_esp += 4; return;
}

void f_006a6ef4(void) /* sub_6A6EF4 */
{
    FN_ENTER(0x006a6ef4);
    /* 006a6ef4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6ef5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6ef6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6ef7: mov edi, ecx */ r_edi = r_ecx;
    /* 006a6ef9: mov ecx, edi */ r_ecx = r_edi;
    /* 006a6efb: call 0x6a6ea8 */ r_esp -= 4; W32(r_esp, 0x6a6f00u); f_006a6ea8();
    /* 006a6f00: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 006a6f05: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a6f07: movzx esi, al */ r_esi = (u32)(u8)r_eax;
    /* 006a6f0a: movsx eax, byte ptr [esp + 0x10] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x10u));
    /* 006a6f0f: call 0x6a6ed1 */ r_esp -= 4; W32(r_esp, 0x6a6f14u); f_006a6ed1();
    /* 006a6f14: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006a6f17: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a6f19: jle 0x6a6f23 */ if ((fZ||fS!=fO)) goto L_006a6f23;
L_006a6f1b:; BB(0x006a6f1b);
    /* 006a6f1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6f1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a6f1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6f1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6f20: ret 0xc */ FN_RET(0x006a6ef4); r_esp += 16; return;
L_006a6f23:; BB(0x006a6f23);
    /* 006a6f23: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 006a6f28: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006a6f2c: add byte ptr [eax + edi + 4], dl */ { u32 ad = (u32)(r_eax+r_edi+0x4u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006a6f30: mov eax, 1 */ r_eax = 0x1u;
    /* 006a6f35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a6f36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a6f37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a6f38: ret 0xc */ FN_RET(0x006a6ef4); r_esp += 16; return;
}

void f_006a6f3c(void) /* sub_6A6F3C */
{
    FN_ENTER(0x006a6f3c);
    /* 006a6f3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6f3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a6f3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6f41: call 0x6a6f60 */ r_esp -= 4; W32(r_esp, 0x6a6f46u); f_006a6f60();
    /* 006a6f46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a6f4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6f4c: jne 0x6a6f52 */ if (!fZ) goto L_006a6f52;
L_006a6f4e:; BB(0x006a6f4e);
    /* 006a6f4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6f4f: ret 4 */ FN_RET(0x006a6f3c); r_esp += 8; return;
L_006a6f52:; BB(0x006a6f52);
    /* 006a6f52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6f53: call 0x797e64 */ r_esp -= 4; W32(r_esp, 0x6a6f58u); f_00797e64();
    /* 006a6f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a6f59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a6f5a: ret 4 */ FN_RET(0x006a6f3c); r_esp += 8; return;
}

void f_006a6f60(void) /* sub_6A6F60 */
{
    FN_ENTER(0x006a6f60);
    /* 006a6f60: mov dword ptr [ecx], 0xb39d40 */ W32((u32)(r_ecx), 0xb39d40u);
    /* 006a6f66: ret  */ FN_RET(0x006a6f60); r_esp += 4; return;
}

void f_006a6f70(void) /* sub_6A6F70 */
{
    FN_ENTER(0x006a6f70);
    /* 006a6f70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a6f72: ret 0xc */ FN_RET(0x006a6f70); r_esp += 16; return;
}

void f_006a6f79(void)
{
    FN_ENTER(0x006a6f79);
}

void f_006a6f80(void) /* sub_6A6F80 */
{
    FN_ENTER(0x006a6f80);
    /* 006a6f80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6f82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a6f83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6f84: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a6f87: mov edi, ecx */ r_edi = r_ecx;
    /* 006a6f89: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006a6f8b: mov ecx, edi */ r_ecx = r_edi;
    /* 006a6f8d: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 006a6f91: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6a6f94u); call_ind(t); }
    /* 006a6f94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6f96: je 0x6a70c8 */ if (fZ) goto L_006a70c8;
L_006a6f9c:; BB(0x006a6f9c);
    /* 006a6f9c: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a6fa0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6fa1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006a6fa3: mov ecx, edi */ r_ecx = r_edi;
    /* 006a6fa5: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6a6fa8u); call_ind(t); }
    /* 006a6fa8: mov esi, eax */ r_esi = r_eax;
    /* 006a6faa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a6fac: je 0x6a70c8 */ if (fZ) goto L_006a70c8;
L_006a6fb2:; BB(0x006a6fb2);
    /* 006a6fb2: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 006a6fb4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6fb6: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006a6fb9: mov ecx, edi */ r_ecx = r_edi;
    /* 006a6fbb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006a6fbf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6fc0: call dword ptr [ebp + 0x12c] */ { u32 t = R32((u32)(r_ebp+0x12cu)); r_esp -= 4; W32(r_esp, 0x6a6fc6u); call_ind(t); }
    /* 006a6fc6: mov ebp, eax */ r_ebp = r_eax;
    /* 006a6fc8: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006a6fca: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a6fcc: mov ecx, edi */ r_ecx = r_edi;
    /* 006a6fce: call dword ptr [edx + 0x128] */ { u32 t = R32((u32)(r_edx+0x128u)); r_esp -= 4; W32(r_esp, 0x6a6fd4u); call_ind(t); }
    /* 006a6fd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6fd6: jle 0x6a70b1 */ if ((fZ||fS!=fO)) goto L_006a70b1;
L_006a6fdc:; BB(0x006a6fdc);
    /* 006a6fdc: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006a6fe0: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
L_006a6fe4:; BB(0x006a6fe4);
    /* 006a6fe4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006a6fe7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a6fe8: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 006a6fea: call 0x6a7a40 */ r_esp -= 4; W32(r_esp, 0x6a6fefu); f_006a7a40();
    /* 006a6fef: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a6ff3: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006a6ff7: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 006a6ffb: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006a6fff: lea edi, [ecx + 0x1f] */ r_edi = (u32)(r_ecx+0x1fu);
    /* 006a7002: and edi, 0xffffffe0 */ {  u32 a = r_edi; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006a7005: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 006a7009: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a700a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6a700fu); f_008581c5();
    /* 006a700f: mov edi, eax */ r_edi = r_eax;
    /* 006a7011: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a7014: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7016: je 0x6a70c0 */ if (fZ) goto L_006a70c0;
L_006a701c:; BB(0x006a701c);
    /* 006a701c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006a7020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7021: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7022: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006a7026: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7027: call 0x6a7aa4 */ r_esp -= 4; W32(r_esp, 0x6a702cu); f_006a7aa4();
    /* 006a702c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a702f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a7033: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7034: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 006a7038: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006a703a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a703b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x6a703du); call_ind(t); }
    /* 006a703d: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a7042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7043: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006a7047: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7048: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7049: call 0x5b9b3c */ r_esp -= 4; W32(r_esp, 0x6a704eu); f_005b9b3c();
    /* 006a704e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006a7052: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a7053: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6a7058u); f_00857e98();
    /* 006a7058: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a705b:; BB(0x006a705b);
    /* 006a705b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006a705f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a7061: je 0x6a7083 */ if (fZ) goto L_006a7083;
L_006a7063:; BB(0x006a7063);
    /* 006a7063: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a7067: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7068: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 006a706c: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006a706e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a706f: call dword ptr [edi] */ { u32 t = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, 0x6a7071u); call_ind(t); }
    /* 006a7071: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006a7075: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a7076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a7077: call 0x5b9d70 */ r_esp -= 4; W32(r_esp, 0x6a707cu); f_005b9d70();
    /* 006a707c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006a7080: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a7083:; BB(0x006a7083);
    /* 006a7083: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006a7087: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006a708b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006a708d: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 006a708f: mov dword ptr [ebp], edi */ W32((u32)(r_ebp), r_edi);
    /* 006a7092: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 006a7095: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 006a7098: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006a709a: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a709d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a70a0: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a70a3: call dword ptr [edx + 0x128] */ { u32 t = R32((u32)(r_edx+0x128u)); r_esp -= 4; W32(r_esp, 0x6a70a9u); call_ind(t); }
    /* 006a70a9: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a70ab: jl 0x6a6fe4 */ if ((fS!=fO)) goto L_006a6fe4;
L_006a70b1:; BB(0x006a70b1);
    /* 006a70b1: mov eax, 1 */ r_eax = 0x1u;
    /* 006a70b6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a70b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a70ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a70bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a70bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a70bd: ret 0xc */ FN_RET(0x006a6f80); r_esp += 16; return;
L_006a70c0:; BB(0x006a70c0);
    /* 006a70c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a70c2: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006a70c6: jmp 0x6a705b */ goto L_006a705b;
L_006a70c8:; BB(0x006a70c8);
    /* 006a70c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a70ca: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a70cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a70ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a70cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a70d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a70d1: ret 0xc */ FN_RET(0x006a6f80); r_esp += 16; return;
}

