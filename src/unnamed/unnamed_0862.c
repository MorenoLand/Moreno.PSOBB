#include "protos.h"

void f_008620c0(void) /* __close */
{
    FN_ENTER(0x008620c0);
    /* 008620c0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008620c2: push 0x9989f0 */ { u32 v = 0x9989f0u; r_esp -= 4; W32(r_esp, v); }
    /* 008620c7: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8620ccu); f_0085e5ac();
    /* 008620cc: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008620cf: cmp ebx, dword ptr [0xaf0a60] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008620d5: jae 0x86213f */ if (!fC) goto L_0086213f;
L_008620d7:; BB(0x008620d7);
    /* 008620d7: mov eax, ebx */ r_eax = r_ebx;
    /* 008620d9: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008620dc: lea edi, [eax*4 + 0xaf0a80] */ r_edi = (u32)(r_eax*4+0xaf0a80u);
    /* 008620e3: mov eax, ebx */ r_eax = r_ebx;
    /* 008620e5: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008620e8: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 008620eb: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008620ee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008620f0: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008620f5: je 0x86213f */ if (fZ) goto L_0086213f;
L_008620f7:; BB(0x008620f7);
    /* 008620f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008620f8: call 0x863b11 */ r_esp -= 4; W32(r_esp, 0x8620fdu); f_00863b11();
    /* 008620fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008620fe: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00862102: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00862104: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862109: je 0x862117 */ if (fZ) goto L_00862117;
L_0086210b:; BB(0x0086210b);
    /* 0086210b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086210c: call 0x86203d */ r_esp -= 4; W32(r_esp, 0x862111u); f_0086203d();
    /* 00862111: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862112: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00862115: jmp 0x862126 */ goto L_00862126;
L_00862117:; BB(0x00862117);
    /* 00862117: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x86211cu); f_00859dd6();
    /* 0086211c: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00862122: or dword ptr [ebp - 0x1c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00862126:; BB(0x00862126);
    /* 00862126: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086212a: call 0x862137 */ r_esp -= 4; W32(r_esp, 0x86212fu); f_00862137();
    /* 0086212f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00862132: jmp 0x862155 */ goto L_00862155;
L_0086213f:; BB(0x0086213f);
    /* 0086213f: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x862144u); f_00859dd6();
    /* 00862144: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 0086214a: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x86214fu); f_00859ddf();
    /* 0086214f: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00862152: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00862155:; BB(0x00862155);
    /* 00862155: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86215au); f_0085e5e7();
    /* 0086215a: ret  */ FN_RET(0x008620c0); r_esp += 4; return;
}

void f_00862134(void)
{
    FN_ENTER(0x00862134);
    /* 00862134: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00862137: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862138: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x86213du); f_00863bb1();
    /* 0086213d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086213e: ret  */ FN_RET(0x00862134); r_esp += 4; return;
}

void f_00862137(void)
{
    FN_ENTER(0x00862137);
    /* 00862137: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862138: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x86213du); f_00863bb1();
    /* 0086213d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086213e: ret  */ FN_RET(0x00862137); r_esp += 4; return;
}

void f_0086215b(void) /* __freebuf */
{
    FN_ENTER(0x0086215b);
    /* 0086215b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086215c: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00862160: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00862163: test al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00862165: je 0x862184 */ if (fZ) goto L_00862184;
L_00862167:; BB(0x00862167);
    /* 00862167: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00862169: je 0x862184 */ if (fZ) goto L_00862184;
L_0086216b:; BB(0x0086216b);
    /* 0086216b: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086216e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x862173u); f_00858882();
    /* 00862173: and word ptr [esi + 0xc], 0xfbf7 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R16(ad); u32 b = 0xfbf7u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 00862179: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086217b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086217c: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0086217e: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00862181: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_00862184:; BB(0x00862184);
    /* 00862184: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00862185: ret  */ FN_RET(0x0086215b); r_esp += 4; return;
}

void f_00862354(void) /* __write */
{
    FN_ENTER(0x00862354);
    /* 00862354: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00862356: push 0x998a00 */ { u32 v = 0x998a00u; r_esp -= 4; W32(r_esp, v); }
    /* 0086235b: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x862360u); f_0085e5ac();
    /* 00862360: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00862363: cmp ebx, dword ptr [0xaf0a60] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00862369: jae 0x8623e3 */ if (!fC) goto L_008623e3;
L_0086236b:; BB(0x0086236b);
    /* 0086236b: mov eax, ebx */ r_eax = r_ebx;
    /* 0086236d: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00862370: lea edi, [eax*4 + 0xaf0a80] */ r_edi = (u32)(r_eax*4+0xaf0a80u);
    /* 00862377: mov eax, ebx */ r_eax = r_ebx;
    /* 00862379: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086237c: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 0086237f: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00862382: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00862384: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862389: je 0x8623e3 */ if (fZ) goto L_008623e3;
L_0086238b:; BB(0x0086238b);
    /* 0086238b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086238c: call 0x863b11 */ r_esp -= 4; W32(r_esp, 0x862391u); f_00863b11();
    /* 00862391: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862392: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00862396: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00862398: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086239d: je 0x8623b3 */ if (fZ) goto L_008623b3;
L_0086239f:; BB(0x0086239f);
    /* 0086239f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008623a2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008623a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008623a6: call 0x862186 */ r_esp -= 4; W32(r_esp, 0x8623abu); f_00862186();
    /* 008623ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008623ae: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008623b1: jmp 0x8623ca */ goto L_008623ca;
L_008623b3:; BB(0x008623b3);
    /* 008623b3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8623b8u); f_00859dd6();
    /* 008623b8: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 008623be: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8623c3u); f_00859ddf();
    /* 008623c3: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008623c6: or dword ptr [ebp - 0x1c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_008623ca:; BB(0x008623ca);
    /* 008623ca: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008623ce: call 0x8623db */ r_esp -= 4; W32(r_esp, 0x8623d3u); f_008623db();
    /* 008623d3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008623d6: jmp 0x8623f9 */ goto L_008623f9;
L_008623e3:; BB(0x008623e3);
    /* 008623e3: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8623e8u); f_00859dd6();
    /* 008623e8: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 008623ee: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8623f3u); f_00859ddf();
    /* 008623f3: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008623f6: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008623f9:; BB(0x008623f9);
    /* 008623f9: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8623feu); f_0085e5e7();
    /* 008623fe: ret  */ FN_RET(0x00862354); r_esp += 4; return;
}

void f_008623d8(void)
{
    FN_ENTER(0x008623d8);
    /* 008623d8: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008623db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008623dc: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x8623e1u); f_00863bb1();
    /* 008623e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008623e2: ret  */ FN_RET(0x008623d8); r_esp += 4; return;
}

void f_008623db(void)
{
    FN_ENTER(0x008623db);
    /* 008623db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008623dc: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x8623e1u); f_00863bb1();
    /* 008623e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008623e2: ret  */ FN_RET(0x008623db); r_esp += 4; return;
}

