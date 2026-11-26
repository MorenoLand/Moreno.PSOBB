#include "protos.h"

void f_00731080(void) /* sub_731080 */
{
    FN_ENTER(0x00731080);
    /* 00731080: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731081: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731082: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731083: mov edi, ecx */ r_edi = r_ecx;
    /* 00731085: lea ebp, [edi + 0x2ec] */ r_ebp = (u32)(r_edi+0x2ecu);
    /* 0073108b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073108c: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x731091u); f_00858009();
    /* 00731091: mov esi, eax */ r_esi = r_eax;
    /* 00731093: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00731096: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073109c: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007310a2: jne 0x7310e0 */ if (!fZ) goto L_007310e0;
L_007310a4:; BB(0x007310a4);
    /* 007310a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007310a5: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7310aau); f_00858009();
    /* 007310aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007310ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007310ad: je 0x7310e0 */ if (fZ) goto L_007310e0;
L_007310af:; BB(0x007310af);
    /* 007310af: movzx ecx, word ptr [edi + 0x418] */ r_ecx = (u32)R16((u32)(r_edi+0x418u));
    /* 007310b6: mov ebp, 1 */ r_ebp = 0x1u;
    /* 007310bb: add edi, 0x41a */ {  u32 a = r_edi; u32 b = 0x41au; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007310c1: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 007310c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007310c6: je 0x7310dc */ if (fZ) goto L_007310dc;
L_007310c8:; BB(0x007310c8);
    /* 007310c8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007310ca: je 0x7310d1 */ if (fZ) goto L_007310d1;
L_007310cc:; BB(0x007310cc);
    /* 007310cc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007310cf: mov ecx, edx */ r_ecx = r_edx;
L_007310d1:; BB(0x007310d1);
    /* 007310d1: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 007310d5: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007310d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007310da: jne 0x7310c8 */ if (!fZ) goto L_007310c8;
L_007310dc:; BB(0x007310dc);
    /* 007310dc: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007310de: jmp 0x7310e2 */ goto L_007310e2;
L_007310e0:; BB(0x007310e0);
    /* 007310e0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007310e2:; BB(0x007310e2);
    /* 007310e2: lea eax, [esi + ebp + 1] */ r_eax = (u32)(r_esi+r_ebp+0x1u);
    /* 007310e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007310e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007310e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007310e9: ret  */ FN_RET(0x00731080); r_esp += 4; return;
}

void f_007310ec(void) /* sub_7310EC */
{
    FN_ENTER(0x007310ec);
    /* 007310ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007310ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007310ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007310ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007310f0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007310f3: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007310f5: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 007310f9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007310fb: je 0x7311c5 */ if (fZ) goto L_007311c5;
L_00731101:; BB(0x00731101);
    /* 00731101: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731102: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x731107u); f_00858009();
    /* 00731107: mov esi, eax */ r_esi = r_eax;
    /* 00731109: mov edx, 0x7f */ r_edx = 0x7fu;
    /* 0073110e: cmp esi, 0x7f */ {  u32 a = r_esi; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00731111: jle 0x731115 */ if ((fZ||fS!=fO)) goto L_00731115;
L_00731113:; BB(0x00731113);
    /* 00731113: mov esi, edx */ r_esi = r_edx;
L_00731115:; BB(0x00731115);
    /* 00731115: lea ebx, [esi + esi + 2] */ r_ebx = (u32)(r_esi+r_esi+0x2u);
    /* 00731119: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073111a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x73111fu); f_008581c5();
    /* 0073111f: mov ebx, eax */ r_ebx = r_eax;
    /* 00731121: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731122: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731123: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00731124: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x731129u); f_00857dec();
    /* 00731129: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073112b: mov word ptr [ebx + esi*2], dx */ W16((u32)(r_ebx+r_esi*2), (u16)r_edx);
    /* 0073112f: push dword ptr [0xa9cd44] */ { u32 v = R32((u32)(0xa9cd44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00731135: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x73113au); f_0079320c();
    /* 0073113a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073113d: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 00731140: mov edx, ebx */ r_edx = r_ebx;
    /* 00731142: lea eax, [ebp + 0x2ec] */ r_eax = (u32)(r_ebp+0x2ecu);
    /* 00731148: lea esi, [ebp + 0x418] */ r_esi = (u32)(r_ebp+0x418u);
    /* 0073114e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00731150: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731152: je 0x7311a7 */ if (fZ) goto L_007311a7;
L_00731154:; BB(0x00731154);
    /* 00731154: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00731158: mov ebx, eax */ r_ebx = r_eax;
    /* 0073115a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0073115d: mov ebp, edx */ r_ebp = r_edx;
L_0073115f:; BB(0x0073115f);
    /* 0073115f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00731161: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00731162: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00731163: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731164: call 0x7ac580 */ r_esp -= 4; W32(r_esp, 0x731169u); f_007ac580();
    /* 00731169: mov ebp, eax */ r_ebp = r_eax;
    /* 0073116b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073116e: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 00731172: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731174: je 0x73119e */ if (fZ) goto L_0073119e;
L_00731176:; BB(0x00731176);
    /* 00731176: mov word ptr [ebx], cx */ W16((u32)(r_ebx), (u16)r_ecx);
    /* 00731179: call 0x84198c */ r_esp -= 4; W32(r_esp, 0x73117eu); f_0084198c();
    /* 0073117e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073117f: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x731184u); f_00841950();
    /* 00731184: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731185: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00731188: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073118b: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 0073118f: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00731192: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00731195: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00731198: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073119a: jne 0x73115f */ if (!fZ) goto L_0073115f;
L_0073119c:; BB(0x0073119c);
    /* 0073119c: jmp 0x7311e5 */ goto L_007311e5;
L_0073119e:; BB(0x0073119e);
    /* 0073119e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007311a1: mov eax, ebx */ r_eax = r_ebx;
    /* 007311a3: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_007311a7:; BB(0x007311a7);
    /* 007311a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007311a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007311aa: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007311ad: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 007311b0: mov dword ptr [ebp + 0x3ec], edi */ W32((u32)(r_ebp+0x3ecu), r_edi);
    /* 007311b6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7311bbu); f_00857e98();
    /* 007311bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007311be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007311bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007311c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007311c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007311c2: ret 4 */ FN_RET(0x007310ec); r_esp += 8; return;
L_007311c5:; BB(0x007311c5);
    /* 007311c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007311c7: mov word ptr [ebp + 0x2ec], ax */ W16((u32)(r_ebp+0x2ecu), (u16)r_eax);
    /* 007311ce: mov word ptr [ebp + 0x418], ax */ W16((u32)(r_ebp+0x418u), (u16)r_eax);
    /* 007311d5: mov dword ptr [ebp + 0x3ec], eax */ W32((u32)(r_ebp+0x3ecu), r_eax);
    /* 007311db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007311de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007311df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007311e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007311e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007311e2: ret 4 */ FN_RET(0x007310ec); r_esp += 8; return;
L_007311e5:; BB(0x007311e5);
    /* 007311e5: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007311e8: mov eax, ebx */ r_eax = r_ebx;
    /* 007311ea: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 007311ee: jmp 0x7311a7 */ goto L_007311a7;
}

void f_007311f0(void) /* sub_7311F0 */
{
    FN_ENTER(0x007311f0);
    /* 007311f0: call 0x72fe6c */ r_esp -= 4; W32(r_esp, 0x7311f5u); f_0072fe6c();
    /* 007311f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007311f7: jne 0x731200 */ if (!fZ) goto L_00731200;
L_007311f9:; BB(0x007311f9);
    /* 007311f9: mov eax, 1 */ r_eax = 0x1u;
    /* 007311fe: jmp 0x731202 */ goto L_00731202;
L_00731200:; BB(0x00731200);
    /* 00731200: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00731202:; BB(0x00731202);
    /* 00731202: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731204: mov eax, 0 */ r_eax = 0x0u;
    /* 00731209: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0073120c: ret  */ FN_RET(0x007311f0); r_esp += 4; return;
}

void f_00731210(void) /* sub_731210 */
{
    FN_ENTER(0x00731210);
    /* 00731210: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 00731216: test al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731218: je 0x73121b */ if (fZ) goto L_0073121b;
L_0073121a:; BB(0x0073121a);
    /* 0073121a: ret  */ FN_RET(0x00731210); r_esp += 4; return;
L_0073121b:; BB(0x0073121b);
    /* 0073121b: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00731220: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 00731226: call 0x8411c4 */ r_esp -= 4; W32(r_esp, 0x73122bu); f_008411c4();
    /* 0073122b: ret  */ FN_RET(0x00731210); r_esp += 4; return;
}

void f_0073122c(void) /* sub_73122C */
{
    FN_ENTER(0x0073122c);
    /* 0073122c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073122d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073122f: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00731235: test al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731237: je 0x73123b */ if (fZ) goto L_0073123b;
L_00731239:; BB(0x00731239);
    /* 00731239: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073123a: ret  */ FN_RET(0x0073122c); r_esp += 4; return;
L_0073123b:; BB(0x0073123b);
    /* 0073123b: call 0x8411c4 */ r_esp -= 4; W32(r_esp, 0x731240u); f_008411c4();
    /* 00731240: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00731246: or eax, 0x180 */ {  u32 a = r_eax; u32 b = 0x180u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073124b: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 00731251: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731252: ret  */ FN_RET(0x0073122c); r_esp += 4; return;
}

void f_00731254(void) /* sub_731254 */
{
    FN_ENTER(0x00731254);
    /* 00731254: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 0073125a: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073125d: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 00731263: ret  */ FN_RET(0x00731254); r_esp += 4; return;
}

void f_00731270(void) /* sub_731270 */
{
    FN_ENTER(0x00731270);
    /* 00731270: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x731275u); f_00710f64();
    /* 00731275: ret  */ FN_RET(0x00731270); r_esp += 4; return;
}

void f_00731278(void) /* sub_731278 */
{
    FN_ENTER(0x00731278);
    /* 00731278: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 0073127e: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731283: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 00731289: ret  */ FN_RET(0x00731278); r_esp += 4; return;
}

void f_0073128c(void) /* sub_73128C */
{
    FN_ENTER(0x0073128c);
    /* 0073128c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00731290: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00731294: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00731297: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0073129a: ret 8 */ FN_RET(0x0073128c); r_esp += 12; return;
}

void f_007312a0(void) /* sub_7312A0 */
{
    FN_ENTER(0x007312a0);
    /* 007312a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007312a4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007312a8: mov dword ptr [ecx + 0x3f8], eax */ W32((u32)(r_ecx+0x3f8u), r_eax);
    /* 007312ae: mov dword ptr [ecx + 0x3fc], edx */ W32((u32)(r_ecx+0x3fcu), r_edx);
    /* 007312b4: mov dword ptr [ecx + 0x400], eax */ W32((u32)(r_ecx+0x400u), r_eax);
    /* 007312ba: mov dword ptr [ecx + 0x404], edx */ W32((u32)(r_ecx+0x404u), r_edx);
    /* 007312c0: ret 8 */ FN_RET(0x007312a0); r_esp += 12; return;
}

void f_007312d0(void) /* sub_7312D0 */
{
    FN_ENTER(0x007312d0);
    /* 007312d0: mov dword ptr [ecx + 0x408], 0 */ W32((u32)(r_ecx+0x408u), 0x0u);
    /* 007312da: ret  */ FN_RET(0x007312d0); r_esp += 4; return;
}

void f_007312dc(void) /* sub_7312DC */
{
    FN_ENTER(0x007312dc);
    /* 007312dc: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 007312e2: or eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007312e7: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 007312ed: ret  */ FN_RET(0x007312dc); r_esp += 4; return;
}

void f_007312f0(void) /* sub_7312F0 */
{
    FN_ENTER(0x007312f0);
    /* 007312f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007312f4: mov dword ptr [ecx + 0x3f4], eax */ W32((u32)(r_ecx+0x3f4u), r_eax);
    /* 007312fa: ret 4 */ FN_RET(0x007312f0); r_esp += 8; return;
}

void f_00731300(void) /* sub_731300 */
{
    FN_ENTER(0x00731300);
    /* 00731300: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731301: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00731304: mov edi, ecx */ r_edi = r_ecx;
    /* 00731306: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0073130a: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0073130e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731310: jne 0x731349 */ if (!fZ) goto L_00731349;
L_00731312:; BB(0x00731312);
    /* 00731312: fld dword ptr [0x970f94] */ FPUSH(R_F32((u32)(0x970f94u)));
    /* 00731318: fld dword ptr [0x970f90] */ FPUSH(R_F32((u32)(0x970f90u)));
    /* 0073131e: mov dword ptr [edi + 0x38], 0x47c35000 */ W32((u32)(r_edi+0x38u), 0x47c35000u);
    /* 00731325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00731327: mov dword ptr [edi + 0x3c], 0x42080000 */ W32((u32)(r_edi+0x3cu), 0x42080000u);
    /* 0073132e: jle 0x73133d */ if ((fZ||fS!=fO)) goto L_0073133d;
L_00731330:; BB(0x00731330);
    /* 00731330: cmp eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00731333: jg 0x73133d */ if ((!fZ&&fS==fO)) goto L_0073133d;
L_00731335:; BB(0x00731335);
    /* 00731335: mov dword ptr [edi + 0x3f4], eax */ W32((u32)(r_edi+0x3f4u), r_eax);
    /* 0073133b: jmp 0x73138e */ goto L_0073138e;
L_0073133d:; BB(0x0073133d);
    /* 0073133d: mov dword ptr [edi + 0x3f4], 0x7f */ W32((u32)(r_edi+0x3f4u), 0x7fu);
    /* 00731347: jmp 0x73138e */ goto L_0073138e;
L_00731349:; BB(0x00731349);
    /* 00731349: mov dword ptr [edi + 0x3f4], 0x7f */ W32((u32)(r_edi+0x3f4u), 0x7fu);
    /* 00731353: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00731356: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00731359: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0073135c: fadd dword ptr [eax*4 + 0x970f78] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970f78u));
    /* 00731363: fadd dword ptr [0x970f9c] */ ST(0) = ST(0) + R_F32((u32)(0x970f9cu));
    /* 00731369: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0073136c: fst dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0));
    /* 0073136f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00731371: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00731373: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00731377: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073137b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0073137e: fadd dword ptr [edx*4 + 0x970f78] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x970f78u));
    /* 00731385: fadd dword ptr [0x970f98] */ ST(0) = ST(0) + R_F32((u32)(0x970f98u));
    /* 0073138b: fst dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0));
L_0073138e:; BB(0x0073138e);
    /* 0073138e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00731390: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 00731393: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 00731396: mov ecx, edi */ r_ecx = r_edi;
    /* 00731398: call 0x72ee28 */ r_esp -= 4; W32(r_esp, 0x73139du); f_0072ee28();
    /* 0073139d: mov dword ptr [edi + 0x3f0], 0 */ W32((u32)(r_edi+0x3f0u), 0x0u);
    /* 007313a7: mov ecx, edi */ r_ecx = r_edi;
    /* 007313a9: call 0x7313b8 */ r_esp -= 4; W32(r_esp, 0x7313aeu); f_007313b8();
    /* 007313ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007313b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007313b2: ret 8 */ FN_RET(0x00731300); r_esp += 12; return;
}

void f_007313b8(void) /* sub_7313B8 */
{
    FN_ENTER(0x007313b8);
    /* 007313b8: mov dword ptr [ecx + 0x40c], 0 */ W32((u32)(r_ecx+0x40cu), 0x0u);
    /* 007313c2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007313c7: mov dword ptr [ecx + 0x410], eax */ W32((u32)(r_ecx+0x410u), r_eax);
    /* 007313cd: mov dword ptr [ecx + 0x414], eax */ W32((u32)(r_ecx+0x414u), r_eax);
    /* 007313d3: ret  */ FN_RET(0x007313b8); r_esp += 4; return;
}

void f_007313d4(void) /* sub_7313D4 */
{
    FN_ENTER(0x007313d4);
    /* 007313d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007313d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007313d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007313d9: call 0x7313f8 */ r_esp -= 4; W32(r_esp, 0x7313deu); f_007313f8();
    /* 007313de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007313e2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007313e4: jne 0x7313ea */ if (!fZ) goto L_007313ea;
L_007313e6:; BB(0x007313e6);
    /* 007313e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007313e7: ret 4 */ FN_RET(0x007313d4); r_esp += 8; return;
L_007313ea:; BB(0x007313ea);
    /* 007313ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007313eb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7313f0u); f_005c2f74();
    /* 007313f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007313f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007313f2: ret 4 */ FN_RET(0x007313d4); r_esp += 8; return;
}

void f_007313f8(void) /* sub_7313F8 */
{
    FN_ENTER(0x007313f8);
    /* 007313f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007313f9: mov ebp, esp */ r_ebp = r_esp;
    /* 007313fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007313fd: push 0x8f13f4 */ { u32 v = 0x8f13f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00731402: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00731408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731409: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00731410: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00731413: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00731416: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00731419: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0073141c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073141f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00731422: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00731425: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 00731428: mov dword ptr [eax], 0xb405f8 */ W32((u32)(r_eax), 0xb405f8u);
    /* 0073142e: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00731432: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00731438: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0073143c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073143f: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 00731446: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073144d: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x731452u); f_00710c28();
    /* 00731452: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00731455: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073145c: mov esp, ebp */ r_esp = r_ebp;
    /* 0073145e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073145f: ret  */ FN_RET(0x007313f8); r_esp += 4; return;
}

void f_0073145c(void)
{
    FN_ENTER(0x0073145c);
    /* 0073145c: mov esp, ebp */ r_esp = r_ebp;
    /* 0073145e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073145f: ret  */ FN_RET(0x0073145c); r_esp += 4; return;
}

void f_00731460(void) /* sub_731460 */
{
    FN_ENTER(0x00731460);
    /* 00731460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731461: mov ebp, esp */ r_ebp = r_esp;
    /* 00731463: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00731465: push 0x8f141c */ { u32 v = 0x8f141cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073146a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00731470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731471: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00731478: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073147b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073147e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00731481: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00731484: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00731487: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00731489: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00731490: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x731495u); f_005caba4();
    /* 00731495: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00731498: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073149b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0073149e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007314a0: je 0x7314fc */ if (fZ) goto L_007314fc;
L_007314a2:; BB(0x007314a2);
    /* 007314a2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007314a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007314b0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007314b3: push 0x971018 */ { u32 v = 0x971018u; r_esp -= 4; W32(r_esp, v); }
    /* 007314b8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007314bb: mov ecx, eax */ r_ecx = r_eax;
    /* 007314bd: call 0x731504 */ r_esp -= 4; W32(r_esp, 0x7314c2u); f_00731504();
    /* 007314c2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007314c9:; BB(0x007314c9);
    /* 007314c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007314d0: push 0x3ef00000 */ { u32 v = 0x3ef00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007314d5: push 0x3f200000 */ { u32 v = 0x3f200000u; r_esp -= 4; W32(r_esp, v); }
    /* 007314da: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007314dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007314df: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007314e2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 007314e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007314e6: call 0x72e824 */ r_esp -= 4; W32(r_esp, 0x7314ebu); f_0072e824();
    /* 007314eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007314ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007314f1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007314f8: mov esp, ebp */ r_esp = r_ebp;
    /* 007314fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007314fb: ret  */ FN_RET(0x00731460); r_esp += 4; return;
L_007314fc:; BB(0x007314fc);
    /* 007314fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007314fe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00731501: jmp 0x7314c9 */ goto L_007314c9;
}

void f_00731504(void) /* sub_731504 */
{
    FN_ENTER(0x00731504);
    /* 00731504: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731505: mov ebp, esp */ r_ebp = r_esp;
    /* 00731507: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00731509: push 0x8f1438 */ { u32 v = 0x8f1438u; r_esp -= 4; W32(r_esp, v); }
    /* 0073150e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00731514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731515: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073151c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073151f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00731522: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00731525: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00731528: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073152b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0073152e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00731531: movsx edx, word ptr [ebp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00731535: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00731538: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00731539: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073153c: push 0x9f2cbc */ { u32 v = 0x9f2cbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00731541: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x731546u); f_00710d30();
    /* 00731546: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073154d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00731550: mov dword ptr [ecx], 0xb405f8 */ W32((u32)(r_ecx), 0xb405f8u);
    /* 00731556: mov eax, dword ptr [0x9f2c80] */ r_eax = R32((u32)(0x9f2c80u));
    /* 0073155b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0073155e: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 00731563: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731566: je 0x731597 */ if (fZ) goto L_00731597;
L_00731568:; BB(0x00731568);
    /* 00731568: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073156b: jne 0x73157d */ if (!fZ) goto L_0073157d;
L_0073156d:; BB(0x0073156d);
    /* 0073156d: mov dword ptr [ecx + 0x64], 0x3f000000 */ W32((u32)(r_ecx+0x64u), 0x3f000000u);
    /* 00731574: mov dword ptr [ecx + 0x68], 0x3f000000 */ W32((u32)(r_ecx+0x68u), 0x3f000000u);
    /* 0073157b: jmp 0x7315a5 */ goto L_007315a5;
L_0073157d:; BB(0x0073157d);
    /* 0073157d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00731580: jl 0x7315a5 */ if ((fS!=fO)) goto L_007315a5;
L_00731582:; BB(0x00731582);
    /* 00731582: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00731585: jg 0x7315a5 */ if ((!fZ&&fS==fO)) goto L_007315a5;
L_00731587:; BB(0x00731587);
    /* 00731587: mov dword ptr [ecx + 0x64], 0x3ebd70a4 */ W32((u32)(r_ecx+0x64u), 0x3ebd70a4u);
    /* 0073158e: mov dword ptr [ecx + 0x68], 0x3ebd70a4 */ W32((u32)(r_ecx+0x68u), 0x3ebd70a4u);
    /* 00731595: jmp 0x7315a5 */ goto L_007315a5;
L_00731597:; BB(0x00731597);
    /* 00731597: mov dword ptr [ecx + 0x64], 0x3f800000 */ W32((u32)(r_ecx+0x64u), 0x3f800000u);
    /* 0073159e: mov dword ptr [ecx + 0x68], 0x3f800000 */ W32((u32)(r_ecx+0x68u), 0x3f800000u);
L_007315a5:; BB(0x007315a5);
    /* 007315a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007315a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007315aa: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 007315ad: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 007315b0: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 007315b3: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x7315b8u); f_00710f64();
    /* 007315b8: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 007315be: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007315c1: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007315c4: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 007315c6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007315c9: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 007315cb: mov dword ptr [edi + 0x10], ecx */ W32((u32)(r_edi+0x10u), r_ecx);
    /* 007315ce: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 007315d1: mov dword ptr [edi + 0x14], esi */ W32((u32)(r_edi+0x14u), r_esi);
    /* 007315d4: call 0x5e565c */ r_esp -= 4; W32(r_esp, 0x7315d9u); f_005e565c();
    /* 007315d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007315da: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007315dd: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007315e0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007315e3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007315e6: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007315e9: mov eax, edx */ r_eax = r_edx;
    /* 007315eb: mov byte ptr [edx + 0x61], 0 */ W8((u32)(r_edx+0x61u), 0x0u);
    /* 007315ef: mov byte ptr [edx + 0x60], 2 */ W8((u32)(r_edx+0x60u), 0x2u);
    /* 007315f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007315f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007315fd: mov esp, ebp */ r_esp = r_ebp;
    /* 007315ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731600: ret 0xc */ FN_RET(0x00731504); r_esp += 16; return;
}

void f_00731604(void) /* sub_731604 */
{
    FN_ENTER(0x00731604);
    /* 00731604: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731605: mov ebp, esp */ r_ebp = r_esp;
    /* 00731607: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00731609: push 0x8f1460 */ { u32 v = 0x8f1460u; r_esp -= 4; W32(r_esp, v); }
    /* 0073160e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00731614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731615: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073161c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073161f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00731622: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00731625: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00731628: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073162b: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 0073162d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00731634: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x731639u); f_005caba4();
    /* 00731639: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073163c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073163f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00731642: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731644: je 0x7316de */ if (fZ) goto L_007316de;
L_0073164a:; BB(0x0073164a);
    /* 0073164a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00731651: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00731658: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073165b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073165e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00731661: mov ecx, eax */ r_ecx = r_eax;
    /* 00731663: call 0x731504 */ r_esp -= 4; W32(r_esp, 0x731668u); f_00731504();
    /* 00731668: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0073166f:; BB(0x0073166f);
    /* 0073166f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00731676: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073167b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00731680: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00731683: fld dword ptr [0x97103c] */ FPUSH(R_F32((u32)(0x97103cu)));
    /* 00731689: fld dword ptr [0x971038] */ FPUSH(R_F32((u32)(0x971038u)));
    /* 0073168f: movzx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)R8((u32)(r_ebx+0x61u));
    /* 00731693: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00731696: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00731698: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073169a: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0073169d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0073169f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007316a1: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007316a6: mov byte ptr [ebx + 0x61], al */ W8((u32)(r_ebx+0x61u), (u8)r_eax);
    /* 007316a9: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 007316ab: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 007316ae: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 007316b1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007316b3: mov dword ptr [ecx + 0x10], 0x42800000 */ W32((u32)(r_ecx+0x10u), 0x42800000u);
    /* 007316ba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007316bc: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 007316bf: mov dword ptr [ecx + 0x14], 0x42800000 */ W32((u32)(r_ecx+0x14u), 0x42800000u);
    /* 007316c6: call 0x72e824 */ r_esp -= 4; W32(r_esp, 0x7316cbu); f_0072e824();
    /* 007316cb: mov eax, ebx */ r_eax = r_ebx;
    /* 007316cd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007316d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007316d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007316da: mov esp, ebp */ r_esp = r_ebp;
    /* 007316dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007316dd: ret  */ FN_RET(0x00731604); r_esp += 4; return;
L_007316de:; BB(0x007316de);
    /* 007316de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007316e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007316e3: jmp 0x73166f */ goto L_0073166f;
}

void f_007316e8(void) /* sub_7316E8 */
{
    FN_ENTER(0x007316e8);
    /* 007316e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007316e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007316ea: mov edi, ecx */ r_edi = r_ecx;
    /* 007316ec: movsx eax, byte ptr [edi + 0x60] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x60u));
    /* 007316f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007316f3: je 0x731722 */ if (fZ) goto L_00731722;
L_007316f5:; BB(0x007316f5);
    /* 007316f5: lea eax, [edi + 0x64] */ r_eax = (u32)(r_edi+0x64u);
    /* 007316f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007316f9: mov ecx, edi */ r_ecx = r_edi;
    /* 007316fb: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x731700u); f_00712658();
    /* 00731700: mov esi, eax */ r_esi = r_eax;
    /* 00731702: movzx edx, byte ptr [edi + 0x61] */ r_edx = (u32)R8((u32)(r_edi+0x61u));
    /* 00731706: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00731709: je 0x731713 */ if (fZ) goto L_00731713;
L_0073170b:; BB(0x0073170b);
    /* 0073170b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073170c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073170e: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x731713u); f_00710f80();
L_00731713:; BB(0x00731713);
    /* 00731713: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731714: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 00731717: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00731718: mov ecx, edi */ r_ecx = r_edi;
    /* 0073171a: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x73171fu); f_0072a648();
    /* 0073171f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731720: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731721: ret  */ FN_RET(0x007316e8); r_esp += 4; return;
L_00731722:; BB(0x00731722);
    /* 00731722: mov ecx, dword ptr [edi + 0x6c] */ r_ecx = R32((u32)(r_edi+0x6cu));
    /* 00731725: call 0x5e585c */ r_esp -= 4; W32(r_esp, 0x73172au); f_005e585c();
    /* 0073172a: mov dword ptr [edi + 0x70], eax */ W32((u32)(r_edi+0x70u), r_eax);
    /* 0073172d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073172f: je 0x7316f5 */ if (fZ) goto L_007316f5;
L_00731731:; BB(0x00731731);
    /* 00731731: mov ecx, edi */ r_ecx = r_edi;
    /* 00731733: call 0x731740 */ r_esp -= 4; W32(r_esp, 0x731738u); f_00731740();
    /* 00731738: mov byte ptr [edi + 0x60], 1 */ W8((u32)(r_edi+0x60u), 0x1u);
    /* 0073173c: jmp 0x7316f5 */ goto L_007316f5;
}

void f_00731740(void) /* sub_731740 */
{
    FN_ENTER(0x00731740);
    /* 00731740: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00731743: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00731745: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00731749: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0073174c: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731752: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 00731755: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00731759: ret  */ FN_RET(0x00731740); r_esp += 4; return;
}

void f_0073175c(void) /* sub_73175C */
{
    FN_ENTER(0x0073175c);
    /* 0073175c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073175d: mov edi, ecx */ r_edi = r_ecx;
    /* 0073175f: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00731762: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00731764: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00731768: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0073176c: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00731772: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 00731776: mov ecx, dword ptr [edi + 0x6c] */ r_ecx = R32((u32)(r_edi+0x6cu));
    /* 00731779: call 0x5e5870 */ r_esp -= 4; W32(r_esp, 0x73177eu); f_005e5870();
    /* 0073177e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731780: je 0x73178a */ if (fZ) goto L_0073178a;
L_00731782:; BB(0x00731782);
    /* 00731782: mov byte ptr [edi + 0x60], 1 */ W8((u32)(r_edi+0x60u), 0x1u);
    /* 00731786: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731787: ret 4 */ FN_RET(0x0073175c); r_esp += 8; return;
L_0073178a:; BB(0x0073178a);
    /* 0073178a: mov byte ptr [edi + 0x60], 2 */ W8((u32)(r_edi+0x60u), 0x2u);
    /* 0073178e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073178f: ret 4 */ FN_RET(0x0073175c); r_esp += 8; return;
}

void f_00731794(void) /* sub_731794 */
{
    FN_ENTER(0x00731794);
    /* 00731794: mov dword ptr [0xa9a850], 0x3f800000 */ W32((u32)(0xa9a850u), 0x3f800000u);
    /* 0073179e: mov dword ptr [0xa9a854], 0x41000000 */ W32((u32)(0xa9a854u), 0x41000000u);
    /* 007317a8: mov dword ptr [0xa9a858], 0x3fc00000 */ W32((u32)(0xa9a858u), 0x3fc00000u);
    /* 007317b2: ret  */ FN_RET(0x00731794); r_esp += 4; return;
}

void f_007317b4(void) /* sub_7317B4 */
{
    FN_ENTER(0x007317b4);
    /* 007317b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007317b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007317b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007317b9: call 0x7317d8 */ r_esp -= 4; W32(r_esp, 0x7317beu); f_007317d8();
    /* 007317be: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007317c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007317c4: jne 0x7317ca */ if (!fZ) goto L_007317ca;
L_007317c6:; BB(0x007317c6);
    /* 007317c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007317c7: ret 4 */ FN_RET(0x007317b4); r_esp += 8; return;
L_007317ca:; BB(0x007317ca);
    /* 007317ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007317cb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7317d0u); f_005c2f74();
    /* 007317d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007317d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007317d2: ret 4 */ FN_RET(0x007317b4); r_esp += 8; return;
}

void f_007317d8(void) /* sub_7317D8 */
{
    FN_ENTER(0x007317d8);
    /* 007317d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007317d9: mov ebp, esp */ r_ebp = r_esp;
    /* 007317db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007317dd: push 0x8f147c */ { u32 v = 0x8f147cu; r_esp -= 4; W32(r_esp, v); }
    /* 007317e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007317e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007317e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007317f0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007317f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007317f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007317f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007317fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007317ff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00731802: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00731805: mov dword ptr [ecx], 0xb40680 */ W32((u32)(r_ecx), 0xb40680u);
    /* 0073180b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00731812: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x731817u); f_00710c28();
    /* 00731817: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073181a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00731821: mov esp, ebp */ r_esp = r_ebp;
    /* 00731823: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731824: ret  */ FN_RET(0x007317d8); r_esp += 4; return;
}

void f_00731828(void)
{
    FN_ENTER(0x00731828);
    /* 00731828: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0073182b: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 0073182f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731830: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00731832: call 0x742f6c */ r_esp -= 4; W32(r_esp, 0x731837u); f_00742f6c();
    /* 00731837: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073183a: ret  */ FN_RET(0x00731828); r_esp += 4; return;
}

void f_0073183c(void) /* sub_73183C */
{
    FN_ENTER(0x0073183c);
    /* 0073183c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073183d: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00731840: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00731842: movzx eax, word ptr [ebx + 0x60] */ r_eax = (u32)R16((u32)(r_ebx+0x60u));
    /* 00731846: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073184b: je 0x731923 */ if (fZ) goto L_00731923;
L_00731851:; BB(0x00731851);
    /* 00731851: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731852: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x731857u); f_007b4d18();
    /* 00731857: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073185a: je 0x731923 */ if (fZ) goto L_00731923;
L_00731860:; BB(0x00731860);
    /* 00731860: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00731864: mov esi, eax */ r_esi = r_eax;
    /* 00731866: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0073186a: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0073186e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00731870: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00731872: mov edi, ebx */ r_edi = r_ebx;
    /* 00731874: mov ebx, edx */ r_ebx = r_edx;
    /* 00731876: mov ebp, ecx */ r_ebp = r_ecx;
L_00731878:; BB(0x00731878);
    /* 00731878: push dword ptr [ebx + esi + 0x25c] */ { u32 v = R32((u32)(r_ebx+r_esi+0x25cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073187f: call 0x715a5c */ r_esp -= 4; W32(r_esp, 0x731884u); f_00715a5c();
    /* 00731884: mov edx, eax */ r_edx = r_eax;
    /* 00731886: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00731887: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0073188a: push dword ptr [eax + ebp*4 + 0xc] */ { u32 v = R32((u32)(r_eax+r_ebp*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073188e: call 0x715958 */ r_esp -= 4; W32(r_esp, 0x731893u); f_00715958();
    /* 00731893: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00731896: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00731899: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073189c: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073189f: jl 0x731878 */ if ((fS!=fO)) goto L_00731878;
L_007318a1:; BB(0x007318a1);
    /* 007318a1: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 007318a5: mov eax, esi */ r_eax = r_esi;
    /* 007318a7: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007318ab: mov ebx, edi */ r_ebx = r_edi;
    /* 007318ad: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 007318b0: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 007318b3: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007318b7: movsx edx, word ptr [eax + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bcu));
    /* 007318be: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007318c1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007318c4: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 007318c7: movsx edx, word ptr [eax + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 007318ce: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007318d2: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007318d6: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 007318da: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 007318dd: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007318e3: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 007318e7: mov ebx, dword ptr [ebx + 0x28] */ r_ebx = R32((u32)(r_ebx+0x28u));
    /* 007318ea: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 007318ed: movsx ecx, word ptr [eax + 0x2be] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2beu));
    /* 007318f4: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007318f8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007318fc: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 007318ff: movsx eax, word ptr [eax + 0x336] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x336u));
    /* 00731906: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0073190a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073190e: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00731912: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 00731915: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073191a: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 0073191e: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00731921: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731922: ret  */ FN_RET(0x0073183c); r_esp += 4; return;
L_00731923:; BB(0x00731923);
    /* 00731923: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00731926: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731927: ret  */ FN_RET(0x0073183c); r_esp += 4; return;
}

void f_00731928(void) /* sub_731928 */
{
    FN_ENTER(0x00731928);
    /* 00731928: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731929: mov edi, ecx */ r_edi = r_ecx;
    /* 0073192b: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 0073192e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731930: mov dword ptr [edi + 0x5c], 0x1000000 */ W32((u32)(r_edi+0x5cu), 0x1000000u);
    /* 00731937: je 0x73193d */ if (fZ) goto L_0073193d;
L_00731939:; BB(0x00731939);
    /* 00731939: mov ecx, edi */ r_ecx = r_edi;
    /* 0073193b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x73193du); call_ind(t); }
L_0073193d:; BB(0x0073193d);
    /* 0073193d: mov ecx, edi */ r_ecx = r_edi;
    /* 0073193f: call 0x731978 */ r_esp -= 4; W32(r_esp, 0x731944u); f_00731978();
    /* 00731944: mov ecx, edi */ r_ecx = r_edi;
    /* 00731946: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73194bu); f_00710db4();
    /* 0073194b: mov ecx, edi */ r_ecx = r_edi;
    /* 0073194d: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x731952u); f_00710ee4();
    /* 00731952: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 00731955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731956: mov ecx, edi */ r_ecx = r_edi;
    /* 00731958: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x73195du); f_0072a5ec();
    /* 0073195d: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 00731960: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00731963: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 00731966: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731968: jl 0x73196c */ if ((fS!=fO)) goto L_0073196c;
L_0073196a:; BB(0x0073196a);
    /* 0073196a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073196b: ret  */ FN_RET(0x00731928); r_esp += 4; return;
L_0073196c:; BB(0x0073196c);
    /* 0073196c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073196e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x731973u); f_007127b0();
    /* 00731973: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731974: ret  */ FN_RET(0x00731928); r_esp += 4; return;
}

void f_00731978(void) /* sub_731978 */
{
    FN_ENTER(0x00731978);
    /* 00731978: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731979: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073197a: mov edi, ecx */ r_edi = r_ecx;
    /* 0073197c: movzx eax, word ptr [edi + 0x60] */ r_eax = (u32)R16((u32)(r_edi+0x60u));
    /* 00731980: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00731985: je 0x7319e7 */ if (fZ) goto L_007319e7;
L_00731987:; BB(0x00731987);
    /* 00731987: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731988: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x73198du); f_007b4d18();
    /* 0073198d: mov esi, eax */ r_esi = r_eax;
    /* 0073198f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00731992: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00731994: je 0x731a1e */ if (fZ) goto L_00731a1e;
L_0073199a:; BB(0x0073199a);
    /* 0073199a: mov ecx, esi */ r_ecx = r_esi;
    /* 0073199c: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7319a1u); f_008173b4();
    /* 007319a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 007319a3: je 0x731a1e */ if (fZ) goto L_00731a1e;
L_007319a5:; BB(0x007319a5);
    /* 007319a5: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007319a8: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007319ae: je 0x7319b3 */ if (fZ) goto L_007319b3;
L_007319b0:; BB(0x007319b0);
    /* 007319b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007319b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007319b2: ret  */ FN_RET(0x00731978); r_esp += 4; return;
L_007319b3:; BB(0x007319b3);
    /* 007319b3: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007319b9: je 0x7319ea */ if (fZ) goto L_007319ea;
L_007319bb:; BB(0x007319bb);
    /* 007319bb: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007319bd: mov ecx, esi */ r_ecx = r_esi;
    /* 007319bf: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x7319c5u); call_ind(t); }
    /* 007319c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007319c7: je 0x7319e7 */ if (fZ) goto L_007319e7;
L_007319c9:; BB(0x007319c9);
    /* 007319c9: fild dword ptr [edi + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x64u)));
    /* 007319cc: fcomp dword ptr [0x9710e4] */ fx_compare(ST(0), R_F32((u32)(0x9710e4u))); FPOP();
    /* 007319d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007319d4: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007319d9: mov word ptr [edi + 0x60], dx */ W16((u32)(r_edi+0x60u), (u16)r_edx);
    /* 007319dd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007319de: jbe 0x7319e7 */ if ((fC||fZ)) goto L_007319e7;
L_007319e0:; BB(0x007319e0);
    /* 007319e0: mov dword ptr [edi + 0x64], 0xf */ W32((u32)(r_edi+0x64u), 0xfu);
L_007319e7:; BB(0x007319e7);
    /* 007319e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007319e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007319e9: ret  */ FN_RET(0x00731978); r_esp += 4; return;
L_007319ea:; BB(0x007319ea);
    /* 007319ea: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007319f0: je 0x731a1b */ if (fZ) goto L_00731a1b;
L_007319f2:; BB(0x007319f2);
    /* 007319f2: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 007319f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007319fb: je 0x731a1b */ if (fZ) goto L_00731a1b;
L_007319fd:; BB(0x007319fd);
    /* 007319fd: fild dword ptr [edi + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x64u)));
    /* 00731a00: fcomp dword ptr [0x9710e4] */ fx_compare(ST(0), R_F32((u32)(0x9710e4u))); FPOP();
    /* 00731a06: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00731a08: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00731a0d: mov word ptr [edi + 0x60], dx */ W16((u32)(r_edi+0x60u), (u16)r_edx);
    /* 00731a11: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00731a12: jbe 0x731a1b */ if ((fC||fZ)) goto L_00731a1b;
L_00731a14:; BB(0x00731a14);
    /* 00731a14: mov dword ptr [edi + 0x64], 0xf */ W32((u32)(r_edi+0x64u), 0xfu);
L_00731a1b:; BB(0x00731a1b);
    /* 00731a1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731a1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731a1d: ret  */ FN_RET(0x00731978); r_esp += 4; return;
L_00731a1e:; BB(0x00731a1e);
    /* 00731a1e: fild dword ptr [edi + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x64u)));
    /* 00731a21: fcomp dword ptr [0x9710e4] */ fx_compare(ST(0), R_F32((u32)(0x9710e4u))); FPOP();
    /* 00731a27: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00731a29: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00731a2e: mov word ptr [edi + 0x60], dx */ W16((u32)(r_edi+0x60u), (u16)r_edx);
    /* 00731a32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00731a33: jbe 0x731a3c */ if ((fC||fZ)) goto L_00731a3c;
L_00731a35:; BB(0x00731a35);
    /* 00731a35: mov dword ptr [edi + 0x64], 0xf */ W32((u32)(r_edi+0x64u), 0xfu);
L_00731a3c:; BB(0x00731a3c);
    /* 00731a3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731a3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731a3e: ret  */ FN_RET(0x00731978); r_esp += 4; return;
}

void f_00731a40(void) /* sub_731A40 */
{
    FN_ENTER(0x00731a40);
    /* 00731a40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731a41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731a42: mov esi, ecx */ r_esi = r_ecx;
    /* 00731a44: lea eax, [esi + 0x68] */ r_eax = (u32)(r_esi+0x68u);
    /* 00731a47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731a48: mov ecx, esi */ r_ecx = r_esi;
    /* 00731a4a: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x731a4fu); f_00712658();
    /* 00731a4f: mov ebp, eax */ r_ebp = r_eax;
    /* 00731a51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731a52: mov ecx, esi */ r_ecx = r_esi;
    /* 00731a54: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x731a59u); f_00710f80();
    /* 00731a59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731a5a: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 00731a5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00731a5e: mov ecx, esi */ r_ecx = r_esi;
    /* 00731a60: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x731a65u); f_0072a648();
    /* 00731a65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731a66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731a67: ret  */ FN_RET(0x00731a40); r_esp += 4; return;
}

void f_00731a68(void) /* sub_731A68 */
{
    FN_ENTER(0x00731a68);
    /* 00731a68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731a69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731a6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731a6b: mov edi, ecx */ r_edi = r_ecx;
    /* 00731a6d: movzx eax, word ptr [edi + 0x60] */ r_eax = (u32)R16((u32)(r_edi+0x60u));
    /* 00731a71: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00731a76: je 0x731a8e */ if (fZ) goto L_00731a8e;
L_00731a78:; BB(0x00731a78);
    /* 00731a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731a79: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x731a7eu); f_007b4d18();
    /* 00731a7e: mov esi, eax */ r_esi = r_eax;
    /* 00731a80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00731a83: mov eax, esi */ r_eax = r_esi;
    /* 00731a85: call 0x731afc */ r_esp -= 4; W32(r_esp, 0x731a8au); f_00731afc();
    /* 00731a8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731a8c: jne 0x731a92 */ if (!fZ) goto L_00731a92;
L_00731a8e:; BB(0x00731a8e);
    /* 00731a8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731a8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731a90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731a91: ret  */ FN_RET(0x00731a68); r_esp += 4; return;
L_00731a92:; BB(0x00731a92);
    /* 00731a92: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00731a95: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731a9a: je 0x731aaa */ if (fZ) goto L_00731aaa;
L_00731a9c:; BB(0x00731a9c);
    /* 00731a9c: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00731a9f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00731aa1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731aa3: jne 0x731ae9 */ if (!fZ) goto L_00731ae9;
L_00731aa5:; BB(0x00731aa5);
    /* 00731aa5: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00731aa8: jmp 0x731ad9 */ goto L_00731ad9;
L_00731aaa:; BB(0x00731aaa);
    /* 00731aaa: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731aaf: je 0x731ac0 */ if (fZ) goto L_00731ac0;
L_00731ab1:; BB(0x00731ab1);
    /* 00731ab1: fld dword ptr [0x9710dc] */ FPUSH(R_F32((u32)(0x9710dcu)));
    /* 00731ab7: mov dword ptr [edi + 0x3c], 0x42180000 */ W32((u32)(r_edi+0x3cu), 0x42180000u);
    /* 00731abe: jmp 0x731ad9 */ goto L_00731ad9;
L_00731ac0:; BB(0x00731ac0);
    /* 00731ac0: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731ac5: jne 0x731acc */ if (!fZ) goto L_00731acc;
L_00731ac7:; BB(0x00731ac7);
    /* 00731ac7: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00731aca: jmp 0x731ad9 */ goto L_00731ad9;
L_00731acc:; BB(0x00731acc);
    /* 00731acc: fld dword ptr [0x9710e0] */ FPUSH(R_F32((u32)(0x9710e0u)));
    /* 00731ad2: mov dword ptr [edi + 0x3c], 0x42080000 */ W32((u32)(r_edi+0x3cu), 0x42080000u);
L_00731ad9:; BB(0x00731ad9);
    /* 00731ad9: fmul dword ptr [edi + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6cu));
    /* 00731adc: fsubr dword ptr [0x9710d4] */ ST(0) = R_F32((u32)(0x9710d4u)) - ST(0);
    /* 00731ae2: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 00731ae5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731ae6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731ae7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731ae8: ret  */ FN_RET(0x00731a68); r_esp += 4; return;
L_00731ae9:; BB(0x00731ae9);
    /* 00731ae9: fld dword ptr [0x9710d8] */ FPUSH(R_F32((u32)(0x9710d8u)));
    /* 00731aef: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 00731af2: fst dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0));
    /* 00731af5: jmp 0x731ad9 */ goto L_00731ad9;
}

void f_00731afc(void) /* sub_731AFC */
{
    FN_ENTER(0x00731afc);
    /* 00731afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731afe: je 0x731b3d */ if (fZ) goto L_00731b3d;
L_00731b00:; BB(0x00731b00);
    /* 00731b00: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00731b03: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731b09: je 0x731b1f */ if (fZ) goto L_00731b1f;
L_00731b0b:; BB(0x00731b0b);
    /* 00731b0b: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00731b12: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731b15: je 0x731b1c */ if (fZ) goto L_00731b1c;
L_00731b17:; BB(0x00731b17);
    /* 00731b17: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00731b1a: jne 0x731b48 */ if (!fZ) goto L_00731b48;
L_00731b1c:; BB(0x00731b1c);
    /* 00731b1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731b1e: ret  */ FN_RET(0x00731afc); r_esp += 4; return;
L_00731b1f:; BB(0x00731b1f);
    /* 00731b1f: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731b25: je 0x731b40 */ if (fZ) goto L_00731b40;
L_00731b27:; BB(0x00731b27);
    /* 00731b27: test edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731b2d: je 0x731b32 */ if (fZ) goto L_00731b32;
L_00731b2f:; BB(0x00731b2f);
    /* 00731b2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731b31: ret  */ FN_RET(0x00731afc); r_esp += 4; return;
L_00731b32:; BB(0x00731b32);
    /* 00731b32: mov ecx, eax */ r_ecx = r_eax;
    /* 00731b34: call 0x787560 */ r_esp -= 4; W32(r_esp, 0x731b39u); f_00787560();
    /* 00731b39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731b3b: jne 0x731b48 */ if (!fZ) goto L_00731b48;
L_00731b3d:; BB(0x00731b3d);
    /* 00731b3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731b3f: ret  */ FN_RET(0x00731afc); r_esp += 4; return;
L_00731b40:; BB(0x00731b40);
    /* 00731b40: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731b46: je 0x731b3d */ if (fZ) goto L_00731b3d;
L_00731b48:; BB(0x00731b48);
    /* 00731b48: mov eax, 1 */ r_eax = 0x1u;
    /* 00731b4d: ret  */ FN_RET(0x00731afc); r_esp += 4; return;
}

void f_00731b50(void) /* sub_731B50 */
{
    FN_ENTER(0x00731b50);
    /* 00731b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731b51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00731b52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731b53: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00731b55: movzx eax, word ptr [ebp + 0x60] */ r_eax = (u32)R16((u32)(r_ebp+0x60u));
    /* 00731b59: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00731b5e: je 0x731b76 */ if (fZ) goto L_00731b76;
L_00731b60:; BB(0x00731b60);
    /* 00731b60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731b61: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x731b66u); f_007b4d18();
    /* 00731b66: mov ebx, eax */ r_ebx = r_eax;
    /* 00731b68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00731b6b: mov eax, ebx */ r_eax = r_ebx;
    /* 00731b6d: call 0x731afc */ r_esp -= 4; W32(r_esp, 0x731b72u); f_00731afc();
    /* 00731b72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731b74: jne 0x731b7a */ if (!fZ) goto L_00731b7a;
L_00731b76:; BB(0x00731b76);
    /* 00731b76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731b77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731b78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731b79: ret  */ FN_RET(0x00731b50); r_esp += 4; return;
L_00731b7a:; BB(0x00731b7a);
    /* 00731b7a: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 00731b7d: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731b83: je 0x731b94 */ if (fZ) goto L_00731b94;
L_00731b85:; BB(0x00731b85);
    /* 00731b85: fld dword ptr [0x9710c0] */ FPUSH(R_F32((u32)(0x9710c0u)));
    /* 00731b8b: mov dword ptr [ebp + 0x3c], 0x42440000 */ W32((u32)(r_ebp+0x3cu), 0x42440000u);
    /* 00731b92: jmp 0x731bb6 */ goto L_00731bb6;
L_00731b94:; BB(0x00731b94);
    /* 00731b94: test edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731b9a: jne 0x731bc6 */ if (!fZ) goto L_00731bc6;
L_00731b9c:; BB(0x00731b9c);
    /* 00731b9c: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731ba2: jne 0x731ba9 */ if (!fZ) goto L_00731ba9;
L_00731ba4:; BB(0x00731ba4);
    /* 00731ba4: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00731ba7: jmp 0x731bb6 */ goto L_00731bb6;
L_00731ba9:; BB(0x00731ba9);
    /* 00731ba9: fld dword ptr [0x9710b8] */ FPUSH(R_F32((u32)(0x9710b8u)));
    /* 00731baf: mov dword ptr [ebp + 0x3c], 0x42ba0000 */ W32((u32)(r_ebp+0x3cu), 0x42ba0000u);
L_00731bb6:; BB(0x00731bb6);
    /* 00731bb6: fmul dword ptr [ebp + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x6cu));
    /* 00731bb9: fsubr dword ptr [0x9710bc] */ ST(0) = R_F32((u32)(0x9710bcu)) - ST(0);
    /* 00731bbf: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 00731bc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731bc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731bc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731bc5: ret  */ FN_RET(0x00731b50); r_esp += 4; return;
L_00731bc6:; BB(0x00731bc6);
    /* 00731bc6: mov dword ptr [ebp + 0x3c], 0x42180000 */ W32((u32)(r_ebp+0x3cu), 0x42180000u);
    /* 00731bcd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00731bce: call 0x7322b0 */ r_esp -= 4; W32(r_esp, 0x731bd3u); f_007322b0();
    /* 00731bd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731bd6: jne 0x731bdd */ if (!fZ) goto L_00731bdd;
L_00731bd8:; BB(0x00731bd8);
    /* 00731bd8: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00731bdb: jmp 0x731bb6 */ goto L_00731bb6;
L_00731bdd:; BB(0x00731bdd);
    /* 00731bdd: fld dword ptr [0x9710c4] */ FPUSH(R_F32((u32)(0x9710c4u)));
    /* 00731be3: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00731be6: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 00731be9: jmp 0x731bb6 */ goto L_00731bb6;
}

void f_00731bec(void) /* sub_731BEC */
{
    FN_ENTER(0x00731bec);
    /* 00731bec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731bed: mov ebp, esp */ r_ebp = r_esp;
    /* 00731bef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00731bf1: push 0x8f14a4 */ { u32 v = 0x8f14a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00731bf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00731bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731bfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00731c04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00731c07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00731c0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00731c0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00731c10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00731c13: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00731c17: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731c1c: je 0x731c34 */ if (fZ) goto L_00731c34;
L_00731c1e:; BB(0x00731c1e);
    /* 00731c1e: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00731c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731c23: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x731c28u); f_007b4d18();
    /* 00731c28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731c29: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731c2a: call 0x731afc */ r_esp -= 4; W32(r_esp, 0x731c2fu); f_00731afc();
    /* 00731c2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731c30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731c32: jne 0x731c44 */ if (!fZ) goto L_00731c44;
L_00731c34:; BB(0x00731c34);
    /* 00731c34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731c36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00731c39: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00731c40: mov esp, ebp */ r_esp = r_ebp;
    /* 00731c42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731c43: ret  */ FN_RET(0x00731bec); r_esp += 4; return;
L_00731c44:; BB(0x00731c44);
    /* 00731c44: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00731c4b: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00731c4d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x731c52u); f_005caba4();
    /* 00731c52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731c53: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00731c56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731c58: je 0x731c90 */ if (fZ) goto L_00731c90;
L_00731c5a:; BB(0x00731c5a);
    /* 00731c5a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00731c61: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00731c68: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00731c6c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00731c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731c70: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00731c73: call 0x731c94 */ r_esp -= 4; W32(r_esp, 0x731c78u); f_00731c94();
    /* 00731c78: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00731c7b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00731c82:; BB(0x00731c82);
    /* 00731c82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00731c85: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00731c8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00731c8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731c8f: ret  */ FN_RET(0x00731bec); r_esp += 4; return;
L_00731c90:; BB(0x00731c90);
    /* 00731c90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731c92: jmp 0x731c82 */ goto L_00731c82;
}

void f_00731c94(void) /* sub_731C94 */
{
    FN_ENTER(0x00731c94);
    /* 00731c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731c95: mov ebp, esp */ r_ebp = r_esp;
    /* 00731c97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00731c99: push 0x8f14c0 */ { u32 v = 0x8f14c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00731c9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00731ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731ca5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00731cac: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00731caf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00731cb2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00731cb5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00731cb8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00731cbb: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00731cbe: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00731cc2: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00731cc5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00731cc8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00731cca: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x731ccfu); f_0073ec50();
    /* 00731ccf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731cd0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00731cd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731cd4: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 00731cd7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00731cda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00731cdb: push 0x9f2ef8 */ { u32 v = 0x9f2ef8u; r_esp -= 4; W32(r_esp, v); }
    /* 00731ce0: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x731ce5u); f_00710d30();
    /* 00731ce5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00731cec: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00731cef: mov dword ptr [ecx], 0xb40680 */ W32((u32)(r_ecx), 0xb40680u);
    /* 00731cf5: mov eax, dword ptr [0x9f2eb4] */ r_eax = R32((u32)(0x9f2eb4u));
    /* 00731cfa: mov edx, dword ptr [0xa48a3c] */ r_edx = R32((u32)(0xa48a3cu));
    /* 00731d00: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00731d03: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00731d06: jle 0x731d18 */ if ((fZ||fS!=fO)) goto L_00731d18;
L_00731d08:; BB(0x00731d08);
    /* 00731d08: mov dword ptr [ecx + 0x68], 0x3f333333 */ W32((u32)(r_ecx+0x68u), 0x3f333333u);
    /* 00731d0f: mov dword ptr [ecx + 0x6c], 0x3f333333 */ W32((u32)(r_ecx+0x6cu), 0x3f333333u);
    /* 00731d16: jmp 0x731d26 */ goto L_00731d26;
L_00731d18:; BB(0x00731d18);
    /* 00731d18: mov dword ptr [ecx + 0x68], 0x3f800000 */ W32((u32)(r_ecx+0x68u), 0x3f800000u);
    /* 00731d1f: mov dword ptr [ecx + 0x6c], 0x3f800000 */ W32((u32)(r_ecx+0x6cu), 0x3f800000u);
L_00731d26:; BB(0x00731d26);
    /* 00731d26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00731d29: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00731d2c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00731d31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731d32: mov word ptr [ecx + 0x60], ax */ W16((u32)(r_ecx+0x60u), (u16)r_eax);
    /* 00731d36: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 00731d3a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00731d3c: mov dword ptr [ecx + 0x64], ebx */ W32((u32)(r_ecx+0x64u), r_ebx);
    /* 00731d3f: mov dword ptr [ecx + 0x70], ebx */ W32((u32)(r_ecx+0x70u), r_ebx);
    /* 00731d42: call 0x731d68 */ r_esp -= 4; W32(r_esp, 0x731d47u); f_00731d68();
    /* 00731d47: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00731d4a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00731d4d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00731d50: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 00731d57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00731d5a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00731d61: mov esp, ebp */ r_esp = r_ebp;
    /* 00731d63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731d64: ret 8 */ FN_RET(0x00731c94); r_esp += 12; return;
}

void f_00731d68(void) /* sub_731D68 */
{
    FN_ENTER(0x00731d68);
    /* 00731d68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731d69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731d6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00731d6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731d6c: mov edi, ecx */ r_edi = r_ecx;
    /* 00731d6e: movzx esi, word ptr [esp + 0x14] */ r_esi = (u32)R16((u32)(r_esp+0x14u));
    /* 00731d73: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731d79: je 0x731de1 */ if (fZ) goto L_00731de1;
L_00731d7b:; BB(0x00731d7b);
    /* 00731d7b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731d7c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x731d81u); f_007b4d18();
    /* 00731d81: mov ebx, eax */ r_ebx = r_eax;
    /* 00731d83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00731d86: mov eax, ebx */ r_eax = r_ebx;
    /* 00731d88: call 0x731afc */ r_esp -= 4; W32(r_esp, 0x731d8du); f_00731afc();
    /* 00731d8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731d8f: je 0x731dcc */ if (fZ) goto L_00731dcc;
L_00731d91:; BB(0x00731d91);
    /* 00731d91: movzx edx, word ptr [edi + 0x60] */ r_edx = (u32)R16((u32)(r_edi+0x60u));
    /* 00731d95: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00731d97: je 0x731dd3 */ if (fZ) goto L_00731dd3;
L_00731d99:; BB(0x00731d99);
    /* 00731d99: fild dword ptr [edi + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x64u)));
    /* 00731d9c: fcomp dword ptr [0x9710ac] */ fx_compare(ST(0), R_F32((u32)(0x9710acu))); FPOP();
    /* 00731da2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00731da4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00731da5: jbe 0x731dae */ if ((fC||fZ)) goto L_00731dae;
L_00731da7:; BB(0x00731da7);
    /* 00731da7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731da8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731da9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731daa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731dab: ret 4 */ FN_RET(0x00731d68); r_esp += 8; return;
L_00731dae:; BB(0x00731dae);
    /* 00731dae: mov dword ptr [edi + 0x64], 0x5a */ W32((u32)(r_edi+0x64u), 0x5au);
    /* 00731db5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00731db6: mov word ptr [edi + 0x60], si */ W16((u32)(r_edi+0x60u), (u16)r_esi);
    /* 00731dba: mov ecx, edi */ r_ecx = r_edi;
    /* 00731dbc: call 0x731df8 */ r_esp -= 4; W32(r_esp, 0x731dc1u); f_00731df8();
    /* 00731dc1: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 00731dc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731dc6: je 0x731dcc */ if (fZ) goto L_00731dcc;
L_00731dc8:; BB(0x00731dc8);
    /* 00731dc8: mov ecx, edi */ r_ecx = r_edi;
    /* 00731dca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x731dccu); call_ind(t); }
L_00731dcc:; BB(0x00731dcc);
    /* 00731dcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731dcd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731dce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731dcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731dd0: ret 4 */ FN_RET(0x00731d68); r_esp += 8; return;
L_00731dd3:; BB(0x00731dd3);
    /* 00731dd3: mov dword ptr [edi + 0x64], 0x5a */ W32((u32)(r_edi+0x64u), 0x5au);
    /* 00731dda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731ddb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731ddc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731ddd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731dde: ret 4 */ FN_RET(0x00731d68); r_esp += 8; return;
L_00731de1:; BB(0x00731de1);
    /* 00731de1: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00731de5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731dea: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00731dee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731def: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731df0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731df1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00731df2: ret 4 */ FN_RET(0x00731d68); r_esp += 8; return;
}

void f_00731df8(void) /* sub_731DF8 */
{
    FN_ENTER(0x00731df8);
    /* 00731df8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731df9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731dfa: mov esi, ecx */ r_esi = r_ecx;
    /* 00731dfc: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00731e00: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 00731e03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731e04: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x731e09u); f_0072a590();
    /* 00731e09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731e0a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00731e0d: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731e12: je 0x731e21 */ if (fZ) goto L_00731e21;
L_00731e14:; BB(0x00731e14);
    /* 00731e14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731e15: mov ecx, esi */ r_ecx = r_esi;
    /* 00731e17: call 0x73220c */ r_esp -= 4; W32(r_esp, 0x731e1cu); f_0073220c();
    /* 00731e1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731e1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731e1e: ret 4 */ FN_RET(0x00731df8); r_esp += 8; return;
L_00731e21:; BB(0x00731e21);
    /* 00731e21: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731e26: je 0x731e35 */ if (fZ) goto L_00731e35;
L_00731e28:; BB(0x00731e28);
    /* 00731e28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731e29: mov ecx, esi */ r_ecx = r_esi;
    /* 00731e2b: call 0x732118 */ r_esp -= 4; W32(r_esp, 0x731e30u); f_00732118();
    /* 00731e30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731e31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731e32: ret 4 */ FN_RET(0x00731df8); r_esp += 8; return;
L_00731e35:; BB(0x00731e35);
    /* 00731e35: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00731e3a: je 0x731e44 */ if (fZ) goto L_00731e44;
L_00731e3c:; BB(0x00731e3c);
    /* 00731e3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731e3d: mov ecx, esi */ r_ecx = r_esi;
    /* 00731e3f: call 0x731e4c */ r_esp -= 4; W32(r_esp, 0x731e44u); f_00731e4c();
L_00731e44:; BB(0x00731e44);
    /* 00731e44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731e45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00731e46: ret 4 */ FN_RET(0x00731df8); r_esp += 8; return;
}

void f_00731e4c(void) /* sub_731E4C */
{
    FN_ENTER(0x00731e4c);
    /* 00731e4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00731e4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731e4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00731e4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00731e50: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00731e53: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00731e55: movzx eax, byte ptr [0xa9a860] */ r_eax = (u32)R8((u32)(0xa9a860u));
    /* 00731e5c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00731e5e: jne 0x731eb0 */ if (!fZ) goto L_00731eb0;
L_00731e60:; BB(0x00731e60);
    /* 00731e60: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 00731e65: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x731e6au); f_0079317c();
    /* 00731e6a: mov dword ptr [0x9f2ee4], eax */ W32((u32)(0x9f2ee4u), r_eax);
    /* 00731e6f: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 00731e74: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x731e79u); f_0079317c();
    /* 00731e79: mov dword ptr [0x9f2ee8], eax */ W32((u32)(0x9f2ee8u), r_eax);
    /* 00731e7e: push 0xb7 */ { u32 v = 0xb7u; r_esp -= 4; W32(r_esp, v); }
    /* 00731e83: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x731e88u); f_0079317c();
    /* 00731e88: mov dword ptr [0x9f2eec], eax */ W32((u32)(0x9f2eecu), r_eax);
    /* 00731e8d: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00731e92: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x731e97u); f_0079317c();
    /* 00731e97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00731e9a: mov dword ptr [0x9f2ef0], eax */ W32((u32)(0x9f2ef0u), r_eax);
    /* 00731e9f: movzx eax, byte ptr [0xa9a860] */ r_eax = (u32)R8((u32)(0xa9a860u));
    /* 00731ea6: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00731eab: mov byte ptr [0xa9a860], al */ W8((u32)(0xa9a860u), (u8)r_eax);
L_00731eb0:; BB(0x00731eb0);
    /* 00731eb0: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00731eb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731eb5: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 00731eb8: push 0x9f2d40 */ { u32 v = 0x9f2d40u; r_esp -= 4; W32(r_esp, v); }
    /* 00731ebd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00731ebe: call 0x72a68c */ r_esp -= 4; W32(r_esp, 0x731ec3u); f_0072a68c();
    /* 00731ec3: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00731ec6: mov dword ptr [ebp + 0x70], 0x73183c */ W32((u32)(r_ebp+0x70u), 0x73183cu);
    /* 00731ecd: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00731ed0: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 00731ed5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x731edau); f_0079317c();
    /* 00731eda: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00731edd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731ede: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00731ee0: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x731ee5u); f_0072db50();
    /* 00731ee5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00731ee7: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x731eecu); f_0072e0e4();
    /* 00731eec: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00731eef: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x731ef4u); f_007ac264();
    /* 00731ef4: mov ebx, eax */ r_ebx = r_eax;
    /* 00731ef6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00731ef9: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00731efd: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 00731f00: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00731f02: call 0x787560 */ r_esp -= 4; W32(r_esp, 0x731f07u); f_00787560();
    /* 00731f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731f08: call 0x793014 */ r_esp -= 4; W32(r_esp, 0x731f0du); f_00793014();
    /* 00731f0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731f0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731f0f: mov ecx, esi */ r_ecx = r_esi;
    /* 00731f11: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x731f16u); f_0072db50();
    /* 00731f16: mov ecx, esi */ r_ecx = r_esi;
    /* 00731f18: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x731f1du); f_0072e0e4();
    /* 00731f1d: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00731f20: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x731f25u); f_007ac264();
    /* 00731f25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731f26: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00731f2a: mov dword ptr [ebp + 0x3c], 0x42ba0000 */ W32((u32)(r_ebp+0x3cu), 0x42ba0000u);
    /* 00731f31: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00731f34: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00731f37: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00731f3a: fadd dword ptr [eax*4 + 0x971058] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x971058u));
    /* 00731f41: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00731f44: mov edx, dword ptr [edx + 0x2e8] */ r_edx = R32((u32)(r_edx+0x2e8u));
    /* 00731f4a: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00731f4d: je 0x731f56 */ if (fZ) goto L_00731f56;
L_00731f4f:; BB(0x00731f4f);
    /* 00731f4f: mov edi, 4 */ r_edi = 0x4u;
    /* 00731f54: jmp 0x731f88 */ goto L_00731f88;
L_00731f56:; BB(0x00731f56);
    /* 00731f56: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00731f59: je 0x731f5f */ if (fZ) goto L_00731f5f;
L_00731f5b:; BB(0x00731f5b);
    /* 00731f5b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00731f5d: jmp 0x731f88 */ goto L_00731f88;
L_00731f5f:; BB(0x00731f5f);
    /* 00731f5f: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00731f62: je 0x731f6b */ if (fZ) goto L_00731f6b;
L_00731f64:; BB(0x00731f64);
    /* 00731f64: mov edi, 1 */ r_edi = 0x1u;
    /* 00731f69: jmp 0x731f88 */ goto L_00731f88;
L_00731f6b:; BB(0x00731f6b);
    /* 00731f6b: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00731f6e: je 0x731f77 */ if (fZ) goto L_00731f77;
L_00731f70:; BB(0x00731f70);
    /* 00731f70: mov edi, 2 */ r_edi = 0x2u;
    /* 00731f75: jmp 0x731f88 */ goto L_00731f88;
L_00731f77:; BB(0x00731f77);
    /* 00731f77: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00731f7a: je 0x731f83 */ if (fZ) goto L_00731f83;
L_00731f7c:; BB(0x00731f7c);
    /* 00731f7c: mov edi, 3 */ r_edi = 0x3u;
    /* 00731f81: jmp 0x731f88 */ goto L_00731f88;
L_00731f83:; BB(0x00731f83);
    /* 00731f83: mov edi, 4 */ r_edi = 0x4u;
L_00731f88:; BB(0x00731f88);
    /* 00731f88: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00731f8b: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00731f8e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731f90: je 0x7320fe */ if (fZ) goto L_007320fe;
L_00731f96:; BB(0x00731f96);
    /* 00731f96: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731f99: je 0x7320e6 */ if (fZ) goto L_007320e6;
L_00731f9f:; BB(0x00731f9f);
    /* 00731f9f: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731fa2: je 0x731fdf */ if (fZ) goto L_00731fdf;
L_00731fa4:; BB(0x00731fa4);
    /* 00731fa4: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731fa7: jne 0x731fbe */ if (!fZ) goto L_00731fbe;
L_00731fa9:; BB(0x00731fa9);
    /* 00731fa9: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00731fae: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x731fb3u); f_0079317c();
    /* 00731fb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731fb5: mov ecx, esi */ r_ecx = r_esi;
    /* 00731fb7: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x731fbcu); f_0072db50();
    /* 00731fbc: jmp 0x731ff2 */ goto L_00731ff2;
L_00731fbe:; BB(0x00731fbe);
    /* 00731fbe: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731fc1: jne 0x731fd1 */ if (!fZ) goto L_00731fd1;
L_00731fc3:; BB(0x00731fc3);
    /* 00731fc3: push 0x9710e8 */ { u32 v = 0x9710e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00731fc8: mov ecx, esi */ r_ecx = r_esi;
    /* 00731fca: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x731fcfu); f_0072db50();
    /* 00731fcf: jmp 0x731ff2 */ goto L_00731ff2;
L_00731fd1:; BB(0x00731fd1);
    /* 00731fd1: push 0x9710e8 */ { u32 v = 0x9710e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00731fd6: mov ecx, esi */ r_ecx = r_esi;
    /* 00731fd8: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x731fddu); f_0072db50();
    /* 00731fdd: jmp 0x731ff2 */ goto L_00731ff2;
L_00731fdf:; BB(0x00731fdf);
    /* 00731fdf: push 0xb7 */ { u32 v = 0xb7u; r_esp -= 4; W32(r_esp, v); }
    /* 00731fe4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x731fe9u); f_0079317c();
    /* 00731fe9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00731fea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00731feb: mov ecx, esi */ r_ecx = r_esi;
    /* 00731fed: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x731ff2u); f_0072db50();
L_00731ff2:; BB(0x00731ff2);
    /* 00731ff2: mov ecx, esi */ r_ecx = r_esi;
    /* 00731ff4: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x731ff9u); f_0072e0e4();
    /* 00731ff9: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00731ffd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00732001: mov edx, ebx */ r_edx = r_ebx;
    /* 00732003: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00732006: fadd dword ptr [edx*4 + 0x971058] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x971058u));
    /* 0073200d: fadd dword ptr [0x9710a0] */ ST(0) = ST(0) + R_F32((u32)(0x9710a0u));
    /* 00732013: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00732016: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00732019: mov edi, dword ptr [edi*4 + 0x9f2ed0] */ r_edi = R32((u32)(r_edi*4+0x9f2ed0u));
    /* 00732020: mov dword ptr [esi + 0x24], edi */ W32((u32)(r_esi+0x24u), r_edi);
    /* 00732023: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x732028u); f_007ac264();
    /* 00732028: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0073202b: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073202d: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00732031: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00732035: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00732037: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0073203a: fadd dword ptr [ebx*4 + 0x971058] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x971058u));
    /* 00732041: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00732043: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00732045: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00732046: jb 0x73204a */ if (fC) goto L_0073204a;
L_00732048:; BB(0x00732048);
    /* 00732048: fst st(1) */ ST(1) = ST(0);
L_0073204a:; BB(0x0073204a);
    /* 0073204a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073204c: fadd dword ptr [0x97109c] */ ST(0) = ST(0) + R_F32((u32)(0x97109cu));
    /* 00732052: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00732055: call 0x73ec60 */ r_esp -= 4; W32(r_esp, 0x73205au); f_0073ec60();
    /* 0073205a: fld dword ptr [0x971098] */ FPUSH(R_F32((u32)(0x971098u)));
    /* 00732060: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00732064: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00732067: fmul dword ptr [ebp + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x6cu));
    /* 0073206a: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0073206d: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0073206f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00732071: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 00732074: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00732077: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00732079: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 00732080: mov edi, dword ptr [edx + 0x1c] */ r_edi = R32((u32)(r_edx+0x1cu));
    /* 00732083: fstp dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0)); FPOP();
    /* 00732086: movsx ebx, word ptr [eax + 0x2bc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bcu));
    /* 0073208d: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00732091: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00732095: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 00732098: movsx esi, word ptr [eax + 0x334] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 0073209f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 007320a3: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 007320a7: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 007320aa: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 007320ad: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 007320b0: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 007320b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007320b5: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 007320b8: movsx ecx, word ptr [eax + 0x2be] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2beu));
    /* 007320bf: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 007320c3: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 007320c7: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 007320ca: movsx ebp, word ptr [eax + 0x336] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x336u));
    /* 007320d1: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 007320d5: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 007320d9: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 007320dc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007320df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007320e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007320e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007320e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007320e3: ret 4 */ FN_RET(0x00731e4c); r_esp += 8; return;
L_007320e6:; BB(0x007320e6);
    /* 007320e6: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 007320eb: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7320f0u); f_0079317c();
    /* 007320f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007320f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007320f2: mov ecx, esi */ r_ecx = r_esi;
    /* 007320f4: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x7320f9u); f_0072db50();
    /* 007320f9: jmp 0x731ff2 */ goto L_00731ff2;
L_007320fe:; BB(0x007320fe);
    /* 007320fe: push 0xb5 */ { u32 v = 0xb5u; r_esp -= 4; W32(r_esp, v); }
    /* 00732103: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x732108u); f_0079317c();
    /* 00732108: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00732109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073210a: mov ecx, esi */ r_ecx = r_esi;
    /* 0073210c: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x732111u); f_0072db50();
    /* 00732111: jmp 0x731ff2 */ goto L_00731ff2;
}

