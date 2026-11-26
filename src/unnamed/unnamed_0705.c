#include "protos.h"

void f_00705454(void) /* sub_705454 */
{
    FN_ENTER(0x00705454);
    /* 00705454: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705455: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705456: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00705457: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00705458: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070545b: mov eax, dword ptr [0xa96ef4] */ r_eax = R32((u32)(0xa96ef4u));
    /* 00705460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705462: je 0x705534 */ if (fZ) goto L_00705534;
L_00705468:; BB(0x00705468);
    /* 00705468: mov edx, 0x12 */ r_edx = 0x12u;
L_0070546d:; BB(0x0070546d);
    /* 0070546d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070546e: movsx esi, word ptr [ecx + 0x1c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x1cu));
    /* 00705472: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00705474: lea ebp, [esi - 0x7f] */ r_ebp = (u32)(r_esi+0xffffff81u);
    /* 00705477: call 0x706c20 */ r_esp -= 4; W32(r_esp, 0x70547cu); f_00706c20();
    /* 0070547c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070547d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070547f: je 0x70549b */ if (fZ) goto L_0070549b;
L_00705481:; BB(0x00705481);
    /* 00705481: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00705483: jl 0x70549b */ if ((fS!=fO)) goto L_0070549b;
L_00705485:; BB(0x00705485);
    /* 00705485: cmp ebp, dword ptr [eax + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00705488: jge 0x70549b */ if ((fS==fO)) goto L_0070549b;
L_0070548a:; BB(0x0070548a);
    /* 0070548a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0070548c: movsx eax, word ptr [edx + esi*2 - 0xfe] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_esi*2+0xffffff02u));
    /* 00705494: call 0x705544 */ r_esp -= 4; W32(r_esp, 0x705499u); f_00705544();
    /* 00705499: mov ebx, eax */ r_ebx = r_eax;
L_0070549b:; BB(0x0070549b);
    /* 0070549b: mov eax, 0xe */ r_eax = 0xeu;
    /* 007054a0: call 0x705544 */ r_esp -= 4; W32(r_esp, 0x7054a5u); f_00705544();
    /* 007054a5: mov ebp, dword ptr [0xa96ee0] */ r_ebp = R32((u32)(0xa96ee0u));
    /* 007054ab: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 007054ae: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 007054b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007054b3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007054b5: je 0x7054ec */ if (fZ) goto L_007054ec;
L_007054b7:; BB(0x007054b7);
    /* 007054b7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007054b9: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007054bd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 007054c0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007054c2: jle 0x7054ec */ if ((fZ||fS!=fO)) goto L_007054ec;
L_007054c4:; BB(0x007054c4);
    /* 007054c4: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_007054c8:; BB(0x007054c8);
    /* 007054c8: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 007054ca: movsx edi, word ptr [edi + ebp*2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+r_ebp*2));
    /* 007054ce: mov word ptr [esi + edx*2], di */ W16((u32)(r_esi+r_edx*2), (u16)r_edi);
    /* 007054d2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007054d5: mov word ptr [ecx + edx*2], di */ W16((u32)(r_ecx+r_edx*2), (u16)r_edi);
    /* 007054d9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007054dc: cmp ebp, dword ptr [ebx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007054df: jge 0x70552c */ if ((fS==fO)) goto L_0070552c;
L_007054e1:; BB(0x007054e1);
    /* 007054e1: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007054e4: jl 0x7054c8 */ if ((fS!=fO)) goto L_007054c8;
L_007054e6:; BB(0x007054e6);
    /* 007054e6: mov ebp, dword ptr [0xa96ee0] */ r_ebp = R32((u32)(0xa96ee0u));
L_007054ec:; BB(0x007054ec);
    /* 007054ec: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 007054ef: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 007054f2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007054f4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007054f6: jle 0x705519 */ if ((fZ||fS!=fO)) goto L_00705519;
L_007054f8:; BB(0x007054f8);
    /* 007054f8: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007054fb: jge 0x705524 */ if ((fS==fO)) goto L_00705524;
L_007054fd:; BB(0x007054fd);
    /* 007054fd: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 007054ff: movzx esi, word ptr [ebp + ebx*2] */ r_esi = (u32)R16((u32)(r_ebp+r_ebx*2));
    /* 00705504: mov word ptr [ecx + edx*2], si */ W16((u32)(r_ecx+r_edx*2), (u16)r_esi);
    /* 00705508: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070550b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070550e: cmp ebx, dword ptr [eax + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00705511: jl 0x7054f8 */ if ((fS!=fO)) goto L_007054f8;
L_00705513:; BB(0x00705513);
    /* 00705513: mov ebp, dword ptr [0xa96ee0] */ r_ebp = R32((u32)(0xa96ee0u));
L_00705519:; BB(0x00705519);
    /* 00705519: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0070551c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070551f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00705520: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705521: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705522: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705523: ret  */ FN_RET(0x00705454); r_esp += 4; return;
L_00705524:; BB(0x00705524);
    /* 00705524: mov ebp, dword ptr [0xa96ee0] */ r_ebp = R32((u32)(0xa96ee0u));
    /* 0070552a: jmp 0x705519 */ goto L_00705519;
L_0070552c:; BB(0x0070552c);
    /* 0070552c: mov ebp, dword ptr [0xa96ee0] */ r_ebp = R32((u32)(0xa96ee0u));
    /* 00705532: jmp 0x7054ec */ goto L_007054ec;
L_00705534:; BB(0x00705534);
    /* 00705534: mov edx, 0x11 */ r_edx = 0x11u;
    /* 00705539: jmp 0x70546d */ goto L_0070546d;
}