void f_00862460(void) /* _strchr */
{
    FN_ENTER(0x00862460);
    goto L_00862460;
L_00862450:; BB(0x00862450);
    /* 00862450: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00862453: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00862454: ret  */ FN_RET(0x00862460); r_esp += 4; return;
L_00862460:; BB(0x00862460);
    /* 00862460: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00862462: mov al, byte ptr [esp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+0x8u))) & 0xffu);
    /* 00862466: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862467: mov ebx, eax */ r_ebx = r_eax;
    /* 00862469: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086246c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00862470: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862476: je 0x86248d */ if (fZ) goto L_0086248d;
L_00862478:; BB(0x00862478);
    /* 00862478: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0086247a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086247d: cmp cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0086247f: je 0x862450 */ if (fZ) goto L_00862450;
L_00862481:; BB(0x00862481);
    /* 00862481: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862483: je 0x8624d6 */ if (fZ) goto L_008624d6;
L_00862485:; BB(0x00862485);
    /* 00862485: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086248b: jne 0x862478 */ if (!fZ) goto L_00862478;
L_0086248d:; BB(0x0086248d);
    /* 0086248d: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0086248f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862490: mov eax, ebx */ r_eax = r_ebx;
    /* 00862492: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00862495: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862496: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_00862498:; BB(0x00862498);
    /* 00862498: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0086249a: mov edi, 0x7efefeff */ r_edi = 0x7efefeffu;
    /* 0086249f: mov eax, ecx */ r_eax = r_ecx;
    /* 008624a1: mov esi, edi */ r_esi = r_edi;
    /* 008624a3: xor ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008624a5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008624a7: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008624a9: xor ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008624ac: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008624af: xor ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008624b1: xor eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008624b3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008624b6: and ecx, 0x81010100 */ {  u32 a = r_ecx; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008624bc: jne 0x8624da */ if (!fZ) goto L_008624da;
L_008624be:; BB(0x008624be);
    /* 008624be: and eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008624c3: je 0x862498 */ if (fZ) goto L_00862498;
L_008624c5:; BB(0x008624c5);
    /* 008624c5: and eax, 0x1010100 */ {  u32 a = r_eax; u32 b = 0x1010100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008624ca: jne 0x8624d4 */ if (!fZ) goto L_008624d4;
L_008624cc:; BB(0x008624cc);
    /* 008624cc: and esi, 0x80000000 */ {  u32 a = r_esi; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008624d2: jne 0x862498 */ if (!fZ) goto L_00862498;
L_008624d4:; BB(0x008624d4);
    /* 008624d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008624d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008624d6:; BB(0x008624d6);
    /* 008624d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008624d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008624d9: ret  */ FN_RET(0x00862460); r_esp += 4; return;
L_008624da:; BB(0x008624da);
    /* 008624da: mov eax, dword ptr [edx - 4] */ r_eax = R32((u32)(r_edx+0xfffffffcu));
    /* 008624dd: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008624df: je 0x862517 */ if (fZ) goto L_00862517;
L_008624e1:; BB(0x008624e1);
    /* 008624e1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008624e3: je 0x8624d4 */ if (fZ) goto L_008624d4;
L_008624e5:; BB(0x008624e5);
    /* 008624e5: cmp ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008624e7: je 0x862510 */ if (fZ) goto L_00862510;
L_008624e9:; BB(0x008624e9);
    /* 008624e9: test ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008624eb: je 0x8624d4 */ if (fZ) goto L_008624d4;
L_008624ed:; BB(0x008624ed);
    /* 008624ed: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008624f0: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008624f2: je 0x862509 */ if (fZ) goto L_00862509;
L_008624f4:; BB(0x008624f4);
    /* 008624f4: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008624f6: je 0x8624d4 */ if (fZ) goto L_008624d4;
L_008624f8:; BB(0x008624f8);
    /* 008624f8: cmp ah, bl */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008624fa: je 0x862502 */ if (fZ) goto L_00862502;
L_008624fc:; BB(0x008624fc);
    /* 008624fc: test ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008624fe: je 0x8624d4 */ if (fZ) goto L_008624d4;
L_00862500:; BB(0x00862500);
    /* 00862500: jmp 0x862498 */ goto L_00862498;
L_00862502:; BB(0x00862502);
    /* 00862502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00862503: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00862504: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00862507: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00862508: ret  */ FN_RET(0x00862460); r_esp += 4; return;
L_00862509:; BB(0x00862509);
    /* 00862509: lea eax, [edx - 2] */ r_eax = (u32)(r_edx+0xfffffffeu);
    /* 0086250c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086250d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086250e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086250f: ret  */ FN_RET(0x00862460); r_esp += 4; return;
L_00862510:; BB(0x00862510);
    /* 00862510: lea eax, [edx - 3] */ r_eax = (u32)(r_edx+0xfffffffdu);
    /* 00862513: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00862514: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00862515: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00862516: ret  */ FN_RET(0x00862460); r_esp += 4; return;
L_00862517:; BB(0x00862517);
    /* 00862517: lea eax, [edx - 4] */ r_eax = (u32)(r_edx+0xfffffffcu);
    /* 0086251a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086251b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086251c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086251d: ret  */ FN_RET(0x00862460); r_esp += 4; return;
}

void f_0086251e(void) /* ___crtLCMapStringW */
{
    FN_ENTER(0x0086251e);
    /* 0086251e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00862520: push 0x998a10 */ { u32 v = 0x998a10u; r_esp -= 4; W32(r_esp, v); }
    /* 00862525: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x86252au); f_0085e5ac();
    /* 0086252a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086252c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086252e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086252f: cmp dword ptr [0xae7c08], ebx */ {  u32 a = R32((u32)(0xae7c08u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862535: jne 0x86256c */ if (!fZ) goto L_0086256c;
L_00862537:; BB(0x00862537);
    /* 00862537: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862538: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862539: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086253a: push 0x9983dc */ { u32 v = 0x9983dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0086253f: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00862544: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862545: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x86254bu); call_ind(t); }
    /* 0086254b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086254d: je 0x862557 */ if (fZ) goto L_00862557;
L_0086254f:; BB(0x0086254f);
    /* 0086254f: mov dword ptr [0xae7c08], edi */ W32((u32)(0xae7c08u), r_edi);
    /* 00862555: jmp 0x86256c */ goto L_0086256c;
L_00862557:; BB(0x00862557);
    /* 00862557: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86255du); call_ind(t); }
    /* 0086255d: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862560: jne 0x86256c */ if (!fZ) goto L_0086256c;
L_00862562:; BB(0x00862562);
    /* 00862562: mov dword ptr [0xae7c08], 2 */ W32((u32)(0xae7c08u), 0x2u);
L_0086256c:; BB(0x0086256c);
    /* 0086256c: cmp dword ptr [ebp + 0x14], ebx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086256f: jle 0x86258e */ if ((fZ||fS!=fO)) goto L_0086258e;
L_00862571:; BB(0x00862571);
    /* 00862571: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00862574: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_00862577:; BB(0x00862577);
    /* 00862577: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00862578: cmp word ptr [eax], bx */ {  u32 a = R16((u32)(r_eax)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0086257b: je 0x862586 */ if (fZ) goto L_00862586;
L_0086257d:; BB(0x0086257d);
    /* 0086257d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086257e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086257f: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862581: jne 0x862577 */ if (!fZ) goto L_00862577;
L_00862583:; BB(0x00862583);
    /* 00862583: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_00862586:; BB(0x00862586);
    /* 00862586: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00862589: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086258b: add dword ptr [ebp + 0x14], eax */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086258e:; BB(0x0086258e);
    /* 0086258e: mov eax, dword ptr [0xae7c08] */ r_eax = R32((u32)(0xae7c08u));
    /* 00862593: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862595: jne 0x8625b4 */ if (!fZ) goto L_008625b4;
L_00862597:; BB(0x00862597);
    /* 00862597: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086259a: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086259d: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008625a0: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008625a3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008625a6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008625a9: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x8625afu); call_ind(t); }
    /* 008625af: jmp 0x86276e */ goto L_0086276e;
L_008625b4:; BB(0x008625b4);
    /* 008625b4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008625b7: je 0x8625bd */ if (fZ) goto L_008625bd;
L_008625b9:; BB(0x008625b9);
    /* 008625b9: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008625bb: jne 0x862611 */ if (!fZ) goto L_00862611;
L_008625bd:; BB(0x008625bd);
    /* 008625bd: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 008625c0: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 008625c3: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 008625c6: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008625c9: jne 0x8625d3 */ if (!fZ) goto L_008625d3;
L_008625cb:; BB(0x008625cb);
    /* 008625cb: mov eax, dword ptr [0xae7e9c] */ r_eax = R32((u32)(0xae7e9cu));
    /* 008625d0: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008625d3:; BB(0x008625d3);
    /* 008625d3: cmp dword ptr [ebp + 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008625d6: jne 0x8625e0 */ if (!fZ) goto L_008625e0;
L_008625d8:; BB(0x008625d8);
    /* 008625d8: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
    /* 008625dd: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
L_008625e0:; BB(0x008625e0);
    /* 008625e0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008625e3: call 0x868c37 */ r_esp -= 4; W32(r_esp, 0x8625e8u); f_00868c37();
    /* 008625e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008625e9: cmp dword ptr [ebp + 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008625ec: je 0x8625f6 */ if (fZ) goto L_008625f6;
L_008625ee:; BB(0x008625ee);
    /* 008625ee: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008625f1: je 0x8625f6 */ if (fZ) goto L_008625f6;
L_008625f3:; BB(0x008625f3);
    /* 008625f3: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
L_008625f6:; BB(0x008625f6);
    /* 008625f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008625f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008625f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008625f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008625fa: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008625fd: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862600: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862601: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862604: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x86260au); call_ind(t); }
    /* 0086260a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0086260d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086260f: jne 0x862618 */ if (!fZ) goto L_00862618;
L_00862611:; BB(0x00862611);
    /* 00862611: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00862613: jmp 0x86276e */ goto L_0086276e;
L_00862618:; BB(0x00862618);
    /* 00862618: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0086261b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086261e: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00862621: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x862626u); f_00858020();
    /* 00862626: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00862629: mov eax, esp */ r_eax = r_esp;
    /* 0086262b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086262e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00862632: jmp 0x86264c */ goto L_0086264c;
L_0086264c:; BB(0x0086264c);
    /* 0086264c: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086264f: jne 0x862664 */ if (!fZ) goto L_00862664;
L_00862651:; BB(0x00862651);
    /* 00862651: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862654: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x862659u); f_00859c55();
    /* 00862659: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086265a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086265d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086265f: je 0x862611 */ if (fZ) goto L_00862611;
L_00862661:; BB(0x00862661);
    /* 00862661: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
L_00862664:; BB(0x00862664);
    /* 00862664: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862665: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862666: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862669: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086266c: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086266f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862672: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862673: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862676: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x86267cu); call_ind(t); }
    /* 0086267c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086267e: je 0x86274e */ if (fZ) goto L_0086274e;
L_00862684:; BB(0x00862684);
    /* 00862684: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862685: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862686: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862689: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086268c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086268f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862692: call dword ptr [0x8f8248] */ { u32 t = R32((u32)(0x8f8248u)); r_esp -= 4; W32(r_esp, 0x862698u); call_ind(t); }
    /* 00862698: mov esi, eax */ r_esi = r_eax;
    /* 0086269a: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0086269d: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086269f: je 0x86274e */ if (fZ) goto L_0086274e;
L_008626a5:; BB(0x008626a5);
    /* 008626a5: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008626a8: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008626ab: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008626ae: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8626b3u); f_00858020();
    /* 008626b3: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008626b6: mov edi, esp */ r_edi = r_esp;
    /* 008626b8: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 008626bb: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008626bf: jmp 0x8626d8 */ goto L_008626d8;
L_008626d8:; BB(0x008626d8);
    /* 008626d8: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008626da: jne 0x8626f0 */ if (!fZ) goto L_008626f0;
L_008626dc:; BB(0x008626dc);
    /* 008626dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008626dd: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8626e2u); f_00859c55();
    /* 008626e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008626e3: mov edi, eax */ r_edi = r_eax;
    /* 008626e5: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008626e7: je 0x862751 */ if (fZ) goto L_00862751;
L_008626e9:; BB(0x008626e9);
    /* 008626e9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_008626f0:; BB(0x008626f0);
    /* 008626f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008626f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008626f2: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008626f5: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008626f8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008626fb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008626fe: call dword ptr [0x8f8248] */ { u32 t = R32((u32)(0x8f8248u)); r_esp -= 4; W32(r_esp, 0x862704u); call_ind(t); }
    /* 00862704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862706: je 0x862751 */ if (fZ) goto L_00862751;
L_00862708:; BB(0x00862708);
    /* 00862708: test byte ptr [ebp + 0xd], 4 */ {  u32 a = R8((u32)(r_ebp+0xdu)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086270c: je 0x86272d */ if (fZ) goto L_0086272d;
L_0086270e:; BB(0x0086270e);
    /* 0086270e: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00862711: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862714: je 0x862751 */ if (fZ) goto L_00862751;
L_00862716:; BB(0x00862716);
    /* 00862716: cmp dword ptr [ebp + 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862719: jge 0x86271e */ if ((fS==fO)) goto L_0086271e;
L_0086271b:; BB(0x0086271b);
    /* 0086271b: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
L_0086271e:; BB(0x0086271e);
    /* 0086271e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086271f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862720: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862723: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x862728u); f_00858900();
    /* 00862728: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086272b: jmp 0x862751 */ goto L_00862751;
L_0086272d:; BB(0x0086272d);
    /* 0086272d: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862730: jne 0x862736 */ if (!fZ) goto L_00862736;
L_00862732:; BB(0x00862732);
    /* 00862732: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862733: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862734: jmp 0x86273c */ goto L_0086273c;
L_00862736:; BB(0x00862736);
    /* 00862736: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00862739: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
L_0086273c:; BB(0x0086273c);
    /* 0086273c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086273d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086273e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00862740: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862743: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x862749u); call_ind(t); }
    /* 00862749: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0086274c: jmp 0x862751 */ goto L_00862751;
L_0086274e:; BB(0x0086274e);
    /* 0086274e: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
L_00862751:; BB(0x00862751);
    /* 00862751: cmp dword ptr [ebp - 0x28], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862754: je 0x86275d */ if (fZ) goto L_0086275d;
L_00862756:; BB(0x00862756);
    /* 00862756: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862757: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86275cu); f_00858882();
    /* 0086275c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086275d:; BB(0x0086275d);
    /* 0086275d: cmp dword ptr [ebp - 0x2c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862760: je 0x86276b */ if (fZ) goto L_0086276b;
L_00862762:; BB(0x00862762);
    /* 00862762: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862765: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86276au); f_00858882();
    /* 0086276a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086276b:; BB(0x0086276b);
    /* 0086276b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0086276e:; BB(0x0086276e);
    /* 0086276e: lea esp, [ebp - 0x40] */ r_esp = (u32)(r_ebp+0xffffffc0u);
    /* 00862771: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x862776u); f_0085e5e7();
    /* 00862776: ret  */ FN_RET(0x0086251e); r_esp += 4; return;
}

void f_00862634(void)
{
    FN_ENTER(0x00862634);
    /* 00862634: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00862636: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00862637: ret  */ FN_RET(0x00862634); r_esp += 4; return;
}

void f_00862638(void)
{
    FN_ENTER(0x00862638);
    goto L_00862638;
L_00862611:; BB(0x00862611);
    /* 00862611: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00862613: jmp 0x86276e */ goto L_0086276e;
L_00862638:; BB(0x00862638);
    /* 00862638: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086263b: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x862640u); f_00865365();
    /* 00862640: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00862642: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00862645: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00862649: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086264b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086264c: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086264f: jne 0x862664 */ if (!fZ) goto L_00862664;
L_00862651:; BB(0x00862651);
    /* 00862651: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862654: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x862659u); f_00859c55();
    /* 00862659: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086265a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086265d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086265f: je 0x862611 */ if (fZ) goto L_00862611;
L_00862661:; BB(0x00862661);
    /* 00862661: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
L_00862664:; BB(0x00862664);
    /* 00862664: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862665: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862666: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862669: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086266c: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086266f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862672: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862673: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862676: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x86267cu); call_ind(t); }
    /* 0086267c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086267e: je 0x86274e */ if (fZ) goto L_0086274e;
L_00862684:; BB(0x00862684);
    /* 00862684: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862685: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862686: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862689: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086268c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086268f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862692: call dword ptr [0x8f8248] */ { u32 t = R32((u32)(0x8f8248u)); r_esp -= 4; W32(r_esp, 0x862698u); call_ind(t); }
    /* 00862698: mov esi, eax */ r_esi = r_eax;
    /* 0086269a: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0086269d: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086269f: je 0x86274e */ if (fZ) goto L_0086274e;
L_008626a5:; BB(0x008626a5);
    /* 008626a5: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008626a8: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008626ab: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008626ae: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8626b3u); f_00858020();
    /* 008626b3: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008626b6: mov edi, esp */ r_edi = r_esp;
    /* 008626b8: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 008626bb: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008626bf: jmp 0x8626d8 */ goto L_008626d8;
L_008626d8:; BB(0x008626d8);
    /* 008626d8: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008626da: jne 0x8626f0 */ if (!fZ) goto L_008626f0;
L_008626dc:; BB(0x008626dc);
    /* 008626dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008626dd: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8626e2u); f_00859c55();
    /* 008626e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008626e3: mov edi, eax */ r_edi = r_eax;
    /* 008626e5: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008626e7: je 0x862751 */ if (fZ) goto L_00862751;
L_008626e9:; BB(0x008626e9);
    /* 008626e9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_008626f0:; BB(0x008626f0);
    /* 008626f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008626f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008626f2: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008626f5: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008626f8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008626fb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008626fe: call dword ptr [0x8f8248] */ { u32 t = R32((u32)(0x8f8248u)); r_esp -= 4; W32(r_esp, 0x862704u); call_ind(t); }
    /* 00862704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862706: je 0x862751 */ if (fZ) goto L_00862751;
L_00862708:; BB(0x00862708);
    /* 00862708: test byte ptr [ebp + 0xd], 4 */ {  u32 a = R8((u32)(r_ebp+0xdu)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086270c: je 0x86272d */ if (fZ) goto L_0086272d;
L_0086270e:; BB(0x0086270e);
    /* 0086270e: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00862711: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862714: je 0x862751 */ if (fZ) goto L_00862751;
L_00862716:; BB(0x00862716);
    /* 00862716: cmp dword ptr [ebp + 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862719: jge 0x86271e */ if ((fS==fO)) goto L_0086271e;
L_0086271b:; BB(0x0086271b);
    /* 0086271b: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
L_0086271e:; BB(0x0086271e);
    /* 0086271e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086271f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862720: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862723: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x862728u); f_00858900();
    /* 00862728: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086272b: jmp 0x862751 */ goto L_00862751;
L_0086272d:; BB(0x0086272d);
    /* 0086272d: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862730: jne 0x862736 */ if (!fZ) goto L_00862736;
L_00862732:; BB(0x00862732);
    /* 00862732: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862733: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862734: jmp 0x86273c */ goto L_0086273c;
L_00862736:; BB(0x00862736);
    /* 00862736: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00862739: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
L_0086273c:; BB(0x0086273c);
    /* 0086273c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086273d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086273e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00862740: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862743: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x862749u); call_ind(t); }
    /* 00862749: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0086274c: jmp 0x862751 */ goto L_00862751;
L_0086274e:; BB(0x0086274e);
    /* 0086274e: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
L_00862751:; BB(0x00862751);
    /* 00862751: cmp dword ptr [ebp - 0x28], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862754: je 0x86275d */ if (fZ) goto L_0086275d;
L_00862756:; BB(0x00862756);
    /* 00862756: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862757: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86275cu); f_00858882();
    /* 0086275c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086275d:; BB(0x0086275d);
    /* 0086275d: cmp dword ptr [ebp - 0x2c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862760: je 0x86276b */ if (fZ) goto L_0086276b;
L_00862762:; BB(0x00862762);
    /* 00862762: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862765: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86276au); f_00858882();
    /* 0086276a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086276b:; BB(0x0086276b);
    /* 0086276b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0086276e:; BB(0x0086276e);
    /* 0086276e: lea esp, [ebp - 0x40] */ r_esp = (u32)(r_ebp+0xffffffc0u);
    /* 00862771: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x862776u); f_0085e5e7();
    /* 00862776: ret  */ FN_RET(0x00862638); r_esp += 4; return;
}

void f_008626c1(void)
{
    FN_ENTER(0x008626c1);
    /* 008626c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008626c3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008626c4: ret  */ FN_RET(0x008626c1); r_esp += 4; return;
}

void f_008626c5(void)
{
    FN_ENTER(0x008626c5);
    /* 008626c5: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008626c8: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x8626cdu); f_00865365();
    /* 008626cd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008626cf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008626d1: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008626d5: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 008626d8: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008626da: jne 0x8626f0 */ if (!fZ) goto L_008626f0;
L_008626dc:; BB(0x008626dc);
    /* 008626dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008626dd: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8626e2u); f_00859c55();
    /* 008626e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008626e3: mov edi, eax */ r_edi = r_eax;
    /* 008626e5: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008626e7: je 0x862751 */ if (fZ) goto L_00862751;
L_008626e9:; BB(0x008626e9);
    /* 008626e9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_008626f0:; BB(0x008626f0);
    /* 008626f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008626f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008626f2: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008626f5: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008626f8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008626fb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008626fe: call dword ptr [0x8f8248] */ { u32 t = R32((u32)(0x8f8248u)); r_esp -= 4; W32(r_esp, 0x862704u); call_ind(t); }
    /* 00862704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862706: je 0x862751 */ if (fZ) goto L_00862751;
L_00862708:; BB(0x00862708);
    /* 00862708: test byte ptr [ebp + 0xd], 4 */ {  u32 a = R8((u32)(r_ebp+0xdu)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086270c: je 0x86272d */ if (fZ) goto L_0086272d;
L_0086270e:; BB(0x0086270e);
    /* 0086270e: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00862711: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862714: je 0x862751 */ if (fZ) goto L_00862751;
L_00862716:; BB(0x00862716);
    /* 00862716: cmp dword ptr [ebp + 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862719: jge 0x86271e */ if ((fS==fO)) goto L_0086271e;
L_0086271b:; BB(0x0086271b);
    /* 0086271b: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
L_0086271e:; BB(0x0086271e);
    /* 0086271e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086271f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862720: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862723: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x862728u); f_00858900();
    /* 00862728: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086272b: jmp 0x862751 */ goto L_00862751;
L_0086272d:; BB(0x0086272d);
    /* 0086272d: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862730: jne 0x862736 */ if (!fZ) goto L_00862736;
L_00862732:; BB(0x00862732);
    /* 00862732: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862733: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862734: jmp 0x86273c */ goto L_0086273c;
L_00862736:; BB(0x00862736);
    /* 00862736: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00862739: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
L_0086273c:; BB(0x0086273c);
    /* 0086273c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086273d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086273e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00862740: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862743: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x862749u); call_ind(t); }
    /* 00862749: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0086274c: jmp 0x862751 */ goto L_00862751;
L_00862751:; BB(0x00862751);
    /* 00862751: cmp dword ptr [ebp - 0x28], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862754: je 0x86275d */ if (fZ) goto L_0086275d;
L_00862756:; BB(0x00862756);
    /* 00862756: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862757: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86275cu); f_00858882();
    /* 0086275c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086275d:; BB(0x0086275d);
    /* 0086275d: cmp dword ptr [ebp - 0x2c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862760: je 0x86276b */ if (fZ) goto L_0086276b;
L_00862762:; BB(0x00862762);
    /* 00862762: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862765: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86276au); f_00858882();
    /* 0086276a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086276b:; BB(0x0086276b);
    /* 0086276b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086276e: lea esp, [ebp - 0x40] */ r_esp = (u32)(r_ebp+0xffffffc0u);
    /* 00862771: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x862776u); f_0085e5e7();
    /* 00862776: ret  */ FN_RET(0x008626c5); r_esp += 4; return;
}

void f_00862777(void) /* __inc */
{
    FN_ENTER(0x00862777);
    /* 00862777: dec dword ptr [edx + 4] */ { u32 ad = (u32)(r_edx+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 0086277a: js 0x862785 */ if (fS) goto L_00862785;
L_0086277c:; BB(0x0086277c);
    /* 0086277c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0086277e: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 00862781: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00862782: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00862784: ret  */ FN_RET(0x00862777); r_esp += 4; return;
L_00862785:; BB(0x00862785);
    /* 00862785: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00862786: call 0x861994 */ r_esp -= 4; W32(r_esp, 0x86278bu); f_00861994();
    /* 0086278b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086278c: ret  */ FN_RET(0x00862777); r_esp += 4; return;
}

void f_0086278d(void) /* __input */
{
    FN_ENTER(0x0086278d);
    /* 0086278d: push 0x1cc */ { u32 v = 0x1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00862792: push 0x998a28 */ { u32 v = 0x998a28u; r_esp -= 4; W32(r_esp, v); }
    /* 00862797: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x86279cu); f_0085e5ac();
    /* 0086279c: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 008627a1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008627a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008627a6: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
    /* 008627ac: mov dword ptr [ebp - 0x1d8], eax */ W32((u32)(r_ebp+0xfffffe28u), r_eax);
    /* 008627b2: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 008627b8: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 008627be: mov byte ptr [ebp - 0x195], al */ W8((u32)(r_ebp+0xfffffe6bu), (u8)r_eax);
    /* 008627c4: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 008627ca: mov dword ptr [ebp - 0x1b8], eax */ W32((u32)(r_ebp+0xfffffe48u), r_eax);
L_008627d0:; BB(0x008627d0);
    /* 008627d0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008627d3: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008627d5: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008627d7: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_008627dd:; BB(0x008627dd);
    /* 008627dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008627e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008627e1: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8627e6u); f_008582ff();
    /* 008627e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008627e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008627e9: je 0x862832 */ if (fZ) goto L_00862832;
L_008627eb:; BB(0x008627eb);
    /* 008627eb: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008627f1:; BB(0x008627f1);
    /* 008627f1: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008627f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008627fa: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x8627ffu); f_00862777();
    /* 008627ff: mov esi, eax */ r_esi = r_eax;
    /* 00862801: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862802: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x862807u); f_008582ff();
    /* 00862807: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862808: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086280a: jne 0x8627f1 */ if (!fZ) goto L_008627f1;
L_0086280c:; BB(0x0086280c);
    /* 0086280c: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086280f: je 0x86281c */ if (fZ) goto L_0086281c;
L_00862811:; BB(0x00862811);
    /* 00862811: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862814: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862815: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x86281au); f_0086923c();
    /* 0086281a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086281b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086281c:; BB(0x0086281c);
    /* 0086281c: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086281f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00862822: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00862825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862826: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x86282bu); f_008582ff();
    /* 0086282b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086282c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086282e: jne 0x86281c */ if (!fZ) goto L_0086281c;
L_00862830:; BB(0x00862830);
    /* 00862830: jmp 0x8627d0 */ goto L_008627d0;
L_00862832:; BB(0x00862832);
    /* 00862832: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00862835: cmp byte ptr [esi], 0x25 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x25u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862838: jne 0x86342c */ if (!fZ) goto L_0086342c;
L_0086283e:; BB(0x0086283e);
    /* 0086283e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00862840: mov dword ptr [ebp - 0x1a0], edi */ W32((u32)(r_ebp+0xfffffe60u), r_edi);
    /* 00862846: mov byte ptr [ebp - 0x198], 0 */ W8((u32)(r_ebp+0xfffffe68u), 0x0u);
    /* 0086284d: mov dword ptr [ebp - 0x19c], edi */ W32((u32)(r_ebp+0xfffffe64u), r_edi);
    /* 00862853: mov dword ptr [ebp - 0x1b4], edi */ W32((u32)(r_ebp+0xfffffe4cu), r_edi);
    /* 00862859: mov dword ptr [ebp - 0x18c], edi */ W32((u32)(r_ebp+0xfffffe74u), r_edi);
    /* 0086285f: mov byte ptr [ebp - 0x1a1], 0 */ W8((u32)(r_ebp+0xfffffe5fu), 0x0u);
    /* 00862866: mov byte ptr [ebp - 0x197], 0 */ W8((u32)(r_ebp+0xfffffe69u), 0x0u);
    /* 0086286d: mov byte ptr [ebp - 0x18e], 0 */ W8((u32)(r_ebp+0xfffffe72u), 0x0u);
    /* 00862874: mov byte ptr [ebp - 0x17d], 0 */ W8((u32)(r_ebp+0xfffffe83u), 0x0u);
    /* 0086287b: mov byte ptr [ebp - 0x196], 0 */ W8((u32)(r_ebp+0xfffffe6au), 0x0u);
    /* 00862882: mov byte ptr [ebp - 0x185], 0 */ W8((u32)(r_ebp+0xfffffe7bu), 0x0u);
    /* 00862889: mov byte ptr [ebp - 0x18d], 1 */ W8((u32)(r_ebp+0xfffffe73u), 0x1u);
    /* 00862890: mov dword ptr [ebp - 0x1c8], edi */ W32((u32)(r_ebp+0xfffffe38u), r_edi);
L_00862896:; BB(0x00862896);
    /* 00862896: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862897: movzx ebx, byte ptr [esi] */ r_ebx = (u32)R8((u32)(r_esi));
    /* 0086289a: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 0086289d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086289e: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8628a3u); f_00858286();
    /* 008628a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008628a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628a6: je 0x8628ba */ if (fZ) goto L_008628ba;
L_008628a8:; BB(0x008628a8);
    /* 008628a8: inc dword ptr [ebp - 0x1b4] */ { u32 ad = (u32)(r_ebp+0xfffffe4cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008628ae: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 008628b1: lea edi, [ebx + eax*2 - 0x30] */ r_edi = (u32)(r_ebx+r_eax*2+0xffffffd0u);
    /* 008628b5: jmp 0x862979 */ goto L_00862979;
L_008628ba:; BB(0x008628ba);
    /* 008628ba: cmp ebx, 0x4e */ {  u32 a = r_ebx; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008628bd: jg 0x862948 */ if ((!fZ&&fS==fO)) goto L_00862948;
L_008628c3:; BB(0x008628c3);
    /* 008628c3: je 0x862979 */ if (fZ) goto L_00862979;
L_008628c9:; BB(0x008628c9);
    /* 008628c9: cmp ebx, 0x2a */ {  u32 a = r_ebx; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628cc: je 0x862940 */ if (fZ) goto L_00862940;
L_008628ce:; BB(0x008628ce);
    /* 008628ce: cmp ebx, 0x46 */ {  u32 a = r_ebx; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628d1: je 0x862979 */ if (fZ) goto L_00862979;
L_008628d7:; BB(0x008628d7);
    /* 008628d7: cmp ebx, 0x49 */ {  u32 a = r_ebx; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628da: je 0x8628ec */ if (fZ) goto L_008628ec;
L_008628dc:; BB(0x008628dc);
    /* 008628dc: cmp ebx, 0x4c */ {  u32 a = r_ebx; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628df: jne 0x862957 */ if (!fZ) goto L_00862957;
L_008628e1:; BB(0x008628e1);
    /* 008628e1: inc byte ptr [ebp - 0x18d] */ { u32 ad = (u32)(r_ebp+0xfffffe73u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008628e7: jmp 0x862979 */ goto L_00862979;
L_008628ec:; BB(0x008628ec);
    /* 008628ec: mov cl, byte ptr [esi + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 008628ef: cmp cl, 0x36 */ {  u32 a = (u8)r_ecx; u32 b = 0x36u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008628f2: jne 0x862914 */ if (!fZ) goto L_00862914;
L_008628f4:; BB(0x008628f4);
    /* 008628f4: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 008628f7: cmp byte ptr [eax], 0x34 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x34u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008628fa: jne 0x862914 */ if (!fZ) goto L_00862914;
L_008628fc:; BB(0x008628fc);
    /* 008628fc: mov esi, eax */ r_esi = r_eax;
    /* 008628fe: inc dword ptr [ebp - 0x1c8] */ { u32 ad = (u32)(r_ebp+0xfffffe38u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862904: and dword ptr [ebp - 0x1ac], 0 */ { u32 ad = (u32)(r_ebp+0xfffffe54u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086290b: and dword ptr [ebp - 0x1a8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffe58u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00862912: jmp 0x862979 */ goto L_00862979;
L_00862914:; BB(0x00862914);
    /* 00862914: cmp cl, 0x33 */ {  u32 a = (u8)r_ecx; u32 b = 0x33u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862917: jne 0x862925 */ if (!fZ) goto L_00862925;
L_00862919:; BB(0x00862919);
    /* 00862919: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 0086291c: cmp byte ptr [eax], 0x32 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x32u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086291f: jne 0x862925 */ if (!fZ) goto L_00862925;
L_00862921:; BB(0x00862921);
    /* 00862921: mov esi, eax */ r_esi = r_eax;
    /* 00862923: jmp 0x862979 */ goto L_00862979;
L_00862925:; BB(0x00862925);
    /* 00862925: cmp cl, 0x64 */ {  u32 a = (u8)r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862928: je 0x862979 */ if (fZ) goto L_00862979;
L_0086292a:; BB(0x0086292a);
    /* 0086292a: cmp cl, 0x69 */ {  u32 a = (u8)r_ecx; u32 b = 0x69u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086292d: je 0x862979 */ if (fZ) goto L_00862979;
L_0086292f:; BB(0x0086292f);
    /* 0086292f: cmp cl, 0x6f */ {  u32 a = (u8)r_ecx; u32 b = 0x6fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862932: je 0x862979 */ if (fZ) goto L_00862979;
L_00862934:; BB(0x00862934);
    /* 00862934: cmp cl, 0x78 */ {  u32 a = (u8)r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862937: je 0x862979 */ if (fZ) goto L_00862979;
L_00862939:; BB(0x00862939);
    /* 00862939: cmp cl, 0x58 */ {  u32 a = (u8)r_ecx; u32 b = 0x58u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086293c: jne 0x862957 */ if (!fZ) goto L_00862957;
L_0086293e:; BB(0x0086293e);
    /* 0086293e: jmp 0x862979 */ goto L_00862979;
L_00862940:; BB(0x00862940);
    /* 00862940: inc byte ptr [ebp - 0x18e] */ { u32 ad = (u32)(r_ebp+0xfffffe72u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00862946: jmp 0x862979 */ goto L_00862979;
L_00862948:; BB(0x00862948);
    /* 00862948: cmp ebx, 0x68 */ {  u32 a = r_ebx; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086294b: je 0x86296d */ if (fZ) goto L_0086296d;
L_0086294d:; BB(0x0086294d);
    /* 0086294d: cmp ebx, 0x6c */ {  u32 a = r_ebx; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862950: je 0x86295f */ if (fZ) goto L_0086295f;
L_00862952:; BB(0x00862952);
    /* 00862952: cmp ebx, 0x77 */ {  u32 a = r_ebx; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862955: je 0x862965 */ if (fZ) goto L_00862965;
L_00862957:; BB(0x00862957);
    /* 00862957: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086295d: jmp 0x862979 */ goto L_00862979;
L_0086295f:; BB(0x0086295f);
    /* 0086295f: inc byte ptr [ebp - 0x18d] */ { u32 ad = (u32)(r_ebp+0xfffffe73u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00862965:; BB(0x00862965);
    /* 00862965: inc byte ptr [ebp - 0x185] */ { u32 ad = (u32)(r_ebp+0xfffffe7bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086296b: jmp 0x862979 */ goto L_00862979;
L_0086296d:; BB(0x0086296d);
    /* 0086296d: dec byte ptr [ebp - 0x18d] */ { u32 ad = (u32)(r_ebp+0xfffffe73u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 00862973: dec byte ptr [ebp - 0x185] */ { u32 ad = (u32)(r_ebp+0xfffffe7bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
L_00862979:; BB(0x00862979);
    /* 00862979: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862980: je 0x862896 */ if (fZ) goto L_00862896;
L_00862986:; BB(0x00862986);
    /* 00862986: mov dword ptr [ebp - 0x18c], edi */ W32((u32)(r_ebp+0xfffffe74u), r_edi);
    /* 0086298c: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 0086298f: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862996: jne 0x8629b2 */ if (!fZ) goto L_008629b2;
L_00862998:; BB(0x00862998);
    /* 00862998: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0086299b: mov dword ptr [ebp - 0x1dc], eax */ W32((u32)(r_ebp+0xfffffe24u), r_eax);
    /* 008629a1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008629a4: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 008629a7: mov ebx, dword ptr [eax - 4] */ r_ebx = R32((u32)(r_eax+0xfffffffcu));
    /* 008629aa: mov dword ptr [ebp - 0x1b0], ebx */ W32((u32)(r_ebp+0xfffffe50u), r_ebx);
    /* 008629b0: jmp 0x8629b8 */ goto L_008629b8;
L_008629b2:; BB(0x008629b2);
    /* 008629b2: mov ebx, dword ptr [ebp - 0x1b0] */ r_ebx = R32((u32)(r_ebp+0xfffffe50u));
L_008629b8:; BB(0x008629b8);
    /* 008629b8: mov byte ptr [ebp - 0x17d], 0 */ W8((u32)(r_ebp+0xfffffe83u), 0x0u);
    /* 008629bf: cmp byte ptr [ebp - 0x185], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe7bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008629c6: jne 0x8629e0 */ if (!fZ) goto L_008629e0;
L_008629c8:; BB(0x008629c8);
    /* 008629c8: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008629ca: cmp al, 0x53 */ {  u32 a = (u8)r_eax; u32 b = 0x53u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008629cc: je 0x8629d9 */ if (fZ) goto L_008629d9;
L_008629ce:; BB(0x008629ce);
    /* 008629ce: cmp al, 0x43 */ {  u32 a = (u8)r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008629d0: mov byte ptr [ebp - 0x185], 0xff */ W8((u32)(r_ebp+0xfffffe7bu), 0xffu);
    /* 008629d7: jne 0x8629e0 */ if (!fZ) goto L_008629e0;
L_008629d9:; BB(0x008629d9);
    /* 008629d9: mov byte ptr [ebp - 0x185], 1 */ W8((u32)(r_ebp+0xfffffe7bu), 0x1u);
L_008629e0:; BB(0x008629e0);
    /* 008629e0: movzx edi, byte ptr [esi] */ r_edi = (u32)R8((u32)(r_esi));
    /* 008629e3: or edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008629e6: mov dword ptr [ebp - 0x1c0], edi */ W32((u32)(r_ebp+0xfffffe40u), r_edi);
    /* 008629ec: cmp edi, 0x6e */ {  u32 a = r_edi; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008629ef: je 0x862a24 */ if (fZ) goto L_00862a24;
L_008629f1:; BB(0x008629f1);
    /* 008629f1: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008629f4: je 0x862a90 */ if (fZ) goto L_00862a90;
L_008629fa:; BB(0x008629fa);
    /* 008629fa: cmp edi, 0x7b */ {  u32 a = r_edi; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008629fd: je 0x862a90 */ if (fZ) goto L_00862a90;
L_00862a03:; BB(0x00862a03);
    /* 00862a03: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862a09: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00862a0c: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862a11u); f_00862777();
    /* 00862a11: mov esi, eax */ r_esi = r_eax;
    /* 00862a13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862a14: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x862a19u); f_008582ff();
    /* 00862a19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862a1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a1c: jne 0x862a03 */ if (!fZ) goto L_00862a03;
L_00862a1e:; BB(0x00862a1e);
    /* 00862a1e: mov dword ptr [ebp - 0x194], esi */ W32((u32)(r_ebp+0xfffffe6cu), r_esi);
L_00862a24:; BB(0x00862a24);
    /* 00862a24: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00862a27:; BB(0x00862a27);
    /* 00862a27: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 00862a2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a2f: je 0x862a3e */ if (fZ) goto L_00862a3e;
L_00862a31:; BB(0x00862a31);
    /* 00862a31: cmp dword ptr [ebp - 0x18c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a38: je 0x862d34 */ if (fZ) goto L_00862d34;
L_00862a3e:; BB(0x00862a3e);
    /* 00862a3e: cmp edi, 0x6f */ {  u32 a = r_edi; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862a41: jg 0x862d00 */ if ((!fZ&&fS==fO)) goto L_00862d00;
L_00862a47:; BB(0x00862a47);
    /* 00862a47: je 0x863121 */ if (fZ) goto L_00863121;
L_00862a4d:; BB(0x00862a4d);
    /* 00862a4d: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a50: je 0x862cd3 */ if (fZ) goto L_00862cd3;
L_00862a56:; BB(0x00862a56);
    /* 00862a56: cmp edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862a59: je 0x863121 */ if (fZ) goto L_00863121;
L_00862a5f:; BB(0x00862a5f);
    /* 00862a5f: jle 0x862d26 */ if ((fZ||fS!=fO)) goto L_00862d26;
L_00862a65:; BB(0x00862a65);
    /* 00862a65: cmp edi, 0x67 */ {  u32 a = r_edi; u32 b = 0x67u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862a68: jle 0x862ac9 */ if ((fZ||fS!=fO)) goto L_00862ac9;
L_00862a6a:; BB(0x00862a6a);
    /* 00862a6a: cmp edi, 0x69 */ {  u32 a = r_edi; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a6d: je 0x862aab */ if (fZ) goto L_00862aab;
L_00862a6f:; BB(0x00862a6f);
    /* 00862a6f: cmp edi, 0x6e */ {  u32 a = r_edi; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a72: jne 0x862d26 */ if (!fZ) goto L_00862d26;
L_00862a78:; BB(0x00862a78);
    /* 00862a78: mov eax, dword ptr [ebp - 0x184] */ r_eax = R32((u32)(r_ebp+0xfffffe7cu));
    /* 00862a7e: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862a85: je 0x8633f5 */ if (fZ) goto L_008633f5;
L_00862a8b:; BB(0x00862a8b);
    /* 00862a8b: jmp 0x863421 */ goto L_00863421;
L_00862a90:; BB(0x00862a90);
    /* 00862a90: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862a96: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00862a99: mov edx, esi */ r_edx = r_esi;
    /* 00862a9b: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862aa0u); f_00862777();
    /* 00862aa0: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 00862aa6: jmp 0x862a27 */ goto L_00862a27;
L_00862aab:; BB(0x00862aab);
    /* 00862aab: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00862aad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00862aae:; BB(0x00862aae);
    /* 00862aae: mov ebx, dword ptr [ebp - 0x194] */ r_ebx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00862ab4: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ab7: jne 0x862fcf */ if (!fZ) goto L_00862fcf;
L_00862abd:; BB(0x00862abd);
    /* 00862abd: mov byte ptr [ebp - 0x197], 1 */ W8((u32)(r_ebp+0xfffffe69u), 0x1u);
    /* 00862ac4: jmp 0x862fd4 */ goto L_00862fd4;
L_00862ac9:; BB(0x00862ac9);
    /* 00862ac9: lea esi, [ebp - 0x17c] */ r_esi = (u32)(r_ebp+0xfffffe84u);
    /* 00862acf: mov ebx, dword ptr [ebp - 0x194] */ r_ebx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00862ad5: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ad8: jne 0x862ae8 */ if (!fZ) goto L_00862ae8;
L_00862ada:; BB(0x00862ada);
    /* 00862ada: mov byte ptr [ebp - 0x17c], bl */ W8((u32)(r_ebp+0xfffffe84u), (u8)r_ebx);
    /* 00862ae0: lea esi, [ebp - 0x17b] */ r_esi = (u32)(r_ebp+0xfffffe85u);
    /* 00862ae6: jmp 0x862aed */ goto L_00862aed;
L_00862ae8:; BB(0x00862ae8);
    /* 00862ae8: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862aeb: jne 0x862b0d */ if (!fZ) goto L_00862b0d;
L_00862aed:; BB(0x00862aed);
    /* 00862aed: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862af3: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862af9: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00862afc: mov edx, edi */ r_edx = r_edi;
    /* 00862afe: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862b03u); f_00862777();
    /* 00862b03: mov ebx, eax */ r_ebx = r_eax;
    /* 00862b05: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00862b0b: jmp 0x862b10 */ goto L_00862b10;
L_00862b0d:; BB(0x00862b0d);
    /* 00862b0d: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
L_00862b10:; BB(0x00862b10);
    /* 00862b10: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862b17: je 0x862b25 */ if (fZ) goto L_00862b25;
L_00862b19:; BB(0x00862b19);
    /* 00862b19: cmp dword ptr [ebp - 0x18c], 0x15d */ {  u32 a = R32((u32)(r_ebp+0xfffffe74u)); u32 b = 0x15du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862b23: jle 0x862b5f */ if ((fZ||fS!=fO)) goto L_00862b5f;
L_00862b25:; BB(0x00862b25);
    /* 00862b25: mov dword ptr [ebp - 0x18c], 0x15d */ W32((u32)(r_ebp+0xfffffe74u), 0x15du);
    /* 00862b2f: jmp 0x862b5f */ goto L_00862b5f;
L_00862b31:; BB(0x00862b31);
    /* 00862b31: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862b37: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862b3f: je 0x862b6a */ if (fZ) goto L_00862b6a;
L_00862b41:; BB(0x00862b41);
    /* 00862b41: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b47: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 00862b49: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862b4a: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b50: mov edx, edi */ r_edx = r_edi;
    /* 00862b52: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862b57u); f_00862777();
    /* 00862b57: mov ebx, eax */ r_ebx = r_eax;
    /* 00862b59: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_00862b5f:; BB(0x00862b5f);
    /* 00862b5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862b60: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x862b65u); f_00858286();
    /* 00862b65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862b66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862b68: jne 0x862b31 */ if (!fZ) goto L_00862b31;
L_00862b6a:; BB(0x00862b6a);
    /* 00862b6a: cmp byte ptr [0xa23f94], bl */ {  u32 a = R8((u32)(0xa23f94u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862b70: jne 0x862bd4 */ if (!fZ) goto L_00862bd4;
L_00862b72:; BB(0x00862b72);
    /* 00862b72: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862b78: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862b80: je 0x862bd4 */ if (fZ) goto L_00862bd4;
L_00862b82:; BB(0x00862b82);
    /* 00862b82: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b88: mov edx, edi */ r_edx = r_edi;
    /* 00862b8a: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862b8fu); f_00862777();
    /* 00862b8f: mov ebx, eax */ r_ebx = r_eax;
    /* 00862b91: mov al, byte ptr [0xa23f94] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xa23f94u))) & 0xffu);
    /* 00862b96: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00862b98: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862b99: jmp 0x862bc3 */ goto L_00862bc3;
L_00862b9b:; BB(0x00862b9b);
    /* 00862b9b: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862ba1: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862ba7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ba9: je 0x862bd4 */ if (fZ) goto L_00862bd4;
L_00862bab:; BB(0x00862bab);
    /* 00862bab: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862bb1: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 00862bb3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862bb4: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862bba: mov edx, edi */ r_edx = r_edi;
    /* 00862bbc: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862bc1u); f_00862777();
    /* 00862bc1: mov ebx, eax */ r_ebx = r_eax;
L_00862bc3:; BB(0x00862bc3);
    /* 00862bc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862bc4: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00862bca: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x862bcfu); f_00858286();
    /* 00862bcf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862bd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862bd2: jne 0x862b9b */ if (!fZ) goto L_00862b9b;
L_00862bd4:; BB(0x00862bd4);
    /* 00862bd4: cmp dword ptr [ebp - 0x19c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862bdb: je 0x862c78 */ if (fZ) goto L_00862c78;
L_00862be1:; BB(0x00862be1);
    /* 00862be1: cmp ebx, 0x65 */ {  u32 a = r_ebx; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862be4: je 0x862bef */ if (fZ) goto L_00862bef;
L_00862be6:; BB(0x00862be6);
    /* 00862be6: cmp ebx, 0x45 */ {  u32 a = r_ebx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862be9: jne 0x862c78 */ if (!fZ) goto L_00862c78;
L_00862bef:; BB(0x00862bef);
    /* 00862bef: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862bf5: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862bfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862bfd: je 0x862c78 */ if (fZ) goto L_00862c78;
L_00862bff:; BB(0x00862bff);
    /* 00862bff: mov byte ptr [esi], 0x65 */ W8((u32)(r_esi), 0x65u);
    /* 00862c02: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862c03: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c09: mov edx, edi */ r_edx = r_edi;
    /* 00862c0b: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862c10u); f_00862777();
    /* 00862c10: mov ebx, eax */ r_ebx = r_eax;
    /* 00862c12: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00862c18: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c1b: jne 0x862c22 */ if (!fZ) goto L_00862c22;
L_00862c1d:; BB(0x00862c1d);
    /* 00862c1d: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00862c1f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862c20: jmp 0x862c27 */ goto L_00862c27;
L_00862c22:; BB(0x00862c22);
    /* 00862c22: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c25: jne 0x862c6d */ if (!fZ) goto L_00862c6d;
L_00862c27:; BB(0x00862c27);
    /* 00862c27: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862c2d: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c35: jne 0x862c58 */ if (!fZ) goto L_00862c58;
L_00862c37:; BB(0x00862c37);
    /* 00862c37: and dword ptr [ebp - 0x18c], eax */ { u32 ad = (u32)(r_ebp+0xfffffe74u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c3d: jmp 0x862c6d */ goto L_00862c6d;
L_00862c3f:; BB(0x00862c3f);
    /* 00862c3f: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862c45: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c4d: je 0x862c78 */ if (fZ) goto L_00862c78;
L_00862c4f:; BB(0x00862c4f);
    /* 00862c4f: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c55: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 00862c57: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00862c58:; BB(0x00862c58);
    /* 00862c58: mov edx, edi */ r_edx = r_edi;
    /* 00862c5a: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c60: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862c65u); f_00862777();
    /* 00862c65: mov ebx, eax */ r_ebx = r_eax;
    /* 00862c67: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_00862c6d:; BB(0x00862c6d);
    /* 00862c6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862c6e: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x862c73u); f_00858286();
    /* 00862c73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c76: jne 0x862c3f */ if (!fZ) goto L_00862c3f;
L_00862c78:; BB(0x00862c78);
    /* 00862c78: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c7e: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c81: je 0x862c8c */ if (fZ) goto L_00862c8c;
L_00862c83:; BB(0x00862c83);
    /* 00862c83: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862c84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862c85: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x862c8au); f_0086923c();
    /* 00862c8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862c8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00862c8c:; BB(0x00862c8c);
    /* 00862c8c: cmp dword ptr [ebp - 0x19c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c93: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_00862c99:; BB(0x00862c99);
    /* 00862c99: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862ca0: jne 0x863421 */ if (!fZ) goto L_00863421;
L_00862ca6:; BB(0x00862ca6);
    /* 00862ca6: inc dword ptr [ebp - 0x1b8] */ { u32 ad = (u32)(r_ebp+0xfffffe48u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862cac: mov byte ptr [esi], 0 */ W8((u32)(r_esi), 0x0u);
    /* 00862caf: lea eax, [ebp - 0x17c] */ r_eax = (u32)(r_ebp+0xfffffe84u);
    /* 00862cb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862cb6: push dword ptr [ebp - 0x1b0] */ { u32 v = R32((u32)(r_ebp+0xfffffe50u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862cbc: movsx eax, byte ptr [ebp - 0x18d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe73u));
    /* 00862cc3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00862cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862cc5: call dword ptr [0xa23c78] */ { u32 t = R32((u32)(0xa23c78u)); r_esp -= 4; W32(r_esp, 0x862ccbu); call_ind(t); }
    /* 00862ccb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00862cce: jmp 0x863421 */ goto L_00863421;
L_00862cd3:; BB(0x00862cd3);
    /* 00862cd3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862cd5: jne 0x862ce7 */ if (!fZ) goto L_00862ce7;
L_00862cd7:; BB(0x00862cd7);
    /* 00862cd7: mov dword ptr [ebp - 0x1b4], 1 */ W32((u32)(r_ebp+0xfffffe4cu), 0x1u);
    /* 00862ce1: inc dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00862ce7:; BB(0x00862ce7);
    /* 00862ce7: cmp byte ptr [ebp - 0x185], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe7bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00862cee: jle 0x862eb1 */ if ((fZ||fS!=fO)) goto L_00862eb1;
L_00862cf4:; BB(0x00862cf4);
    /* 00862cf4: mov byte ptr [ebp - 0x196], 1 */ W8((u32)(r_ebp+0xfffffe6au), 0x1u);
    /* 00862cfb: jmp 0x862eb1 */ goto L_00862eb1;
L_00862d00:; BB(0x00862d00);
    /* 00862d00: mov eax, edi */ r_eax = r_edi;
    /* 00862d02: sub eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d05: je 0x86311a */ if (fZ) goto L_0086311a;
L_00862d0b:; BB(0x00862d0b);
    /* 00862d0b: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d0e: je 0x862ce7 */ if (fZ) goto L_00862ce7;
L_00862d10:; BB(0x00862d10);
    /* 00862d10: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00862d11: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d12: je 0x863121 */ if (fZ) goto L_00863121;
L_00862d18:; BB(0x00862d18);
    /* 00862d18: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d1b: je 0x862aae */ if (fZ) goto L_00862aae;
L_00862d21:; BB(0x00862d21);
    /* 00862d21: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d24: je 0x862d61 */ if (fZ) goto L_00862d61;
L_00862d26:; BB(0x00862d26);
    /* 00862d26: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00862d29: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00862d2c: cmp eax, dword ptr [ebp - 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862d32: je 0x862d40 */ if (fZ) goto L_00862d40;
L_00862d34:; BB(0x00862d34);
    /* 00862d34: cmp dword ptr [ebp - 0x194], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe6cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862d3b: jmp 0x863489 */ goto L_00863489;
L_00862d40:; BB(0x00862d40);
    /* 00862d40: dec byte ptr [ebp - 0x195] */ { u32 ad = (u32)(r_ebp+0xfffffe6bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 00862d46: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862d4d: jne 0x863421 */ if (!fZ) goto L_00863421;
L_00862d53:; BB(0x00862d53);
    /* 00862d53: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 00862d59: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00862d5c: jmp 0x863421 */ goto L_00863421;
L_00862d61:; BB(0x00862d61);
    /* 00862d61: cmp byte ptr [ebp - 0x185], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe7bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00862d68: jle 0x862d71 */ if ((fZ||fS!=fO)) goto L_00862d71;
L_00862d6a:; BB(0x00862d6a);
    /* 00862d6a: mov byte ptr [ebp - 0x196], 1 */ W8((u32)(r_ebp+0xfffffe6au), 0x1u);
L_00862d71:; BB(0x00862d71);
    /* 00862d71: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00862d74: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862d75: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00862d78: mov dword ptr [ebp - 0x1d0], edi */ W32((u32)(r_ebp+0xfffffe30u), r_edi);
    /* 00862d7e: cmp byte ptr [edi], 0x5e */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x5eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862d81: jne 0x862d91 */ if (!fZ) goto L_00862d91;
L_00862d83:; BB(0x00862d83);
    /* 00862d83: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862d84: mov dword ptr [ebp - 0x1d0], edi */ W32((u32)(r_ebp+0xfffffe30u), r_edi);
    /* 00862d8a: mov byte ptr [ebp - 0x1a1], 0xff */ W8((u32)(r_ebp+0xfffffe5fu), 0xffu);
L_00862d91:; BB(0x00862d91);
    /* 00862d91: mov ebx, dword ptr [ebp - 0x1bc] */ r_ebx = R32((u32)(r_ebp+0xfffffe44u));
    /* 00862d97: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862d99: jne 0x862df8 */ if (!fZ) goto L_00862df8;
L_00862d9b:; BB(0x00862d9b);
    /* 00862d9b: and dword ptr [ebp - 4], ebx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00862d9e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00862da0: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00862da1: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x862da6u); f_00858020();
    /* 00862da6: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00862da9: mov ebx, esp */ r_ebx = r_esp;
    /* 00862dab: mov dword ptr [ebp - 0x1bc], ebx */ W32((u32)(r_ebp+0xfffffe44u), r_ebx);
    /* 00862db1: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00862db5: jmp 0x862df8 */ goto L_00862df8;
L_00862df8:; BB(0x00862df8);
    /* 00862df8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00862dfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00862dfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862dfd: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x862e02u); f_0085f580();
    /* 00862e02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00862e05: cmp dword ptr [ebp - 0x1c0], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffe40u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862e0c: jne 0x862e85 */ if (!fZ) goto L_00862e85;
L_00862e0e:; BB(0x00862e0e);
    /* 00862e0e: cmp byte ptr [edi], 0x5d */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862e11: jne 0x862e85 */ if (!fZ) goto L_00862e85;
L_00862e13:; BB(0x00862e13);
    /* 00862e13: mov dl, 0x5d */ r_edx = (r_edx & 0xffffff00u) | ((0x5du) & 0xffu);
    /* 00862e15: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862e16: mov byte ptr [ebx + 0xb], 0x20 */ W8((u32)(r_ebx+0xbu), 0x20u);
    /* 00862e1a: jmp 0x862e8b */ goto L_00862e8b;
L_00862e1c:; BB(0x00862e1c);
    /* 00862e1c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862e1d: cmp al, 0x2d */ {  u32 a = (u8)r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862e1f: jne 0x862e6c */ if (!fZ) goto L_00862e6c;
L_00862e21:; BB(0x00862e21);
    /* 00862e21: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862e23: je 0x862e6c */ if (fZ) goto L_00862e6c;
L_00862e25:; BB(0x00862e25);
    /* 00862e25: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00862e27: cmp cl, 0x5d */ {  u32 a = (u8)r_ecx; u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862e2a: je 0x862e6c */ if (fZ) goto L_00862e6c;
L_00862e2c:; BB(0x00862e2c);
    /* 00862e2c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862e2d: cmp dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00862e2f: jae 0x862e35 */ if (!fC) goto L_00862e35;
L_00862e31:; BB(0x00862e31);
    /* 00862e31: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00862e33: jmp 0x862e39 */ goto L_00862e39;
L_00862e35:; BB(0x00862e35);
    /* 00862e35: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00862e37: mov dl, cl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_00862e39:; BB(0x00862e39);
    /* 00862e39: cmp dl, al */ {  u32 a = (u8)r_edx; u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00862e3b: ja 0x862e68 */ if ((!fC&&!fZ)) goto L_00862e68;
L_00862e3d:; BB(0x00862e3d);
    /* 00862e3d: movzx esi, dl */ r_esi = (u32)(u8)r_edx;
    /* 00862e40: sub al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862e42: inc al */ { u32 x = (u8)r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862e44: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00862e47: mov dword ptr [ebp - 0x1d4], eax */ W32((u32)(r_ebp+0xfffffe2cu), r_eax);
L_00862e4d:; BB(0x00862e4d);
    /* 00862e4d: mov eax, esi */ r_eax = r_esi;
    /* 00862e4f: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00862e52: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00862e54: mov ecx, esi */ r_ecx = r_esi;
    /* 00862e56: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00862e59: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00862e5b: shl dl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 00862e5d: or byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00862e5f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862e60: dec dword ptr [ebp - 0x1d4] */ { u32 ad = (u32)(r_ebp+0xfffffe2cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00862e66: jne 0x862e4d */ if (!fZ) goto L_00862e4d;
L_00862e68:; BB(0x00862e68);
    /* 00862e68: xor dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862e6a: jmp 0x862e8b */ goto L_00862e8b;
L_00862e6c:; BB(0x00862e6c);
    /* 00862e6c: mov byte ptr [ebp - 0x198], al */ W8((u32)(r_ebp+0xfffffe68u), (u8)r_eax);
    /* 00862e72: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00862e75: mov eax, ecx */ r_eax = r_ecx;
    /* 00862e77: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00862e7a: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00862e7c: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00862e7f: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00862e81: shl dl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 00862e83: or byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00862e85:; BB(0x00862e85);
    /* 00862e85: mov dl, byte ptr [ebp - 0x198] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe68u))) & 0xffu);
L_00862e8b:; BB(0x00862e8b);
    /* 00862e8b: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00862e8d: cmp al, 0x5d */ {  u32 a = (u8)r_eax; u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862e8f: jne 0x862e1c */ if (!fZ) goto L_00862e1c;
L_00862e91:; BB(0x00862e91);
    /* 00862e91: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862e93: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_00862e99:; BB(0x00862e99);
    /* 00862e99: mov ebx, dword ptr [ebp - 0x1b0] */ r_ebx = R32((u32)(r_ebp+0xfffffe50u));
    /* 00862e9f: cmp dword ptr [ebp - 0x1c0], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffe40u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ea6: jne 0x862eab */ if (!fZ) goto L_00862eab;
L_00862ea8:; BB(0x00862ea8);
    /* 00862ea8: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
L_00862eab:; BB(0x00862eab);
    /* 00862eab: mov edi, dword ptr [ebp - 0x1c0] */ r_edi = R32((u32)(r_ebp+0xfffffe40u));
L_00862eb1:; BB(0x00862eb1);
    /* 00862eb1: mov esi, ebx */ r_esi = r_ebx;
    /* 00862eb3: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862eb9: cmp dword ptr [ebp - 0x194], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe6cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ec0: je 0x862ed2 */ if (fZ) goto L_00862ed2;
L_00862ec2:; BB(0x00862ec2);
    /* 00862ec2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862ec5: push dword ptr [ebp - 0x194] */ { u32 v = R32((u32)(r_ebp+0xfffffe6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00862ecb: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x862ed0u); f_0086923c();
    /* 00862ed0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862ed1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00862ed2:; BB(0x00862ed2);
    /* 00862ed2: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ed9: je 0x862eef */ if (fZ) goto L_00862eef;
L_00862edb:; BB(0x00862edb);
    /* 00862edb: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862ee1: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ee9: je 0x8630d2 */ if (fZ) goto L_008630d2;
L_00862eef:; BB(0x00862eef);
    /* 00862eef: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862ef5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00862ef8: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862efdu); f_00862777();
    /* 00862efd: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 00862f03: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f06: je 0x8630bc */ if (fZ) goto L_008630bc;
L_00862f0c:; BB(0x00862f0c);
    /* 00862f0c: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f0f: je 0x862f5e */ if (fZ) goto L_00862f5e;
L_00862f11:; BB(0x00862f11);
    /* 00862f11: cmp edi, 0x73 */ {  u32 a = r_edi; u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f14: jne 0x862f25 */ if (!fZ) goto L_00862f25;
L_00862f16:; BB(0x00862f16);
    /* 00862f16: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862f19: jl 0x862f20 */ if ((fS!=fO)) goto L_00862f20;
L_00862f1b:; BB(0x00862f1b);
    /* 00862f1b: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862f1e: jle 0x862f25 */ if ((fZ||fS!=fO)) goto L_00862f25;
L_00862f20:; BB(0x00862f20);
    /* 00862f20: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f23: jne 0x862f5e */ if (!fZ) goto L_00862f5e;
L_00862f25:; BB(0x00862f25);
    /* 00862f25: cmp edi, 0x7b */ {  u32 a = r_edi; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f28: jne 0x8630bc */ if (!fZ) goto L_008630bc;
L_00862f2e:; BB(0x00862f2e);
    /* 00862f2e: mov ecx, eax */ r_ecx = r_eax;
    /* 00862f30: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00862f33: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 00862f35: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00862f36: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00862f38: mov ecx, eax */ r_ecx = r_eax;
    /* 00862f3a: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00862f3d: mov edi, dword ptr [ebp - 0x1bc] */ r_edi = R32((u32)(r_ebp+0xfffffe44u));
    /* 00862f43: movsx ecx, byte ptr [ecx + edi] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_edi));
    /* 00862f47: movsx edi, byte ptr [ebp - 0x1a1] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe5fu));
    /* 00862f4e: xor ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00862f50: test ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f52: je 0x8630bc */ if (fZ) goto L_008630bc;
L_00862f58:; BB(0x00862f58);
    /* 00862f58: mov edi, dword ptr [ebp - 0x1c0] */ r_edi = R32((u32)(r_ebp+0xfffffe40u));
L_00862f5e:; BB(0x00862f5e);
    /* 00862f5e: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862f65: jne 0x8630b6 */ if (!fZ) goto L_008630b6;
L_00862f6b:; BB(0x00862f6b);
    /* 00862f6b: cmp byte ptr [ebp - 0x196], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe6au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862f72: je 0x8630a8 */ if (fZ) goto L_008630a8;
L_00862f78:; BB(0x00862f78);
    /* 00862f78: mov byte ptr [ebp - 0x1c4], al */ W8((u32)(r_ebp+0xfffffe3cu), (u8)r_eax);
    /* 00862f7e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00862f81: mov ecx, dword ptr [0xa23fa0] */ r_ecx = R32((u32)(0xa23fa0u));
    /* 00862f87: test byte ptr [ecx + eax*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_eax*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862f8c: je 0x862fa2 */ if (fZ) goto L_00862fa2;
L_00862f8e:; BB(0x00862f8e);
    /* 00862f8e: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862f94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00862f97: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862f9cu); f_00862777();
    /* 00862f9c: mov byte ptr [ebp - 0x1c3], al */ W8((u32)(r_ebp+0xfffffe3du), (u8)r_eax);
L_00862fa2:; BB(0x00862fa2);
    /* 00862fa2: push dword ptr [0xa23f90] */ { u32 v = R32((u32)(0xa23f90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862fa8: lea eax, [ebp - 0x1c4] */ r_eax = (u32)(r_ebp+0xfffffe3cu);
    /* 00862fae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862faf: lea eax, [ebp - 0x1cc] */ r_eax = (u32)(r_ebp+0xfffffe34u);
    /* 00862fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862fb6: call 0x866f7f */ r_esp -= 4; W32(r_esp, 0x862fbbu); f_00866f7f();
    /* 00862fbb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00862fbe: mov ax, word ptr [ebp - 0x1cc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe34u))) & 0xffffu);
    /* 00862fc5: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 00862fc8: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00862fc9: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00862fca: jmp 0x8630ab */ goto L_008630ab;
L_00862fcf:; BB(0x00862fcf);
    /* 00862fcf: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862fd2: jne 0x862ffe */ if (!fZ) goto L_00862ffe;
L_00862fd4:; BB(0x00862fd4);
    /* 00862fd4: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00862fda: jne 0x862fe9 */ if (!fZ) goto L_00862fe9;
L_00862fdc:; BB(0x00862fdc);
    /* 00862fdc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862fde: je 0x862fe9 */ if (fZ) goto L_00862fe9;
L_00862fe0:; BB(0x00862fe0);
    /* 00862fe0: mov byte ptr [ebp - 0x17d], 1 */ W8((u32)(r_ebp+0xfffffe83u), 0x1u);
    /* 00862fe7: jmp 0x862ffe */ goto L_00862ffe;
L_00862fe9:; BB(0x00862fe9);
    /* 00862fe9: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862fef: mov edx, esi */ r_edx = r_esi;
    /* 00862ff1: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862ff6u); f_00862777();
    /* 00862ff6: mov ebx, eax */ r_ebx = r_eax;
    /* 00862ff8: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_00862ffe:; BB(0x00862ffe);
    /* 00862ffe: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863001: jne 0x863164 */ if (!fZ) goto L_00863164;
L_00863007:; BB(0x00863007);
    /* 00863007: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086300d: mov edx, esi */ r_edx = r_esi;
    /* 0086300f: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x863014u); f_00862777();
    /* 00863014: mov ebx, eax */ r_ebx = r_eax;
    /* 00863016: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 0086301c: cmp bl, 0x78 */ {  u32 a = (u8)r_ebx; u32 b = 0x78u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086301f: je 0x863070 */ if (fZ) goto L_00863070;
L_00863021:; BB(0x00863021);
    /* 00863021: cmp bl, 0x58 */ {  u32 a = (u8)r_ebx; u32 b = 0x58u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863024: je 0x863070 */ if (fZ) goto L_00863070;
L_00863026:; BB(0x00863026);
    /* 00863026: mov dword ptr [ebp - 0x19c], 1 */ W32((u32)(r_ebp+0xfffffe64u), 0x1u);
    /* 00863030: cmp edi, 0x78 */ {  u32 a = r_edi; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863033: je 0x863054 */ if (fZ) goto L_00863054;
L_00863035:; BB(0x00863035);
    /* 00863035: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086303c: je 0x86304c */ if (fZ) goto L_0086304c;
L_0086303e:; BB(0x0086303e);
    /* 0086303e: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00863044: jne 0x86304c */ if (!fZ) goto L_0086304c;
L_00863046:; BB(0x00863046);
    /* 00863046: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0086304c:; BB(0x0086304c);
    /* 0086304c: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
L_0086304e:; BB(0x0086304e);
    /* 0086304e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086304f: jmp 0x863164 */ goto L_00863164;
L_00863054:; BB(0x00863054);
    /* 00863054: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086305a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086305d: je 0x863068 */ if (fZ) goto L_00863068;
L_0086305f:; BB(0x0086305f);
    /* 0086305f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863060: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863061: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x863066u); f_0086923c();
    /* 00863066: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863067: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00863068:; BB(0x00863068);
    /* 00863068: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0086306a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086306b: jmp 0x86315e */ goto L_0086315e;
L_00863070:; BB(0x00863070);
    /* 00863070: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863076: mov edx, esi */ r_edx = r_esi;
    /* 00863078: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x86307du); f_00862777();
    /* 0086307d: mov ebx, eax */ r_ebx = r_eax;
    /* 0086307f: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00863085: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086308c: je 0x8630a4 */ if (fZ) goto L_008630a4;
L_0086308e:; BB(0x0086308e);
    /* 0086308e: sub dword ptr [ebp - 0x18c], 2 */ { u32 ad = (u32)(r_ebp+0xfffffe74u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00863095: cmp dword ptr [ebp - 0x18c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe74u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086309c: jge 0x8630a4 */ if ((fS==fO)) goto L_008630a4;
L_0086309e:; BB(0x0086309e);
    /* 0086309e: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_008630a4:; BB(0x008630a4);
    /* 008630a4: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 008630a6: jmp 0x86304e */ goto L_0086304e;
L_008630a8:; BB(0x008630a8);
    /* 008630a8: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 008630aa: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008630ab:; BB(0x008630ab);
    /* 008630ab: mov dword ptr [ebp - 0x1b0], ebx */ W32((u32)(r_ebp+0xfffffe50u), r_ebx);
    /* 008630b1: jmp 0x862ed2 */ goto L_00862ed2;
L_008630b6:; BB(0x008630b6);
    /* 008630b6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008630b7: jmp 0x862ed2 */ goto L_00862ed2;
L_008630bc:; BB(0x008630bc);
    /* 008630bc: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008630c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008630c5: je 0x8630d2 */ if (fZ) goto L_008630d2;
L_008630c7:; BB(0x008630c7);
    /* 008630c7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008630ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008630cb: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x8630d0u); f_0086923c();
    /* 008630d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008630d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008630d2:; BB(0x008630d2);
    /* 008630d2: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008630d4: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_008630da:; BB(0x008630da);
    /* 008630da: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008630e1: jne 0x863421 */ if (!fZ) goto L_00863421;
L_008630e7:; BB(0x008630e7);
    /* 008630e7: inc dword ptr [ebp - 0x1b8] */ { u32 ad = (u32)(r_ebp+0xfffffe48u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008630ed: cmp dword ptr [ebp - 0x1c0], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffe40u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008630f4: je 0x863421 */ if (fZ) goto L_00863421;
L_008630fa:; BB(0x008630fa);
    /* 008630fa: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 00863100: cmp byte ptr [ebp - 0x196], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe6au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863107: je 0x863112 */ if (fZ) goto L_00863112;
L_00863109:; BB(0x00863109);
    /* 00863109: and word ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 0086310d: jmp 0x863421 */ goto L_00863421;
L_00863112:; BB(0x00863112);
    /* 00863112: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00863115: jmp 0x863421 */ goto L_00863421;
L_0086311a:; BB(0x0086311a);
    /* 0086311a: mov byte ptr [ebp - 0x18d], 1 */ W8((u32)(r_ebp+0xfffffe73u), 0x1u);
L_00863121:; BB(0x00863121);
    /* 00863121: mov ebx, dword ptr [ebp - 0x194] */ r_ebx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00863127: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086312a: jne 0x863135 */ if (!fZ) goto L_00863135;
L_0086312c:; BB(0x0086312c);
    /* 0086312c: mov byte ptr [ebp - 0x197], 1 */ W8((u32)(r_ebp+0xfffffe69u), 0x1u);
    /* 00863133: jmp 0x86313a */ goto L_0086313a;
L_00863135:; BB(0x00863135);
    /* 00863135: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863138: jne 0x863164 */ if (!fZ) goto L_00863164;
L_0086313a:; BB(0x0086313a);
    /* 0086313a: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00863140: jne 0x86314f */ if (!fZ) goto L_0086314f;
L_00863142:; BB(0x00863142);
    /* 00863142: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863144: je 0x86314f */ if (fZ) goto L_0086314f;
L_00863146:; BB(0x00863146);
    /* 00863146: mov byte ptr [ebp - 0x17d], 1 */ W8((u32)(r_ebp+0xfffffe83u), 0x1u);
    /* 0086314d: jmp 0x863164 */ goto L_00863164;
L_0086314f:; BB(0x0086314f);
    /* 0086314f: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863155: mov edx, esi */ r_edx = r_esi;
    /* 00863157: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x86315cu); f_00862777();
    /* 0086315c: mov ebx, eax */ r_ebx = r_eax;
L_0086315e:; BB(0x0086315e);
    /* 0086315e: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_00863164:; BB(0x00863164);
    /* 00863164: cmp dword ptr [ebp - 0x1c8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086316b: je 0x8632ce */ if (fZ) goto L_008632ce;
L_00863171:; BB(0x00863171);
    /* 00863171: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863178: jne 0x86329d */ if (!fZ) goto L_0086329d;
L_0086317e:; BB(0x0086317e);
    /* 0086317e: cmp edi, 0x78 */ {  u32 a = r_edi; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863181: je 0x8631e9 */ if (fZ) goto L_008631e9;
L_00863183:; BB(0x00863183);
    /* 00863183: cmp edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863186: je 0x8631e9 */ if (fZ) goto L_008631e9;
L_00863188:; BB(0x00863188);
    /* 00863188: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863189: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x86318eu); f_00858286();
    /* 0086318e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086318f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863191: je 0x863226 */ if (fZ) goto L_00863226;
L_00863197:; BB(0x00863197);
    /* 00863197: cmp edi, 0x6f */ {  u32 a = r_edi; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086319a: jne 0x8631c6 */ if (!fZ) goto L_008631c6;
L_0086319c:; BB(0x0086319c);
    /* 0086319c: cmp ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086319f: jge 0x863226 */ if ((fS==fO)) goto L_00863226;
L_008631a5:; BB(0x008631a5);
    /* 008631a5: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 008631ab: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 008631b1: shld ecx, eax, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_ecx = r; } }
    /* 008631b5: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008631b8: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 008631be: mov dword ptr [ebp - 0x1a8], ecx */ W32((u32)(r_ebp+0xfffffe58u), r_ecx);
    /* 008631c4: jmp 0x86322c */ goto L_0086322c;
L_008631c6:; BB(0x008631c6);
    /* 008631c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008631c8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 008631ca: push dword ptr [ebp - 0x1a8] */ { u32 v = R32((u32)(r_ebp+0xfffffe58u)); r_esp -= 4; W32(r_esp, v); }
    /* 008631d0: push dword ptr [ebp - 0x1ac] */ { u32 v = R32((u32)(r_ebp+0xfffffe54u)); r_esp -= 4; W32(r_esp, v); }
    /* 008631d6: call 0x85ada0 */ r_esp -= 4; W32(r_esp, 0x8631dbu); f_0085ada0();
    /* 008631db: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 008631e1: mov dword ptr [ebp - 0x1a8], edx */ W32((u32)(r_ebp+0xfffffe58u), r_edx);
    /* 008631e7: jmp 0x86322c */ goto L_0086322c;
L_008631e9:; BB(0x008631e9);
    /* 008631e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008631ea: call 0x8582c0 */ r_esp -= 4; W32(r_esp, 0x8631efu); f_008582c0();
    /* 008631ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008631f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008631f2: je 0x863226 */ if (fZ) goto L_00863226;
L_008631f4:; BB(0x008631f4);
    /* 008631f4: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 008631fa: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 00863200: shld ecx, eax, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_ecx = r; } }
    /* 00863204: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00863207: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 0086320d: mov dword ptr [ebp - 0x1a8], ecx */ W32((u32)(r_ebp+0xfffffe58u), r_ecx);
    /* 00863213: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863214: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x863219u); f_00858286();
    /* 00863219: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086321a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086321c: jne 0x86322c */ if (!fZ) goto L_0086322c;
L_0086321e:; BB(0x0086321e);
    /* 0086321e: and ebx, 0xffffffdf */ {  u32 a = r_ebx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00863221: sub ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00863224: jmp 0x86322c */ goto L_0086322c;
L_00863226:; BB(0x00863226);
    /* 00863226: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0086322c:; BB(0x0086322c);
    /* 0086322c: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863233: jne 0x863276 */ if (!fZ) goto L_00863276;
L_00863235:; BB(0x00863235);
    /* 00863235: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086323b: lea eax, [ebx - 0x30] */ r_eax = (u32)(r_ebx+0xffffffd0u);
    /* 0086323e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0086323f: add dword ptr [ebp - 0x1ac], eax */ { u32 ad = (u32)(r_ebp+0xfffffe54u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 00863245: adc dword ptr [ebp - 0x1a8], edx */ { u32 ad = (u32)(r_ebp+0xfffffe58u); u32 c = fC; u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 0086324b: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863252: je 0x863265 */ if (fZ) goto L_00863265;
L_00863254:; BB(0x00863254);
    /* 00863254: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0086325a: jne 0x863265 */ if (!fZ) goto L_00863265;
L_0086325c:; BB(0x0086325c);
    /* 0086325c: mov byte ptr [ebp - 0x17d], 1 */ W8((u32)(r_ebp+0xfffffe83u), 0x1u);
    /* 00863263: jmp 0x86328a */ goto L_0086328a;
L_00863265:; BB(0x00863265);
    /* 00863265: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086326b: mov edx, esi */ r_edx = r_esi;
    /* 0086326d: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x863272u); f_00862777();
    /* 00863272: mov ebx, eax */ r_ebx = r_eax;
    /* 00863274: jmp 0x86328a */ goto L_0086328a;
L_00863276:; BB(0x00863276);
    /* 00863276: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086327c: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086327f: je 0x86328a */ if (fZ) goto L_0086328a;
L_00863281:; BB(0x00863281);
    /* 00863281: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863282: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863283: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x863288u); f_0086923c();
    /* 00863288: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863289: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086328a:; BB(0x0086328a);
    /* 0086328a: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863291: je 0x86317e */ if (fZ) goto L_0086317e;
L_00863297:; BB(0x00863297);
    /* 00863297: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_0086329d:; BB(0x0086329d);
    /* 0086329d: cmp byte ptr [ebp - 0x197], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe69u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008632a4: je 0x8633c1 */ if (fZ) goto L_008633c1;
L_008632aa:; BB(0x008632aa);
    /* 008632aa: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 008632b0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008632b2: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 008632b8: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 008632bb: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008632bd: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 008632c3: mov dword ptr [ebp - 0x1a8], ecx */ W32((u32)(r_ebp+0xfffffe58u), r_ecx);
    /* 008632c9: jmp 0x8633c1 */ goto L_008633c1;
L_008632ce:; BB(0x008632ce);
    /* 008632ce: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008632d5: jne 0x8633b2 */ if (!fZ) goto L_008633b2;
L_008632db:; BB(0x008632db);
    /* 008632db: cmp edi, 0x78 */ {  u32 a = r_edi; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008632de: je 0x863316 */ if (fZ) goto L_00863316;
L_008632e0:; BB(0x008632e0);
    /* 008632e0: cmp edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008632e3: je 0x863316 */ if (fZ) goto L_00863316;
L_008632e5:; BB(0x008632e5);
    /* 008632e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008632e6: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8632ebu); f_00858286();
    /* 008632eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008632ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008632ee: je 0x86333b */ if (fZ) goto L_0086333b;
L_008632f0:; BB(0x008632f0);
    /* 008632f0: cmp edi, 0x6f */ {  u32 a = r_edi; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008632f3: jne 0x863303 */ if (!fZ) goto L_00863303;
L_008632f5:; BB(0x008632f5);
    /* 008632f5: cmp ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008632f8: jge 0x86333b */ if ((fS==fO)) goto L_0086333b;
L_008632fa:; BB(0x008632fa);
    /* 008632fa: shl dword ptr [ebp - 0x1a0], 3 */ { u32 ad = (u32)(r_ebp+0xfffffe60u); u32 c = (3u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 00863301: jmp 0x863341 */ goto L_00863341;
L_00863303:; BB(0x00863303);
    /* 00863303: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 00863309: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0086330c: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086330e: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 00863314: jmp 0x863341 */ goto L_00863341;
L_00863316:; BB(0x00863316);
    /* 00863316: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863317: call 0x8582c0 */ r_esp -= 4; W32(r_esp, 0x86331cu); f_008582c0();
    /* 0086331c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086331d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086331f: je 0x86333b */ if (fZ) goto L_0086333b;
L_00863321:; BB(0x00863321);
    /* 00863321: shl dword ptr [ebp - 0x1a0], 4 */ { u32 ad = (u32)(r_ebp+0xfffffe60u); u32 c = (4u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 00863328: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863329: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x86332eu); f_00858286();
    /* 0086332e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086332f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863331: jne 0x863341 */ if (!fZ) goto L_00863341;
L_00863333:; BB(0x00863333);
    /* 00863333: and ebx, 0xffffffdf */ {  u32 a = r_ebx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00863336: sub ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00863339: jmp 0x863341 */ goto L_00863341;
L_0086333b:; BB(0x0086333b);
    /* 0086333b: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00863341:; BB(0x00863341);
    /* 00863341: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863348: jne 0x86338b */ if (!fZ) goto L_0086338b;
L_0086334a:; BB(0x0086334a);
    /* 0086334a: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863350: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 00863356: lea eax, [eax + ebx - 0x30] */ r_eax = (u32)(r_eax+r_ebx+0xffffffd0u);
    /* 0086335a: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 00863360: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863367: je 0x86337a */ if (fZ) goto L_0086337a;
L_00863369:; BB(0x00863369);
    /* 00863369: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0086336f: jne 0x86337a */ if (!fZ) goto L_0086337a;
L_00863371:; BB(0x00863371);
    /* 00863371: mov byte ptr [ebp - 0x17d], 1 */ W8((u32)(r_ebp+0xfffffe83u), 0x1u);
    /* 00863378: jmp 0x86339f */ goto L_0086339f;
L_0086337a:; BB(0x0086337a);
    /* 0086337a: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863380: mov edx, esi */ r_edx = r_esi;
    /* 00863382: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x863387u); f_00862777();
    /* 00863387: mov ebx, eax */ r_ebx = r_eax;
    /* 00863389: jmp 0x86339f */ goto L_0086339f;
L_0086338b:; BB(0x0086338b);
    /* 0086338b: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00863391: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863394: je 0x86339f */ if (fZ) goto L_0086339f;
L_00863396:; BB(0x00863396);
    /* 00863396: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863397: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863398: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x86339du); f_0086923c();
    /* 0086339d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086339e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086339f:; BB(0x0086339f);
    /* 0086339f: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008633a6: je 0x8632db */ if (fZ) goto L_008632db;
L_008633ac:; BB(0x008633ac);
    /* 008633ac: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_008633b2:; BB(0x008633b2);
    /* 008633b2: cmp byte ptr [ebp - 0x197], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe69u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008633b9: je 0x8633c1 */ if (fZ) goto L_008633c1;
L_008633bb:; BB(0x008633bb);
    /* 008633bb: neg dword ptr [ebp - 0x1a0] */ { u32 ad = (u32)(r_ebp+0xfffffe60u); u32 x = R32(ad); u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008633c1:; BB(0x008633c1);
    /* 008633c1: cmp edi, 0x46 */ {  u32 a = r_edi; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008633c4: jne 0x8633cd */ if (!fZ) goto L_008633cd;
L_008633c6:; BB(0x008633c6);
    /* 008633c6: and dword ptr [ebp - 0x19c], 0 */ { u32 ad = (u32)(r_ebp+0xfffffe64u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008633cd:; BB(0x008633cd);
    /* 008633cd: cmp dword ptr [ebp - 0x19c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008633d4: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_008633da:; BB(0x008633da);
    /* 008633da: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008633e1: jne 0x863421 */ if (!fZ) goto L_00863421;
L_008633e3:; BB(0x008633e3);
    /* 008633e3: inc dword ptr [ebp - 0x1b8] */ { u32 ad = (u32)(r_ebp+0xfffffe48u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008633e9: mov ebx, dword ptr [ebp - 0x1b0] */ r_ebx = R32((u32)(r_ebp+0xfffffe50u));
    /* 008633ef: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
L_008633f5:; BB(0x008633f5);
    /* 008633f5: cmp dword ptr [ebp - 0x1c8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008633fc: je 0x863411 */ if (fZ) goto L_00863411;
L_008633fe:; BB(0x008633fe);
    /* 008633fe: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00863404: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00863406: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 0086340c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0086340f: jmp 0x863421 */ goto L_00863421;
L_00863411:; BB(0x00863411);
    /* 00863411: cmp byte ptr [ebp - 0x18d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe73u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863418: je 0x86341e */ if (fZ) goto L_0086341e;
L_0086341a:; BB(0x0086341a);
    /* 0086341a: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0086341c: jmp 0x863421 */ goto L_00863421;
L_0086341e:; BB(0x0086341e);
    /* 0086341e: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
L_00863421:; BB(0x00863421);
    /* 00863421: inc byte ptr [ebp - 0x195] */ { u32 ad = (u32)(r_ebp+0xfffffe6bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00863427: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086342a: jmp 0x8634a3 */ goto L_008634a3;
L_0086342c:; BB(0x0086342c);
    /* 0086342c: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863432: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00863435: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x86343au); f_00862777();
    /* 0086343a: mov ebx, eax */ r_ebx = r_eax;
    /* 0086343c: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00863442: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 00863445: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863446: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00863449: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086344b: jne 0x863486 */ if (!fZ) goto L_00863486;
L_0086344d:; BB(0x0086344d);
    /* 0086344d: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 00863450: mov ecx, dword ptr [0xa23fa0] */ r_ecx = R32((u32)(0xa23fa0u));
    /* 00863456: test byte ptr [ecx + eax*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_eax*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086345b: je 0x8634a3 */ if (fZ) goto L_008634a3;
L_0086345d:; BB(0x0086345d);
    /* 0086345d: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863463: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00863466: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x86346bu); f_00862777();
    /* 0086346b: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 0086346e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086346f: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00863472: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863474: je 0x86349d */ if (fZ) goto L_0086349d;
L_00863476:; BB(0x00863476);
    /* 00863476: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863479: je 0x863486 */ if (fZ) goto L_00863486;
L_0086347b:; BB(0x0086347b);
    /* 0086347b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086347e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086347f: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x863484u); f_0086923c();
    /* 00863484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863485: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00863486:; BB(0x00863486);
    /* 00863486: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_00863489:; BB(0x00863489);
    /* 00863489: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_0086348b:; BB(0x0086348b);
    /* 0086348b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086348e: push dword ptr [ebp - 0x194] */ { u32 v = R32((u32)(r_ebp+0xfffffe6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00863494: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x863499u); f_0086923c();
    /* 00863499: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086349a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086349b: jmp 0x8634c2 */ goto L_008634c2;
L_0086349d:; BB(0x0086349d);
    /* 0086349d: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008634a3:; BB(0x008634a3);
    /* 008634a3: cmp dword ptr [ebp - 0x194], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe6cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008634aa: jne 0x8627d0 */ if (!fZ) goto L_008627d0;
L_008634b0:; BB(0x008634b0);
    /* 008634b0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008634b3: cmp byte ptr [eax], 0x25 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x25u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008634b6: jne 0x8634c2 */ if (!fZ) goto L_008634c2;
L_008634b8:; BB(0x008634b8);
    /* 008634b8: cmp byte ptr [eax + 1], 0x6e */ {  u32 a = R8((u32)(r_eax+0x1u)); u32 b = 0x6eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008634bc: je 0x8627d0 */ if (fZ) goto L_008627d0;
L_008634c2:; BB(0x008634c2);
    /* 008634c2: cmp dword ptr [ebp - 0x1d8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008634c9: jne 0x8634d7 */ if (!fZ) goto L_008634d7;
L_008634cb:; BB(0x008634cb);
    /* 008634cb: push dword ptr [ebp - 0x1bc] */ { u32 v = R32((u32)(r_ebp+0xfffffe44u)); r_esp -= 4; W32(r_esp, v); }
    /* 008634d1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8634d6u); f_00858882();
    /* 008634d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008634d7:; BB(0x008634d7);
    /* 008634d7: mov eax, dword ptr [ebp - 0x1b8] */ r_eax = R32((u32)(r_ebp+0xfffffe48u));
    /* 008634dd: cmp dword ptr [ebp - 0x194], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe6cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008634e4: jne 0x8634f5 */ if (!fZ) goto L_008634f5;
L_008634e6:; BB(0x008634e6);
    /* 008634e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008634e8: jne 0x8634f5 */ if (!fZ) goto L_008634f5;
L_008634ea:; BB(0x008634ea);
    /* 008634ea: cmp byte ptr [ebp - 0x195], al */ {  u32 a = R8((u32)(r_ebp+0xfffffe6bu)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008634f0: jne 0x8634f5 */ if (!fZ) goto L_008634f5;
L_008634f2:; BB(0x008634f2);
    /* 008634f2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008634f5:; BB(0x008634f5);
    /* 008634f5: lea esp, [ebp - 0x1e8] */ r_esp = (u32)(r_ebp+0xfffffe18u);
    /* 008634fb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008634fe: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x863503u); f_0085e419();
    /* 00863503: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863508u); f_0085e5e7();
    /* 00863508: ret  */ FN_RET(0x0086278d); r_esp += 4; return;
}

void f_00862db7(void)
{
    FN_ENTER(0x00862db7);
    /* 00862db7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00862db9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00862dba: ret  */ FN_RET(0x00862db7); r_esp += 4; return;
}

void f_00862dbb(void)
{
    FN_ENTER(0x00862dbb);
    goto L_00862dbb;
L_008627d0:; BB(0x008627d0);
    /* 008627d0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008627d3: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008627d5: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008627d7: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_008627dd:; BB(0x008627dd);
    /* 008627dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008627e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008627e1: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x8627e6u); f_008582ff();
    /* 008627e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008627e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008627e9: je 0x862832 */ if (fZ) goto L_00862832;
L_008627eb:; BB(0x008627eb);
    /* 008627eb: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008627f1:; BB(0x008627f1);
    /* 008627f1: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008627f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008627fa: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x8627ffu); f_00862777();
    /* 008627ff: mov esi, eax */ r_esi = r_eax;
    /* 00862801: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862802: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x862807u); f_008582ff();
    /* 00862807: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862808: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086280a: jne 0x8627f1 */ if (!fZ) goto L_008627f1;
L_0086280c:; BB(0x0086280c);
    /* 0086280c: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086280f: je 0x86281c */ if (fZ) goto L_0086281c;
L_00862811:; BB(0x00862811);
    /* 00862811: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862814: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862815: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x86281au); f_0086923c();
    /* 0086281a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086281b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086281c:; BB(0x0086281c);
    /* 0086281c: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086281f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00862822: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00862825: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862826: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x86282bu); f_008582ff();
    /* 0086282b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086282c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086282e: jne 0x86281c */ if (!fZ) goto L_0086281c;
L_00862830:; BB(0x00862830);
    /* 00862830: jmp 0x8627d0 */ goto L_008627d0;
L_00862832:; BB(0x00862832);
    /* 00862832: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00862835: cmp byte ptr [esi], 0x25 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x25u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862838: jne 0x86342c */ if (!fZ) goto L_0086342c;
L_0086283e:; BB(0x0086283e);
    /* 0086283e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00862840: mov dword ptr [ebp - 0x1a0], edi */ W32((u32)(r_ebp+0xfffffe60u), r_edi);
    /* 00862846: mov byte ptr [ebp - 0x198], 0 */ W8((u32)(r_ebp+0xfffffe68u), 0x0u);
    /* 0086284d: mov dword ptr [ebp - 0x19c], edi */ W32((u32)(r_ebp+0xfffffe64u), r_edi);
    /* 00862853: mov dword ptr [ebp - 0x1b4], edi */ W32((u32)(r_ebp+0xfffffe4cu), r_edi);
    /* 00862859: mov dword ptr [ebp - 0x18c], edi */ W32((u32)(r_ebp+0xfffffe74u), r_edi);
    /* 0086285f: mov byte ptr [ebp - 0x1a1], 0 */ W8((u32)(r_ebp+0xfffffe5fu), 0x0u);
    /* 00862866: mov byte ptr [ebp - 0x197], 0 */ W8((u32)(r_ebp+0xfffffe69u), 0x0u);
    /* 0086286d: mov byte ptr [ebp - 0x18e], 0 */ W8((u32)(r_ebp+0xfffffe72u), 0x0u);
    /* 00862874: mov byte ptr [ebp - 0x17d], 0 */ W8((u32)(r_ebp+0xfffffe83u), 0x0u);
    /* 0086287b: mov byte ptr [ebp - 0x196], 0 */ W8((u32)(r_ebp+0xfffffe6au), 0x0u);
    /* 00862882: mov byte ptr [ebp - 0x185], 0 */ W8((u32)(r_ebp+0xfffffe7bu), 0x0u);
    /* 00862889: mov byte ptr [ebp - 0x18d], 1 */ W8((u32)(r_ebp+0xfffffe73u), 0x1u);
    /* 00862890: mov dword ptr [ebp - 0x1c8], edi */ W32((u32)(r_ebp+0xfffffe38u), r_edi);
L_00862896:; BB(0x00862896);
    /* 00862896: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862897: movzx ebx, byte ptr [esi] */ r_ebx = (u32)R8((u32)(r_esi));
    /* 0086289a: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 0086289d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086289e: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8628a3u); f_00858286();
    /* 008628a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008628a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628a6: je 0x8628ba */ if (fZ) goto L_008628ba;
L_008628a8:; BB(0x008628a8);
    /* 008628a8: inc dword ptr [ebp - 0x1b4] */ { u32 ad = (u32)(r_ebp+0xfffffe4cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008628ae: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 008628b1: lea edi, [ebx + eax*2 - 0x30] */ r_edi = (u32)(r_ebx+r_eax*2+0xffffffd0u);
    /* 008628b5: jmp 0x862979 */ goto L_00862979;
L_008628ba:; BB(0x008628ba);
    /* 008628ba: cmp ebx, 0x4e */ {  u32 a = r_ebx; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008628bd: jg 0x862948 */ if ((!fZ&&fS==fO)) goto L_00862948;
L_008628c3:; BB(0x008628c3);
    /* 008628c3: je 0x862979 */ if (fZ) goto L_00862979;
L_008628c9:; BB(0x008628c9);
    /* 008628c9: cmp ebx, 0x2a */ {  u32 a = r_ebx; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628cc: je 0x862940 */ if (fZ) goto L_00862940;
L_008628ce:; BB(0x008628ce);
    /* 008628ce: cmp ebx, 0x46 */ {  u32 a = r_ebx; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628d1: je 0x862979 */ if (fZ) goto L_00862979;
L_008628d7:; BB(0x008628d7);
    /* 008628d7: cmp ebx, 0x49 */ {  u32 a = r_ebx; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628da: je 0x8628ec */ if (fZ) goto L_008628ec;
L_008628dc:; BB(0x008628dc);
    /* 008628dc: cmp ebx, 0x4c */ {  u32 a = r_ebx; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008628df: jne 0x862957 */ if (!fZ) goto L_00862957;
L_008628e1:; BB(0x008628e1);
    /* 008628e1: inc byte ptr [ebp - 0x18d] */ { u32 ad = (u32)(r_ebp+0xfffffe73u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008628e7: jmp 0x862979 */ goto L_00862979;
L_008628ec:; BB(0x008628ec);
    /* 008628ec: mov cl, byte ptr [esi + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 008628ef: cmp cl, 0x36 */ {  u32 a = (u8)r_ecx; u32 b = 0x36u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008628f2: jne 0x862914 */ if (!fZ) goto L_00862914;
L_008628f4:; BB(0x008628f4);
    /* 008628f4: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 008628f7: cmp byte ptr [eax], 0x34 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x34u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008628fa: jne 0x862914 */ if (!fZ) goto L_00862914;
L_008628fc:; BB(0x008628fc);
    /* 008628fc: mov esi, eax */ r_esi = r_eax;
    /* 008628fe: inc dword ptr [ebp - 0x1c8] */ { u32 ad = (u32)(r_ebp+0xfffffe38u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862904: and dword ptr [ebp - 0x1ac], 0 */ { u32 ad = (u32)(r_ebp+0xfffffe54u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086290b: and dword ptr [ebp - 0x1a8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffe58u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00862912: jmp 0x862979 */ goto L_00862979;
L_00862914:; BB(0x00862914);
    /* 00862914: cmp cl, 0x33 */ {  u32 a = (u8)r_ecx; u32 b = 0x33u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862917: jne 0x862925 */ if (!fZ) goto L_00862925;
L_00862919:; BB(0x00862919);
    /* 00862919: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 0086291c: cmp byte ptr [eax], 0x32 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x32u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086291f: jne 0x862925 */ if (!fZ) goto L_00862925;
L_00862921:; BB(0x00862921);
    /* 00862921: mov esi, eax */ r_esi = r_eax;
    /* 00862923: jmp 0x862979 */ goto L_00862979;
L_00862925:; BB(0x00862925);
    /* 00862925: cmp cl, 0x64 */ {  u32 a = (u8)r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862928: je 0x862979 */ if (fZ) goto L_00862979;
L_0086292a:; BB(0x0086292a);
    /* 0086292a: cmp cl, 0x69 */ {  u32 a = (u8)r_ecx; u32 b = 0x69u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086292d: je 0x862979 */ if (fZ) goto L_00862979;
L_0086292f:; BB(0x0086292f);
    /* 0086292f: cmp cl, 0x6f */ {  u32 a = (u8)r_ecx; u32 b = 0x6fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862932: je 0x862979 */ if (fZ) goto L_00862979;
L_00862934:; BB(0x00862934);
    /* 00862934: cmp cl, 0x78 */ {  u32 a = (u8)r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862937: je 0x862979 */ if (fZ) goto L_00862979;
L_00862939:; BB(0x00862939);
    /* 00862939: cmp cl, 0x58 */ {  u32 a = (u8)r_ecx; u32 b = 0x58u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086293c: jne 0x862957 */ if (!fZ) goto L_00862957;
L_0086293e:; BB(0x0086293e);
    /* 0086293e: jmp 0x862979 */ goto L_00862979;
L_00862940:; BB(0x00862940);
    /* 00862940: inc byte ptr [ebp - 0x18e] */ { u32 ad = (u32)(r_ebp+0xfffffe72u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00862946: jmp 0x862979 */ goto L_00862979;
L_00862948:; BB(0x00862948);
    /* 00862948: cmp ebx, 0x68 */ {  u32 a = r_ebx; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086294b: je 0x86296d */ if (fZ) goto L_0086296d;
L_0086294d:; BB(0x0086294d);
    /* 0086294d: cmp ebx, 0x6c */ {  u32 a = r_ebx; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862950: je 0x86295f */ if (fZ) goto L_0086295f;
L_00862952:; BB(0x00862952);
    /* 00862952: cmp ebx, 0x77 */ {  u32 a = r_ebx; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862955: je 0x862965 */ if (fZ) goto L_00862965;
L_00862957:; BB(0x00862957);
    /* 00862957: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086295d: jmp 0x862979 */ goto L_00862979;
L_0086295f:; BB(0x0086295f);
    /* 0086295f: inc byte ptr [ebp - 0x18d] */ { u32 ad = (u32)(r_ebp+0xfffffe73u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00862965:; BB(0x00862965);
    /* 00862965: inc byte ptr [ebp - 0x185] */ { u32 ad = (u32)(r_ebp+0xfffffe7bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0086296b: jmp 0x862979 */ goto L_00862979;
L_0086296d:; BB(0x0086296d);
    /* 0086296d: dec byte ptr [ebp - 0x18d] */ { u32 ad = (u32)(r_ebp+0xfffffe73u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 00862973: dec byte ptr [ebp - 0x185] */ { u32 ad = (u32)(r_ebp+0xfffffe7bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
L_00862979:; BB(0x00862979);
    /* 00862979: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862980: je 0x862896 */ if (fZ) goto L_00862896;
L_00862986:; BB(0x00862986);
    /* 00862986: mov dword ptr [ebp - 0x18c], edi */ W32((u32)(r_ebp+0xfffffe74u), r_edi);
    /* 0086298c: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 0086298f: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862996: jne 0x8629b2 */ if (!fZ) goto L_008629b2;
L_00862998:; BB(0x00862998);
    /* 00862998: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0086299b: mov dword ptr [ebp - 0x1dc], eax */ W32((u32)(r_ebp+0xfffffe24u), r_eax);
    /* 008629a1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008629a4: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 008629a7: mov ebx, dword ptr [eax - 4] */ r_ebx = R32((u32)(r_eax+0xfffffffcu));
    /* 008629aa: mov dword ptr [ebp - 0x1b0], ebx */ W32((u32)(r_ebp+0xfffffe50u), r_ebx);
    /* 008629b0: jmp 0x8629b8 */ goto L_008629b8;
L_008629b2:; BB(0x008629b2);
    /* 008629b2: mov ebx, dword ptr [ebp - 0x1b0] */ r_ebx = R32((u32)(r_ebp+0xfffffe50u));
L_008629b8:; BB(0x008629b8);
    /* 008629b8: mov byte ptr [ebp - 0x17d], 0 */ W8((u32)(r_ebp+0xfffffe83u), 0x0u);
    /* 008629bf: cmp byte ptr [ebp - 0x185], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe7bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008629c6: jne 0x8629e0 */ if (!fZ) goto L_008629e0;
L_008629c8:; BB(0x008629c8);
    /* 008629c8: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008629ca: cmp al, 0x53 */ {  u32 a = (u8)r_eax; u32 b = 0x53u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008629cc: je 0x8629d9 */ if (fZ) goto L_008629d9;
L_008629ce:; BB(0x008629ce);
    /* 008629ce: cmp al, 0x43 */ {  u32 a = (u8)r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008629d0: mov byte ptr [ebp - 0x185], 0xff */ W8((u32)(r_ebp+0xfffffe7bu), 0xffu);
    /* 008629d7: jne 0x8629e0 */ if (!fZ) goto L_008629e0;
L_008629d9:; BB(0x008629d9);
    /* 008629d9: mov byte ptr [ebp - 0x185], 1 */ W8((u32)(r_ebp+0xfffffe7bu), 0x1u);
L_008629e0:; BB(0x008629e0);
    /* 008629e0: movzx edi, byte ptr [esi] */ r_edi = (u32)R8((u32)(r_esi));
    /* 008629e3: or edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008629e6: mov dword ptr [ebp - 0x1c0], edi */ W32((u32)(r_ebp+0xfffffe40u), r_edi);
    /* 008629ec: cmp edi, 0x6e */ {  u32 a = r_edi; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008629ef: je 0x862a24 */ if (fZ) goto L_00862a24;
L_008629f1:; BB(0x008629f1);
    /* 008629f1: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008629f4: je 0x862a90 */ if (fZ) goto L_00862a90;
L_008629fa:; BB(0x008629fa);
    /* 008629fa: cmp edi, 0x7b */ {  u32 a = r_edi; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008629fd: je 0x862a90 */ if (fZ) goto L_00862a90;
L_00862a03:; BB(0x00862a03);
    /* 00862a03: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862a09: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00862a0c: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862a11u); f_00862777();
    /* 00862a11: mov esi, eax */ r_esi = r_eax;
    /* 00862a13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00862a14: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x862a19u); f_008582ff();
    /* 00862a19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862a1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a1c: jne 0x862a03 */ if (!fZ) goto L_00862a03;
L_00862a1e:; BB(0x00862a1e);
    /* 00862a1e: mov dword ptr [ebp - 0x194], esi */ W32((u32)(r_ebp+0xfffffe6cu), r_esi);
L_00862a24:; BB(0x00862a24);
    /* 00862a24: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00862a27:; BB(0x00862a27);
    /* 00862a27: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 00862a2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a2f: je 0x862a3e */ if (fZ) goto L_00862a3e;
L_00862a31:; BB(0x00862a31);
    /* 00862a31: cmp dword ptr [ebp - 0x18c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a38: je 0x862d34 */ if (fZ) goto L_00862d34;
L_00862a3e:; BB(0x00862a3e);
    /* 00862a3e: cmp edi, 0x6f */ {  u32 a = r_edi; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862a41: jg 0x862d00 */ if ((!fZ&&fS==fO)) goto L_00862d00;
L_00862a47:; BB(0x00862a47);
    /* 00862a47: je 0x863121 */ if (fZ) goto L_00863121;
L_00862a4d:; BB(0x00862a4d);
    /* 00862a4d: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a50: je 0x862cd3 */ if (fZ) goto L_00862cd3;
L_00862a56:; BB(0x00862a56);
    /* 00862a56: cmp edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862a59: je 0x863121 */ if (fZ) goto L_00863121;
L_00862a5f:; BB(0x00862a5f);
    /* 00862a5f: jle 0x862d26 */ if ((fZ||fS!=fO)) goto L_00862d26;
L_00862a65:; BB(0x00862a65);
    /* 00862a65: cmp edi, 0x67 */ {  u32 a = r_edi; u32 b = 0x67u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862a68: jle 0x862ac9 */ if ((fZ||fS!=fO)) goto L_00862ac9;
L_00862a6a:; BB(0x00862a6a);
    /* 00862a6a: cmp edi, 0x69 */ {  u32 a = r_edi; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a6d: je 0x862aab */ if (fZ) goto L_00862aab;
L_00862a6f:; BB(0x00862a6f);
    /* 00862a6f: cmp edi, 0x6e */ {  u32 a = r_edi; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862a72: jne 0x862d26 */ if (!fZ) goto L_00862d26;
L_00862a78:; BB(0x00862a78);
    /* 00862a78: mov eax, dword ptr [ebp - 0x184] */ r_eax = R32((u32)(r_ebp+0xfffffe7cu));
    /* 00862a7e: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862a85: je 0x8633f5 */ if (fZ) goto L_008633f5;
L_00862a8b:; BB(0x00862a8b);
    /* 00862a8b: jmp 0x863421 */ goto L_00863421;
L_00862a90:; BB(0x00862a90);
    /* 00862a90: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862a96: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00862a99: mov edx, esi */ r_edx = r_esi;
    /* 00862a9b: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862aa0u); f_00862777();
    /* 00862aa0: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 00862aa6: jmp 0x862a27 */ goto L_00862a27;
L_00862aab:; BB(0x00862aab);
    /* 00862aab: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00862aad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00862aae:; BB(0x00862aae);
    /* 00862aae: mov ebx, dword ptr [ebp - 0x194] */ r_ebx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00862ab4: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ab7: jne 0x862fcf */ if (!fZ) goto L_00862fcf;
L_00862abd:; BB(0x00862abd);
    /* 00862abd: mov byte ptr [ebp - 0x197], 1 */ W8((u32)(r_ebp+0xfffffe69u), 0x1u);
    /* 00862ac4: jmp 0x862fd4 */ goto L_00862fd4;
L_00862ac9:; BB(0x00862ac9);
    /* 00862ac9: lea esi, [ebp - 0x17c] */ r_esi = (u32)(r_ebp+0xfffffe84u);
    /* 00862acf: mov ebx, dword ptr [ebp - 0x194] */ r_ebx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00862ad5: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ad8: jne 0x862ae8 */ if (!fZ) goto L_00862ae8;
L_00862ada:; BB(0x00862ada);
    /* 00862ada: mov byte ptr [ebp - 0x17c], bl */ W8((u32)(r_ebp+0xfffffe84u), (u8)r_ebx);
    /* 00862ae0: lea esi, [ebp - 0x17b] */ r_esi = (u32)(r_ebp+0xfffffe85u);
    /* 00862ae6: jmp 0x862aed */ goto L_00862aed;
L_00862ae8:; BB(0x00862ae8);
    /* 00862ae8: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862aeb: jne 0x862b0d */ if (!fZ) goto L_00862b0d;
L_00862aed:; BB(0x00862aed);
    /* 00862aed: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862af3: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862af9: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00862afc: mov edx, edi */ r_edx = r_edi;
    /* 00862afe: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862b03u); f_00862777();
    /* 00862b03: mov ebx, eax */ r_ebx = r_eax;
    /* 00862b05: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00862b0b: jmp 0x862b10 */ goto L_00862b10;
L_00862b0d:; BB(0x00862b0d);
    /* 00862b0d: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
L_00862b10:; BB(0x00862b10);
    /* 00862b10: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862b17: je 0x862b25 */ if (fZ) goto L_00862b25;
L_00862b19:; BB(0x00862b19);
    /* 00862b19: cmp dword ptr [ebp - 0x18c], 0x15d */ {  u32 a = R32((u32)(r_ebp+0xfffffe74u)); u32 b = 0x15du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862b23: jle 0x862b5f */ if ((fZ||fS!=fO)) goto L_00862b5f;
L_00862b25:; BB(0x00862b25);
    /* 00862b25: mov dword ptr [ebp - 0x18c], 0x15d */ W32((u32)(r_ebp+0xfffffe74u), 0x15du);
    /* 00862b2f: jmp 0x862b5f */ goto L_00862b5f;
L_00862b31:; BB(0x00862b31);
    /* 00862b31: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862b37: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862b3f: je 0x862b6a */ if (fZ) goto L_00862b6a;
L_00862b41:; BB(0x00862b41);
    /* 00862b41: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b47: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 00862b49: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862b4a: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b50: mov edx, edi */ r_edx = r_edi;
    /* 00862b52: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862b57u); f_00862777();
    /* 00862b57: mov ebx, eax */ r_ebx = r_eax;
    /* 00862b59: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_00862b5f:; BB(0x00862b5f);
    /* 00862b5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862b60: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x862b65u); f_00858286();
    /* 00862b65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862b66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862b68: jne 0x862b31 */ if (!fZ) goto L_00862b31;
L_00862b6a:; BB(0x00862b6a);
    /* 00862b6a: cmp byte ptr [0xa23f94], bl */ {  u32 a = R8((u32)(0xa23f94u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862b70: jne 0x862bd4 */ if (!fZ) goto L_00862bd4;
L_00862b72:; BB(0x00862b72);
    /* 00862b72: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862b78: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862b80: je 0x862bd4 */ if (fZ) goto L_00862bd4;
L_00862b82:; BB(0x00862b82);
    /* 00862b82: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862b88: mov edx, edi */ r_edx = r_edi;
    /* 00862b8a: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862b8fu); f_00862777();
    /* 00862b8f: mov ebx, eax */ r_ebx = r_eax;
    /* 00862b91: mov al, byte ptr [0xa23f94] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xa23f94u))) & 0xffu);
    /* 00862b96: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00862b98: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862b99: jmp 0x862bc3 */ goto L_00862bc3;
L_00862b9b:; BB(0x00862b9b);
    /* 00862b9b: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862ba1: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862ba7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ba9: je 0x862bd4 */ if (fZ) goto L_00862bd4;
L_00862bab:; BB(0x00862bab);
    /* 00862bab: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862bb1: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 00862bb3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862bb4: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862bba: mov edx, edi */ r_edx = r_edi;
    /* 00862bbc: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862bc1u); f_00862777();
    /* 00862bc1: mov ebx, eax */ r_ebx = r_eax;
L_00862bc3:; BB(0x00862bc3);
    /* 00862bc3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862bc4: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00862bca: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x862bcfu); f_00858286();
    /* 00862bcf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862bd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862bd2: jne 0x862b9b */ if (!fZ) goto L_00862b9b;
L_00862bd4:; BB(0x00862bd4);
    /* 00862bd4: cmp dword ptr [ebp - 0x19c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862bdb: je 0x862c78 */ if (fZ) goto L_00862c78;
L_00862be1:; BB(0x00862be1);
    /* 00862be1: cmp ebx, 0x65 */ {  u32 a = r_ebx; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862be4: je 0x862bef */ if (fZ) goto L_00862bef;
L_00862be6:; BB(0x00862be6);
    /* 00862be6: cmp ebx, 0x45 */ {  u32 a = r_ebx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862be9: jne 0x862c78 */ if (!fZ) goto L_00862c78;
L_00862bef:; BB(0x00862bef);
    /* 00862bef: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862bf5: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862bfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862bfd: je 0x862c78 */ if (fZ) goto L_00862c78;
L_00862bff:; BB(0x00862bff);
    /* 00862bff: mov byte ptr [esi], 0x65 */ W8((u32)(r_esi), 0x65u);
    /* 00862c02: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862c03: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c09: mov edx, edi */ r_edx = r_edi;
    /* 00862c0b: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862c10u); f_00862777();
    /* 00862c10: mov ebx, eax */ r_ebx = r_eax;
    /* 00862c12: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00862c18: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c1b: jne 0x862c22 */ if (!fZ) goto L_00862c22;
L_00862c1d:; BB(0x00862c1d);
    /* 00862c1d: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00862c1f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862c20: jmp 0x862c27 */ goto L_00862c27;
L_00862c22:; BB(0x00862c22);
    /* 00862c22: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c25: jne 0x862c6d */ if (!fZ) goto L_00862c6d;
L_00862c27:; BB(0x00862c27);
    /* 00862c27: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862c2d: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c35: jne 0x862c58 */ if (!fZ) goto L_00862c58;
L_00862c37:; BB(0x00862c37);
    /* 00862c37: and dword ptr [ebp - 0x18c], eax */ { u32 ad = (u32)(r_ebp+0xfffffe74u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c3d: jmp 0x862c6d */ goto L_00862c6d;
L_00862c3f:; BB(0x00862c3f);
    /* 00862c3f: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862c45: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c4d: je 0x862c78 */ if (fZ) goto L_00862c78;
L_00862c4f:; BB(0x00862c4f);
    /* 00862c4f: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c55: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 00862c57: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00862c58:; BB(0x00862c58);
    /* 00862c58: mov edx, edi */ r_edx = r_edi;
    /* 00862c5a: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c60: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862c65u); f_00862777();
    /* 00862c65: mov ebx, eax */ r_ebx = r_eax;
    /* 00862c67: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_00862c6d:; BB(0x00862c6d);
    /* 00862c6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862c6e: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x862c73u); f_00858286();
    /* 00862c73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c76: jne 0x862c3f */ if (!fZ) goto L_00862c3f;
L_00862c78:; BB(0x00862c78);
    /* 00862c78: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862c7e: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c81: je 0x862c8c */ if (fZ) goto L_00862c8c;
L_00862c83:; BB(0x00862c83);
    /* 00862c83: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862c84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862c85: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x862c8au); f_0086923c();
    /* 00862c8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862c8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00862c8c:; BB(0x00862c8c);
    /* 00862c8c: cmp dword ptr [ebp - 0x19c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862c93: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_00862c99:; BB(0x00862c99);
    /* 00862c99: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862ca0: jne 0x863421 */ if (!fZ) goto L_00863421;
L_00862ca6:; BB(0x00862ca6);
    /* 00862ca6: inc dword ptr [ebp - 0x1b8] */ { u32 ad = (u32)(r_ebp+0xfffffe48u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862cac: mov byte ptr [esi], 0 */ W8((u32)(r_esi), 0x0u);
    /* 00862caf: lea eax, [ebp - 0x17c] */ r_eax = (u32)(r_ebp+0xfffffe84u);
    /* 00862cb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862cb6: push dword ptr [ebp - 0x1b0] */ { u32 v = R32((u32)(r_ebp+0xfffffe50u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862cbc: movsx eax, byte ptr [ebp - 0x18d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe73u));
    /* 00862cc3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00862cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862cc5: call dword ptr [0xa23c78] */ { u32 t = R32((u32)(0xa23c78u)); r_esp -= 4; W32(r_esp, 0x862ccbu); call_ind(t); }
    /* 00862ccb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00862cce: jmp 0x863421 */ goto L_00863421;
L_00862cd3:; BB(0x00862cd3);
    /* 00862cd3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862cd5: jne 0x862ce7 */ if (!fZ) goto L_00862ce7;
L_00862cd7:; BB(0x00862cd7);
    /* 00862cd7: mov dword ptr [ebp - 0x1b4], 1 */ W32((u32)(r_ebp+0xfffffe4cu), 0x1u);
    /* 00862ce1: inc dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00862ce7:; BB(0x00862ce7);
    /* 00862ce7: cmp byte ptr [ebp - 0x185], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe7bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00862cee: jle 0x862eb1 */ if ((fZ||fS!=fO)) goto L_00862eb1;
L_00862cf4:; BB(0x00862cf4);
    /* 00862cf4: mov byte ptr [ebp - 0x196], 1 */ W8((u32)(r_ebp+0xfffffe6au), 0x1u);
    /* 00862cfb: jmp 0x862eb1 */ goto L_00862eb1;
L_00862d00:; BB(0x00862d00);
    /* 00862d00: mov eax, edi */ r_eax = r_edi;
    /* 00862d02: sub eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d05: je 0x86311a */ if (fZ) goto L_0086311a;
L_00862d0b:; BB(0x00862d0b);
    /* 00862d0b: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d0e: je 0x862ce7 */ if (fZ) goto L_00862ce7;
L_00862d10:; BB(0x00862d10);
    /* 00862d10: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00862d11: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d12: je 0x863121 */ if (fZ) goto L_00863121;
L_00862d18:; BB(0x00862d18);
    /* 00862d18: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d1b: je 0x862aae */ if (fZ) goto L_00862aae;
L_00862d21:; BB(0x00862d21);
    /* 00862d21: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00862d24: je 0x862d61 */ if (fZ) goto L_00862d61;
L_00862d26:; BB(0x00862d26);
    /* 00862d26: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00862d29: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00862d2c: cmp eax, dword ptr [ebp - 0x194] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862d32: je 0x862d40 */ if (fZ) goto L_00862d40;
L_00862d34:; BB(0x00862d34);
    /* 00862d34: cmp dword ptr [ebp - 0x194], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe6cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862d3b: jmp 0x863489 */ goto L_00863489;
L_00862d40:; BB(0x00862d40);
    /* 00862d40: dec byte ptr [ebp - 0x195] */ { u32 ad = (u32)(r_ebp+0xfffffe6bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 00862d46: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862d4d: jne 0x863421 */ if (!fZ) goto L_00863421;
L_00862d53:; BB(0x00862d53);
    /* 00862d53: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 00862d59: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00862d5c: jmp 0x863421 */ goto L_00863421;
L_00862d61:; BB(0x00862d61);
    /* 00862d61: cmp byte ptr [ebp - 0x185], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe7bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00862d68: jle 0x862d71 */ if ((fZ||fS!=fO)) goto L_00862d71;
L_00862d6a:; BB(0x00862d6a);
    /* 00862d6a: mov byte ptr [ebp - 0x196], 1 */ W8((u32)(r_ebp+0xfffffe6au), 0x1u);
L_00862d71:; BB(0x00862d71);
    /* 00862d71: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00862d74: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862d75: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00862d78: mov dword ptr [ebp - 0x1d0], edi */ W32((u32)(r_ebp+0xfffffe30u), r_edi);
    /* 00862d7e: cmp byte ptr [edi], 0x5e */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x5eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862d81: jne 0x862d91 */ if (!fZ) goto L_00862d91;
L_00862d83:; BB(0x00862d83);
    /* 00862d83: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862d84: mov dword ptr [ebp - 0x1d0], edi */ W32((u32)(r_ebp+0xfffffe30u), r_edi);
    /* 00862d8a: mov byte ptr [ebp - 0x1a1], 0xff */ W8((u32)(r_ebp+0xfffffe5fu), 0xffu);
L_00862d91:; BB(0x00862d91);
    /* 00862d91: mov ebx, dword ptr [ebp - 0x1bc] */ r_ebx = R32((u32)(r_ebp+0xfffffe44u));
    /* 00862d97: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862d99: jne 0x862df8 */ if (!fZ) goto L_00862df8;
L_00862d9b:; BB(0x00862d9b);
    /* 00862d9b: and dword ptr [ebp - 4], ebx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00862d9e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00862da0: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00862da1: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x862da6u); f_00858020();
    /* 00862da6: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00862da9: mov ebx, esp */ r_ebx = r_esp;
    /* 00862dab: mov dword ptr [ebp - 0x1bc], ebx */ W32((u32)(r_ebp+0xfffffe44u), r_ebx);
    /* 00862db1: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00862db5: jmp 0x862df8 */ goto L_00862df8;
L_00862dbb:; BB(0x00862dbb);
    /* 00862dbb: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00862dbe: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x862dc3u); f_00865365();
    /* 00862dc3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00862dc5: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x862dcau); f_00859c55();
    /* 00862dca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862dcb: mov dword ptr [ebp - 0x1bc], eax */ W32((u32)(r_ebp+0xfffffe44u), r_eax);
    /* 00862dd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862dd3: jne 0x862dde */ if (!fZ) goto L_00862dde;
L_00862dd5:; BB(0x00862dd5);
    /* 00862dd5: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00862dd9: jmp 0x8634c2 */ goto L_008634c2;
L_00862dde:; BB(0x00862dde);
    /* 00862dde: mov dword ptr [ebp - 0x1d8], 1 */ W32((u32)(r_ebp+0xfffffe28u), 0x1u);
    /* 00862de8: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00862dec: mov edi, dword ptr [ebp - 0x1d0] */ r_edi = R32((u32)(r_ebp+0xfffffe30u));
    /* 00862df2: mov ebx, dword ptr [ebp - 0x1bc] */ r_ebx = R32((u32)(r_ebp+0xfffffe44u));
L_00862df8:; BB(0x00862df8);
    /* 00862df8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00862dfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00862dfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00862dfd: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x862e02u); f_0085f580();
    /* 00862e02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00862e05: cmp dword ptr [ebp - 0x1c0], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffe40u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862e0c: jne 0x862e85 */ if (!fZ) goto L_00862e85;
L_00862e0e:; BB(0x00862e0e);
    /* 00862e0e: cmp byte ptr [edi], 0x5d */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862e11: jne 0x862e85 */ if (!fZ) goto L_00862e85;
L_00862e13:; BB(0x00862e13);
    /* 00862e13: mov dl, 0x5d */ r_edx = (r_edx & 0xffffff00u) | ((0x5du) & 0xffu);
    /* 00862e15: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862e16: mov byte ptr [ebx + 0xb], 0x20 */ W8((u32)(r_ebx+0xbu), 0x20u);
    /* 00862e1a: jmp 0x862e8b */ goto L_00862e8b;
L_00862e1c:; BB(0x00862e1c);
    /* 00862e1c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862e1d: cmp al, 0x2d */ {  u32 a = (u8)r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862e1f: jne 0x862e6c */ if (!fZ) goto L_00862e6c;
L_00862e21:; BB(0x00862e21);
    /* 00862e21: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862e23: je 0x862e6c */ if (fZ) goto L_00862e6c;
L_00862e25:; BB(0x00862e25);
    /* 00862e25: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00862e27: cmp cl, 0x5d */ {  u32 a = (u8)r_ecx; u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862e2a: je 0x862e6c */ if (fZ) goto L_00862e6c;
L_00862e2c:; BB(0x00862e2c);
    /* 00862e2c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00862e2d: cmp dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 00862e2f: jae 0x862e35 */ if (!fC) goto L_00862e35;
L_00862e31:; BB(0x00862e31);
    /* 00862e31: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00862e33: jmp 0x862e39 */ goto L_00862e39;
L_00862e35:; BB(0x00862e35);
    /* 00862e35: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 00862e37: mov dl, cl */ r_edx = (r_edx & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_00862e39:; BB(0x00862e39);
    /* 00862e39: cmp dl, al */ {  u32 a = (u8)r_edx; u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00862e3b: ja 0x862e68 */ if ((!fC&&!fZ)) goto L_00862e68;
L_00862e3d:; BB(0x00862e3d);
    /* 00862e3d: movzx esi, dl */ r_esi = (u32)(u8)r_edx;
    /* 00862e40: sub al, dl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862e42: inc al */ { u32 x = (u8)r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862e44: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00862e47: mov dword ptr [ebp - 0x1d4], eax */ W32((u32)(r_ebp+0xfffffe2cu), r_eax);
L_00862e4d:; BB(0x00862e4d);
    /* 00862e4d: mov eax, esi */ r_eax = r_esi;
    /* 00862e4f: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00862e52: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00862e54: mov ecx, esi */ r_ecx = r_esi;
    /* 00862e56: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00862e59: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00862e5b: shl dl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 00862e5d: or byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00862e5f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00862e60: dec dword ptr [ebp - 0x1d4] */ { u32 ad = (u32)(r_ebp+0xfffffe2cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00862e66: jne 0x862e4d */ if (!fZ) goto L_00862e4d;
L_00862e68:; BB(0x00862e68);
    /* 00862e68: xor dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00862e6a: jmp 0x862e8b */ goto L_00862e8b;
L_00862e6c:; BB(0x00862e6c);
    /* 00862e6c: mov byte ptr [ebp - 0x198], al */ W8((u32)(r_ebp+0xfffffe68u), (u8)r_eax);
    /* 00862e72: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00862e75: mov eax, ecx */ r_eax = r_ecx;
    /* 00862e77: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00862e7a: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00862e7c: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00862e7f: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00862e81: shl dl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 00862e83: or byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00862e85:; BB(0x00862e85);
    /* 00862e85: mov dl, byte ptr [ebp - 0x198] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe68u))) & 0xffu);
L_00862e8b:; BB(0x00862e8b);
    /* 00862e8b: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00862e8d: cmp al, 0x5d */ {  u32 a = (u8)r_eax; u32 b = 0x5du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862e8f: jne 0x862e1c */ if (!fZ) goto L_00862e1c;
L_00862e91:; BB(0x00862e91);
    /* 00862e91: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862e93: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_00862e99:; BB(0x00862e99);
    /* 00862e99: mov ebx, dword ptr [ebp - 0x1b0] */ r_ebx = R32((u32)(r_ebp+0xfffffe50u));
    /* 00862e9f: cmp dword ptr [ebp - 0x1c0], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffe40u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ea6: jne 0x862eab */ if (!fZ) goto L_00862eab;
L_00862ea8:; BB(0x00862ea8);
    /* 00862ea8: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
L_00862eab:; BB(0x00862eab);
    /* 00862eab: mov edi, dword ptr [ebp - 0x1c0] */ r_edi = R32((u32)(r_ebp+0xfffffe40u));
L_00862eb1:; BB(0x00862eb1);
    /* 00862eb1: mov esi, ebx */ r_esi = r_ebx;
    /* 00862eb3: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862eb9: cmp dword ptr [ebp - 0x194], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe6cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ec0: je 0x862ed2 */ if (fZ) goto L_00862ed2;
L_00862ec2:; BB(0x00862ec2);
    /* 00862ec2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862ec5: push dword ptr [ebp - 0x194] */ { u32 v = R32((u32)(r_ebp+0xfffffe6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00862ecb: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x862ed0u); f_0086923c();
    /* 00862ed0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00862ed1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00862ed2:; BB(0x00862ed2);
    /* 00862ed2: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ed9: je 0x862eef */ if (fZ) goto L_00862eef;
L_00862edb:; BB(0x00862edb);
    /* 00862edb: mov eax, dword ptr [ebp - 0x18c] */ r_eax = R32((u32)(r_ebp+0xfffffe74u));
    /* 00862ee1: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00862ee7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862ee9: je 0x8630d2 */ if (fZ) goto L_008630d2;
L_00862eef:; BB(0x00862eef);
    /* 00862eef: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862ef5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00862ef8: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862efdu); f_00862777();
    /* 00862efd: mov dword ptr [ebp - 0x194], eax */ W32((u32)(r_ebp+0xfffffe6cu), r_eax);
    /* 00862f03: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f06: je 0x8630bc */ if (fZ) goto L_008630bc;
L_00862f0c:; BB(0x00862f0c);
    /* 00862f0c: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f0f: je 0x862f5e */ if (fZ) goto L_00862f5e;
L_00862f11:; BB(0x00862f11);
    /* 00862f11: cmp edi, 0x73 */ {  u32 a = r_edi; u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f14: jne 0x862f25 */ if (!fZ) goto L_00862f25;
L_00862f16:; BB(0x00862f16);
    /* 00862f16: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862f19: jl 0x862f20 */ if ((fS!=fO)) goto L_00862f20;
L_00862f1b:; BB(0x00862f1b);
    /* 00862f1b: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862f1e: jle 0x862f25 */ if ((fZ||fS!=fO)) goto L_00862f25;
L_00862f20:; BB(0x00862f20);
    /* 00862f20: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f23: jne 0x862f5e */ if (!fZ) goto L_00862f5e;
L_00862f25:; BB(0x00862f25);
    /* 00862f25: cmp edi, 0x7b */ {  u32 a = r_edi; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f28: jne 0x8630bc */ if (!fZ) goto L_008630bc;
L_00862f2e:; BB(0x00862f2e);
    /* 00862f2e: mov ecx, eax */ r_ecx = r_eax;
    /* 00862f30: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00862f33: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 00862f35: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00862f36: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00862f38: mov ecx, eax */ r_ecx = r_eax;
    /* 00862f3a: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00862f3d: mov edi, dword ptr [ebp - 0x1bc] */ r_edi = R32((u32)(r_ebp+0xfffffe44u));
    /* 00862f43: movsx ecx, byte ptr [ecx + edi] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_edi));
    /* 00862f47: movsx edi, byte ptr [ebp - 0x1a1] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffe5fu));
    /* 00862f4e: xor ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00862f50: test ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862f52: je 0x8630bc */ if (fZ) goto L_008630bc;
L_00862f58:; BB(0x00862f58);
    /* 00862f58: mov edi, dword ptr [ebp - 0x1c0] */ r_edi = R32((u32)(r_ebp+0xfffffe40u));
L_00862f5e:; BB(0x00862f5e);
    /* 00862f5e: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862f65: jne 0x8630b6 */ if (!fZ) goto L_008630b6;
L_00862f6b:; BB(0x00862f6b);
    /* 00862f6b: cmp byte ptr [ebp - 0x196], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe6au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00862f72: je 0x8630a8 */ if (fZ) goto L_008630a8;
L_00862f78:; BB(0x00862f78);
    /* 00862f78: mov byte ptr [ebp - 0x1c4], al */ W8((u32)(r_ebp+0xfffffe3cu), (u8)r_eax);
    /* 00862f7e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00862f81: mov ecx, dword ptr [0xa23fa0] */ r_ecx = R32((u32)(0xa23fa0u));
    /* 00862f87: test byte ptr [ecx + eax*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_eax*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862f8c: je 0x862fa2 */ if (fZ) goto L_00862fa2;
L_00862f8e:; BB(0x00862f8e);
    /* 00862f8e: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862f94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00862f97: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862f9cu); f_00862777();
    /* 00862f9c: mov byte ptr [ebp - 0x1c3], al */ W8((u32)(r_ebp+0xfffffe3du), (u8)r_eax);
L_00862fa2:; BB(0x00862fa2);
    /* 00862fa2: push dword ptr [0xa23f90] */ { u32 v = R32((u32)(0xa23f90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862fa8: lea eax, [ebp - 0x1c4] */ r_eax = (u32)(r_ebp+0xfffffe3cu);
    /* 00862fae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862faf: lea eax, [ebp - 0x1cc] */ r_eax = (u32)(r_ebp+0xfffffe34u);
    /* 00862fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862fb6: call 0x866f7f */ r_esp -= 4; W32(r_esp, 0x862fbbu); f_00866f7f();
    /* 00862fbb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00862fbe: mov ax, word ptr [ebp - 0x1cc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffe34u))) & 0xffffu);
    /* 00862fc5: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 00862fc8: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00862fc9: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00862fca: jmp 0x8630ab */ goto L_008630ab;
L_00862fcf:; BB(0x00862fcf);
    /* 00862fcf: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862fd2: jne 0x862ffe */ if (!fZ) goto L_00862ffe;
L_00862fd4:; BB(0x00862fd4);
    /* 00862fd4: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00862fda: jne 0x862fe9 */ if (!fZ) goto L_00862fe9;
L_00862fdc:; BB(0x00862fdc);
    /* 00862fdc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862fde: je 0x862fe9 */ if (fZ) goto L_00862fe9;
L_00862fe0:; BB(0x00862fe0);
    /* 00862fe0: mov byte ptr [ebp - 0x17d], 1 */ W8((u32)(r_ebp+0xfffffe83u), 0x1u);
    /* 00862fe7: jmp 0x862ffe */ goto L_00862ffe;
L_00862fe9:; BB(0x00862fe9);
    /* 00862fe9: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862fef: mov edx, esi */ r_edx = r_esi;
    /* 00862ff1: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x862ff6u); f_00862777();
    /* 00862ff6: mov ebx, eax */ r_ebx = r_eax;
    /* 00862ff8: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_00862ffe:; BB(0x00862ffe);
    /* 00862ffe: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863001: jne 0x863164 */ if (!fZ) goto L_00863164;
L_00863007:; BB(0x00863007);
    /* 00863007: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086300d: mov edx, esi */ r_edx = r_esi;
    /* 0086300f: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x863014u); f_00862777();
    /* 00863014: mov ebx, eax */ r_ebx = r_eax;
    /* 00863016: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 0086301c: cmp bl, 0x78 */ {  u32 a = (u8)r_ebx; u32 b = 0x78u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086301f: je 0x863070 */ if (fZ) goto L_00863070;
L_00863021:; BB(0x00863021);
    /* 00863021: cmp bl, 0x58 */ {  u32 a = (u8)r_ebx; u32 b = 0x58u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863024: je 0x863070 */ if (fZ) goto L_00863070;
L_00863026:; BB(0x00863026);
    /* 00863026: mov dword ptr [ebp - 0x19c], 1 */ W32((u32)(r_ebp+0xfffffe64u), 0x1u);
    /* 00863030: cmp edi, 0x78 */ {  u32 a = r_edi; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863033: je 0x863054 */ if (fZ) goto L_00863054;
L_00863035:; BB(0x00863035);
    /* 00863035: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086303c: je 0x86304c */ if (fZ) goto L_0086304c;
L_0086303e:; BB(0x0086303e);
    /* 0086303e: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00863044: jne 0x86304c */ if (!fZ) goto L_0086304c;
L_00863046:; BB(0x00863046);
    /* 00863046: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0086304c:; BB(0x0086304c);
    /* 0086304c: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
L_0086304e:; BB(0x0086304e);
    /* 0086304e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086304f: jmp 0x863164 */ goto L_00863164;
L_00863054:; BB(0x00863054);
    /* 00863054: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086305a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086305d: je 0x863068 */ if (fZ) goto L_00863068;
L_0086305f:; BB(0x0086305f);
    /* 0086305f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863060: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863061: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x863066u); f_0086923c();
    /* 00863066: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863067: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00863068:; BB(0x00863068);
    /* 00863068: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0086306a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086306b: jmp 0x86315e */ goto L_0086315e;
L_00863070:; BB(0x00863070);
    /* 00863070: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863076: mov edx, esi */ r_edx = r_esi;
    /* 00863078: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x86307du); f_00862777();
    /* 0086307d: mov ebx, eax */ r_ebx = r_eax;
    /* 0086307f: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00863085: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086308c: je 0x8630a4 */ if (fZ) goto L_008630a4;
L_0086308e:; BB(0x0086308e);
    /* 0086308e: sub dword ptr [ebp - 0x18c], 2 */ { u32 ad = (u32)(r_ebp+0xfffffe74u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00863095: cmp dword ptr [ebp - 0x18c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe74u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086309c: jge 0x8630a4 */ if ((fS==fO)) goto L_008630a4;
L_0086309e:; BB(0x0086309e);
    /* 0086309e: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_008630a4:; BB(0x008630a4);
    /* 008630a4: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 008630a6: jmp 0x86304e */ goto L_0086304e;
L_008630a8:; BB(0x008630a8);
    /* 008630a8: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 008630aa: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008630ab:; BB(0x008630ab);
    /* 008630ab: mov dword ptr [ebp - 0x1b0], ebx */ W32((u32)(r_ebp+0xfffffe50u), r_ebx);
    /* 008630b1: jmp 0x862ed2 */ goto L_00862ed2;
L_008630b6:; BB(0x008630b6);
    /* 008630b6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008630b7: jmp 0x862ed2 */ goto L_00862ed2;
L_008630bc:; BB(0x008630bc);
    /* 008630bc: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008630c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008630c5: je 0x8630d2 */ if (fZ) goto L_008630d2;
L_008630c7:; BB(0x008630c7);
    /* 008630c7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008630ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008630cb: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x8630d0u); f_0086923c();
    /* 008630d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008630d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008630d2:; BB(0x008630d2);
    /* 008630d2: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008630d4: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_008630da:; BB(0x008630da);
    /* 008630da: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008630e1: jne 0x863421 */ if (!fZ) goto L_00863421;
L_008630e7:; BB(0x008630e7);
    /* 008630e7: inc dword ptr [ebp - 0x1b8] */ { u32 ad = (u32)(r_ebp+0xfffffe48u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008630ed: cmp dword ptr [ebp - 0x1c0], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffe40u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008630f4: je 0x863421 */ if (fZ) goto L_00863421;
L_008630fa:; BB(0x008630fa);
    /* 008630fa: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 00863100: cmp byte ptr [ebp - 0x196], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe6au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863107: je 0x863112 */ if (fZ) goto L_00863112;
L_00863109:; BB(0x00863109);
    /* 00863109: and word ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 0086310d: jmp 0x863421 */ goto L_00863421;
L_00863112:; BB(0x00863112);
    /* 00863112: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00863115: jmp 0x863421 */ goto L_00863421;
L_0086311a:; BB(0x0086311a);
    /* 0086311a: mov byte ptr [ebp - 0x18d], 1 */ W8((u32)(r_ebp+0xfffffe73u), 0x1u);
L_00863121:; BB(0x00863121);
    /* 00863121: mov ebx, dword ptr [ebp - 0x194] */ r_ebx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00863127: cmp ebx, 0x2d */ {  u32 a = r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086312a: jne 0x863135 */ if (!fZ) goto L_00863135;
L_0086312c:; BB(0x0086312c);
    /* 0086312c: mov byte ptr [ebp - 0x197], 1 */ W8((u32)(r_ebp+0xfffffe69u), 0x1u);
    /* 00863133: jmp 0x86313a */ goto L_0086313a;
L_00863135:; BB(0x00863135);
    /* 00863135: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863138: jne 0x863164 */ if (!fZ) goto L_00863164;
L_0086313a:; BB(0x0086313a);
    /* 0086313a: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00863140: jne 0x86314f */ if (!fZ) goto L_0086314f;
L_00863142:; BB(0x00863142);
    /* 00863142: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863144: je 0x86314f */ if (fZ) goto L_0086314f;
L_00863146:; BB(0x00863146);
    /* 00863146: mov byte ptr [ebp - 0x17d], 1 */ W8((u32)(r_ebp+0xfffffe83u), 0x1u);
    /* 0086314d: jmp 0x863164 */ goto L_00863164;
L_0086314f:; BB(0x0086314f);
    /* 0086314f: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863155: mov edx, esi */ r_edx = r_esi;
    /* 00863157: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x86315cu); f_00862777();
    /* 0086315c: mov ebx, eax */ r_ebx = r_eax;
L_0086315e:; BB(0x0086315e);
    /* 0086315e: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_00863164:; BB(0x00863164);
    /* 00863164: cmp dword ptr [ebp - 0x1c8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086316b: je 0x8632ce */ if (fZ) goto L_008632ce;
L_00863171:; BB(0x00863171);
    /* 00863171: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863178: jne 0x86329d */ if (!fZ) goto L_0086329d;
L_0086317e:; BB(0x0086317e);
    /* 0086317e: cmp edi, 0x78 */ {  u32 a = r_edi; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863181: je 0x8631e9 */ if (fZ) goto L_008631e9;
L_00863183:; BB(0x00863183);
    /* 00863183: cmp edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863186: je 0x8631e9 */ if (fZ) goto L_008631e9;
L_00863188:; BB(0x00863188);
    /* 00863188: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863189: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x86318eu); f_00858286();
    /* 0086318e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086318f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863191: je 0x863226 */ if (fZ) goto L_00863226;
L_00863197:; BB(0x00863197);
    /* 00863197: cmp edi, 0x6f */ {  u32 a = r_edi; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086319a: jne 0x8631c6 */ if (!fZ) goto L_008631c6;
L_0086319c:; BB(0x0086319c);
    /* 0086319c: cmp ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086319f: jge 0x863226 */ if ((fS==fO)) goto L_00863226;
L_008631a5:; BB(0x008631a5);
    /* 008631a5: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 008631ab: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 008631b1: shld ecx, eax, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_ecx = r; } }
    /* 008631b5: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008631b8: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 008631be: mov dword ptr [ebp - 0x1a8], ecx */ W32((u32)(r_ebp+0xfffffe58u), r_ecx);
    /* 008631c4: jmp 0x86322c */ goto L_0086322c;
L_008631c6:; BB(0x008631c6);
    /* 008631c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008631c8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 008631ca: push dword ptr [ebp - 0x1a8] */ { u32 v = R32((u32)(r_ebp+0xfffffe58u)); r_esp -= 4; W32(r_esp, v); }
    /* 008631d0: push dword ptr [ebp - 0x1ac] */ { u32 v = R32((u32)(r_ebp+0xfffffe54u)); r_esp -= 4; W32(r_esp, v); }
    /* 008631d6: call 0x85ada0 */ r_esp -= 4; W32(r_esp, 0x8631dbu); f_0085ada0();
    /* 008631db: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 008631e1: mov dword ptr [ebp - 0x1a8], edx */ W32((u32)(r_ebp+0xfffffe58u), r_edx);
    /* 008631e7: jmp 0x86322c */ goto L_0086322c;
L_008631e9:; BB(0x008631e9);
    /* 008631e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008631ea: call 0x8582c0 */ r_esp -= 4; W32(r_esp, 0x8631efu); f_008582c0();
    /* 008631ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008631f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008631f2: je 0x863226 */ if (fZ) goto L_00863226;
L_008631f4:; BB(0x008631f4);
    /* 008631f4: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 008631fa: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 00863200: shld ecx, eax, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_ecx = r; } }
    /* 00863204: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00863207: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 0086320d: mov dword ptr [ebp - 0x1a8], ecx */ W32((u32)(r_ebp+0xfffffe58u), r_ecx);
    /* 00863213: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863214: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x863219u); f_00858286();
    /* 00863219: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086321a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086321c: jne 0x86322c */ if (!fZ) goto L_0086322c;
L_0086321e:; BB(0x0086321e);
    /* 0086321e: and ebx, 0xffffffdf */ {  u32 a = r_ebx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00863221: sub ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00863224: jmp 0x86322c */ goto L_0086322c;
L_00863226:; BB(0x00863226);
    /* 00863226: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0086322c:; BB(0x0086322c);
    /* 0086322c: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863233: jne 0x863276 */ if (!fZ) goto L_00863276;
L_00863235:; BB(0x00863235);
    /* 00863235: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086323b: lea eax, [ebx - 0x30] */ r_eax = (u32)(r_ebx+0xffffffd0u);
    /* 0086323e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0086323f: add dword ptr [ebp - 0x1ac], eax */ { u32 ad = (u32)(r_ebp+0xfffffe54u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 00863245: adc dword ptr [ebp - 0x1a8], edx */ { u32 ad = (u32)(r_ebp+0xfffffe58u); u32 c = fC; u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 0086324b: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863252: je 0x863265 */ if (fZ) goto L_00863265;
L_00863254:; BB(0x00863254);
    /* 00863254: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0086325a: jne 0x863265 */ if (!fZ) goto L_00863265;
L_0086325c:; BB(0x0086325c);
    /* 0086325c: mov byte ptr [ebp - 0x17d], 1 */ W8((u32)(r_ebp+0xfffffe83u), 0x1u);
    /* 00863263: jmp 0x86328a */ goto L_0086328a;
L_00863265:; BB(0x00863265);
    /* 00863265: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086326b: mov edx, esi */ r_edx = r_esi;
    /* 0086326d: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x863272u); f_00862777();
    /* 00863272: mov ebx, eax */ r_ebx = r_eax;
    /* 00863274: jmp 0x86328a */ goto L_0086328a;
L_00863276:; BB(0x00863276);
    /* 00863276: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086327c: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086327f: je 0x86328a */ if (fZ) goto L_0086328a;
L_00863281:; BB(0x00863281);
    /* 00863281: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863282: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863283: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x863288u); f_0086923c();
    /* 00863288: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863289: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086328a:; BB(0x0086328a);
    /* 0086328a: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863291: je 0x86317e */ if (fZ) goto L_0086317e;
L_00863297:; BB(0x00863297);
    /* 00863297: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_0086329d:; BB(0x0086329d);
    /* 0086329d: cmp byte ptr [ebp - 0x197], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe69u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008632a4: je 0x8633c1 */ if (fZ) goto L_008633c1;
L_008632aa:; BB(0x008632aa);
    /* 008632aa: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 008632b0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 008632b2: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 008632b8: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 008632bb: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008632bd: mov dword ptr [ebp - 0x1ac], eax */ W32((u32)(r_ebp+0xfffffe54u), r_eax);
    /* 008632c3: mov dword ptr [ebp - 0x1a8], ecx */ W32((u32)(r_ebp+0xfffffe58u), r_ecx);
    /* 008632c9: jmp 0x8633c1 */ goto L_008633c1;
L_008632ce:; BB(0x008632ce);
    /* 008632ce: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008632d5: jne 0x8633b2 */ if (!fZ) goto L_008633b2;
L_008632db:; BB(0x008632db);
    /* 008632db: cmp edi, 0x78 */ {  u32 a = r_edi; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008632de: je 0x863316 */ if (fZ) goto L_00863316;
L_008632e0:; BB(0x008632e0);
    /* 008632e0: cmp edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008632e3: je 0x863316 */ if (fZ) goto L_00863316;
L_008632e5:; BB(0x008632e5);
    /* 008632e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008632e6: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8632ebu); f_00858286();
    /* 008632eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008632ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008632ee: je 0x86333b */ if (fZ) goto L_0086333b;
L_008632f0:; BB(0x008632f0);
    /* 008632f0: cmp edi, 0x6f */ {  u32 a = r_edi; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008632f3: jne 0x863303 */ if (!fZ) goto L_00863303;
L_008632f5:; BB(0x008632f5);
    /* 008632f5: cmp ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008632f8: jge 0x86333b */ if ((fS==fO)) goto L_0086333b;
L_008632fa:; BB(0x008632fa);
    /* 008632fa: shl dword ptr [ebp - 0x1a0], 3 */ { u32 ad = (u32)(r_ebp+0xfffffe60u); u32 c = (3u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 00863301: jmp 0x863341 */ goto L_00863341;
L_00863303:; BB(0x00863303);
    /* 00863303: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 00863309: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0086330c: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086330e: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 00863314: jmp 0x863341 */ goto L_00863341;
L_00863316:; BB(0x00863316);
    /* 00863316: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863317: call 0x8582c0 */ r_esp -= 4; W32(r_esp, 0x86331cu); f_008582c0();
    /* 0086331c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086331d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086331f: je 0x86333b */ if (fZ) goto L_0086333b;
L_00863321:; BB(0x00863321);
    /* 00863321: shl dword ptr [ebp - 0x1a0], 4 */ { u32 ad = (u32)(r_ebp+0xfffffe60u); u32 c = (4u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 00863328: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863329: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x86332eu); f_00858286();
    /* 0086332e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086332f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863331: jne 0x863341 */ if (!fZ) goto L_00863341;
L_00863333:; BB(0x00863333);
    /* 00863333: and ebx, 0xffffffdf */ {  u32 a = r_ebx; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00863336: sub ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00863339: jmp 0x863341 */ goto L_00863341;
L_0086333b:; BB(0x0086333b);
    /* 0086333b: inc byte ptr [ebp - 0x17d] */ { u32 ad = (u32)(r_ebp+0xfffffe83u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00863341:; BB(0x00863341);
    /* 00863341: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863348: jne 0x86338b */ if (!fZ) goto L_0086338b;
L_0086334a:; BB(0x0086334a);
    /* 0086334a: inc dword ptr [ebp - 0x19c] */ { u32 ad = (u32)(r_ebp+0xfffffe64u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863350: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 00863356: lea eax, [eax + ebx - 0x30] */ r_eax = (u32)(r_eax+r_ebx+0xffffffd0u);
    /* 0086335a: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 00863360: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863367: je 0x86337a */ if (fZ) goto L_0086337a;
L_00863369:; BB(0x00863369);
    /* 00863369: dec dword ptr [ebp - 0x18c] */ { u32 ad = (u32)(r_ebp+0xfffffe74u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0086336f: jne 0x86337a */ if (!fZ) goto L_0086337a;
L_00863371:; BB(0x00863371);
    /* 00863371: mov byte ptr [ebp - 0x17d], 1 */ W8((u32)(r_ebp+0xfffffe83u), 0x1u);
    /* 00863378: jmp 0x86339f */ goto L_0086339f;
L_0086337a:; BB(0x0086337a);
    /* 0086337a: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863380: mov edx, esi */ r_edx = r_esi;
    /* 00863382: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x863387u); f_00862777();
    /* 00863387: mov ebx, eax */ r_ebx = r_eax;
    /* 00863389: jmp 0x86339f */ goto L_0086339f;
L_0086338b:; BB(0x0086338b);
    /* 0086338b: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00863391: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863394: je 0x86339f */ if (fZ) goto L_0086339f;
L_00863396:; BB(0x00863396);
    /* 00863396: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863397: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863398: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x86339du); f_0086923c();
    /* 0086339d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086339e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086339f:; BB(0x0086339f);
    /* 0086339f: cmp byte ptr [ebp - 0x17d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe83u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008633a6: je 0x8632db */ if (fZ) goto L_008632db;
L_008633ac:; BB(0x008633ac);
    /* 008633ac: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
L_008633b2:; BB(0x008633b2);
    /* 008633b2: cmp byte ptr [ebp - 0x197], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe69u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008633b9: je 0x8633c1 */ if (fZ) goto L_008633c1;
L_008633bb:; BB(0x008633bb);
    /* 008633bb: neg dword ptr [ebp - 0x1a0] */ { u32 ad = (u32)(r_ebp+0xfffffe60u); u32 x = R32(ad); u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008633c1:; BB(0x008633c1);
    /* 008633c1: cmp edi, 0x46 */ {  u32 a = r_edi; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008633c4: jne 0x8633cd */ if (!fZ) goto L_008633cd;
L_008633c6:; BB(0x008633c6);
    /* 008633c6: and dword ptr [ebp - 0x19c], 0 */ { u32 ad = (u32)(r_ebp+0xfffffe64u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008633cd:; BB(0x008633cd);
    /* 008633cd: cmp dword ptr [ebp - 0x19c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008633d4: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_008633da:; BB(0x008633da);
    /* 008633da: cmp byte ptr [ebp - 0x18e], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe72u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008633e1: jne 0x863421 */ if (!fZ) goto L_00863421;
L_008633e3:; BB(0x008633e3);
    /* 008633e3: inc dword ptr [ebp - 0x1b8] */ { u32 ad = (u32)(r_ebp+0xfffffe48u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008633e9: mov ebx, dword ptr [ebp - 0x1b0] */ r_ebx = R32((u32)(r_ebp+0xfffffe50u));
    /* 008633ef: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
L_008633f5:; BB(0x008633f5);
    /* 008633f5: cmp dword ptr [ebp - 0x1c8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008633fc: je 0x863411 */ if (fZ) goto L_00863411;
L_008633fe:; BB(0x008633fe);
    /* 008633fe: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 00863404: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00863406: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 0086340c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0086340f: jmp 0x863421 */ goto L_00863421;
L_00863411:; BB(0x00863411);
    /* 00863411: cmp byte ptr [ebp - 0x18d], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffe73u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863418: je 0x86341e */ if (fZ) goto L_0086341e;
L_0086341a:; BB(0x0086341a);
    /* 0086341a: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0086341c: jmp 0x863421 */ goto L_00863421;
L_0086341e:; BB(0x0086341e);
    /* 0086341e: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
L_00863421:; BB(0x00863421);
    /* 00863421: inc byte ptr [ebp - 0x195] */ { u32 ad = (u32)(r_ebp+0xfffffe6bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00863427: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086342a: jmp 0x8634a3 */ goto L_008634a3;
L_0086342c:; BB(0x0086342c);
    /* 0086342c: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863432: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00863435: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x86343au); f_00862777();
    /* 0086343a: mov ebx, eax */ r_ebx = r_eax;
    /* 0086343c: mov dword ptr [ebp - 0x194], ebx */ W32((u32)(r_ebp+0xfffffe6cu), r_ebx);
    /* 00863442: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 00863445: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863446: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00863449: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086344b: jne 0x863486 */ if (!fZ) goto L_00863486;
L_0086344d:; BB(0x0086344d);
    /* 0086344d: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 00863450: mov ecx, dword ptr [0xa23fa0] */ r_ecx = R32((u32)(0xa23fa0u));
    /* 00863456: test byte ptr [ecx + eax*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_eax*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086345b: je 0x8634a3 */ if (fZ) goto L_008634a3;
L_0086345d:; BB(0x0086345d);
    /* 0086345d: inc dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863463: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00863466: call 0x862777 */ r_esp -= 4; W32(r_esp, 0x86346bu); f_00862777();
    /* 0086346b: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 0086346e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086346f: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00863472: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863474: je 0x86349d */ if (fZ) goto L_0086349d;
L_00863476:; BB(0x00863476);
    /* 00863476: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863479: je 0x863486 */ if (fZ) goto L_00863486;
L_0086347b:; BB(0x0086347b);
    /* 0086347b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086347e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086347f: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x863484u); f_0086923c();
    /* 00863484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863485: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00863486:; BB(0x00863486);
    /* 00863486: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_00863489:; BB(0x00863489);
    /* 00863489: je 0x8634c2 */ if (fZ) goto L_008634c2;
L_0086348b:; BB(0x0086348b);
    /* 0086348b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086348e: push dword ptr [ebp - 0x194] */ { u32 v = R32((u32)(r_ebp+0xfffffe6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00863494: call 0x86923c */ r_esp -= 4; W32(r_esp, 0x863499u); f_0086923c();
    /* 00863499: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086349a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086349b: jmp 0x8634c2 */ goto L_008634c2;
L_0086349d:; BB(0x0086349d);
    /* 0086349d: dec dword ptr [ebp - 0x184] */ { u32 ad = (u32)(r_ebp+0xfffffe7cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008634a3:; BB(0x008634a3);
    /* 008634a3: cmp dword ptr [ebp - 0x194], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe6cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008634aa: jne 0x8627d0 */ if (!fZ) goto L_008627d0;
L_008634b0:; BB(0x008634b0);
    /* 008634b0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008634b3: cmp byte ptr [eax], 0x25 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x25u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008634b6: jne 0x8634c2 */ if (!fZ) goto L_008634c2;
L_008634b8:; BB(0x008634b8);
    /* 008634b8: cmp byte ptr [eax + 1], 0x6e */ {  u32 a = R8((u32)(r_eax+0x1u)); u32 b = 0x6eu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008634bc: je 0x8627d0 */ if (fZ) goto L_008627d0;
L_008634c2:; BB(0x008634c2);
    /* 008634c2: cmp dword ptr [ebp - 0x1d8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008634c9: jne 0x8634d7 */ if (!fZ) goto L_008634d7;
L_008634cb:; BB(0x008634cb);
    /* 008634cb: push dword ptr [ebp - 0x1bc] */ { u32 v = R32((u32)(r_ebp+0xfffffe44u)); r_esp -= 4; W32(r_esp, v); }
    /* 008634d1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8634d6u); f_00858882();
    /* 008634d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008634d7:; BB(0x008634d7);
    /* 008634d7: mov eax, dword ptr [ebp - 0x1b8] */ r_eax = R32((u32)(r_ebp+0xfffffe48u));
    /* 008634dd: cmp dword ptr [ebp - 0x194], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe6cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008634e4: jne 0x8634f5 */ if (!fZ) goto L_008634f5;
L_008634e6:; BB(0x008634e6);
    /* 008634e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008634e8: jne 0x8634f5 */ if (!fZ) goto L_008634f5;
L_008634ea:; BB(0x008634ea);
    /* 008634ea: cmp byte ptr [ebp - 0x195], al */ {  u32 a = R8((u32)(r_ebp+0xfffffe6bu)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008634f0: jne 0x8634f5 */ if (!fZ) goto L_008634f5;
L_008634f2:; BB(0x008634f2);
    /* 008634f2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008634f5:; BB(0x008634f5);
    /* 008634f5: lea esp, [ebp - 0x1e8] */ r_esp = (u32)(r_ebp+0xfffffe18u);
    /* 008634fb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008634fe: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x863503u); f_0085e419();
    /* 00863503: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863508u); f_0085e5e7();
    /* 00863508: ret  */ FN_RET(0x00862dbb); r_esp += 4; return;
}

