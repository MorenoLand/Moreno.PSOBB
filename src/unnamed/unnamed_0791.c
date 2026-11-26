#include "protos.h"

void f_007913f8(void) /* sub_7913F8 */
{
    FN_ENTER(0x007913f8);
    /* 007913f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007913f9: mov esi, ecx */ r_esi = r_ecx;
    /* 007913fb: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 007913fe: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00791405: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0079140a: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0079140d: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00791414: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791416: je 0x79141f */ if (fZ) goto L_0079141f;
L_00791418:; BB(0x00791418);
    /* 00791418: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079141a: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x79141fu); f_00760acc();
L_0079141f:; BB(0x0079141f);
    /* 0079141f: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00791422: mov dword ptr [0xa0f68c], eax */ W32((u32)(0xa0f68cu), r_eax);
    /* 00791427: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791429: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 0079142c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 0079142f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791430: ret  */ FN_RET(0x007913f8); r_esp += 4; return;
}

void f_00791434(void) /* sub_791434 */
{
    FN_ENTER(0x00791434);
    /* 00791434: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 00791439: mov edx, dword ptr [0xa9ccd4] */ r_edx = R32((u32)(0xa9ccd4u));
    /* 0079143f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791441: je 0x791450 */ if (fZ) goto L_00791450;
L_00791443:; BB(0x00791443);
    /* 00791443: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00791446: jge 0x791450 */ if ((fS==fO)) goto L_00791450;
L_00791448:; BB(0x00791448);
    /* 00791448: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0079144c: mov dword ptr [edx + ecx*4 + 4], eax */ W32((u32)(r_edx+r_ecx*4+0x4u), r_eax);
L_00791450:; BB(0x00791450);
    /* 00791450: ret 8 */ FN_RET(0x00791434); r_esp += 12; return;
}

void f_00791454(void) /* sub_791454 */
{
    FN_ENTER(0x00791454);
    /* 00791454: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 00791459: mov ecx, dword ptr [0xa9ccd4] */ r_ecx = R32((u32)(0xa9ccd4u));
    /* 0079145f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791461: je 0x791470 */ if (fZ) goto L_00791470;
L_00791463:; BB(0x00791463);
    /* 00791463: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00791466: jge 0x791470 */ if ((fS==fO)) goto L_00791470;
L_00791468:; BB(0x00791468);
    /* 00791468: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0079146d: mov byte ptr [edx + ecx], al */ W8((u32)(r_edx+r_ecx), (u8)r_eax);
L_00791470:; BB(0x00791470);
    /* 00791470: ret 8 */ FN_RET(0x00791454); r_esp += 12; return;
}

void f_00791474(void) /* sub_791474 */
{
    FN_ENTER(0x00791474);
    /* 00791474: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00791475: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079147b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0079147d: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x791482u); f_0070a5ec();
    /* 00791482: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 00791485: movzx edx, word ptr [eax + 0x8c] */ r_edx = (u32)R16((u32)(r_eax+0x8cu));
    /* 0079148c: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 0079148f: mov byte ptr [ebp + 0x1d], al */ W8((u32)(r_ebp+0x1du), (u8)r_eax);
    /* 00791492: cmp al, byte ptr [ebp + 0x1e] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebp+0x1eu)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00791495: je 0x7914d6 */ if (fZ) goto L_007914d6;
L_00791497:; BB(0x00791497);
    /* 00791497: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00791499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079149b: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7914a0u); f_00792fe8();
    /* 007914a0: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007914a4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007914a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007914a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007914a8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7914adu); f_00857dec();
    /* 007914ad: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007914b0: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 007914b3: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x7914b8u); f_00736578();
    /* 007914b8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007914bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007914bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007914bf: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 007914c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007914c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007914c5: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x7914cau); f_00735db8();
    /* 007914ca: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 007914cd: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7914d2u); f_00736458();
    /* 007914d2: movsx eax, byte ptr [ebp + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x1du));
L_007914d6:; BB(0x007914d6);
    /* 007914d6: mov byte ptr [ebp + 0x1e], al */ W8((u32)(r_ebp+0x1eu), (u8)r_eax);
    /* 007914d9: mov eax, dword ptr [eax*8 + 0x97b3a0] */ r_eax = R32((u32)(r_eax*8+0x97b3a0u));
    /* 007914e0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007914e3: je 0x7914ee */ if (fZ) goto L_007914ee;
L_007914e5:; BB(0x007914e5);
    /* 007914e5: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007914e8: jne 0x791597 */ if (!fZ) goto L_00791597;
L_007914ee:; BB(0x007914ee);
    /* 007914ee: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7914f3u); f_00694c6c();
    /* 007914f3: mov edx, dword ptr [0xa0f66c] */ r_edx = R32((u32)(0xa0f66cu));
    /* 007914f9: or edx, dword ptr [0xa0f670] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007914ff: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00791502: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791504: or edx, dword ptr [0xa0f684] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f684u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0079150a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079150c: or edx, dword ptr [0xa0f688] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f688u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00791512: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00791513: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791515: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0079151c: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x791521u); f_007c1160();
    /* 00791521: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791523: je 0x791597 */ if (fZ) goto L_00791597;
L_00791525:; BB(0x00791525);
    /* 00791525: mov edx, dword ptr [0xa9ccd4] */ r_edx = R32((u32)(0xa9ccd4u));
    /* 0079152b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079152d: je 0x7915ce */ if (fZ) goto L_007915ce;
L_00791533:; BB(0x00791533);
    /* 00791533: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
L_00791536:; BB(0x00791536);
    /* 00791536: je 0x7915c4 */ if (fZ) goto L_007915c4;
L_0079153c:; BB(0x0079153c);
    /* 0079153c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
L_0079153f:; BB(0x0079153f);
    /* 0079153f: je 0x79154a */ if (fZ) goto L_0079154a;
L_00791541:; BB(0x00791541);
    /* 00791541: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00791544: mov edx, dword ptr [0xa9ccd4] */ r_edx = R32((u32)(0xa9ccd4u));
L_0079154a:; BB(0x0079154a);
    /* 0079154a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079154c: je 0x791551 */ if (fZ) goto L_00791551;
L_0079154e:; BB(0x0079154e);
    /* 0079154e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00791551:; BB(0x00791551);
    /* 00791551: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00791556: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079155c: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x791561u); f_007be19c();
    /* 00791561: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791566: je 0x79157f */ if (fZ) goto L_0079157f;
L_00791568:; BB(0x00791568);
    /* 00791568: push 0xff7fffff */ { u32 v = 0xff7fffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079156d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079156f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00791575: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x79157au); f_007be17c();
    /* 0079157a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079157d: jmp 0x791597 */ goto L_00791597;
L_0079157f:; BB(0x0079157f);
    /* 0079157f: push 0xff7fffff */ { u32 v = 0xff7fffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00791584: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00791589: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079158f: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x791594u); f_007be17c();
    /* 00791594: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00791597:; BB(0x00791597);
    /* 00791597: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0079159a: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 007915a1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007915a3: je 0x7915b4 */ if (fZ) goto L_007915b4;
L_007915a5:; BB(0x007915a5);
    /* 007915a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007915a7: call 0x7915d8 */ r_esp -= 4; W32(r_esp, 0x7915acu); f_007915d8();
L_007915ac:; BB(0x007915ac);
    /* 007915ac: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007915b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007915b3: ret  */ FN_RET(0x00791474); r_esp += 4; return;
L_007915b4:; BB(0x007915b4);
    /* 007915b4: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007915b6: je 0x7915ac */ if (fZ) goto L_007915ac;
L_007915b8:; BB(0x007915b8);
    /* 007915b8: mov byte ptr [ebp + 0x1c], 2 */ W8((u32)(r_ebp+0x1cu), 0x2u);
    /* 007915bc: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007915c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007915c3: ret  */ FN_RET(0x00791474); r_esp += 4; return;
L_007915c4:; BB(0x007915c4);
    /* 007915c4: mov eax, 0 */ r_eax = 0x0u;
    /* 007915c9: jmp 0x79153f */ goto L_0079153f;
L_007915ce:; BB(0x007915ce);
    /* 007915ce: mov ecx, 0 */ r_ecx = 0x0u;
    /* 007915d3: jmp 0x791536 */ goto L_00791536;
}