void f_00705540(void) /* sub_705540 */
{
    FN_ENTER(0x00705540);
    /* 00705540: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00705544: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705547: je 0x70560e */ if (fZ) goto L_0070560e;
L_0070554d:; BB(0x0070554d);
    /* 0070554d: cmp eax, -0x32 */ {  u32 a = r_eax; u32 b = 0xffffffceu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705550: je 0x7055bf */ if (fZ) goto L_007055bf;
L_00705552:; BB(0x00705552);
    /* 00705552: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00705554: jl 0x70556b */ if ((fS!=fO)) goto L_0070556b;
L_00705556:; BB(0x00705556);
    /* 00705556: cmp eax, dword ptr [0xa96ec4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa96ec4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070555c: jge 0x70556b */ if ((fS==fO)) goto L_0070556b;
L_0070555e:; BB(0x0070555e);
    /* 0070555e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705560: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705562: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705564: add eax, dword ptr [0xa96ed0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa96ed0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070556a: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_0070556b:; BB(0x0070556b);
    /* 0070556b: cmp eax, -0x3c */ {  u32 a = r_eax; u32 b = 0xffffffc4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070556e: je 0x7055b6 */ if (fZ) goto L_007055b6;
L_00705570:; BB(0x00705570);
    /* 00705570: cmp eax, -0x46 */ {  u32 a = r_eax; u32 b = 0xffffffbau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705573: je 0x7055ad */ if (fZ) goto L_007055ad;
L_00705575:; BB(0x00705575);
    /* 00705575: cmp eax, -0x28 */ {  u32 a = r_eax; u32 b = 0xffffffd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705578: je 0x7055a7 */ if (fZ) goto L_007055a7;
L_0070557a:; BB(0x0070557a);
    /* 0070557a: cmp eax, -0x2d */ {  u32 a = r_eax; u32 b = 0xffffffd3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070557d: je 0x70559e */ if (fZ) goto L_0070559e;
L_0070557f:; BB(0x0070557f);
    /* 0070557f: cmp eax, -0x50 */ {  u32 a = r_eax; u32 b = 0xffffffb0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705582: jne 0x70558d */ if (!fZ) goto L_0070558d;
L_00705584:; BB(0x00705584);
    /* 00705584: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 00705589: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070558c: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_0070558d:; BB(0x0070558d);
    /* 0070558d: cmp eax, -0x5a */ {  u32 a = r_eax; u32 b = 0xffffffa6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705590: jne 0x70559b */ if (!fZ) goto L_0070559b;
L_00705592:; BB(0x00705592);
    /* 00705592: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 00705597: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070559a: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_0070559b:; BB(0x0070559b);
    /* 0070559b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070559d: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_0070559e:; BB(0x0070559e);
    /* 0070559e: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 007055a3: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055a6: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_007055a7:; BB(0x007055a7);
    /* 007055a7: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 007055ac: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_007055ad:; BB(0x007055ad);
    /* 007055ad: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 007055b2: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055b5: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_007055b6:; BB(0x007055b6);
    /* 007055b6: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 007055bb: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055be: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_007055bf:; BB(0x007055bf);
    /* 007055bf: mov eax, dword ptr [0xa96ef4] */ r_eax = R32((u32)(0xa96ef4u));
    /* 007055c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007055c6: je 0x705603 */ if (fZ) goto L_00705603;
L_007055c8:; BB(0x007055c8);
    /* 007055c8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007055cb: je 0x7055f8 */ if (fZ) goto L_007055f8;
L_007055cd:; BB(0x007055cd);
    /* 007055cd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007055d0: jne 0x7055dd */ if (!fZ) goto L_007055dd;
L_007055d2:; BB(0x007055d2);
    /* 007055d2: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 007055d7: add eax, 0x920 */ {  u32 a = r_eax; u32 b = 0x920u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055dc: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_007055dd:; BB(0x007055dd);
    /* 007055dd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007055e0: jne 0x7055ed */ if (!fZ) goto L_007055ed;
L_007055e2:; BB(0x007055e2);
    /* 007055e2: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 007055e7: add eax, 0x928 */ {  u32 a = r_eax; u32 b = 0x928u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055ec: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_007055ed:; BB(0x007055ed);
    /* 007055ed: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 007055f2: add eax, 0x920 */ {  u32 a = r_eax; u32 b = 0x920u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055f7: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_007055f8:; BB(0x007055f8);
    /* 007055f8: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 007055fd: add eax, 0x920 */ {  u32 a = r_eax; u32 b = 0x920u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705602: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_00705603:; BB(0x00705603);
    /* 00705603: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 00705608: add eax, 0x8c0 */ {  u32 a = r_eax; u32 b = 0x8c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070560d: ret  */ FN_RET(0x00705540); r_esp += 4; return;
L_0070560e:; BB(0x0070560e);
    /* 0070560e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705610: ret  */ FN_RET(0x00705540); r_esp += 4; return;
}

void f_00705544(void) /* sub_705544 */
{
    FN_ENTER(0x00705544);
    /* 00705544: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705547: je 0x70560e */ if (fZ) goto L_0070560e;
L_0070554d:; BB(0x0070554d);
    /* 0070554d: cmp eax, -0x32 */ {  u32 a = r_eax; u32 b = 0xffffffceu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705550: je 0x7055bf */ if (fZ) goto L_007055bf;
L_00705552:; BB(0x00705552);
    /* 00705552: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00705554: jl 0x70556b */ if ((fS!=fO)) goto L_0070556b;
L_00705556:; BB(0x00705556);
    /* 00705556: cmp eax, dword ptr [0xa96ec4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa96ec4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070555c: jge 0x70556b */ if ((fS==fO)) goto L_0070556b;
L_0070555e:; BB(0x0070555e);
    /* 0070555e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705560: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705562: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705564: add eax, dword ptr [0xa96ed0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa96ed0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070556a: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_0070556b:; BB(0x0070556b);
    /* 0070556b: cmp eax, -0x3c */ {  u32 a = r_eax; u32 b = 0xffffffc4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070556e: je 0x7055b6 */ if (fZ) goto L_007055b6;
L_00705570:; BB(0x00705570);
    /* 00705570: cmp eax, -0x46 */ {  u32 a = r_eax; u32 b = 0xffffffbau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705573: je 0x7055ad */ if (fZ) goto L_007055ad;
L_00705575:; BB(0x00705575);
    /* 00705575: cmp eax, -0x28 */ {  u32 a = r_eax; u32 b = 0xffffffd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705578: je 0x7055a7 */ if (fZ) goto L_007055a7;
L_0070557a:; BB(0x0070557a);
    /* 0070557a: cmp eax, -0x2d */ {  u32 a = r_eax; u32 b = 0xffffffd3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070557d: je 0x70559e */ if (fZ) goto L_0070559e;
L_0070557f:; BB(0x0070557f);
    /* 0070557f: cmp eax, -0x50 */ {  u32 a = r_eax; u32 b = 0xffffffb0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705582: jne 0x70558d */ if (!fZ) goto L_0070558d;
L_00705584:; BB(0x00705584);
    /* 00705584: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 00705589: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070558c: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_0070558d:; BB(0x0070558d);
    /* 0070558d: cmp eax, -0x5a */ {  u32 a = r_eax; u32 b = 0xffffffa6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705590: jne 0x70559b */ if (!fZ) goto L_0070559b;
L_00705592:; BB(0x00705592);
    /* 00705592: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 00705597: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070559a: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_0070559b:; BB(0x0070559b);
    /* 0070559b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070559d: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_0070559e:; BB(0x0070559e);
    /* 0070559e: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 007055a3: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055a6: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_007055a7:; BB(0x007055a7);
    /* 007055a7: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 007055ac: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_007055ad:; BB(0x007055ad);
    /* 007055ad: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 007055b2: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055b5: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_007055b6:; BB(0x007055b6);
    /* 007055b6: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 007055bb: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055be: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_007055bf:; BB(0x007055bf);
    /* 007055bf: mov eax, dword ptr [0xa96ef4] */ r_eax = R32((u32)(0xa96ef4u));
    /* 007055c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007055c6: je 0x705603 */ if (fZ) goto L_00705603;
L_007055c8:; BB(0x007055c8);
    /* 007055c8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007055cb: je 0x7055f8 */ if (fZ) goto L_007055f8;
L_007055cd:; BB(0x007055cd);
    /* 007055cd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007055d0: jne 0x7055dd */ if (!fZ) goto L_007055dd;
L_007055d2:; BB(0x007055d2);
    /* 007055d2: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 007055d7: add eax, 0x920 */ {  u32 a = r_eax; u32 b = 0x920u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055dc: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_007055dd:; BB(0x007055dd);
    /* 007055dd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007055e0: jne 0x7055ed */ if (!fZ) goto L_007055ed;
L_007055e2:; BB(0x007055e2);
    /* 007055e2: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 007055e7: add eax, 0x928 */ {  u32 a = r_eax; u32 b = 0x928u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055ec: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_007055ed:; BB(0x007055ed);
    /* 007055ed: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 007055f2: add eax, 0x920 */ {  u32 a = r_eax; u32 b = 0x920u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007055f7: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_007055f8:; BB(0x007055f8);
    /* 007055f8: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 007055fd: add eax, 0x920 */ {  u32 a = r_eax; u32 b = 0x920u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705602: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_00705603:; BB(0x00705603);
    /* 00705603: mov eax, dword ptr [0xa96ed0] */ r_eax = R32((u32)(0xa96ed0u));
    /* 00705608: add eax, 0x8c0 */ {  u32 a = r_eax; u32 b = 0x8c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070560d: ret  */ FN_RET(0x00705544); r_esp += 4; return;
L_0070560e:; BB(0x0070560e);
    /* 0070560e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705610: ret  */ FN_RET(0x00705544); r_esp += 4; return;
}

void f_00705614(void) /* sub_705614 */
{
    FN_ENTER(0x00705614);
    /* 00705614: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00705615: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00705616: mov edi, ecx */ r_edi = r_ecx;
    /* 00705618: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0070561c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070561f: ja 0x705707 */ if ((!fC&&!fZ)) goto L_00705707;
L_00705625:; BB(0x00705625);
    /* 00705625: mov eax, dword ptr [eax*4 + 0x96e780] */ r_eax = R32((u32)(r_eax*4+0x96e780u));
    /* 0070562c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00705707:; BB(0x00705707);
    /* 00705707: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x00705614); r_esp += 16; return;
}

void f_0070562e(void)
{
    FN_ENTER(0x0070562e);
    /* 0070562e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705632: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705633: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00705638: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x70563du); f_00706bb4();
    /* 0070563d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705640: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00705643: cmp eax, 0x685 */ {  u32 a = r_eax; u32 b = 0x685u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705648: je 0x705713 */ if (fZ) goto L_00705713;
L_0070564e:; BB(0x0070564e);
    /* 0070564e: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00705653: jmp 0x70570c */ goto L_0070570c;
L_0070570c:; BB(0x0070570c);
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x0070562e); r_esp += 16; return;
L_00705713:; BB(0x00705713);
    /* 00705713: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 00705718: jmp 0x70570c */ goto L_0070570c;
}

void f_00705658(void)
{
    FN_ENTER(0x00705658);
    /* 00705658: mov ebp, 0xffffffce */ r_ebp = 0xffffffceu;
    /* 0070565d: jmp 0x70570c */ goto L_0070570c;
L_0070570c:; BB(0x0070570c);
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x00705658); r_esp += 16; return;
}

void f_00705662(void)
{
    FN_ENTER(0x00705662);
    /* 00705662: movsx eax, word ptr [edi + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xfcu));
    /* 00705669: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070566c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070566d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0070566f: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705674u); f_00706be8();
    /* 00705674: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705677: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 0070567a: jmp 0x70570c */ goto L_0070570c;
L_0070570c:; BB(0x0070570c);
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x00705662); r_esp += 16; return;
}

void f_0070567f(void)
{
    FN_ENTER(0x0070567f);
    /* 0070567f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705683: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705684: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00705686: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x70568bu); f_00706be8();
    /* 0070568b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070568e: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705691: jmp 0x70570c */ goto L_0070570c;
L_0070570c:; BB(0x0070570c);
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x0070567f); r_esp += 16; return;
}

void f_00705693(void)
{
    FN_ENTER(0x00705693);
    /* 00705693: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705697: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705698: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0070569a: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x70569fu); f_00706be8();
    /* 0070569f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007056a2: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 007056a5: jmp 0x70570c */ goto L_0070570c;
L_0070570c:; BB(0x0070570c);
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x00705693); r_esp += 16; return;
}

void f_007056a7(void)
{
    FN_ENTER(0x007056a7);
    /* 007056a7: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007056ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007056ac: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007056b0: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x7056b5u); f_00706bb4();
    /* 007056b5: mov ebp, eax */ r_ebp = r_eax;
    /* 007056b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007056b8: call 0x707090 */ r_esp -= 4; W32(r_esp, 0x7056bdu); f_00707090();
    /* 007056bd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007056c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007056c2: jne 0x7056cb */ if (!fZ) goto L_007056cb;
L_007056c4:; BB(0x007056c4);
    /* 007056c4: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 007056c9: jmp 0x70570c */ goto L_0070570c;
L_007056cb:; BB(0x007056cb);
    /* 007056cb: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 007056ce: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007056d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007056d2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007056d4: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x7056d9u); f_00706be8();
    /* 007056d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007056dc: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 007056df: jmp 0x70570c */ goto L_0070570c;
L_0070570c:; BB(0x0070570c);
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x007056a7); r_esp += 16; return;
}

void f_007056e1(void)
{
    FN_ENTER(0x007056e1);
    /* 007056e1: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 007056e6: jmp 0x70570c */ goto L_0070570c;
L_0070570c:; BB(0x0070570c);
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x007056e1); r_esp += 16; return;
}

void f_007056e8(void)
{
    FN_ENTER(0x007056e8);
    /* 007056e8: mov ecx, edi */ r_ecx = r_edi;
    /* 007056ea: call 0x70756c */ r_esp -= 4; W32(r_esp, 0x7056efu); f_0070756c();
    /* 007056ef: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007056f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007056f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007056f5: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x7056fau); f_00706be8();
    /* 007056fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007056fd: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705700: cmp ebp, -0x1e */ {  u32 a = r_ebp; u32 b = 0xffffffe2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705703: jne 0x70570c */ if (!fZ) goto L_0070570c;
L_00705705:; BB(0x00705705);
    /* 00705705: jmp 0x70571a */ goto L_0070571a;
L_0070570c:; BB(0x0070570c);
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x007056e8); r_esp += 16; return;
L_0070571a:; BB(0x0070571a);
    /* 0070571a: mov ecx, edi */ r_ecx = r_edi;
    /* 0070571c: call 0x7075d8 */ r_esp -= 4; W32(r_esp, 0x705721u); f_007075d8();
    /* 00705721: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705724: je 0x705761 */ if (fZ) goto L_00705761;
L_00705726:; BB(0x00705726);
    /* 00705726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705728: je 0x70575a */ if (fZ) goto L_0070575a;
L_0070572a:; BB(0x0070572a);
    /* 0070572a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070572d: je 0x705753 */ if (fZ) goto L_00705753;
L_0070572f:; BB(0x0070572f);
    /* 0070572f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705732: je 0x70574c */ if (fZ) goto L_0070574c;
L_00705734:; BB(0x00705734);
    /* 00705734: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705737: jne 0x705740 */ if (!fZ) goto L_00705740;
L_00705739:; BB(0x00705739);
    /* 00705739: mov ebp, 0x13 */ r_ebp = 0x13u;
    /* 0070573e: jmp 0x70570c */ goto L_0070570c;
L_00705740:; BB(0x00705740);
    /* 00705740: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705743: jne 0x70570c */ if (!fZ) goto L_0070570c;
L_00705745:; BB(0x00705745);
    /* 00705745: mov ebp, 0x14 */ r_ebp = 0x14u;
    /* 0070574a: jmp 0x70570c */ goto L_0070570c;
L_0070574c:; BB(0x0070574c);
    /* 0070574c: mov ebp, 0x11 */ r_ebp = 0x11u;
    /* 00705751: jmp 0x70570c */ goto L_0070570c;
L_00705753:; BB(0x00705753);
    /* 00705753: mov ebp, 0x12 */ r_ebp = 0x12u;
    /* 00705758: jmp 0x70570c */ goto L_0070570c;
L_0070575a:; BB(0x0070575a);
    /* 0070575a: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 0070575f: jmp 0x70570c */ goto L_0070570c;
L_00705761:; BB(0x00705761);
    /* 00705761: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 00705766: jmp 0x70570c */ goto L_0070570c;
}

void f_00705707(void)
{
    FN_ENTER(0x00705707);
    /* 00705707: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 0070570c: mov eax, ebp */ r_eax = r_ebp;
    /* 0070570e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00705710: ret 0xc */ FN_RET(0x00705707); r_esp += 16; return;
}

void f_00705768(void) /* sub_705768 */
{
    FN_ENTER(0x00705768);
    /* 00705768: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705769: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070576a: mov esi, ecx */ r_esi = r_ecx;
    /* 0070576c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00705770: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705773: ja 0x7058ac */ if ((!fC&&!fZ)) goto L_007058ac;
L_00705779:; BB(0x00705779);
    /* 00705779: mov eax, dword ptr [eax*4 + 0x96e7c0] */ r_eax = R32((u32)(r_eax*4+0x96e7c0u));
    /* 00705780: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007058ac:; BB(0x007058ac);
    /* 007058ac: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x00705768); r_esp += 16; return;
}

void f_00705782(void)
{
    FN_ENTER(0x00705782);
    /* 00705782: mov ebp, 0xffffffce */ r_ebp = 0xffffffceu;
    /* 00705787: jmp 0x7058b1 */ goto L_007058b1;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x00705782); r_esp += 16; return;
}

void f_0070578c(void)
{
    FN_ENTER(0x0070578c);
    /* 0070578c: movsx eax, word ptr [esi + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705793: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705796: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705797: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00705799: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x70579eu); f_00706be8();
    /* 0070579e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007057a1: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 007057a4: jmp 0x7058b1 */ goto L_007058b1;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x0070578c); r_esp += 16; return;
}

void f_007057a9(void)
{
    FN_ENTER(0x007057a9);
    /* 007057a9: mov ebp, 0xffffffce */ r_ebp = 0xffffffceu;
    /* 007057ae: jmp 0x7058b1 */ goto L_007058b1;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x007057a9); r_esp += 16; return;
}

void f_007057b3(void)
{
    FN_ENTER(0x007057b3);
    /* 007057b3: movsx eax, word ptr [esi + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 007057ba: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007057bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007057be: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007057c0: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x7057c5u); f_00706be8();
    /* 007057c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007057c8: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 007057cb: jmp 0x7058b1 */ goto L_007058b1;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x007057b3); r_esp += 16; return;
}

void f_007057d0(void)
{
    FN_ENTER(0x007057d0);
    /* 007057d0: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007057d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007057d5: push -0x50 */ { u32 v = 0xffffffb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007057d7: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x7057dcu); f_00706bb4();
    /* 007057dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007057df: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007057e2: cmp eax, 0x2c8 */ {  u32 a = r_eax; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007057e7: je 0x7058b8 */ if (fZ) goto L_007058b8;
L_007057ed:; BB(0x007057ed);
    /* 007057ed: mov eax, dword ptr [0xa96ecc] */ r_eax = R32((u32)(0xa96eccu));
    /* 007057f2: movsx ecx, word ptr [esi + 0xfc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 007057f9: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 007057ff: movsx ebp, word ptr [edx + ecx*2 - 0x6e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0xffffff92u));
    /* 00705804: jmp 0x7058b1 */ goto L_007058b1;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x007057d0); r_esp += 16; return;
L_007058b8:; BB(0x007058b8);
    /* 007058b8: mov eax, dword ptr [0xa96ecc] */ r_eax = R32((u32)(0xa96eccu));
    /* 007058bd: movsx ecx, word ptr [esi + 0xfc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 007058c4: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 007058c7: movsx ebp, word ptr [edx + ecx*2 - 0x6e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0xffffff92u));
    /* 007058cc: jmp 0x7058b1 */ goto L_007058b1;
}

void f_00705809(void)
{
    FN_ENTER(0x00705809);
    /* 00705809: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0070580d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070580e: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 00705813: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x705818u); f_00706bb4();
    /* 00705818: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0070581b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0070581e: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705821: je 0x7058d5 */ if (fZ) goto L_007058d5;
L_00705827:; BB(0x00705827);
    /* 00705827: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070582a: je 0x7058ce */ if (fZ) goto L_007058ce;
L_00705830:; BB(0x00705830);
    /* 00705830: mov ebp, 0xffffffb0 */ r_ebp = 0xffffffb0u;
    /* 00705835: jmp 0x7058b1 */ goto L_007058b1;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x00705809); r_esp += 16; return;
L_007058ce:; BB(0x007058ce);
    /* 007058ce: mov ebp, 0xffffffa6 */ r_ebp = 0xffffffa6u;
    /* 007058d3: jmp 0x7058b1 */ goto L_007058b1;
L_007058d5:; BB(0x007058d5);
    /* 007058d5: mov ebp, 0xffffffba */ r_ebp = 0xffffffbau;
    /* 007058da: jmp 0x7058b1 */ goto L_007058b1;
}

void f_0070583a(void)
{
    FN_ENTER(0x0070583a);
    /* 0070583a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0070583e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070583f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00705841: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705846u); f_00706be8();
    /* 00705846: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705849: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 0070584c: jmp 0x7058b1 */ goto L_007058b1;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x0070583a); r_esp += 16; return;
}

void f_0070584e(void)
{
    FN_ENTER(0x0070584e);
    /* 0070584e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705853: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00705857: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x70585cu); f_00706bb4();
    /* 0070585c: mov ebp, eax */ r_ebp = r_eax;
    /* 0070585e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070585f: call 0x707090 */ r_esp -= 4; W32(r_esp, 0x705864u); f_00707090();
    /* 00705864: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705867: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705869: je 0x70587f */ if (fZ) goto L_0070587f;
L_0070586b:; BB(0x0070586b);
    /* 0070586b: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 0070586e: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705871: je 0x7058e3 */ if (fZ) goto L_007058e3;
L_00705873:; BB(0x00705873);
    /* 00705873: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705876: je 0x7058dc */ if (fZ) goto L_007058dc;
L_00705878:; BB(0x00705878);
    /* 00705878: mov ebp, 0xffffffb0 */ r_ebp = 0xffffffb0u;
    /* 0070587d: jmp 0x7058b1 */ goto L_007058b1;
L_0070587f:; BB(0x0070587f);
    /* 0070587f: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 00705884: jmp 0x7058b1 */ goto L_007058b1;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x0070584e); r_esp += 16; return;
L_007058dc:; BB(0x007058dc);
    /* 007058dc: mov ebp, 0xffffffa6 */ r_ebp = 0xffffffa6u;
    /* 007058e1: jmp 0x7058b1 */ goto L_007058b1;
L_007058e3:; BB(0x007058e3);
    /* 007058e3: mov ebp, 0xffffffba */ r_ebp = 0xffffffbau;
    /* 007058e8: jmp 0x7058b1 */ goto L_007058b1;
}

void f_00705886(void)
{
    FN_ENTER(0x00705886);
    /* 00705886: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 0070588b: jmp 0x7058b1 */ goto L_007058b1;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x00705886); r_esp += 16; return;
}

void f_0070588d(void)
{
    FN_ENTER(0x0070588d);
    /* 0070588d: mov ecx, esi */ r_ecx = r_esi;
    /* 0070588f: call 0x70756c */ r_esp -= 4; W32(r_esp, 0x705894u); f_0070756c();
    /* 00705894: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00705898: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00705899: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070589a: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x70589fu); f_00706be8();
    /* 0070589f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007058a2: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 007058a5: cmp ebp, -0x1e */ {  u32 a = r_ebp; u32 b = 0xffffffe2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007058a8: jne 0x7058b1 */ if (!fZ) goto L_007058b1;
L_007058aa:; BB(0x007058aa);
    /* 007058aa: jmp 0x7058ea */ goto L_007058ea;
L_007058b1:; BB(0x007058b1);
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x0070588d); r_esp += 16; return;
L_007058ea:; BB(0x007058ea);
    /* 007058ea: mov ecx, esi */ r_ecx = r_esi;
    /* 007058ec: call 0x7075d8 */ r_esp -= 4; W32(r_esp, 0x7058f1u); f_007075d8();
    /* 007058f1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007058f4: je 0x705931 */ if (fZ) goto L_00705931;
L_007058f6:; BB(0x007058f6);
    /* 007058f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007058f8: je 0x70592a */ if (fZ) goto L_0070592a;
L_007058fa:; BB(0x007058fa);
    /* 007058fa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007058fd: je 0x705923 */ if (fZ) goto L_00705923;
L_007058ff:; BB(0x007058ff);
    /* 007058ff: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705902: je 0x70591c */ if (fZ) goto L_0070591c;
L_00705904:; BB(0x00705904);
    /* 00705904: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705907: jne 0x705910 */ if (!fZ) goto L_00705910;
L_00705909:; BB(0x00705909);
    /* 00705909: mov ebp, 0x13 */ r_ebp = 0x13u;
    /* 0070590e: jmp 0x7058b1 */ goto L_007058b1;
L_00705910:; BB(0x00705910);
    /* 00705910: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705913: jne 0x7058b1 */ if (!fZ) goto L_007058b1;
L_00705915:; BB(0x00705915);
    /* 00705915: mov ebp, 0x14 */ r_ebp = 0x14u;
    /* 0070591a: jmp 0x7058b1 */ goto L_007058b1;
L_0070591c:; BB(0x0070591c);
    /* 0070591c: mov ebp, 0x11 */ r_ebp = 0x11u;
    /* 00705921: jmp 0x7058b1 */ goto L_007058b1;
L_00705923:; BB(0x00705923);
    /* 00705923: mov ebp, 0x12 */ r_ebp = 0x12u;
    /* 00705928: jmp 0x7058b1 */ goto L_007058b1;
L_0070592a:; BB(0x0070592a);
    /* 0070592a: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 0070592f: jmp 0x7058b1 */ goto L_007058b1;
L_00705931:; BB(0x00705931);
    /* 00705931: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 00705936: jmp 0x7058b1 */ goto L_007058b1;
}

void f_007058ac(void)
{
    FN_ENTER(0x007058ac);
    /* 007058ac: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 007058b1: mov eax, ebp */ r_eax = r_ebp;
    /* 007058b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007058b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007058b5: ret 0xc */ FN_RET(0x007058ac); r_esp += 16; return;
}

void f_0070593c(void) /* sub_70593C */
{
    FN_ENTER(0x0070593c);
    /* 0070593c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070593d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070593e: mov esi, ecx */ r_esi = r_ecx;
    /* 00705940: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00705944: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705947: ja 0x705a80 */ if ((!fC&&!fZ)) goto L_00705a80;
L_0070594d:; BB(0x0070594d);
    /* 0070594d: mov eax, dword ptr [eax*4 + 0x96e820] */ r_eax = R32((u32)(r_eax*4+0x96e820u));
    /* 00705954: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00705a80:; BB(0x00705a80);
    /* 00705a80: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x0070593c); r_esp += 16; return;
}

void f_00705956(void)
{
    FN_ENTER(0x00705956);
    /* 00705956: mov ebp, 0xffffffce */ r_ebp = 0xffffffceu;
    /* 0070595b: jmp 0x705a85 */ goto L_00705a85;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x00705956); r_esp += 16; return;
}

void f_00705960(void)
{
    FN_ENTER(0x00705960);
    /* 00705960: movsx eax, word ptr [esi + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705967: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0070596a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0070596b: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0070596d: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705972u); f_00706be8();
    /* 00705972: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705975: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705978: jmp 0x705a85 */ goto L_00705a85;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x00705960); r_esp += 16; return;
}

void f_0070597d(void)
{
    FN_ENTER(0x0070597d);
    /* 0070597d: mov ebp, 0xffffffce */ r_ebp = 0xffffffceu;
    /* 00705982: jmp 0x705a85 */ goto L_00705a85;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x0070597d); r_esp += 16; return;
}

void f_00705987(void)
{
    FN_ENTER(0x00705987);
    /* 00705987: movsx eax, word ptr [esi + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 0070598e: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705992: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00705994: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705999u); f_00706be8();
    /* 00705999: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070599c: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 0070599f: jmp 0x705a85 */ goto L_00705a85;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x00705987); r_esp += 16; return;
}

void f_007059a4(void)
{
    FN_ENTER(0x007059a4);
    /* 007059a4: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007059a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007059a9: push -0x50 */ { u32 v = 0xffffffb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007059ab: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x7059b0u); f_00706bb4();
    /* 007059b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007059b3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007059b6: cmp eax, 0x2c8 */ {  u32 a = r_eax; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007059bb: je 0x705a8c */ if (fZ) goto L_00705a8c;
L_007059c1:; BB(0x007059c1);
    /* 007059c1: mov eax, dword ptr [0xa96ecc] */ r_eax = R32((u32)(0xa96eccu));
    /* 007059c6: movsx ecx, word ptr [esi + 0xfc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 007059cd: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 007059d3: movsx ebp, word ptr [edx + ecx*2 - 0x6e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0xffffff92u));
    /* 007059d8: jmp 0x705a85 */ goto L_00705a85;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x007059a4); r_esp += 16; return;
L_00705a8c:; BB(0x00705a8c);
    /* 00705a8c: mov eax, dword ptr [0xa96ecc] */ r_eax = R32((u32)(0xa96eccu));
    /* 00705a91: movsx ecx, word ptr [esi + 0xfc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705a98: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 00705a9b: movsx ebp, word ptr [edx + ecx*2 - 0x6e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0xffffff92u));
    /* 00705aa0: jmp 0x705a85 */ goto L_00705a85;
}

void f_007059dd(void)
{
    FN_ENTER(0x007059dd);
    /* 007059dd: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007059e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007059e2: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 007059e7: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x7059ecu); f_00706bb4();
    /* 007059ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007059ef: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007059f2: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007059f5: je 0x705aa9 */ if (fZ) goto L_00705aa9;
L_007059fb:; BB(0x007059fb);
    /* 007059fb: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007059fe: je 0x705aa2 */ if (fZ) goto L_00705aa2;
L_00705a04:; BB(0x00705a04);
    /* 00705a04: mov ebp, 0xffffffb0 */ r_ebp = 0xffffffb0u;
    /* 00705a09: jmp 0x705a85 */ goto L_00705a85;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x007059dd); r_esp += 16; return;
L_00705aa2:; BB(0x00705aa2);
    /* 00705aa2: mov ebp, 0xffffffa6 */ r_ebp = 0xffffffa6u;
    /* 00705aa7: jmp 0x705a85 */ goto L_00705a85;
L_00705aa9:; BB(0x00705aa9);
    /* 00705aa9: mov ebp, 0xffffffba */ r_ebp = 0xffffffbau;
    /* 00705aae: jmp 0x705a85 */ goto L_00705a85;
}

void f_00705a0e(void)
{
    FN_ENTER(0x00705a0e);
    /* 00705a0e: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705a12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705a13: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00705a15: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705a1au); f_00706be8();
    /* 00705a1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705a1d: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705a20: jmp 0x705a85 */ goto L_00705a85;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x00705a0e); r_esp += 16; return;
}

void f_00705a22(void)
{
    FN_ENTER(0x00705a22);
    /* 00705a22: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705a26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705a27: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00705a2b: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x705a30u); f_00706bb4();
    /* 00705a30: mov ebp, eax */ r_ebp = r_eax;
    /* 00705a32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00705a33: call 0x707090 */ r_esp -= 4; W32(r_esp, 0x705a38u); f_00707090();
    /* 00705a38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705a3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705a3d: je 0x705a53 */ if (fZ) goto L_00705a53;
L_00705a3f:; BB(0x00705a3f);
    /* 00705a3f: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 00705a42: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705a45: je 0x705ab7 */ if (fZ) goto L_00705ab7;
L_00705a47:; BB(0x00705a47);
    /* 00705a47: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705a4a: je 0x705ab0 */ if (fZ) goto L_00705ab0;
L_00705a4c:; BB(0x00705a4c);
    /* 00705a4c: mov ebp, 0xffffffb0 */ r_ebp = 0xffffffb0u;
    /* 00705a51: jmp 0x705a85 */ goto L_00705a85;
L_00705a53:; BB(0x00705a53);
    /* 00705a53: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 00705a58: jmp 0x705a85 */ goto L_00705a85;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x00705a22); r_esp += 16; return;
L_00705ab0:; BB(0x00705ab0);
    /* 00705ab0: mov ebp, 0xffffffa6 */ r_ebp = 0xffffffa6u;
    /* 00705ab5: jmp 0x705a85 */ goto L_00705a85;
L_00705ab7:; BB(0x00705ab7);
    /* 00705ab7: mov ebp, 0xffffffba */ r_ebp = 0xffffffbau;
    /* 00705abc: jmp 0x705a85 */ goto L_00705a85;
}

void f_00705a5a(void)
{
    FN_ENTER(0x00705a5a);
    /* 00705a5a: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 00705a5f: jmp 0x705a85 */ goto L_00705a85;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x00705a5a); r_esp += 16; return;
}

void f_00705a61(void)
{
    FN_ENTER(0x00705a61);
    /* 00705a61: mov ecx, esi */ r_ecx = r_esi;
    /* 00705a63: call 0x70756c */ r_esp -= 4; W32(r_esp, 0x705a68u); f_0070756c();
    /* 00705a68: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00705a6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00705a6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705a6e: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705a73u); f_00706be8();
    /* 00705a73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705a76: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705a79: cmp ebp, -0x1e */ {  u32 a = r_ebp; u32 b = 0xffffffe2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705a7c: jne 0x705a85 */ if (!fZ) goto L_00705a85;
L_00705a7e:; BB(0x00705a7e);
    /* 00705a7e: jmp 0x705abe */ goto L_00705abe;
L_00705a85:; BB(0x00705a85);
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x00705a61); r_esp += 16; return;
L_00705abe:; BB(0x00705abe);
    /* 00705abe: mov ecx, esi */ r_ecx = r_esi;
    /* 00705ac0: call 0x7075d8 */ r_esp -= 4; W32(r_esp, 0x705ac5u); f_007075d8();
    /* 00705ac5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705ac8: je 0x705b05 */ if (fZ) goto L_00705b05;
L_00705aca:; BB(0x00705aca);
    /* 00705aca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705acc: je 0x705afe */ if (fZ) goto L_00705afe;
L_00705ace:; BB(0x00705ace);
    /* 00705ace: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705ad1: je 0x705af7 */ if (fZ) goto L_00705af7;
L_00705ad3:; BB(0x00705ad3);
    /* 00705ad3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705ad6: je 0x705af0 */ if (fZ) goto L_00705af0;
L_00705ad8:; BB(0x00705ad8);
    /* 00705ad8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705adb: jne 0x705ae4 */ if (!fZ) goto L_00705ae4;
L_00705add:; BB(0x00705add);
    /* 00705add: mov ebp, 0x13 */ r_ebp = 0x13u;
    /* 00705ae2: jmp 0x705a85 */ goto L_00705a85;
L_00705ae4:; BB(0x00705ae4);
    /* 00705ae4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705ae7: jne 0x705a85 */ if (!fZ) goto L_00705a85;
L_00705ae9:; BB(0x00705ae9);
    /* 00705ae9: mov ebp, 0x14 */ r_ebp = 0x14u;
    /* 00705aee: jmp 0x705a85 */ goto L_00705a85;
L_00705af0:; BB(0x00705af0);
    /* 00705af0: mov ebp, 0x11 */ r_ebp = 0x11u;
    /* 00705af5: jmp 0x705a85 */ goto L_00705a85;
L_00705af7:; BB(0x00705af7);
    /* 00705af7: mov ebp, 0x12 */ r_ebp = 0x12u;
    /* 00705afc: jmp 0x705a85 */ goto L_00705a85;
L_00705afe:; BB(0x00705afe);
    /* 00705afe: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 00705b03: jmp 0x705a85 */ goto L_00705a85;
L_00705b05:; BB(0x00705b05);
    /* 00705b05: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 00705b0a: jmp 0x705a85 */ goto L_00705a85;
}

void f_00705a80(void)
{
    FN_ENTER(0x00705a80);
    /* 00705a80: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00705a85: mov eax, ebp */ r_eax = r_ebp;
    /* 00705a87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705a88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705a89: ret 0xc */ FN_RET(0x00705a80); r_esp += 16; return;
}

void f_00705b10(void) /* sub_705B10 */
{
    FN_ENTER(0x00705b10);
    /* 00705b10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705b11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00705b12: mov esi, ecx */ r_esi = r_ecx;
    /* 00705b14: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00705b18: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705b1b: ja 0x705c54 */ if ((!fC&&!fZ)) goto L_00705c54;
L_00705b21:; BB(0x00705b21);
    /* 00705b21: mov eax, dword ptr [eax*4 + 0x96e880] */ r_eax = R32((u32)(r_eax*4+0x96e880u));
    /* 00705b28: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00705c54:; BB(0x00705c54);
    /* 00705c54: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705b10); r_esp += 16; return;
}

void f_00705b2a(void)
{
    FN_ENTER(0x00705b2a);
    /* 00705b2a: mov ebp, 0xffffffce */ r_ebp = 0xffffffceu;
    /* 00705b2f: jmp 0x705c59 */ goto L_00705c59;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705b2a); r_esp += 16; return;
}

void f_00705b34(void)
{
    FN_ENTER(0x00705b34);
    /* 00705b34: movsx eax, word ptr [esi + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705b3b: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705b3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705b3f: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00705b41: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705b46u); f_00706be8();
    /* 00705b46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705b49: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705b4c: jmp 0x705c59 */ goto L_00705c59;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705b34); r_esp += 16; return;
}

void f_00705b51(void)
{
    FN_ENTER(0x00705b51);
    /* 00705b51: mov ebp, 0xffffffce */ r_ebp = 0xffffffceu;
    /* 00705b56: jmp 0x705c59 */ goto L_00705c59;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705b51); r_esp += 16; return;
}

void f_00705b5b(void)
{
    FN_ENTER(0x00705b5b);
    /* 00705b5b: movsx eax, word ptr [esi + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705b62: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705b65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705b66: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00705b68: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705b6du); f_00706be8();
    /* 00705b6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705b70: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705b73: jmp 0x705c59 */ goto L_00705c59;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705b5b); r_esp += 16; return;
}

void f_00705b78(void)
{
    FN_ENTER(0x00705b78);
    /* 00705b78: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705b7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705b7d: push -0x50 */ { u32 v = 0xffffffb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00705b7f: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x705b84u); f_00706bb4();
    /* 00705b84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705b87: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00705b8a: cmp eax, 0x2c8 */ {  u32 a = r_eax; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705b8f: je 0x705c60 */ if (fZ) goto L_00705c60;
L_00705b95:; BB(0x00705b95);
    /* 00705b95: mov eax, dword ptr [0xa96ecc] */ r_eax = R32((u32)(0xa96eccu));
    /* 00705b9a: movsx ecx, word ptr [esi + 0xfc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705ba1: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00705ba7: movsx ebp, word ptr [edx + ecx*2 - 0x6e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0xffffff92u));
    /* 00705bac: jmp 0x705c59 */ goto L_00705c59;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705b78); r_esp += 16; return;
L_00705c60:; BB(0x00705c60);
    /* 00705c60: mov eax, dword ptr [0xa96ecc] */ r_eax = R32((u32)(0xa96eccu));
    /* 00705c65: movsx ecx, word ptr [esi + 0xfc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705c6c: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 00705c6f: movsx ebp, word ptr [edx + ecx*2 - 0x6e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0xffffff92u));
    /* 00705c74: jmp 0x705c59 */ goto L_00705c59;
}