void f_007915d8(void) /* sub_7915D8 */
{
    FN_ENTER(0x007915d8);
    /* 007915d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007915d9: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007915df: mov edi, ecx */ r_edi = r_ecx;
    /* 007915e1: call 0x842460 */ r_esp -= 4; W32(r_esp, 0x7915e6u); f_00842460();
    /* 007915e6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007915e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007915ea: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7915efu); f_00792fe8();
    /* 007915ef: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007915f3: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007915f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007915f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007915f7: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7915fcu); f_00857dec();
    /* 007915fc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007915ff: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00791602: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x791607u); f_00736578();
    /* 00791607: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0079160a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079160c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079160e: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00791611: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00791613: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791614: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x791619u); f_00735db8();
    /* 00791619: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0079161c: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x791621u); f_00736458();
    /* 00791621: mov eax, dword ptr [0xa0f68c] */ r_eax = R32((u32)(0xa0f68cu));
    /* 00791626: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0079162a: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0079162d: mov dword ptr [0xa0f68c], 0 */ W32((u32)(0xa0f68cu), 0x0u);
    /* 00791637: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079163d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079163e: ret  */ FN_RET(0x007915d8); r_esp += 4; return;
}

void f_00791640(void) /* sub_791640 */
{
    FN_ENTER(0x00791640);
    /* 00791640: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00791641: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00791642: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00791643: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00791645: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x79164au); f_0082dbac();
    /* 0079164a: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x79164fu); f_004d28a4();
    /* 0079164f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00791651: mov esi, ebx */ r_esi = r_ebx;
    /* 00791653: mov ebx, eax */ r_ebx = r_eax;
L_00791655:; BB(0x00791655);
    /* 00791655: mov edi, dword ptr [esi + ebx*4 + 0x2c] */ r_edi = R32((u32)(r_esi+r_ebx*4+0x2cu));
    /* 00791659: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0079165c: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x791661u); f_007108f4();
    /* 00791661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791662: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00791664: mov ecx, edi */ r_ecx = r_edi;
    /* 00791666: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x791669u); call_ind(t); }
    /* 00791669: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079166c: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079166f: jl 0x791655 */ if ((fS!=fO)) goto L_00791655;
L_00791671:; BB(0x00791671);
    /* 00791671: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x791676u); f_004d2968();
    /* 00791676: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x79167bu); f_0082dab0();
    /* 0079167b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079167c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079167d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079167e: ret  */ FN_RET(0x00791640); r_esp += 4; return;
}

void f_00791680(void) /* sub_791680 */
{
    FN_ENTER(0x00791680);
    /* 00791680: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791686: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791688: je 0x79169d */ if (fZ) goto L_0079169d;
L_0079168a:; BB(0x0079168a);
    /* 0079168a: je 0x791693 */ if (fZ) goto L_00791693;
L_0079168c:; BB(0x0079168c);
    /* 0079168c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079168e: call 0x587aa0 */ r_esp -= 4; W32(r_esp, 0x791693u); f_00587aa0();
L_00791693:; BB(0x00791693);
    /* 00791693: mov dword ptr [0xa9cccc], 0 */ W32((u32)(0xa9ccccu), 0x0u);
L_0079169d:; BB(0x0079169d);
    /* 0079169d: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 007916a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007916a5: je 0x7916ba */ if (fZ) goto L_007916ba;
L_007916a7:; BB(0x007916a7);
    /* 007916a7: je 0x7916b0 */ if (fZ) goto L_007916b0;
L_007916a9:; BB(0x007916a9);
    /* 007916a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007916ab: call 0x587aa0 */ r_esp -= 4; W32(r_esp, 0x7916b0u); f_00587aa0();
L_007916b0:; BB(0x007916b0);
    /* 007916b0: mov dword ptr [0xa9ccd8], 0 */ W32((u32)(0xa9ccd8u), 0x0u);
L_007916ba:; BB(0x007916ba);
    /* 007916ba: mov edx, dword ptr [0xa9ccec] */ r_edx = R32((u32)(0xa9ccecu));
    /* 007916c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007916c2: je 0x7916db */ if (fZ) goto L_007916db;
L_007916c4:; BB(0x007916c4);
    /* 007916c4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007916c8: mov dword ptr [0xa9ccec], 0 */ W32((u32)(0xa9ccecu), 0x0u);
    /* 007916d2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007916d7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007916db:; BB(0x007916db);
    /* 007916db: mov edx, dword ptr [0xa9ccf0] */ r_edx = R32((u32)(0xa9ccf0u));
    /* 007916e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007916e3: je 0x7916fc */ if (fZ) goto L_007916fc;
L_007916e5:; BB(0x007916e5);
    /* 007916e5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007916e9: mov dword ptr [0xa9ccf0], 0 */ W32((u32)(0xa9ccf0u), 0x0u);
    /* 007916f3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007916f8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007916fc:; BB(0x007916fc);
    /* 007916fc: mov byte ptr [0x9ff3d4], 0 */ W8((u32)(0x9ff3d4u), 0x0u);
    /* 00791703: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 00791708: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079170a: push 0xa9cb60 */ { u32 v = 0xa9cb60u; r_esp -= 4; W32(r_esp, v); }
    /* 0079170f: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x791714u); f_0086b688();
    /* 00791714: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791717: mov edx, 0xa9ccf4 */ r_edx = 0xa9ccf4u;
    /* 0079171c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079171e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00791720: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00791723: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00791726: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00791729: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0079172c: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0079172f: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00791732: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00791735: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00791738: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0079173b: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0079173e: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00791741: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00791744: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00791747: ret  */ FN_RET(0x00791680); r_esp += 4; return;
}