void f_00705bb1(void)
{
    FN_ENTER(0x00705bb1);
    /* 00705bb1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705bb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705bb6: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 00705bbb: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x705bc0u); f_00706bb4();
    /* 00705bc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705bc3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00705bc6: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705bc9: je 0x705c7d */ if (fZ) goto L_00705c7d;
L_00705bcf:; BB(0x00705bcf);
    /* 00705bcf: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705bd2: je 0x705c76 */ if (fZ) goto L_00705c76;
L_00705bd8:; BB(0x00705bd8);
    /* 00705bd8: mov ebp, 0xffffffb0 */ r_ebp = 0xffffffb0u;
    /* 00705bdd: jmp 0x705c59 */ goto L_00705c59;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705bb1); r_esp += 16; return;
L_00705c76:; BB(0x00705c76);
    /* 00705c76: mov ebp, 0xffffffa6 */ r_ebp = 0xffffffa6u;
    /* 00705c7b: jmp 0x705c59 */ goto L_00705c59;
L_00705c7d:; BB(0x00705c7d);
    /* 00705c7d: mov ebp, 0xffffffba */ r_ebp = 0xffffffbau;
    /* 00705c82: jmp 0x705c59 */ goto L_00705c59;
}

void f_00705be2(void)
{
    FN_ENTER(0x00705be2);
    /* 00705be2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705be6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705be7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00705be9: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705beeu); f_00706be8();
    /* 00705bee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705bf1: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705bf4: jmp 0x705c59 */ goto L_00705c59;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705be2); r_esp += 16; return;
}

void f_00705bf6(void)
{
    FN_ENTER(0x00705bf6);
    /* 00705bf6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705bfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705bfb: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00705bff: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x705c04u); f_00706bb4();
    /* 00705c04: mov ebp, eax */ r_ebp = r_eax;
    /* 00705c06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00705c07: call 0x707090 */ r_esp -= 4; W32(r_esp, 0x705c0cu); f_00707090();
    /* 00705c0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705c0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705c11: je 0x705c27 */ if (fZ) goto L_00705c27;
L_00705c13:; BB(0x00705c13);
    /* 00705c13: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 00705c16: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705c19: je 0x705c8b */ if (fZ) goto L_00705c8b;
L_00705c1b:; BB(0x00705c1b);
    /* 00705c1b: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705c1e: je 0x705c84 */ if (fZ) goto L_00705c84;
L_00705c20:; BB(0x00705c20);
    /* 00705c20: mov ebp, 0xffffffb0 */ r_ebp = 0xffffffb0u;
    /* 00705c25: jmp 0x705c59 */ goto L_00705c59;
L_00705c27:; BB(0x00705c27);
    /* 00705c27: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 00705c2c: jmp 0x705c59 */ goto L_00705c59;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705bf6); r_esp += 16; return;
L_00705c84:; BB(0x00705c84);
    /* 00705c84: mov ebp, 0xffffffa6 */ r_ebp = 0xffffffa6u;
    /* 00705c89: jmp 0x705c59 */ goto L_00705c59;