void f_00791748(void) /* sub_791748 */
{
    FN_ENTER(0x00791748);
    /* 00791748: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00791749: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079174a: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 0079174f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791751: jl 0x791785 */ if ((fS!=fO)) goto L_00791785;
L_00791753:; BB(0x00791753);
    /* 00791753: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00791756: jge 0x791785 */ if ((fS==fO)) goto L_00791785;
L_00791758:; BB(0x00791758);
    /* 00791758: mov edi, dword ptr [0xa9cccc] */ r_edi = R32((u32)(0xa9ccccu));
    /* 0079175e: mov byte ptr [0x9ff3d4], al */ W8((u32)(0x9ff3d4u), (u8)r_eax);
    /* 00791763: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791765: je 0x791785 */ if (fZ) goto L_00791785;
L_00791767:; BB(0x00791767);
    /* 00791767: movzx eax, byte ptr [0x9ff3d4] */ r_eax = (u32)R8((u32)(0x9ff3d4u));
    /* 0079176e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791771: je 0x791788 */ if (fZ) goto L_00791788;
L_00791773:; BB(0x00791773);
    /* 00791773: call 0x78eea8 */ r_esp -= 4; W32(r_esp, 0x791778u); f_0078eea8();
    /* 00791778: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0079177a: movzx edx, byte ptr [eax + 0x34] */ r_edx = (u32)R8((u32)(r_eax+0x34u));
    /* 0079177e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079177f: call 0x78f5a8 */ r_esp -= 4; W32(r_esp, 0x791784u); f_0078f5a8();
    /* 00791784: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00791785:; BB(0x00791785);
    /* 00791785: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00791786: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791787: ret  */ FN_RET(0x00791748); r_esp += 4; return;
L_00791788:; BB(0x00791788);
    /* 00791788: call 0x78eea8 */ r_esp -= 4; W32(r_esp, 0x79178du); f_0078eea8();
    /* 0079178d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00791790: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00791792: mov ebx, edi */ r_ebx = r_edi;
    /* 00791794: mov edi, eax */ r_edi = r_eax;
L_00791796:; BB(0x00791796);
    /* 00791796: mov ecx, dword ptr [edi + 0x97ba60] */ r_ecx = R32((u32)(r_edi+0x97ba60u));
    /* 0079179c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0079179e: movzx edx, byte ptr [edx + ecx*8 + 4] */ r_edx = (u32)R8((u32)(r_edx+r_ecx*8+0x4u));
    /* 007917a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007917a4: call 0x78f5a8 */ r_esp -= 4; W32(r_esp, 0x7917a9u); f_0078f5a8();
    /* 007917a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007917aa: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007917ad: cmp edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007917b0: jl 0x791796 */ if ((fS!=fO)) goto L_00791796;
L_007917b2:; BB(0x007917b2);
    /* 007917b2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 007917b5: jmp 0x791785 */ goto L_00791785;
}

void f_007917b8(void) /* sub_7917B8 */
{
    FN_ENTER(0x007917b8);
    /* 007917b8: movzx eax, byte ptr [0x9ff3d4] */ r_eax = (u32)R8((u32)(0x9ff3d4u));
    /* 007917bf: ret  */ FN_RET(0x007917b8); r_esp += 4; return;
}

void f_007917c0(void) /* sub_7917C0 */
{
    FN_ENTER(0x007917c0);
    /* 007917c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007917c1: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007917c5: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 007917cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007917cd: je 0x7917f4 */ if (fZ) goto L_007917f4;
L_007917cf:; BB(0x007917cf);
    /* 007917cf: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 007917d1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007917d3: je 0x7917e9 */ if (fZ) goto L_007917e9;
L_007917d5:; BB(0x007917d5);
    /* 007917d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007917d7:; BB(0x007917d7);
    /* 007917d7: movzx edx, byte ptr [ebp + eax*8] */ r_edx = (u32)R8((u32)(r_ebp+r_eax*8));
    /* 007917dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007917df: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007917e2: jge 0x79180c */ if ((fS==fO)) goto L_0079180c;
L_007917e4:; BB(0x007917e4);
    /* 007917e4: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007917e7: jl 0x7917d7 */ if ((fS!=fO)) goto L_007917d7;
L_007917e9:; BB(0x007917e9);
    /* 007917e9: mov eax, dword ptr [ebp + 0x168] */ r_eax = R32((u32)(r_ebp+0x168u));
    /* 007917ef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007917f2: jne 0x7917f8 */ if (!fZ) goto L_007917f8;
L_007917f4:; BB(0x007917f4);
    /* 007917f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007917f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007917f7: ret  */ FN_RET(0x007917c0); r_esp += 4; return;
L_007917f8:; BB(0x007917f8);
    /* 007917f8: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 007917fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791800: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791805u); f_00792f98();
    /* 00791805: mov eax, 1 */ r_eax = 0x1u;
    /* 0079180a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079180b: ret  */ FN_RET(0x007917c0); r_esp += 4; return;
L_0079180c:; BB(0x0079180c);
    /* 0079180c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079180e: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791813u); f_00792f98();
    /* 00791813: jmp 0x7917e9 */ goto L_007917e9;
}

void f_00791818(void) /* sub_791818 */
{
    FN_ENTER(0x00791818);
    /* 00791818: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00791819: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079181a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079181b: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0079181f: mov eax, dword ptr [0xa9ccd8] */ r_eax = R32((u32)(0xa9ccd8u));
    /* 00791824: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791826: je 0x791a82 */ if (fZ) goto L_00791a82;
L_0079182c:; BB(0x0079182c);
    /* 0079182c: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 0079182e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791830: mov esi, ebp */ r_esi = r_ebp;
    /* 00791832: mov ebp, eax */ r_ebp = r_eax;
    /* 00791834: mov edi, edx */ r_edi = r_edx;
L_00791836:; BB(0x00791836);
    /* 00791836: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791838: je 0x791b11 */ if (fZ) goto L_00791b11;
L_0079183e:; BB(0x0079183e);
    /* 0079183e: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791841: je 0x79188d */ if (fZ) goto L_0079188d;
L_00791843:; BB(0x00791843);
    /* 00791843: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791846: jne 0x791868 */ if (!fZ) goto L_00791868;
L_00791848:; BB(0x00791848);
    /* 00791848: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0079184b: mov ecx, edi */ r_ecx = r_edi;
    /* 0079184d: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00791853: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791855: je 0x791a9c */ if (fZ) goto L_00791a9c;
L_0079185b:; BB(0x0079185b);
    /* 0079185b: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_0079185f:; BB(0x0079185f);
    /* 0079185f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00791860: call 0x84265c */ r_esp -= 4; W32(r_esp, 0x791865u); f_0084265c();
    /* 00791865: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00791866: jmp 0x7918ab */ goto L_007918ab;
L_00791868:; BB(0x00791868);
    /* 00791868: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079186b: jne 0x7918ab */ if (!fZ) goto L_007918ab;
L_0079186d:; BB(0x0079186d);
    /* 0079186d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00791870: mov ecx, edi */ r_ecx = r_edi;
    /* 00791872: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00791878: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079187a: je 0x791aa3 */ if (fZ) goto L_00791aa3;
L_00791880:; BB(0x00791880);
    /* 00791880: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_00791884:; BB(0x00791884);
    /* 00791884: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00791885: call 0x842668 */ r_esp -= 4; W32(r_esp, 0x79188au); f_00842668();
    /* 0079188a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079188b: jmp 0x7918ab */ goto L_007918ab;
L_0079188d:; BB(0x0079188d);
    /* 0079188d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00791890: mov ecx, edi */ r_ecx = r_edi;
    /* 00791892: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00791898: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079189a: je 0x791b0a */ if (fZ) goto L_00791b0a;
L_007918a0:; BB(0x007918a0);
    /* 007918a0: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_007918a4:; BB(0x007918a4);
    /* 007918a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007918a5: call 0x842650 */ r_esp -= 4; W32(r_esp, 0x7918aau); f_00842650();
    /* 007918aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007918ab:; BB(0x007918ab);
    /* 007918ab: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007918ae: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007918b1: jl 0x791836 */ if ((fS!=fO)) goto L_00791836;
L_007918b3:; BB(0x007918b3);
    /* 007918b3: mov eax, ebp */ r_eax = r_ebp;
    /* 007918b5: mov ebp, esi */ r_ebp = r_esi;
    /* 007918b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x00791818); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x00791818); r_esp += 4; return;
L_00791a9c:; BB(0x00791a9c);
    /* 00791a9c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a9e: jmp 0x79185f */ goto L_0079185f;
L_00791aa3:; BB(0x00791aa3);
    /* 00791aa3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00791aa5: jmp 0x791884 */ goto L_00791884;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
L_00791b0a:; BB(0x00791b0a);
    /* 00791b0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00791b0c: jmp 0x7918a4 */ goto L_007918a4;
L_00791b11:; BB(0x00791b11);
    /* 00791b11: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00791b14: mov ecx, edi */ r_ecx = r_edi;
    /* 00791b16: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00791b1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791b1e: je 0x791b30 */ if (fZ) goto L_00791b30;
L_00791b20:; BB(0x00791b20);
    /* 00791b20: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_00791b24:; BB(0x00791b24);
    /* 00791b24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00791b25: call 0x842644 */ r_esp -= 4; W32(r_esp, 0x791b2au); f_00842644();
    /* 00791b2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00791b2b: jmp 0x7918ab */ goto L_007918ab;
L_00791b30:; BB(0x00791b30);
    /* 00791b30: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00791b32: jmp 0x791b24 */ goto L_00791b24;
}