L_00705c8b:; BB(0x00705c8b);
    /* 00705c8b: mov ebp, 0xffffffba */ r_ebp = 0xffffffbau;
    /* 00705c90: jmp 0x705c59 */ goto L_00705c59;
}

void f_00705c2e(void)
{
    FN_ENTER(0x00705c2e);
    /* 00705c2e: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 00705c33: jmp 0x705c59 */ goto L_00705c59;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705c2e); r_esp += 16; return;
}

void f_00705c35(void)
{
    FN_ENTER(0x00705c35);
    /* 00705c35: mov ecx, esi */ r_ecx = r_esi;
    /* 00705c37: call 0x70756c */ r_esp -= 4; W32(r_esp, 0x705c3cu); f_0070756c();
    /* 00705c3c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00705c40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00705c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705c42: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705c47u); f_00706be8();
    /* 00705c47: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705c4a: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705c4d: cmp ebp, -0x1e */ {  u32 a = r_ebp; u32 b = 0xffffffe2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705c50: jne 0x705c59 */ if (!fZ) goto L_00705c59;
L_00705c52:; BB(0x00705c52);
    /* 00705c52: jmp 0x705c92 */ goto L_00705c92;
L_00705c59:; BB(0x00705c59);
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705c35); r_esp += 16; return;
L_00705c92:; BB(0x00705c92);
    /* 00705c92: mov ecx, esi */ r_ecx = r_esi;
    /* 00705c94: call 0x7075d8 */ r_esp -= 4; W32(r_esp, 0x705c99u); f_007075d8();
    /* 00705c99: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705c9c: je 0x705cd9 */ if (fZ) goto L_00705cd9;
L_00705c9e:; BB(0x00705c9e);
    /* 00705c9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705ca0: je 0x705cd2 */ if (fZ) goto L_00705cd2;
L_00705ca2:; BB(0x00705ca2);
    /* 00705ca2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705ca5: je 0x705ccb */ if (fZ) goto L_00705ccb;
L_00705ca7:; BB(0x00705ca7);
    /* 00705ca7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705caa: je 0x705cc4 */ if (fZ) goto L_00705cc4;
L_00705cac:; BB(0x00705cac);
    /* 00705cac: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705caf: jne 0x705cb8 */ if (!fZ) goto L_00705cb8;
L_00705cb1:; BB(0x00705cb1);
    /* 00705cb1: mov ebp, 0x13 */ r_ebp = 0x13u;
    /* 00705cb6: jmp 0x705c59 */ goto L_00705c59;
L_00705cb8:; BB(0x00705cb8);
    /* 00705cb8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705cbb: jne 0x705c59 */ if (!fZ) goto L_00705c59;
L_00705cbd:; BB(0x00705cbd);
    /* 00705cbd: mov ebp, 0x14 */ r_ebp = 0x14u;
    /* 00705cc2: jmp 0x705c59 */ goto L_00705c59;
L_00705cc4:; BB(0x00705cc4);
    /* 00705cc4: mov ebp, 0x11 */ r_ebp = 0x11u;
    /* 00705cc9: jmp 0x705c59 */ goto L_00705c59;
L_00705ccb:; BB(0x00705ccb);
    /* 00705ccb: mov ebp, 0x12 */ r_ebp = 0x12u;
    /* 00705cd0: jmp 0x705c59 */ goto L_00705c59;
L_00705cd2:; BB(0x00705cd2);
    /* 00705cd2: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 00705cd7: jmp 0x705c59 */ goto L_00705c59;
L_00705cd9:; BB(0x00705cd9);
    /* 00705cd9: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 00705cde: jmp 0x705c59 */ goto L_00705c59;
}

void f_00705c54(void)
{
    FN_ENTER(0x00705c54);
    /* 00705c54: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00705c59: mov eax, ebp */ r_eax = r_ebp;
    /* 00705c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705c5d: ret 0xc */ FN_RET(0x00705c54); r_esp += 16; return;
}

void f_00705ce4(void) /* sub_705CE4 */
{
    FN_ENTER(0x00705ce4);
    /* 00705ce4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00705ce5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00705ce6: mov esi, ecx */ r_esi = r_ecx;
    /* 00705ce8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00705cec: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705cef: ja 0x705e28 */ if ((!fC&&!fZ)) goto L_00705e28;
L_00705cf5:; BB(0x00705cf5);
    /* 00705cf5: mov eax, dword ptr [eax*4 + 0x96e8e0] */ r_eax = R32((u32)(r_eax*4+0x96e8e0u));
    /* 00705cfc: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00705e28:; BB(0x00705e28);
    /* 00705e28: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705ce4); r_esp += 16; return;
}

void f_00705cfe(void)
{
    FN_ENTER(0x00705cfe);
    /* 00705cfe: mov ebp, 0xffffffce */ r_ebp = 0xffffffceu;
    /* 00705d03: jmp 0x705e2d */ goto L_00705e2d;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705cfe); r_esp += 16; return;
}

void f_00705d08(void)
{
    FN_ENTER(0x00705d08);
    /* 00705d08: movsx eax, word ptr [esi + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705d0f: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705d13: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00705d15: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705d1au); f_00706be8();
    /* 00705d1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705d1d: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705d20: jmp 0x705e2d */ goto L_00705e2d;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705d08); r_esp += 16; return;
}

void f_00705d25(void)
{
    FN_ENTER(0x00705d25);
    /* 00705d25: mov ebp, 0xffffffce */ r_ebp = 0xffffffceu;
    /* 00705d2a: jmp 0x705e2d */ goto L_00705e2d;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705d25); r_esp += 16; return;
}

void f_00705d2f(void)
{
    FN_ENTER(0x00705d2f);
    /* 00705d2f: movsx eax, word ptr [esi + 0xfc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705d36: add eax, -0x37 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00705d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705d3a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00705d3c: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705d41u); f_00706be8();
    /* 00705d41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705d44: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705d47: jmp 0x705e2d */ goto L_00705e2d;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705d2f); r_esp += 16; return;
}

void f_00705d4c(void)
{
    FN_ENTER(0x00705d4c);
    /* 00705d4c: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705d51: push -0x50 */ { u32 v = 0xffffffb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00705d53: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x705d58u); f_00706bb4();
    /* 00705d58: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705d5b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00705d5e: cmp eax, 0x2c8 */ {  u32 a = r_eax; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705d63: je 0x705e34 */ if (fZ) goto L_00705e34;
L_00705d69:; BB(0x00705d69);
    /* 00705d69: mov eax, dword ptr [0xa96ecc] */ r_eax = R32((u32)(0xa96eccu));
    /* 00705d6e: movsx ecx, word ptr [esi + 0xfc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705d75: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00705d7b: movsx ebp, word ptr [edx + ecx*2 - 0x6e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0xffffff92u));
    /* 00705d80: jmp 0x705e2d */ goto L_00705e2d;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705d4c); r_esp += 16; return;
L_00705e34:; BB(0x00705e34);
    /* 00705e34: mov eax, dword ptr [0xa96ecc] */ r_eax = R32((u32)(0xa96eccu));
    /* 00705e39: movsx ecx, word ptr [esi + 0xfc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0xfcu));
    /* 00705e40: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 00705e43: movsx ebp, word ptr [edx + ecx*2 - 0x6e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2+0xffffff92u));
    /* 00705e48: jmp 0x705e2d */ goto L_00705e2d;
}

void f_00705d85(void)
{
    FN_ENTER(0x00705d85);
    /* 00705d85: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705d89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705d8a: push 0xf9 */ { u32 v = 0xf9u; r_esp -= 4; W32(r_esp, v); }
    /* 00705d8f: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x705d94u); f_00706bb4();
    /* 00705d94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705d97: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00705d9a: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705d9d: je 0x705e51 */ if (fZ) goto L_00705e51;
L_00705da3:; BB(0x00705da3);
    /* 00705da3: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705da6: je 0x705e4a */ if (fZ) goto L_00705e4a;
L_00705dac:; BB(0x00705dac);
    /* 00705dac: mov ebp, 0xffffffb0 */ r_ebp = 0xffffffb0u;
    /* 00705db1: jmp 0x705e2d */ goto L_00705e2d;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705d85); r_esp += 16; return;
L_00705e4a:; BB(0x00705e4a);
    /* 00705e4a: mov ebp, 0xffffffa6 */ r_ebp = 0xffffffa6u;
    /* 00705e4f: jmp 0x705e2d */ goto L_00705e2d;
L_00705e51:; BB(0x00705e51);
    /* 00705e51: mov ebp, 0xffffffba */ r_ebp = 0xffffffbau;
    /* 00705e56: jmp 0x705e2d */ goto L_00705e2d;
}

void f_00705db6(void)
{
    FN_ENTER(0x00705db6);
    /* 00705db6: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705dba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705dbb: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00705dbd: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705dc2u); f_00706be8();
    /* 00705dc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705dc5: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705dc8: jmp 0x705e2d */ goto L_00705e2d;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705db6); r_esp += 16; return;
}

void f_00705dca(void)
{
    FN_ENTER(0x00705dca);
    /* 00705dca: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00705dce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705dcf: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00705dd3: call 0x706bb4 */ r_esp -= 4; W32(r_esp, 0x705dd8u); f_00706bb4();
    /* 00705dd8: mov ebp, eax */ r_ebp = r_eax;
    /* 00705dda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00705ddb: call 0x707090 */ r_esp -= 4; W32(r_esp, 0x705de0u); f_00707090();
    /* 00705de0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705de5: je 0x705dfb */ if (fZ) goto L_00705dfb;
L_00705de7:; BB(0x00705de7);
    /* 00705de7: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 00705dea: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705ded: je 0x705e5f */ if (fZ) goto L_00705e5f;
L_00705def:; BB(0x00705def);
    /* 00705def: cmp eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705df2: je 0x705e58 */ if (fZ) goto L_00705e58;
L_00705df4:; BB(0x00705df4);
    /* 00705df4: mov ebp, 0xffffffb0 */ r_ebp = 0xffffffb0u;
    /* 00705df9: jmp 0x705e2d */ goto L_00705e2d;
L_00705dfb:; BB(0x00705dfb);
    /* 00705dfb: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 00705e00: jmp 0x705e2d */ goto L_00705e2d;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705dca); r_esp += 16; return;
L_00705e58:; BB(0x00705e58);
    /* 00705e58: mov ebp, 0xffffffa6 */ r_ebp = 0xffffffa6u;
    /* 00705e5d: jmp 0x705e2d */ goto L_00705e2d;
L_00705e5f:; BB(0x00705e5f);
    /* 00705e5f: mov ebp, 0xffffffba */ r_ebp = 0xffffffbau;
    /* 00705e64: jmp 0x705e2d */ goto L_00705e2d;
}

void f_00705e02(void)
{
    FN_ENTER(0x00705e02);
    /* 00705e02: mov ebp, 0xffffffc4 */ r_ebp = 0xffffffc4u;
    /* 00705e07: jmp 0x705e2d */ goto L_00705e2d;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705e02); r_esp += 16; return;
}

void f_00705e09(void)
{
    FN_ENTER(0x00705e09);
    /* 00705e09: mov ecx, esi */ r_ecx = r_esi;
    /* 00705e0b: call 0x70756c */ r_esp -= 4; W32(r_esp, 0x705e10u); f_0070756c();
    /* 00705e10: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00705e14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00705e15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00705e16: call 0x706be8 */ r_esp -= 4; W32(r_esp, 0x705e1bu); f_00706be8();
    /* 00705e1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00705e1e: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 00705e21: cmp ebp, -0x1e */ {  u32 a = r_ebp; u32 b = 0xffffffe2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705e24: jne 0x705e2d */ if (!fZ) goto L_00705e2d;
L_00705e26:; BB(0x00705e26);
    /* 00705e26: jmp 0x705e66 */ goto L_00705e66;
L_00705e2d:; BB(0x00705e2d);
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705e09); r_esp += 16; return;
L_00705e66:; BB(0x00705e66);
    /* 00705e66: mov ecx, esi */ r_ecx = r_esi;
    /* 00705e68: call 0x7075d8 */ r_esp -= 4; W32(r_esp, 0x705e6du); f_007075d8();
    /* 00705e6d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705e70: je 0x705ead */ if (fZ) goto L_00705ead;
L_00705e72:; BB(0x00705e72);
    /* 00705e72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00705e74: je 0x705ea6 */ if (fZ) goto L_00705ea6;
L_00705e76:; BB(0x00705e76);
    /* 00705e76: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705e79: je 0x705e9f */ if (fZ) goto L_00705e9f;
L_00705e7b:; BB(0x00705e7b);
    /* 00705e7b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705e7e: je 0x705e98 */ if (fZ) goto L_00705e98;
L_00705e80:; BB(0x00705e80);
    /* 00705e80: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705e83: jne 0x705e8c */ if (!fZ) goto L_00705e8c;
L_00705e85:; BB(0x00705e85);
    /* 00705e85: mov ebp, 0x13 */ r_ebp = 0x13u;
    /* 00705e8a: jmp 0x705e2d */ goto L_00705e2d;
L_00705e8c:; BB(0x00705e8c);
    /* 00705e8c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00705e8f: jne 0x705e2d */ if (!fZ) goto L_00705e2d;
L_00705e91:; BB(0x00705e91);
    /* 00705e91: mov ebp, 0x14 */ r_ebp = 0x14u;
    /* 00705e96: jmp 0x705e2d */ goto L_00705e2d;
L_00705e98:; BB(0x00705e98);
    /* 00705e98: mov ebp, 0x11 */ r_ebp = 0x11u;
    /* 00705e9d: jmp 0x705e2d */ goto L_00705e2d;
L_00705e9f:; BB(0x00705e9f);
    /* 00705e9f: mov ebp, 0x12 */ r_ebp = 0x12u;
    /* 00705ea4: jmp 0x705e2d */ goto L_00705e2d;
L_00705ea6:; BB(0x00705ea6);
    /* 00705ea6: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 00705eab: jmp 0x705e2d */ goto L_00705e2d;
L_00705ead:; BB(0x00705ead);
    /* 00705ead: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 00705eb2: jmp 0x705e2d */ goto L_00705e2d;
}

void f_00705e28(void)
{
    FN_ENTER(0x00705e28);
    /* 00705e28: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 00705e2d: mov eax, ebp */ r_eax = r_ebp;
    /* 00705e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00705e30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00705e31: ret 0xc */ FN_RET(0x00705e28); r_esp += 16; return;
}