void f_0079194a(void)
{
    FN_ENTER(0x0079194a);
    goto L_0079194a;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_0079194a:; BB(0x0079194a);
    /* 0079194a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079194c: je 0x791aaa */ if (fZ) goto L_00791aaa;
L_00791952:; BB(0x00791952);
    /* 00791952: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_00791956:; BB(0x00791956);
    /* 00791956: mov dword ptr [0xa0f698], edx */ W32((u32)(0xa0f698u), r_edx);
    /* 0079195c: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x0079194a); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x0079194a); r_esp += 4; return;
L_00791aaa:; BB(0x00791aaa);
    /* 00791aaa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791aac: jmp 0x791956 */ goto L_00791956;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_00791961(void)
{
    FN_ENTER(0x00791961);
    goto L_00791961;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_00791961:; BB(0x00791961);
    /* 00791961: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791963: je 0x791ab1 */ if (fZ) goto L_00791ab1;
L_00791969:; BB(0x00791969);
    /* 00791969: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_0079196d:; BB(0x0079196d);
    /* 0079196d: mov dword ptr [0xa0f688], edx */ W32((u32)(0xa0f688u), r_edx);
    /* 00791973: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x00791961); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x00791961); r_esp += 4; return;
L_00791ab1:; BB(0x00791ab1);
    /* 00791ab1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791ab3: jmp 0x79196d */ goto L_0079196d;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_00791978(void)
{
    FN_ENTER(0x00791978);
    goto L_00791978;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_00791978:; BB(0x00791978);
    /* 00791978: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079197a: je 0x791ab8 */ if (fZ) goto L_00791ab8;
L_00791980:; BB(0x00791980);
    /* 00791980: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_00791984:; BB(0x00791984);
    /* 00791984: mov dword ptr [0xa0f684], edx */ W32((u32)(0xa0f684u), r_edx);
    /* 0079198a: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x00791978); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x00791978); r_esp += 4; return;
L_00791ab8:; BB(0x00791ab8);
    /* 00791ab8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791aba: jmp 0x791984 */ goto L_00791984;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_0079198f(void)
{
    FN_ENTER(0x0079198f);
    goto L_0079198f;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_0079198f:; BB(0x0079198f);
    /* 0079198f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791991: je 0x791abf */ if (fZ) goto L_00791abf;
L_00791997:; BB(0x00791997);
    /* 00791997: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_0079199b:; BB(0x0079199b);
    /* 0079199b: mov dword ptr [0xa0f68c], edx */ W32((u32)(0xa0f68cu), r_edx);
    /* 007919a1: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x0079198f); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x0079198f); r_esp += 4; return;
L_00791abf:; BB(0x00791abf);
    /* 00791abf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791ac1: jmp 0x79199b */ goto L_0079199b;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_007919a6(void)
{
    FN_ENTER(0x007919a6);
    goto L_007919a6;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_007919a6:; BB(0x007919a6);
    /* 007919a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007919a8: je 0x791ac6 */ if (fZ) goto L_00791ac6;
L_007919ae:; BB(0x007919ae);
    /* 007919ae: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_007919b2:; BB(0x007919b2);
    /* 007919b2: mov dword ptr [0xa0f680], edx */ W32((u32)(0xa0f680u), r_edx);
    /* 007919b8: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x007919a6); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x007919a6); r_esp += 4; return;
L_00791ac6:; BB(0x00791ac6);
    /* 00791ac6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791ac8: jmp 0x7919b2 */ goto L_007919b2;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_007919bd(void)
{
    FN_ENTER(0x007919bd);
    goto L_007919bd;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_007919bd:; BB(0x007919bd);
    /* 007919bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007919bf: je 0x791acd */ if (fZ) goto L_00791acd;
L_007919c5:; BB(0x007919c5);
    /* 007919c5: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_007919c9:; BB(0x007919c9);
    /* 007919c9: mov dword ptr [0xa0f67c], edx */ W32((u32)(0xa0f67cu), r_edx);
    /* 007919cf: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x007919bd); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x007919bd); r_esp += 4; return;
L_00791acd:; BB(0x00791acd);
    /* 00791acd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791acf: jmp 0x7919c9 */ goto L_007919c9;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_007919d1(void)
{
    FN_ENTER(0x007919d1);
    goto L_007919d1;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_007919d1:; BB(0x007919d1);
    /* 007919d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007919d3: je 0x791ad4 */ if (fZ) goto L_00791ad4;
L_007919d9:; BB(0x007919d9);
    /* 007919d9: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_007919dd:; BB(0x007919dd);
    /* 007919dd: mov dword ptr [0xa0f678], edx */ W32((u32)(0xa0f678u), r_edx);
    /* 007919e3: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x007919d1); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x007919d1); r_esp += 4; return;
L_00791ad4:; BB(0x00791ad4);
    /* 00791ad4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791ad6: jmp 0x7919dd */ goto L_007919dd;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_007919e5(void)
{
    FN_ENTER(0x007919e5);
    goto L_007919e5;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_007919e5:; BB(0x007919e5);
    /* 007919e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007919e7: je 0x791adb */ if (fZ) goto L_00791adb;
L_007919ed:; BB(0x007919ed);
    /* 007919ed: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_007919f1:; BB(0x007919f1);
    /* 007919f1: mov dword ptr [0xa0f674], edx */ W32((u32)(0xa0f674u), r_edx);
    /* 007919f7: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x007919e5); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x007919e5); r_esp += 4; return;
L_00791adb:; BB(0x00791adb);
    /* 00791adb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791add: jmp 0x7919f1 */ goto L_007919f1;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_007919f9(void)
{
    FN_ENTER(0x007919f9);
    goto L_007919f9;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_007919f9:; BB(0x007919f9);
    /* 007919f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007919fb: je 0x791ae2 */ if (fZ) goto L_00791ae2;
L_00791a01:; BB(0x00791a01);
    /* 00791a01: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_00791a05:; BB(0x00791a05);
    /* 00791a05: mov dword ptr [0xa0f670], edx */ W32((u32)(0xa0f670u), r_edx);
    /* 00791a0b: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x007919f9); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x007919f9); r_esp += 4; return;
L_00791ae2:; BB(0x00791ae2);
    /* 00791ae2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791ae4: jmp 0x791a05 */ goto L_00791a05;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_00791a0d(void)
{
    FN_ENTER(0x00791a0d);
    goto L_00791a0d;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_00791a0d:; BB(0x00791a0d);
    /* 00791a0d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a0f: je 0x791ae9 */ if (fZ) goto L_00791ae9;
L_00791a15:; BB(0x00791a15);
    /* 00791a15: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_00791a19:; BB(0x00791a19);
    /* 00791a19: mov dword ptr [0xa0f66c], edx */ W32((u32)(0xa0f66cu), r_edx);
    /* 00791a1f: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x00791a0d); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x00791a0d); r_esp += 4; return;
L_00791ae9:; BB(0x00791ae9);
    /* 00791ae9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791aeb: jmp 0x791a19 */ goto L_00791a19;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_00791a21(void)
{
    FN_ENTER(0x00791a21);
    goto L_00791a21;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_00791a21:; BB(0x00791a21);
    /* 00791a21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a23: je 0x791af0 */ if (fZ) goto L_00791af0;
L_00791a29:; BB(0x00791a29);
    /* 00791a29: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_00791a2d:; BB(0x00791a2d);
    /* 00791a2d: mov dword ptr [0xa0f668], edx */ W32((u32)(0xa0f668u), r_edx);
    /* 00791a33: jmp 0x791a47 */ goto L_00791a47;
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x00791a21); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x00791a21); r_esp += 4; return;
L_00791af0:; BB(0x00791af0);
    /* 00791af0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791af2: jmp 0x791a2d */ goto L_00791a2d;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_00791a35(void)
{
    FN_ENTER(0x00791a35);
    goto L_00791a35;
L_007918b9:; BB(0x007918b9);
    /* 007918b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007918bb: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 007918be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c0: je 0x7918ca */ if (fZ) goto L_007918ca;
L_007918c2:; BB(0x007918c2);
    /* 007918c2: mov esi, dword ptr [edx + edi*4 + 4] */ r_esi = R32((u32)(r_edx+r_edi*4+0x4u));
    /* 007918c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918c8: jne 0x791938 */ if (!fZ) goto L_00791938;
L_007918ca:; BB(0x007918ca);
    /* 007918ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918cc: jne 0x7918d2 */ if (!fZ) goto L_007918d2;
L_007918ce:; BB(0x007918ce);
    /* 007918ce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d0: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918d2:; BB(0x007918d2);
    /* 007918d2: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d5: jne 0x7918db */ if (!fZ) goto L_007918db;
L_007918d7:; BB(0x007918d7);
    /* 007918d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918d9: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918db:; BB(0x007918db);
    /* 007918db: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918de: jne 0x7918e4 */ if (!fZ) goto L_007918e4;
L_007918e0:; BB(0x007918e0);
    /* 007918e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e2: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918e4:; BB(0x007918e4);
    /* 007918e4: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918e7: jne 0x7918ed */ if (!fZ) goto L_007918ed;
L_007918e9:; BB(0x007918e9);
    /* 007918e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918eb: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ed:; BB(0x007918ed);
    /* 007918ed: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f0: jne 0x7918f6 */ if (!fZ) goto L_007918f6;
L_007918f2:; BB(0x007918f2);
    /* 007918f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f4: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918f6:; BB(0x007918f6);
    /* 007918f6: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918f9: jne 0x7918ff */ if (!fZ) goto L_007918ff;
L_007918fb:; BB(0x007918fb);
    /* 007918fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007918fd: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_007918ff:; BB(0x007918ff);
    /* 007918ff: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791902: jne 0x791908 */ if (!fZ) goto L_00791908;
L_00791904:; BB(0x00791904);
    /* 00791904: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791906: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791908:; BB(0x00791908);
    /* 00791908: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190b: jne 0x791911 */ if (!fZ) goto L_00791911;
L_0079190d:; BB(0x0079190d);
    /* 0079190d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079190f: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791911:; BB(0x00791911);
    /* 00791911: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791914: jne 0x79191a */ if (!fZ) goto L_0079191a;
L_00791916:; BB(0x00791916);
    /* 00791916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791918: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_0079191a:; BB(0x0079191a);
    /* 0079191a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079191d: jne 0x791923 */ if (!fZ) goto L_00791923;
L_0079191f:; BB(0x0079191f);
    /* 0079191f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791921: jne 0x79192c */ if (!fZ) goto L_0079192c;
L_00791923:; BB(0x00791923);
    /* 00791923: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791926: jne 0x791938 */ if (!fZ) goto L_00791938;
L_00791928:; BB(0x00791928);
    /* 00791928: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079192a: je 0x791938 */ if (fZ) goto L_00791938;
L_0079192c:; BB(0x0079192c);
    /* 0079192c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00791933: jmp 0x791a7a */ goto L_00791a7a;
L_00791938:; BB(0x00791938);
    /* 00791938: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079193b: ja 0x791a47 */ if ((!fC&&!fZ)) goto L_00791a47;
L_00791941:; BB(0x00791941);
    /* 00791941: mov esi, dword ptr [ecx*4 + 0x97abe8] */ r_esi = R32((u32)(r_ecx*4+0x97abe8u));
    /* 00791948: jmp esi */ { u32 t = r_esi; jmp_ind(t); return; }
L_00791a35:; BB(0x00791a35);
    /* 00791a35: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a37: je 0x791af7 */ if (fZ) goto L_00791af7;
L_00791a3d:; BB(0x00791a3d);
    /* 00791a3d: mov edx, dword ptr [edx + edi*4 + 4] */ r_edx = R32((u32)(r_edx+r_edi*4+0x4u));
L_00791a41:; BB(0x00791a41);
    /* 00791a41: mov dword ptr [0xa0f664], edx */ W32((u32)(0xa0f664u), r_edx);
L_00791a47:; BB(0x00791a47);
    /* 00791a47: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00791a4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a4d: jl 0x7918b9 */ if ((fS!=fO)) goto L_007918b9;
L_00791a53:; BB(0x00791a53);
    /* 00791a53: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a5b: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a5d:; BB(0x00791a5d);
    /* 00791a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00791a5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a61: je 0x791a7a */ if (fZ) goto L_00791a7a;
L_00791a63:; BB(0x00791a63);
    /* 00791a63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00791a65:; BB(0x00791a65);
    /* 00791a65: movzx edi, byte ptr [edx + eax*8] */ r_edi = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00791a69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791a6c: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a6f: jge 0x791afe */ if ((fS==fO)) goto L_00791afe;
L_00791a75:; BB(0x00791a75);
    /* 00791a75: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791a78: jl 0x791a65 */ if ((fS!=fO)) goto L_00791a65;
L_00791a7a:; BB(0x00791a7a);
    /* 00791a7a: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00791a7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791a80: jne 0x791a88 */ if (!fZ) goto L_00791a88;
L_00791a82:; BB(0x00791a82);
    /* 00791a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a87: ret  */ FN_RET(0x00791a35); r_esp += 4; return;
L_00791a88:; BB(0x00791a88);
    /* 00791a88: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00791a8e: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x791a93u); f_00792c64();
    /* 00791a93: mov eax, 1 */ r_eax = 0x1u;
    /* 00791a98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00791a9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00791a9b: ret  */ FN_RET(0x00791a35); r_esp += 4; return;
L_00791af7:; BB(0x00791af7);
    /* 00791af7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00791af9: jmp 0x791a41 */ goto L_00791a41;
L_00791afe:; BB(0x00791afe);
    /* 00791afe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b00: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x791b05u); f_00792f98();
    /* 00791b05: jmp 0x791a7a */ goto L_00791a7a;
}

void f_00791b34(void) /* sub_791B34 */
{
    FN_ENTER(0x00791b34);
    /* 00791b34: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00791b38: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00791b3b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00791b3d: lea eax, [ecx + ecx + 0x97b8e0] */ r_eax = (u32)(r_ecx+r_ecx+0x97b8e0u);
    /* 00791b44: ret  */ FN_RET(0x00791b34); r_esp += 4; return;
}

void f_00791b48(void) /* sub_791B48 */
{
    FN_ENTER(0x00791b48);
    /* 00791b48: mov eax, dword ptr [0xa9cccc] */ r_eax = R32((u32)(0xa9ccccu));
    /* 00791b4d: ret  */ FN_RET(0x00791b48); r_esp += 4; return;
}

void f_00791b50(void) /* sub_791B50 */
{
    FN_ENTER(0x00791b50);
    /* 00791b50: mov eax, dword ptr [0xa9ccd8] */ r_eax = R32((u32)(0xa9ccd8u));
    /* 00791b55: ret  */ FN_RET(0x00791b50); r_esp += 4; return;
}

void f_00791b58(void) /* sub_791B58 */
{
    FN_ENTER(0x00791b58);
    /* 00791b58: mov eax, dword ptr [0xa9ccec] */ r_eax = R32((u32)(0xa9ccecu));
    /* 00791b5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791b5f: je 0x791b62 */ if (fZ) goto L_00791b62;
L_00791b61:; BB(0x00791b61);
    /* 00791b61: ret  */ FN_RET(0x00791b58); r_esp += 4; return;
L_00791b62:; BB(0x00791b62);
    /* 00791b62: call 0x791b70 */ r_esp -= 4; W32(r_esp, 0x791b67u); f_00791b70();
    /* 00791b67: mov dword ptr [0xa9ccec], eax */ W32((u32)(0xa9ccecu), r_eax);
    /* 00791b6c: ret  */ FN_RET(0x00791b58); r_esp += 4; return;
}

void f_00791b70(void) /* sub_791B70 */
{
    FN_ENTER(0x00791b70);
    /* 00791b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00791b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00791b73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00791b75: push 0x8f4f38 */ { u32 v = 0x8f4f38u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00791b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791b81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00791b88: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00791b8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00791b8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00791b91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00791b94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00791b97: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00791b99: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00791ba0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x791ba5u); f_005caba4();
    /* 00791ba5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00791ba6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00791ba9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791bab: je 0x791be1 */ if (fZ) goto L_00791be1;
L_00791bad:; BB(0x00791bad);
    /* 00791bad: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00791bb4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00791bbb: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 00791bc1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00791bc4: call 0x791be8 */ r_esp -= 4; W32(r_esp, 0x791bc9u); f_00791be8();
    /* 00791bc9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00791bcc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00791bd3:; BB(0x00791bd3);
    /* 00791bd3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00791bd6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00791bdd: mov esp, ebp */ r_esp = r_ebp;
    /* 00791bdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00791be0: ret  */ FN_RET(0x00791b70); r_esp += 4; return;
L_00791be1:; BB(0x00791be1);
    /* 00791be1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00791be3: jmp 0x791bd3 */ goto L_00791bd3;
}

void f_00791be8(void) /* sub_791BE8 */
{
    FN_ENTER(0x00791be8);
    /* 00791be8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00791be9: mov ebp, esp */ r_ebp = r_esp;
    /* 00791beb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00791bed: push 0x8f4f74 */ { u32 v = 0x8f4f74u; r_esp -= 4; W32(r_esp, v); }
    /* 00791bf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00791bf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791bf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00791c00: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00791c06: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00791c09: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00791c0c: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00791c0f: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00791c12: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00791c15: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00791c18: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x791c1du); f_008193cc();
    /* 00791c1d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00791c24: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791c27: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00791c2d: mov dword ptr [edx], 0xb45608 */ W32((u32)(r_edx), 0xb45608u);
    /* 00791c33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00791c35: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 00791c3a: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00791c3d: mov byte ptr [edx + 0x1e], al */ W8((u32)(r_edx+0x1eu), (u8)r_eax);
    /* 00791c40: mov byte ptr [edx + 0x1f], al */ W8((u32)(r_edx+0x1fu), (u8)r_eax);
    /* 00791c43: mov byte ptr [edx + 0x20], al */ W8((u32)(r_edx+0x20u), (u8)r_eax);
    /* 00791c46: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00791c49: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00791c4c: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00791c4f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00791c52: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00791c55: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 00791c58: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 00791c5a: push dword ptr [0xa9ccd0] */ { u32 v = R32((u32)(0xa9ccd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00791c60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x791c65u); f_0086b6b8();
    /* 00791c65: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791c68: mov dword ptr [ebx + 0x5c], 0xa9ccd0 */ W32((u32)(r_ebx+0x5cu), 0xa9ccd0u);
    /* 00791c6f: mov esi, 0x43dc0000 */ r_esi = 0x43dc0000u;
    /* 00791c74: mov dword ptr [ebp - 0xb8], 0x42c80000 */ W32((u32)(r_ebp+0xffffff48u), 0x42c80000u);
    /* 00791c7e: mov ebx, 0x43dc0000 */ r_ebx = 0x43dc0000u;
    /* 00791c83: mov dword ptr [ebp - 0xb4], 0x42200000 */ W32((u32)(r_ebp+0xffffff4cu), 0x42200000u);
    /* 00791c8d: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00791c93: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00791c95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791c96: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x791c9bu); f_00735708();
    /* 00791c9b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791c9e: push 0x42f00000 */ { u32 v = 0x42f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00791ca3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791ca6: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00791ca9: movzx edi, word ptr [eax + 0x84] */ r_edi = (u32)R16((u32)(r_eax+0x84u));
    /* 00791cb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00791cb1: or edi, 0xffff0100 */ {  u32 a = r_edi; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00791cb7: mov word ptr [eax + 0x84], di */ W16((u32)(r_eax+0x84u), (u16)r_edi);
    /* 00791cbe: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791cc1: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00791cc4: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00791ccb: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00791cd0: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00791cd7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791cda: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00791cdd: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x791ce2u); f_007361d0();
    /* 00791ce2: push 0x3e19999a */ { u32 v = 0x3e19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00791ce7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791cea: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00791ced: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x791cf2u); f_00712624();
    /* 00791cf2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00791cf4:; BB(0x00791cf4);
    /* 00791cf4: push dword ptr [ebx*4 + 0x97bb18] */ { u32 v = R32((u32)(r_ebx*4+0x97bb18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00791cfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00791cfd: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x791d02u); f_00792fe8();
    /* 00791d02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791d05: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791d08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00791d09: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00791d0b: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00791d0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791d0f: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x791d14u); f_00735c90();
    /* 00791d14: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00791d17: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791d1a: jl 0x791cf4 */ if ((fS!=fO)) goto L_00791cf4;
L_00791d1c:; BB(0x00791d1c);
    /* 00791d1c: fld dword ptr [0x97bb4c] */ FPUSH(R_F32((u32)(0x97bb4cu)));
    /* 00791d22: fadd dword ptr [ebp - 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff4cu));
    /* 00791d28: fadd dword ptr [0x97bb54] */ ST(0) = ST(0) + R_F32((u32)(0x97bb54u));
    /* 00791d2e: fstp dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0)); FPOP();
    /* 00791d34: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00791d3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00791d3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791d3d: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x791d42u); f_00735708();
    /* 00791d42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791d45: push 0x43820000 */ { u32 v = 0x43820000u; r_esp -= 4; W32(r_esp, v); }
    /* 00791d4a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791d4d: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00791d50: movzx ebx, word ptr [eax + 0x84] */ r_ebx = (u32)R16((u32)(r_eax+0x84u));
    /* 00791d57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00791d58: or ebx, 0xffff0080 */ {  u32 a = r_ebx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00791d5e: mov word ptr [eax + 0x84], bx */ W16((u32)(r_eax+0x84u), (u16)r_ebx);
    /* 00791d65: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791d68: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00791d6b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791d6e: movzx edi, word ptr [ecx + 0x84] */ r_edi = (u32)R16((u32)(r_ecx+0x84u));
    /* 00791d75: or edi, 0xffff0100 */ {  u32 a = r_edi; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00791d7b: mov word ptr [ecx + 0x84], di */ W16((u32)(r_ecx+0x84u), (u16)r_edi);
    /* 00791d82: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00791d85: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00791d8c: or eax, 0xffff1000 */ {  u32 a = r_eax; u32 b = 0xffff1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00791d91: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00791d98: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791d9b: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00791d9e: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x791da3u); f_007361d0();
    /* 00791da3: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00791da8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791dab: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00791dae: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x791db3u); f_00712624();
    /* 00791db3: fld dword ptr [0x97bb4c] */ FPUSH(R_F32((u32)(0x97bb4cu)));
    /* 00791db9: fadd dword ptr [ebp - 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff48u));
    /* 00791dbf: fld dword ptr [0x97bb40] */ FPUSH(R_F32((u32)(0x97bb40u)));
    /* 00791dc5: fadd dword ptr [ebp - 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff4cu));
    /* 00791dcb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00791dcd: fstp dword ptr [ebp - 0xb8] */ W_F32((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 00791dd3: fstp dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0)); FPOP();
    /* 00791dd9: mov ebx, 0x43d20000 */ r_ebx = 0x43d20000u;
    /* 00791dde: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00791de4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00791de6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791de7: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x791decu); f_00735708();
    /* 00791dec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791def: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00791df4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791df7: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00791dfa: movzx esi, word ptr [eax + 0x84] */ r_esi = (u32)R16((u32)(r_eax+0x84u));
    /* 00791e01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00791e02: or esi, 0xffff0040 */ {  u32 a = r_esi; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00791e08: mov word ptr [eax + 0x84], si */ W16((u32)(r_eax+0x84u), (u16)r_esi);
    /* 00791e0f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791e12: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00791e15: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791e18: movzx edi, word ptr [ecx + 0x84] */ r_edi = (u32)R16((u32)(r_ecx+0x84u));
    /* 00791e1f: or edi, 0xffff8000 */ {  u32 a = r_edi; u32 b = 0xffff8000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00791e25: mov word ptr [ecx + 0x84], di */ W16((u32)(r_ecx+0x84u), (u16)r_edi);
    /* 00791e2c: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00791e2f: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00791e36: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00791e3b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00791e42: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791e45: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00791e48: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00791e4f: or eax, 0xffff0100 */ {  u32 a = r_eax; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00791e54: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00791e5b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791e5e: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00791e61: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00791e68: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00791e6d: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00791e74: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791e77: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00791e7a: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x791e7fu); f_007361d0();
    /* 00791e7f: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00791e84: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791e87: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00791e8a: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x791e8fu); f_00712624();
    /* 00791e8f: fld dword ptr [0x97bb30] */ FPUSH(R_F32((u32)(0x97bb30u)));
    /* 00791e95: fadd dword ptr [ebp - 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff4cu));
    /* 00791e9b: fadd dword ptr [0x97bb38] */ ST(0) = ST(0) + R_F32((u32)(0x97bb38u));
    /* 00791ea1: fstp dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0)); FPOP();
    /* 00791ea7: mov dword ptr [ebp - 0xb8], 0x41200000 */ W32((u32)(r_ebp+0xffffff48u), 0x41200000u);
    /* 00791eb1: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00791eb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00791eb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00791eba: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x791ebfu); f_00735708();
    /* 00791ebf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791ec2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791ec5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791ec8: fld dword ptr [ebp - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff48u)));
    /* 00791ece: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00791ed0: fsubr dword ptr [0x97bb58] */ ST(0) = R_F32((u32)(0x97bb58u)) - ST(0);
    /* 00791ed6: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00791ed9: movzx ebx, word ptr [eax + 0x84] */ r_ebx = (u32)R16((u32)(r_eax+0x84u));
    /* 00791ee0: or ebx, 0xffff0040 */ {  u32 a = r_ebx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00791ee6: mov word ptr [eax + 0x84], bx */ W16((u32)(r_eax+0x84u), (u16)r_ebx);
    /* 00791eed: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791ef0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791ef3: mov edi, dword ptr [eax + 0x30] */ r_edi = R32((u32)(r_eax+0x30u));
    /* 00791ef6: movzx esi, word ptr [edi + 0x84] */ r_esi = (u32)R16((u32)(r_edi+0x84u));
    /* 00791efd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00791f00: or esi, 0xffff8000 */ {  u32 a = r_esi; u32 b = 0xffff8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00791f06: mov dword ptr [esp + 4], 0x42200000 */ W32((u32)(r_esp+0x4u), 0x42200000u);
    /* 00791f0e: mov word ptr [edi + 0x84], si */ W16((u32)(r_edi+0x84u), (u16)r_esi);
    /* 00791f15: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00791f18: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00791f1f: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00791f24: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00791f2b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791f2e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00791f31: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00791f38: or eax, 0xffff0100 */ {  u32 a = r_eax; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00791f3d: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00791f44: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791f47: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00791f4a: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x791f4fu); f_007361d0();
    /* 00791f4f: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 00791f54: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791f57: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00791f5a: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x791f5fu); f_00712624();
    /* 00791f5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00791f61: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00791f64:; BB(0x00791f64);
    /* 00791f64: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 00791f6e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00791f70: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x791f75u); f_008581c5();
    /* 00791f75: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00791f78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00791f7b: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00791f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00791f83: je 0x792213 */ if (fZ) goto L_00792213;
L_00791f89:; BB(0x00791f89);
    /* 00791f89: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 00791f93: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00791f9a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00791f9d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00791fa0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00791fa2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00791fa5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00791fa7: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00791faa: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00791fac: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00791fae: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00791fb0: lea esi, [ebx + 0x9ff200] */ r_esi = (u32)(r_ebx+0x9ff200u);
    /* 00791fb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00791fb7: call 0x72d8c0 */ r_esp -= 4; W32(r_esp, 0x791fbcu); f_0072d8c0();
    /* 00791fbc: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00791fc6:; BB(0x00791fc6);
    /* 00791fc6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791fc9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00791fcc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00791fcf: mov dword ptr [ecx + edx*4 + 0x38], eax */ W32((u32)(r_ecx+r_edx*4+0x38u), r_eax);
    /* 00791fd3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00791fda: mov eax, edx */ r_eax = r_edx;
    /* 00791fdc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00791fdf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00791fe2: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00791fe5: jl 0x791f64 */ if ((fS!=fO)) goto L_00791f64;
L_00791feb:; BB(0x00791feb);
    /* 00791feb: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00791fee: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x791ff3u); f_00736578();
    /* 00791ff3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00791ff5:; BB(0x00791ff5);
    /* 00791ff5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00791ff8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00791ffa: mov ecx, dword ptr [eax + ebx*4 + 0x38] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x38u));
    /* 00791ffe: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00792003: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x792008u); f_0072db60();
    /* 00792008: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079200b: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079200e: jl 0x791ff5 */ if ((fS!=fO)) goto L_00791ff5;
L_00792010:; BB(0x00792010);
    /* 00792010: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792013: movsx ecx, byte ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1eu));
    /* 00792017: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00792019:; BB(0x00792019);
    /* 00792019: movzx eax, word ptr [ecx*2 + 0x97bbc8] */ r_eax = (u32)R16((u32)(r_ecx*2+0x97bbc8u));
    /* 00792021: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792023: jge 0x792170 */ if ((fS==fO)) goto L_00792170;
L_00792029:; BB(0x00792029);
    /* 00792029: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0079202e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792031: jne 0x792038 */ if (!fZ) goto L_00792038;
L_00792033:; BB(0x00792033);
    /* 00792033: mov ebx, 0x14 */ r_ebx = 0x14u;
L_00792038:; BB(0x00792038);
    /* 00792038: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0079203b: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0079203e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792040: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792042: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792044: push dword ptr [eax + edi*8 + 0x97b504] */ { u32 v = R32((u32)(r_eax+r_edi*8+0x97b504u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079204b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079204d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x792052u); f_00792fe8();
    /* 00792052: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00792055: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792058: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00792059: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079205a: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 0079205d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079205e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x792063u); f_00735c90();
    /* 00792063: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792066: movsx ecx, byte ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1eu));
    /* 0079206a: lea eax, [ecx + ecx*8] */ r_eax = (u32)(r_ecx+r_ecx*8);
    /* 0079206d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079206f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792071: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792073: mov eax, dword ptr [eax + esi*4 + 0x97b500] */ r_eax = R32((u32)(r_eax+r_esi*4+0x97b500u));
    /* 0079207a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079207d: jne 0x79209b */ if (!fZ) goto L_0079209b;
L_0079207f:; BB(0x0079207f);
    /* 0079207f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00792081: push 0x97c62c */ { u32 v = 0x97c62cu; r_esp -= 4; W32(r_esp, v); }
    /* 00792086: mov ecx, dword ptr [edx + edi*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_edi*4+0x38u));
    /* 0079208a: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x79208fu); f_0072db60();
    /* 0079208f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792092: movsx ecx, byte ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1eu));
    /* 00792096: jmp 0x792128 */ goto L_00792128;
L_0079209b:; BB(0x0079209b);
    /* 0079209b: mov ebx, dword ptr [edx + 0x5c] */ r_ebx = R32((u32)(r_edx+0x5cu));
    /* 0079209e: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 007920a0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007920a3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007920a5: je 0x792166 */ if (fZ) goto L_00792166;
L_007920ab:; BB(0x007920ab);
    /* 007920ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007920ad: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007920af: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007920b1: lea ebx, [ebx + eax] */ r_ebx = (u32)(r_ebx+r_eax);
L_007920b4:; BB(0x007920b4);
    /* 007920b4: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 007920b7: movzx ebx, byte ptr [ebx] */ r_ebx = (u32)R8((u32)(r_ebx));
    /* 007920ba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007920bc: jne 0x7920f3 */ if (!fZ) goto L_007920f3;
L_007920be:; BB(0x007920be);
    /* 007920be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007920c0: je 0x7920da */ if (fZ) goto L_007920da;
L_007920c2:; BB(0x007920c2);
    /* 007920c2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007920c4:; BB(0x007920c4);
    /* 007920c4: movzx ebx, byte ptr [esi*8 + 0x97b5e0] */ r_ebx = (u32)R8((u32)(r_esi*8+0x97b5e0u));
    /* 007920cc: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007920ce: je 0x792130 */ if (fZ) goto L_00792130;
L_007920d0:; BB(0x007920d0);
    /* 007920d0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007920d3: cmp esi, 0x5f */ {  u32 a = r_esi; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007920d6: jl 0x7920c4 */ if ((fS!=fO)) goto L_007920c4;
L_007920d8:; BB(0x007920d8);
    /* 007920d8: jmp 0x792128 */ goto L_00792128;
L_007920da:; BB(0x007920da);
    /* 007920da: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007920dc: push 0x97c650 */ { u32 v = 0x97c650u; r_esp -= 4; W32(r_esp, v); }
    /* 007920e1: mov ecx, dword ptr [edx + edi*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_edi*4+0x38u));
    /* 007920e5: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7920eau); f_0072db60();
    /* 007920ea: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007920ed: movsx ecx, byte ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1eu));
    /* 007920f1: jmp 0x792128 */ goto L_00792128;
L_007920f3:; BB(0x007920f3);
    /* 007920f3: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007920f6: jne 0x792128 */ if (!fZ) goto L_00792128;
L_007920f8:; BB(0x007920f8);
    /* 007920f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007920fa: je 0x792111 */ if (fZ) goto L_00792111;
L_007920fc:; BB(0x007920fc);
    /* 007920fc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007920fe:; BB(0x007920fe);
    /* 007920fe: cmp eax, dword ptr [ebx*8 + 0x97b4a0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*8+0x97b4a0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792105: je 0x79214b */ if (fZ) goto L_0079214b;
L_00792107:; BB(0x00792107);
    /* 00792107: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079210a: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079210d: jl 0x7920fe */ if ((fS!=fO)) goto L_007920fe;
L_0079210f:; BB(0x0079210f);
    /* 0079210f: jmp 0x792128 */ goto L_00792128;
L_00792111:; BB(0x00792111);
    /* 00792111: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00792113: push 0x97c650 */ { u32 v = 0x97c650u; r_esp -= 4; W32(r_esp, v); }
    /* 00792118: mov ecx, dword ptr [edx + edi*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_edi*4+0x38u));
    /* 0079211c: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x792121u); f_0072db60();
    /* 00792121: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792124: movsx ecx, byte ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1eu));
L_00792128:; BB(0x00792128);
    /* 00792128: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079212b: jmp 0x792019 */ goto L_00792019;
L_00792130:; BB(0x00792130);
    /* 00792130: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00792132: push dword ptr [esi*8 + 0x97b5e4] */ { u32 v = R32((u32)(r_esi*8+0x97b5e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00792139: mov ecx, dword ptr [edx + edi*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_edi*4+0x38u));
    /* 0079213d: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x792142u); f_0072db60();
    /* 00792142: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792145: movsx ecx, byte ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1eu));
    /* 00792149: jmp 0x792128 */ goto L_00792128;
L_0079214b:; BB(0x0079214b);
    /* 0079214b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0079214d: push dword ptr [ebx*8 + 0x97b4a4] */ { u32 v = R32((u32)(r_ebx*8+0x97b4a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00792154: mov ecx, dword ptr [edx + edi*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_edi*4+0x38u));
    /* 00792158: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x79215du); f_0072db60();
    /* 0079215d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792160: movsx ecx, byte ptr [edx + 0x1e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1eu));
    /* 00792164: jmp 0x792128 */ goto L_00792128;
L_00792166:; BB(0x00792166);
    /* 00792166: mov ebx, 0x97bbc0 */ r_ebx = 0x97bbc0u;
    /* 0079216b: jmp 0x7920b4 */ goto L_007920b4;
L_00792170:; BB(0x00792170);
    /* 00792170: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00792173: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x792178u); f_00736578();
    /* 00792178: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079217b: movzx edx, byte ptr [eax + 0x1e] */ r_edx = (u32)R8((u32)(r_eax+0x1eu));
    /* 0079217f: push dword ptr [edx*4 + 0x97bbb4] */ { u32 v = R32((u32)(r_edx*4+0x97bbb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00792186: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792188: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79218du); f_00792fe8();
    /* 0079218d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00792190: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792193: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792195: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079219a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0079219d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079219e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7921a3u); f_00735c90();
    /* 007921a3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007921a6: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007921a9: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7921aeu); f_00736458();
    /* 007921ae: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 007921b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007921b2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7921b7u); f_00792fe8();
    /* 007921b7: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 007921bd: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 007921bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007921c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007921c1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7921c6u); f_00857dec();
    /* 007921c6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007921c9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007921cc: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007921cf: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x7921d4u); f_00736578();
    /* 007921d4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007921d7: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 007921dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007921df: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 007921e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007921e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007921e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007921e7: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x7921ecu); f_00735db8();
    /* 007921ec: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007921ef: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 007921f2: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7921f7u); f_00736458();
    /* 007921f7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007921fa: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007921fd: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00792200: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00792203: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00792206: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079220d: mov esp, ebp */ r_esp = r_ebp;
    /* 0079220f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00792210: ret 4 */ FN_RET(0x00791be8); r_esp += 8; return;
L_00792213:; BB(0x00792213);
    /* 00792213: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792215: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00792218: jmp 0x791fc6 */ goto L_00791fc6;
}