void f_00705eb8(void) /* sub_705EB8 */
{
    FN_ENTER(0x00705eb8);
    /* 00705eb8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00705ebb: mov edx, dword ptr [0xa96ef4] */ r_edx = R32((u32)(0xa96ef4u));
    /* 00705ec1: mov dword ptr [esp], 0x96e948 */ W32((u32)(r_esp), 0x96e948u);
    /* 00705ec8: mov eax, 0x96e958 */ r_eax = 0x96e958u;
    /* 00705ecd: mov dword ptr [esp + 8], 0x96e968 */ W32((u32)(r_esp+0x8u), 0x96e968u);
    /* 00705ed5: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00705ed9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00705edd: mov dword ptr [esp + 0xc], 0x96e978 */ W32((u32)(r_esp+0xcu), 0x96e978u);
    /* 00705ee5: mov dword ptr [esp + 0x10], 0x96e988 */ W32((u32)(r_esp+0x10u), 0x96e988u);
    /* 00705eed: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00705ef1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00705ef5: push dword ptr [esp + edx*4] */ { u32 v = R32((u32)(r_esp+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00705ef8: call 0x70b084 */ r_esp -= 4; W32(r_esp, 0x705efdu); f_0070b084();
    /* 00705efd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00705efe: mov dword ptr [0xa96e98], eax */ W32((u32)(0xa96e98u), r_eax);
    /* 00705f03: mov ecx, eax */ r_ecx = r_eax;
    /* 00705f05: call 0x70b070 */ r_esp -= 4; W32(r_esp, 0x705f0au); f_0070b070();
    /* 00705f0a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00705f0c: mov dword ptr [0xa96ed4], eax */ W32((u32)(0xa96ed4u), r_eax);
    /* 00705f11: mov eax, dword ptr [0xa96ef4] */ r_eax = R32((u32)(0xa96ef4u));
    /* 00705f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705f18: je 0x7060aa */ if (fZ) goto L_007060aa;
L_00705f1e:; BB(0x00705f1e);
    /* 00705f1e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705f21: je 0x706045 */ if (fZ) goto L_00706045;
L_00705f27:; BB(0x00705f27);
    /* 00705f27: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705f2a: jne 0x705f88 */ if (!fZ) goto L_00705f88;
L_00705f2c:; BB(0x00705f2c);
    /* 00705f2c: push 0x96e9c8 */ { u32 v = 0x96e9c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00705f31: call 0x5b9568 */ r_esp -= 4; W32(r_esp, 0x705f36u); f_005b9568();
    /* 00705f36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00705f37: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00705f3a: mov dword ptr [0xa96ea0], eax */ W32((u32)(0xa96ea0u), r_eax);
    /* 00705f3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00705f41: mov dword ptr [0xa96ed0], edx */ W32((u32)(0xa96ed0u), r_edx);
    /* 00705f47: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00705f4a: mov dword ptr [0xa96ec4], 0x126 */ W32((u32)(0xa96ec4u), 0x126u);
    /* 00705f54: mov dword ptr [0xa96ecc], ecx */ W32((u32)(0xa96eccu), r_ecx);
    /* 00705f5a: mov dword ptr [0xa96ec0], 0x13 */ W32((u32)(0xa96ec0u), 0x13u);
    /* 00705f64: mov dword ptr [0xa96ec8], edx */ W32((u32)(0xa96ec8u), r_edx);
    /* 00705f6a: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00705f6d: mov dword ptr [0xa96ebc], edx */ W32((u32)(0xa96ebcu), r_edx);
    /* 00705f73: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00705f76: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00705f79: mov dword ptr [0xa96eb8], edx */ W32((u32)(0xa96eb8u), r_edx);
    /* 00705f7f: mov dword ptr [0xa96eb4], eax */ W32((u32)(0xa96eb4u), r_eax);
    /* 00705f84: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705f87: ret  */ FN_RET(0x00705eb8); r_esp += 4; return;
L_00705f88:; BB(0x00705f88);
    /* 00705f88: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00705f8b: jne 0x705fe9 */ if (!fZ) goto L_00705fe9;
L_00705f8d:; BB(0x00705f8d);
    /* 00705f8d: push 0x96e9d8 */ { u32 v = 0x96e9d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00705f92: call 0x5b9568 */ r_esp -= 4; W32(r_esp, 0x705f97u); f_005b9568();
    /* 00705f97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00705f98: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00705f9b: mov dword ptr [0xa96e9c], eax */ W32((u32)(0xa96e9cu), r_eax);
    /* 00705fa0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00705fa2: mov dword ptr [0xa96ed0], edx */ W32((u32)(0xa96ed0u), r_edx);
    /* 00705fa8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00705fab: mov dword ptr [0xa96ec4], 0x127 */ W32((u32)(0xa96ec4u), 0x127u);
    /* 00705fb5: mov dword ptr [0xa96ecc], ecx */ W32((u32)(0xa96eccu), r_ecx);
    /* 00705fbb: mov dword ptr [0xa96ec0], 0x13 */ W32((u32)(0xa96ec0u), 0x13u);
    /* 00705fc5: mov dword ptr [0xa96ec8], edx */ W32((u32)(0xa96ec8u), r_edx);
    /* 00705fcb: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00705fce: mov dword ptr [0xa96ebc], edx */ W32((u32)(0xa96ebcu), r_edx);
    /* 00705fd4: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00705fd7: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00705fda: mov dword ptr [0xa96eb4], edx */ W32((u32)(0xa96eb4u), r_edx);
    /* 00705fe0: mov dword ptr [0xa96eb8], eax */ W32((u32)(0xa96eb8u), r_eax);
    /* 00705fe5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00705fe8: ret  */ FN_RET(0x00705eb8); r_esp += 4; return;
L_00705fe9:; BB(0x00705fe9);
    /* 00705fe9: push 0x96e9a8 */ { u32 v = 0x96e9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00705fee: call 0x5b9568 */ r_esp -= 4; W32(r_esp, 0x705ff3u); f_005b9568();
    /* 00705ff3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00705ff4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00705ff7: mov dword ptr [0xa96ea8], eax */ W32((u32)(0xa96ea8u), r_eax);
    /* 00705ffc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00705ffe: mov dword ptr [0xa96ed0], edx */ W32((u32)(0xa96ed0u), r_edx);
    /* 00706004: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00706007: mov dword ptr [0xa96ec4], 0x126 */ W32((u32)(0xa96ec4u), 0x126u);
    /* 00706011: mov dword ptr [0xa96ecc], ecx */ W32((u32)(0xa96eccu), r_ecx);
    /* 00706017: mov dword ptr [0xa96ec0], 0x13 */ W32((u32)(0xa96ec0u), 0x13u);
    /* 00706021: mov dword ptr [0xa96ec8], edx */ W32((u32)(0xa96ec8u), r_edx);
    /* 00706027: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0070602a: mov dword ptr [0xa96ebc], edx */ W32((u32)(0xa96ebcu), r_edx);
    /* 00706030: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00706033: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00706036: mov dword ptr [0xa96eb4], edx */ W32((u32)(0xa96eb4u), r_edx);
    /* 0070603c: mov dword ptr [0xa96eb8], eax */ W32((u32)(0xa96eb8u), r_eax);
    /* 00706041: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00706044: ret  */ FN_RET(0x00705eb8); r_esp += 4; return;
L_00706045:; BB(0x00706045);
    /* 00706045: push 0x96e9b8 */ { u32 v = 0x96e9b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0070604a: call 0x5b9568 */ r_esp -= 4; W32(r_esp, 0x70604fu); f_005b9568();
    /* 0070604f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00706050: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00706053: mov dword ptr [0xa96ea4], eax */ W32((u32)(0xa96ea4u), r_eax);
    /* 00706058: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0070605a: mov dword ptr [0xa96ed0], edx */ W32((u32)(0xa96ed0u), r_edx);
    /* 00706060: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00706063: mov dword ptr [0xa96ec4], 0x126 */ W32((u32)(0xa96ec4u), 0x126u);
    /* 0070606d: mov dword ptr [0xa96ecc], ecx */ W32((u32)(0xa96eccu), r_ecx);
    /* 00706073: mov dword ptr [0xa96ec0], 0x13 */ W32((u32)(0xa96ec0u), 0x13u);
    /* 0070607d: mov dword ptr [0xa96ec8], edx */ W32((u32)(0xa96ec8u), r_edx);
    /* 00706083: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00706086: mov dword ptr [0xa96ebc], edx */ W32((u32)(0xa96ebcu), r_edx);
    /* 0070608c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0070608f: mov dword ptr [0xa96eb4], edx */ W32((u32)(0xa96eb4u), r_edx);
    /* 00706095: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00706098: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0070609b: mov dword ptr [0xa96eb8], edx */ W32((u32)(0xa96eb8u), r_edx);
    /* 007060a1: mov dword ptr [0xa96eb0], eax */ W32((u32)(0xa96eb0u), r_eax);
    /* 007060a6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007060a9: ret  */ FN_RET(0x00705eb8); r_esp += 4; return;
L_007060aa:; BB(0x007060aa);
    /* 007060aa: push 0x96e998 */ { u32 v = 0x96e998u; r_esp -= 4; W32(r_esp, v); }
    /* 007060af: call 0x5b9568 */ r_esp -= 4; W32(r_esp, 0x7060b4u); f_005b9568();
    /* 007060b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007060b5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007060b8: mov dword ptr [0xa96eac], eax */ W32((u32)(0xa96eacu), r_eax);
    /* 007060bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007060bf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 007060c2: mov dword ptr [0xa96ed0], edx */ W32((u32)(0xa96ed0u), r_edx);
    /* 007060c8: mov dword ptr [0xa96ec4], 0x11a */ W32((u32)(0xa96ec4u), 0x11au);
    /* 007060d2: mov dword ptr [0xa96ecc], ecx */ W32((u32)(0xa96eccu), r_ecx);
    /* 007060d8: mov dword ptr [0xa96ec0], 0x12 */ W32((u32)(0xa96ec0u), 0x12u);
    /* 007060e2: mov dword ptr [0xa96ec8], eax */ W32((u32)(0xa96ec8u), r_eax);
    /* 007060e7: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007060ea: ret  */ FN_RET(0x00705eb8); r_esp += 4; return;
}

