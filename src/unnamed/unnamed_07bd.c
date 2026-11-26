#include "protos.h"

void f_007bd288(void) /* sub_7BD288 */
{
    FN_ENTER(0x007bd288);
    /* 007bd288: mov eax, dword ptr [0xaaecbc] */ r_eax = R32((u32)(0xaaecbcu));
    /* 007bd28d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bd28f: je 0x7bd2d9 */ if (fZ) goto L_007bd2d9;
L_007bd291:; BB(0x007bd291);
    /* 007bd291: mov ecx, dword ptr [0xa9c4ec] */ r_ecx = R32((u32)(0xa9c4ecu));
    /* 007bd297: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 007bd29c: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007bd29e: mov eax, ecx */ r_eax = r_ecx;
    /* 007bd2a0: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 007bd2a3: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bd2a5: sar edx, 9 */ { u32 c = (9u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007bd2a8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007bd2aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bd2ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bd2ae: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007bd2b1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007bd2b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007bd2b5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007bd2b7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007bd2b9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007bd2bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bd2be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bd2c0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bd2c2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007bd2c4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007bd2c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bd2c8: jne 0x7bd2d9 */ if (!fZ) goto L_007bd2d9;
L_007bd2ca:; BB(0x007bd2ca);
    /* 007bd2ca: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007bd2d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bd2d2: je 0x7bd2d9 */ if (fZ) goto L_007bd2d9;
L_007bd2d4:; BB(0x007bd2d4);
    /* 007bd2d4: call 0x7f2f88 */ r_esp -= 4; W32(r_esp, 0x7bd2d9u); f_007f2f88();
L_007bd2d9:; BB(0x007bd2d9);
    /* 007bd2d9: ret  */ FN_RET(0x007bd288); r_esp += 4; return;
}

void f_007bd2dc(void) /* sub_7BD2DC */
{
    FN_ENTER(0x007bd2dc);
    /* 007bd2dc: call 0x7c04ec */ r_esp -= 4; W32(r_esp, 0x7bd2e1u); f_007c04ec();
    /* 007bd2e1: call 0x79f1d8 */ r_esp -= 4; W32(r_esp, 0x7bd2e6u); f_0079f1d8();
    /* 007bd2e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd2e8: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bd2edu); f_007a60dc();
    /* 007bd2ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd2ee: ret  */ FN_RET(0x007bd2dc); r_esp += 4; return;
}

void f_007bd2f0(void) /* sub_7BD2F0 */
{
    FN_ENTER(0x007bd2f0);
    /* 007bd2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bd2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 007bd2f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bd2f5: push 0x8f6686 */ { u32 v = 0x8f6686u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd2fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bd300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bd301: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bd308: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bd30b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bd30e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bd311: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bd314: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bd317: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x7bd31cu); f_0083adbc();
    /* 007bd31c: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x7bd321u); f_007becd4();
    /* 007bd321: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x7bd326u); f_007bfba0();
    /* 007bd326: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd32b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd330u); f_0061cdb0();
    /* 007bd330: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd335: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bd33au); f_0081745c();
    /* 007bd33a: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd33f: call 0x817d74 */ r_esp -= 4; W32(r_esp, 0x7bd344u); f_00817d74();
    /* 007bd344: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd349: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x7bd34eu); f_00817604();
    /* 007bd34e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd353: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bd358u); f_00818f80();
    /* 007bd358: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x7bd35du); f_005ba748();
    /* 007bd35d: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x7bd362u); f_00814168();
    /* 007bd362: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x7bd367u); f_006c38bc();
    /* 007bd367: call 0x77ca4c */ r_esp -= 4; W32(r_esp, 0x7bd36cu); f_0077ca4c();
    /* 007bd36c: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bd371u); f_006dc358();
    /* 007bd371: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x7bd376u); f_00415cec();
    /* 007bd376: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bd379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bd37a: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x7bd37fu); f_0082c204();
    /* 007bd37f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd380: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd383: je 0x7bd754 */ if (fZ) goto L_007bd754;
L_007bd389:; BB(0x007bd389);
    /* 007bd389: mov eax, dword ptr [0xaae6dc] */ r_eax = R32((u32)(0xaae6dcu));
    /* 007bd38e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007bd391: mov dword ptr [0xaae6dc], eax */ W32((u32)(0xaae6dcu), r_eax);
    /* 007bd396: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bd399: jle 0x7bd3a0 */ if ((fZ||fS!=fO)) goto L_007bd3a0;
L_007bd39b:; BB(0x007bd39b);
    /* 007bd39b: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x7bd3a0u); f_007a0118();
L_007bd3a0:; BB(0x007bd3a0);
    /* 007bd3a0: call 0x7bd288 */ r_esp -= 4; W32(r_esp, 0x7bd3a5u); f_007bd288();
    /* 007bd3a5: mov eax, dword ptr [0xaab20c] */ r_eax = R32((u32)(0xaab20cu));
    /* 007bd3aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd3ad: je 0x7bd747 */ if (fZ) goto L_007bd747;
L_007bd3b3:; BB(0x007bd3b3);
    /* 007bd3b3: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x7bd3b8u); f_007bfedc();
    /* 007bd3b8: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bd3bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd3bd: je 0x7bd3c4 */ if (fZ) goto L_007bd3c4;
L_007bd3bf:; BB(0x007bd3bf);
    /* 007bd3bf: call 0x7bd764 */ r_esp -= 4; W32(r_esp, 0x7bd3c4u); f_007bd764();
L_007bd3c4:; BB(0x007bd3c4);
    /* 007bd3c4: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7bd3c9u); f_006dc358();
    /* 007bd3c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd3cb: je 0x7bd3da */ if (fZ) goto L_007bd3da;
L_007bd3cd:; BB(0x007bd3cd);
    /* 007bd3cd: call 0x79f1d8 */ r_esp -= 4; W32(r_esp, 0x7bd3d2u); f_0079f1d8();
    /* 007bd3d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd3d4: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bd3d9u); f_007a60dc();
    /* 007bd3d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007bd3da:; BB(0x007bd3da);
    /* 007bd3da: call 0x7a6120 */ r_esp -= 4; W32(r_esp, 0x7bd3dfu); f_007a6120();
    /* 007bd3df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd3e1: jne 0x7bd47c */ if (!fZ) goto L_007bd47c;
L_007bd3e7:; BB(0x007bd3e7);
    /* 007bd3e7: call 0x7a6140 */ r_esp -= 4; W32(r_esp, 0x7bd3ecu); f_007a6140();
    /* 007bd3ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd3ee: jne 0x7bd419 */ if (!fZ) goto L_007bd419;
L_007bd3f0:; BB(0x007bd3f0);
    /* 007bd3f0: call 0x7a616c */ r_esp -= 4; W32(r_esp, 0x7bd3f5u); f_007a616c();
    /* 007bd3f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd3f7: jne 0x7bd738 */ if (!fZ) goto L_007bd738;
L_007bd3fd:; BB(0x007bd3fd);
    /* 007bd3fd: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bd402u); f_0080030c();
    /* 007bd402: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007bd405: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007bd408: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007bd40b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bd40e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bd415: mov esp, ebp */ r_esp = r_ebp;
    /* 007bd417: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bd418: ret  */ FN_RET(0x007bd2f0); r_esp += 4; return;
L_007bd419:; BB(0x007bd419);
    /* 007bd419: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x7bd41eu); f_004d28a4();
    /* 007bd41e: call 0x79eb30 */ r_esp -= 4; W32(r_esp, 0x7bd423u); f_0079eb30();
    /* 007bd423: call 0x692748 */ r_esp -= 4; W32(r_esp, 0x7bd428u); f_00692748();
    /* 007bd428: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7bd42du); f_00815434();
    /* 007bd42d: call 0x8148e4 */ r_esp -= 4; W32(r_esp, 0x7bd432u); f_008148e4();
    /* 007bd432: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd434: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 007bd437: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bd43cu); f_008193cc();
    /* 007bd43c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007bd443: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bd448u); f_005badd0();
    /* 007bd448: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bd44du); f_007bebe8();
    /* 007bd44d: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bd452u); f_0080030c();
    /* 007bd452: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bd457u); f_0080030c();
    /* 007bd457: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007bd459:; BB(0x007bd459);
    /* 007bd459: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bd45a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bd45fu); f_0068d5a8();
    /* 007bd45f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd462: je 0x7bd46f */ if (fZ) goto L_007bd46f;
L_007bd464:; BB(0x007bd464);
    /* 007bd464: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 007bd467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bd468: mov ecx, eax */ r_ecx = r_eax;
    /* 007bd46a: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bd46fu); f_008172d4();
L_007bd46f:; BB(0x007bd46f);
    /* 007bd46f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bd472: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bd475: jl 0x7bd459 */ if ((fS!=fO)) goto L_007bd459;
L_007bd477:; BB(0x007bd477);
    /* 007bd477: jmp 0x7bd672 */ goto L_007bd672;
L_007bd47c:; BB(0x007bd47c);
    /* 007bd47c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd47e: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 007bd481: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bd486u); f_008193cc();
    /* 007bd486: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bd48d: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x7bd492u); f_006ffa24();
    /* 007bd492: call 0x79eb30 */ r_esp -= 4; W32(r_esp, 0x7bd497u); f_0079eb30();
    /* 007bd497: call 0x692748 */ r_esp -= 4; W32(r_esp, 0x7bd49cu); f_00692748();
    /* 007bd49c: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7bd4a1u); f_00815434();
    /* 007bd4a1: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bd4a6u); f_005badd0();
    /* 007bd4a6: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bd4abu); f_007bebe8();
    /* 007bd4ab: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bd4b0u); f_0080030c();
    /* 007bd4b0: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bd4b5u); f_0080030c();
    /* 007bd4b5: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd4bb: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 007bd4c0: call 0x78b0e4 */ r_esp -= 4; W32(r_esp, 0x7bd4c5u); f_0078b0e4();
    /* 007bd4c5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007bd4c7:; BB(0x007bd4c7);
    /* 007bd4c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bd4c8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bd4cdu); f_0068d5a8();
    /* 007bd4cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd4ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd4d0: je 0x7bd4dd */ if (fZ) goto L_007bd4dd;
L_007bd4d2:; BB(0x007bd4d2);
    /* 007bd4d2: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 007bd4d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bd4d6: mov ecx, eax */ r_ecx = r_eax;
    /* 007bd4d8: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bd4ddu); f_008172d4();
L_007bd4dd:; BB(0x007bd4dd);
    /* 007bd4dd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007bd4e0: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bd4e3: jl 0x7bd4c7 */ if ((fS!=fO)) goto L_007bd4c7;
L_007bd4e5:; BB(0x007bd4e5);
    /* 007bd4e5: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd4ea: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bd4efu); f_00818560();
    /* 007bd4ef: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bd4f4: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bd4f9u); f_008155a8();
    /* 007bd4f9: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bd4fe: call 0x8156b0 */ r_esp -= 4; W32(r_esp, 0x7bd503u); f_008156b0();
    /* 007bd503: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd508u); f_0061cdb0();
    /* 007bd508: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bd50du); f_007a7c90();
    /* 007bd50d: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bd512u); f_008013bc();
    /* 007bd512: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd514: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bd519u); f_00417a9c();
    /* 007bd519: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd51a: mov eax, dword ptr [0xaae6d0] */ r_eax = R32((u32)(0xaae6d0u));
    /* 007bd51f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007bd521: je 0x7bd571 */ if (fZ) goto L_007bd571;
L_007bd523:; BB(0x007bd523);
    /* 007bd523: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007bd526: mov dword ptr [0xaae6d0], eax */ W32((u32)(0xaae6d0u), r_eax);
    /* 007bd52b: call 0x7ba3b4 */ r_esp -= 4; W32(r_esp, 0x7bd530u); f_007ba3b4();
    /* 007bd530: mov dword ptr [0xa943cc], 1 */ W32((u32)(0xa943ccu), 0x1u);
    /* 007bd53a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd53f: push 0xaaeba0 */ { u32 v = 0xaaeba0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd544: call 0x80c12c */ r_esp -= 4; W32(r_esp, 0x7bd549u); f_0080c12c();
    /* 007bd549: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd54b: call 0x6bb754 */ r_esp -= 4; W32(r_esp, 0x7bd550u); f_006bb754();
    /* 007bd550: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd553: call 0x5ba174 */ r_esp -= 4; W32(r_esp, 0x7bd558u); f_005ba174();
    /* 007bd558: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd55a: push 0xa0f5e0 */ { u32 v = 0xa0f5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd55f: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7bd564u); f_0078b184();
    /* 007bd564: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd567: call 0x5e3c98 */ r_esp -= 4; W32(r_esp, 0x7bd56cu); f_005e3c98();
    /* 007bd56c: call 0x5c7598 */ r_esp -= 4; W32(r_esp, 0x7bd571u); f_005c7598();
L_007bd571:; BB(0x007bd571);
    /* 007bd571: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bd576: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bd57bu); f_00815730();
    /* 007bd57b: mov edi, eax */ r_edi = r_eax;
    /* 007bd57d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd583: call 0x64ab0c */ r_esp -= 4; W32(r_esp, 0x7bd588u); f_0064ab0c();
    /* 007bd588: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd589: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bd58eu); f_00417c10();
    /* 007bd58e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd593: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd598u); f_0061cdb0();
    /* 007bd598: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd59d: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bd5a2u); f_0081745c();
    /* 007bd5a2: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd5a7: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bd5acu); f_00818f80();
    /* 007bd5ac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007bd5ae:; BB(0x007bd5ae);
    /* 007bd5ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bd5af: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bd5b4u); f_0068d5a8();
    /* 007bd5b4: mov ebx, eax */ r_ebx = r_eax;
    /* 007bd5b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd5b9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd5bb: je 0x7bd5d1 */ if (fZ) goto L_007bd5d1;
L_007bd5bd:; BB(0x007bd5bd);
    /* 007bd5bd: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd5c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bd5c5: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bd5cau); f_008172d4();
    /* 007bd5ca: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007bd5cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bd5ce: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7bd5d1u); call_ind(t); }
L_007bd5d1:; BB(0x007bd5d1);
    /* 007bd5d1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bd5d4: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bd5d7: jl 0x7bd5ae */ if ((fS!=fO)) goto L_007bd5ae;
L_007bd5d9:; BB(0x007bd5d9);
    /* 007bd5d9: call 0x69281c */ r_esp -= 4; W32(r_esp, 0x7bd5deu); f_0069281c();
    /* 007bd5de: call 0x79eb78 */ r_esp -= 4; W32(r_esp, 0x7bd5e3u); f_0079eb78();
    /* 007bd5e3: call 0x6bc920 */ r_esp -= 4; W32(r_esp, 0x7bd5e8u); f_006bc920();
    /* 007bd5e8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd5ea: je 0x7bd5f4 */ if (fZ) goto L_007bd5f4;
L_007bd5ec:; BB(0x007bd5ec);
    /* 007bd5ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd5ee: call 0x6a758c */ r_esp -= 4; W32(r_esp, 0x7bd5f3u); f_006a758c();
    /* 007bd5f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007bd5f4:; BB(0x007bd5f4);
    /* 007bd5f4: mov eax, dword ptr [0xa95aa4] */ r_eax = R32((u32)(0xa95aa4u));
    /* 007bd5f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd5fb: je 0x7bd641 */ if (fZ) goto L_007bd641;
L_007bd5fd:; BB(0x007bd5fd);
    /* 007bd5fd: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 007bd604: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd609: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bd60eu); f_005caba4();
    /* 007bd60e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd60f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007bd612: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd614: je 0x7bd63a */ if (fZ) goto L_007bd63a;
L_007bd616:; BB(0x007bd616);
    /* 007bd616: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 007bd61d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007bd624: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd626: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd62c: mov ecx, eax */ r_ecx = r_eax;
    /* 007bd62e: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x7bd633u); f_006bc800();
    /* 007bd633: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_007bd63a:; BB(0x007bd63a);
    /* 007bd63a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_007bd641:; BB(0x007bd641);
    /* 007bd641: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x7bd646u); f_005ba1f0();
    /* 007bd646: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd648: je 0x7bd654 */ if (fZ) goto L_007bd654;
L_007bd64a:; BB(0x007bd64a);
    /* 007bd64a: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x7bd64fu); f_005ba204();
    /* 007bd64f: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bd654u); f_005ba1e0();
L_007bd654:; BB(0x007bd654);
    /* 007bd654: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bd659u); f_005ba1e0();
    /* 007bd659: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bd660: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 007bd663: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bd668u); f_008171e8();
    /* 007bd668: call 0x7a6108 */ r_esp -= 4; W32(r_esp, 0x7bd66du); f_007a6108();
    /* 007bd66d: jmp 0x7bd3e7 */ goto L_007bd3e7;
L_007bd672:; BB(0x007bd672);
    /* 007bd672: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd677: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bd67cu); f_00818560();
    /* 007bd67c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd681u); f_0061cdb0();
    /* 007bd681: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bd686u); f_007a7c90();
    /* 007bd686: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bd68bu); f_008013bc();
    /* 007bd68b: call 0x4178f8 */ r_esp -= 4; W32(r_esp, 0x7bd690u); f_004178f8();
    /* 007bd690: call 0x806fcc */ r_esp -= 4; W32(r_esp, 0x7bd695u); f_00806fcc();
    /* 007bd695: call 0x793f64 */ r_esp -= 4; W32(r_esp, 0x7bd69au); f_00793f64();
    /* 007bd69a: call 0x8103dc */ r_esp -= 4; W32(r_esp, 0x7bd69fu); f_008103dc();
    /* 007bd69f: call 0x810550 */ r_esp -= 4; W32(r_esp, 0x7bd6a4u); f_00810550();
    /* 007bd6a4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007bd6a6: call 0x80ef20 */ r_esp -= 4; W32(r_esp, 0x7bd6abu); f_0080ef20();
    /* 007bd6ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd6ac: call 0x8130b0 */ r_esp -= 4; W32(r_esp, 0x7bd6b1u); f_008130b0();
    /* 007bd6b1: call 0x782098 */ r_esp -= 4; W32(r_esp, 0x7bd6b6u); f_00782098();
    /* 007bd6b6: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bd6bbu); f_00417c10();
    /* 007bd6bb: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd6c0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd6c5u); f_0061cdb0();
    /* 007bd6c5: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd6ca: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bd6cfu); f_0081745c();
    /* 007bd6cf: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd6d4: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bd6d9u); f_00818f80();
    /* 007bd6d9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007bd6db:; BB(0x007bd6db);
    /* 007bd6db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bd6dc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7bd6e1u); f_0068d5a8();
    /* 007bd6e1: mov ebx, eax */ r_ebx = r_eax;
    /* 007bd6e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd6e6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bd6e8: je 0x7bd6fe */ if (fZ) goto L_007bd6fe;
L_007bd6ea:; BB(0x007bd6ea);
    /* 007bd6ea: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd6f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bd6f2: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x7bd6f7u); f_008172d4();
    /* 007bd6f7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007bd6f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bd6fb: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x7bd6feu); call_ind(t); }
L_007bd6fe:; BB(0x007bd6fe);
    /* 007bd6fe: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007bd701: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007bd704: jl 0x7bd6db */ if ((fS!=fO)) goto L_007bd6db;
L_007bd706:; BB(0x007bd706);
    /* 007bd706: call 0x79eb78 */ r_esp -= 4; W32(r_esp, 0x7bd70bu); f_0079eb78();
    /* 007bd70b: call 0x69281c */ r_esp -= 4; W32(r_esp, 0x7bd710u); f_0069281c();
    /* 007bd710: call 0x6428bc */ r_esp -= 4; W32(r_esp, 0x7bd715u); f_006428bc();
    /* 007bd715: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x7bd71au); f_004d2968();
    /* 007bd71a: call 0x671268 */ r_esp -= 4; W32(r_esp, 0x7bd71fu); f_00671268();
    /* 007bd71f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bd726: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 007bd729: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bd72eu); f_008171e8();
    /* 007bd72e: call 0x7a6128 */ r_esp -= 4; W32(r_esp, 0x7bd733u); f_007a6128();
    /* 007bd733: jmp 0x7bd3f0 */ goto L_007bd3f0;
L_007bd738:; BB(0x007bd738);
    /* 007bd738: call 0x7bd7c8 */ r_esp -= 4; W32(r_esp, 0x7bd73du); f_007bd7c8();
    /* 007bd73d: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x7bd742u); f_007a6154();
    /* 007bd742: jmp 0x7bd3fd */ goto L_007bd3fd;
L_007bd747:; BB(0x007bd747);
    /* 007bd747: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd749: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bd74eu); f_007a60dc();
    /* 007bd74e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd74f: jmp 0x7bd3b3 */ goto L_007bd3b3;
L_007bd754:; BB(0x007bd754);
    /* 007bd754: mov dword ptr [0xaae6dc], 0 */ W32((u32)(0xaae6dcu), 0x0u);
    /* 007bd75e: jmp 0x7bd3a0 */ goto L_007bd3a0;
}

void f_007bd764(void) /* sub_7BD764 */
{
    FN_ENTER(0x007bd764);
    /* 007bd764: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bd769u); f_007bebe8();
    /* 007bd769: call 0x79f1d8 */ r_esp -= 4; W32(r_esp, 0x7bd76eu); f_0079f1d8();
    /* 007bd76e: call 0x7bca98 */ r_esp -= 4; W32(r_esp, 0x7bd773u); f_007bca98();
    /* 007bd773: call 0x7a6154 */ r_esp -= 4; W32(r_esp, 0x7bd778u); f_007a6154();
    /* 007bd778: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bd77a: mov dword ptr [0xa95624], eax */ W32((u32)(0xa95624u), r_eax);
    /* 007bd77f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bd780: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bd785u); f_007a60dc();
    /* 007bd785: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd786: ret  */ FN_RET(0x007bd764); r_esp += 4; return;
}

void f_007bd788(void) /* sub_7BD788 */
{
    FN_ENTER(0x007bd788);
    /* 007bd788: mov eax, dword ptr [0xaae6d0] */ r_eax = R32((u32)(0xaae6d0u));
    /* 007bd78d: mov edx, dword ptr [0xac9d6c] */ r_edx = R32((u32)(0xac9d6cu));
    /* 007bd793: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bd796: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bd799: mov dword ptr [0xaae6d0], eax */ W32((u32)(0xaae6d0u), r_eax);
    /* 007bd79e: mov dword ptr [0xac9d6c], edx */ W32((u32)(0xac9d6cu), r_edx);
    /* 007bd7a4: ret  */ FN_RET(0x007bd788); r_esp += 4; return;
}

void f_007bd7a8(void) /* sub_7BD7A8 */
{
    FN_ENTER(0x007bd7a8);
    /* 007bd7a8: mov dword ptr [0xaae6c4], 0x3f800000 */ W32((u32)(0xaae6c4u), 0x3f800000u);
    /* 007bd7b2: mov dword ptr [0xaae6c8], 0x41000000 */ W32((u32)(0xaae6c8u), 0x41000000u);
    /* 007bd7bc: mov dword ptr [0xaae6cc], 0x3fc00000 */ W32((u32)(0xaae6ccu), 0x3fc00000u);
    /* 007bd7c6: ret  */ FN_RET(0x007bd7a8); r_esp += 4; return;
}

void f_007bd7c8(void) /* sub_7BD7C8 */
{
    FN_ENTER(0x007bd7c8);
    /* 007bd7c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bd7c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007bd7cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bd7cd: push 0x8f66a0 */ { u32 v = 0x8f66a0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd7d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bd7d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bd7d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bd7e0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bd7e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bd7e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bd7e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bd7ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bd7ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd7f1: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 007bd7f4: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bd7f9u); f_008193cc();
    /* 007bd7f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bd800: call 0x7a00e4 */ r_esp -= 4; W32(r_esp, 0x7bd805u); f_007a00e4();
    /* 007bd805: call 0x79eb30 */ r_esp -= 4; W32(r_esp, 0x7bd80au); f_0079eb30();
    /* 007bd80a: call 0x692748 */ r_esp -= 4; W32(r_esp, 0x7bd80fu); f_00692748();
    /* 007bd80f: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7bd814u); f_00815434();
    /* 007bd814: call 0x5badd0 */ r_esp -= 4; W32(r_esp, 0x7bd819u); f_005badd0();
    /* 007bd819: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bd81eu); f_007bebe8();
    /* 007bd81e: call 0x79f900 */ r_esp -= 4; W32(r_esp, 0x7bd823u); f_0079f900();
    /* 007bd823: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bd828u); f_0080030c();
    /* 007bd828: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bd82du); f_0080030c();
    /* 007bd82d: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd833: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 007bd838: call 0x78b0e4 */ r_esp -= 4; W32(r_esp, 0x7bd83du); f_0078b0e4();
    /* 007bd83d: call 0x7bca98 */ r_esp -= 4; W32(r_esp, 0x7bd842u); f_007bca98();
    /* 007bd842: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd847: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7bd84cu); f_00818560();
    /* 007bd84c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd851: call 0x8181c4 */ r_esp -= 4; W32(r_esp, 0x7bd856u); f_008181c4();
    /* 007bd856: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bd85b: call 0x8155a8 */ r_esp -= 4; W32(r_esp, 0x7bd860u); f_008155a8();
    /* 007bd860: mov dword ptr [0xa4950c], 0 */ W32((u32)(0xa4950cu), 0x0u);
    /* 007bd86a: call 0x80bee0 */ r_esp -= 4; W32(r_esp, 0x7bd86fu); f_0080bee0();
    /* 007bd86f: call 0x80cf44 */ r_esp -= 4; W32(r_esp, 0x7bd874u); f_0080cf44();
    /* 007bd874: call 0x810550 */ r_esp -= 4; W32(r_esp, 0x7bd879u); f_00810550();
    /* 007bd879: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd87eu); f_0061cdb0();
    /* 007bd87e: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bd883u); f_007a7c90();
    /* 007bd883: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bd888u); f_008013bc();
    /* 007bd888: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd88a: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x7bd88fu); f_00417a9c();
    /* 007bd88f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007bd891: call 0x80ef20 */ r_esp -= 4; W32(r_esp, 0x7bd896u); f_0080ef20();
    /* 007bd896: mov eax, dword ptr [0xaab204] */ r_eax = R32((u32)(0xaab204u));
    /* 007bd89b: mov dword ptr [0xac9d54], 0x10 */ W32((u32)(0xac9d54u), 0x10u);
    /* 007bd8a5: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 007bd8aa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bd8ac: mov dword ptr [0xac9d50], ecx */ W32((u32)(0xac9d50u), r_ecx);
    /* 007bd8b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007bd8b3: mov dword ptr [0xac9d5c], eax */ W32((u32)(0xac9d5cu), r_eax);
    /* 007bd8b8: mov dword ptr [0xac9d60], edx */ W32((u32)(0xac9d60u), r_edx);
    /* 007bd8be: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 007bd8c8: mov dword ptr [0xac9d64], edx */ W32((u32)(0xac9d64u), r_edx);
    /* 007bd8ce: mov dword ptr [0xac9d68], edx */ W32((u32)(0xac9d68u), r_edx);
    /* 007bd8d4: mov dword ptr [0xac9d6c], edx */ W32((u32)(0xac9d6cu), r_edx);
    /* 007bd8da: mov dword ptr [0xac9d58], edx */ W32((u32)(0xac9d58u), r_edx);
    /* 007bd8e0: call 0x806fa0 */ r_esp -= 4; W32(r_esp, 0x7bd8e5u); f_00806fa0();
    /* 007bd8e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd8e8: mov eax, dword ptr [0xaab204] */ r_eax = R32((u32)(0xaab204u));
    /* 007bd8ed: mov dword ptr [0xaafc98], eax */ W32((u32)(0xaafc98u), r_eax);
    /* 007bd8f2: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bd8f7: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bd8fcu); f_00815730();
    /* 007bd8fc: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bd901u); f_00417c10();
    /* 007bd901: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd906: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd90bu); f_0061cdb0();
    /* 007bd90b: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd910: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bd915u); f_0081745c();
    /* 007bd915: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bd91a: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bd91fu); f_00818f80();
    /* 007bd91f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd921: call 0x6bb754 */ r_esp -= 4; W32(r_esp, 0x7bd926u); f_006bb754();
    /* 007bd926: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd927: call 0x79eb78 */ r_esp -= 4; W32(r_esp, 0x7bd92cu); f_0079eb78();
    /* 007bd92c: call 0x7a00fc */ r_esp -= 4; W32(r_esp, 0x7bd931u); f_007a00fc();
    /* 007bd931: call 0x69281c */ r_esp -= 4; W32(r_esp, 0x7bd936u); f_0069281c();
    /* 007bd936: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 007bd93b: call 0x6a92e8 */ r_esp -= 4; W32(r_esp, 0x7bd940u); f_006a92e8();
    /* 007bd940: push dword ptr [0xaab204] */ { u32 v = R32((u32)(0xaab204u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bd946: mov dword ptr [0xa8ef94], 0 */ W32((u32)(0xa8ef94u), 0x0u);
    /* 007bd950: call 0x79f500 */ r_esp -= 4; W32(r_esp, 0x7bd955u); f_0079f500();
    /* 007bd955: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bd956: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bd958: mov word ptr [0xaae6d4], ax */ W16((u32)(0xaae6d4u), (u16)r_eax);
    /* 007bd95e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bd965: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 007bd968: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bd96du); f_008171e8();
    /* 007bd96d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bd970: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bd977: mov esp, ebp */ r_esp = r_ebp;
    /* 007bd979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bd97a: ret  */ FN_RET(0x007bd7c8); r_esp += 4; return;
}

void f_007bd97c(void) /* sub_7BD97C */
{
    FN_ENTER(0x007bd97c);
    /* 007bd97c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bd97d: mov ebp, esp */ r_ebp = r_esp;
    /* 007bd97f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bd981: push 0x8f66e2 */ { u32 v = 0x8f66e2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd986: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bd98c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bd98d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bd994: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bd997: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bd99a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007bd99d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007bd9a0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007bd9a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bd9a5: mov dword ptr [0xaae6d0], eax */ W32((u32)(0xaae6d0u), r_eax);
    /* 007bd9aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bd9ab: mov dword ptr [0xaaecbc], eax */ W32((u32)(0xaaecbcu), r_eax);
    /* 007bd9b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bd9b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bd9b2: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x7bd9b7u); f_0082acd8();
    /* 007bd9b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd9ba: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd9bfu); f_0061cdb0();
    /* 007bd9bf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bd9c4u); f_0061cdb0();
    /* 007bd9c4: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7bd9c9u); f_007bebe8();
    /* 007bd9c9: call 0x7a6108 */ r_esp -= 4; W32(r_esp, 0x7bd9ceu); f_007a6108();
    /* 007bd9ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bd9d0: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x7bd9d5u); f_007a6198();
    /* 007bd9d5: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 007bd9d7: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x7bd9dcu); f_007a618c();
    /* 007bd9dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bd9df: call 0x5b9380 */ r_esp -= 4; W32(r_esp, 0x7bd9e4u); f_005b9380();
    /* 007bd9e4: call 0x7a7c90 */ r_esp -= 4; W32(r_esp, 0x7bd9e9u); f_007a7c90();
    /* 007bd9e9: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7bd9eeu); f_008013bc();
    /* 007bd9ee: call 0x4178f8 */ r_esp -= 4; W32(r_esp, 0x7bd9f3u); f_004178f8();
    /* 007bd9f3: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x7bd9f8u); f_005ba204();
    /* 007bd9f8: call 0x5ba174 */ r_esp -= 4; W32(r_esp, 0x7bd9fdu); f_005ba174();
    /* 007bd9fd: push 0x170 */ { u32 v = 0x170u; r_esp -= 4; W32(r_esp, v); }
    /* 007bda02: push 0xa0f460 */ { u32 v = 0xa0f460u; r_esp -= 4; W32(r_esp, v); }
    /* 007bda07: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7bda0cu); f_0078b184();
    /* 007bda0c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bda0f: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x7bda14u); f_005ba1f0();
    /* 007bda14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bda16: je 0x7bda3a */ if (fZ) goto L_007bda3a;
L_007bda18:; BB(0x007bda18);
    /* 007bda18: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x7bda1du); f_005ba204();
    /* 007bda1d: call 0x5ba168 */ r_esp -= 4; W32(r_esp, 0x7bda22u); f_005ba168();
    /* 007bda22: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bda27u); f_005ba1e0();
    /* 007bda27: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bda2cu); f_00417c10();
    /* 007bda2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bda2f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bda36: mov esp, ebp */ r_esp = r_ebp;
    /* 007bda38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bda39: ret  */ FN_RET(0x007bd97c); r_esp += 4; return;
L_007bda3a:; BB(0x007bda3a);
    /* 007bda3a: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7bda3fu); f_005ba1e0();
    /* 007bda3f: call 0x80bee0 */ r_esp -= 4; W32(r_esp, 0x7bda44u); f_0080bee0();
    /* 007bda44: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007bda46: call 0x80ef20 */ r_esp -= 4; W32(r_esp, 0x7bda4bu); f_0080ef20();
    /* 007bda4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bda4c: call 0x408244 */ r_esp -= 4; W32(r_esp, 0x7bda51u); f_00408244();
    /* 007bda51: call 0x7ad678 */ r_esp -= 4; W32(r_esp, 0x7bda56u); f_007ad678();
L_007bda56:; BB(0x007bda56);
    /* 007bda56: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bda5c: call 0x407b74 */ r_esp -= 4; W32(r_esp, 0x7bda61u); f_00407b74();
    /* 007bda61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bda62: call 0x7083dc */ r_esp -= 4; W32(r_esp, 0x7bda67u); f_007083dc();
    /* 007bda67: mov esi, eax */ r_esi = r_eax;
    /* 007bda69: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bda6b: je 0x7bda79 */ if (fZ) goto L_007bda79;
L_007bda6d:; BB(0x007bda6d);
    /* 007bda6d: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bda70: je 0x7bda79 */ if (fZ) goto L_007bda79;
L_007bda72:; BB(0x007bda72);
    /* 007bda72: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bda75: je 0x7bdaa9 */ if (fZ) goto L_007bdaa9;
L_007bda77:; BB(0x007bda77);
    /* 007bda77: jmp 0x7bdabf */ goto L_007bdabf;
L_007bda79:; BB(0x007bda79);
    /* 007bda79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bda7b: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x7bda80u); f_006c1bcc();
    /* 007bda80: mov ebx, eax */ r_ebx = r_eax;
    /* 007bda82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bda85: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bda87: je 0x7bdabf */ if (fZ) goto L_007bdabf;
L_007bda89:; BB(0x007bda89);
    /* 007bda89: lea edx, [ebx + 0x370] */ r_edx = (u32)(r_ebx+0x370u);
    /* 007bda8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bda90: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x7bda95u); f_007083d4();
    /* 007bda95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bda96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bda98: je 0x7bdaa4 */ if (fZ) goto L_007bdaa4;
L_007bda9a:; BB(0x007bda9a);
    /* 007bda9a: mov edx, dword ptr [ebx + 0x39c] */ r_edx = R32((u32)(r_ebx+0x39cu));
    /* 007bdaa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdaa2: je 0x7bdabf */ if (fZ) goto L_007bdabf;
L_007bdaa4:; BB(0x007bdaa4);
    /* 007bdaa4: mov esi, 9 */ r_esi = 0x9u;
L_007bdaa9:; BB(0x007bdaa9);
    /* 007bdaa9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdaab: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x7bdab0u); f_006c1bcc();
    /* 007bdab0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bdab1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdab3: je 0x7bdabf */ if (fZ) goto L_007bdabf;
L_007bdab5:; BB(0x007bdab5);
    /* 007bdab5: mov dword ptr [eax + 0x39c], 1 */ W32((u32)(r_eax+0x39cu), 0x1u);
L_007bdabf:; BB(0x007bdabf);
    /* 007bdabf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007bdac0: call 0x408200 */ r_esp -= 4; W32(r_esp, 0x7bdac5u); f_00408200();
    /* 007bdac5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdac7: call 0x417cb8 */ r_esp -= 4; W32(r_esp, 0x7bdaccu); f_00417cb8();
    /* 007bdacc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bdacf: mov eax, dword ptr [0xa3ad08] */ r_eax = R32((u32)(0xa3ad08u));
    /* 007bdad4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdad6: je 0x7bdb3c */ if (fZ) goto L_007bdb3c;
L_007bdad8:; BB(0x007bdad8);
    /* 007bdad8: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x7bdaddu); f_0083adbc();
    /* 007bdadd: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x7bdae2u); f_007becd4();
    /* 007bdae2: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x7bdae7u); f_007bfba0();
    /* 007bdae7: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bdaec: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bdaf1u); f_0061cdb0();
    /* 007bdaf1: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bdaf6: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bdafbu); f_0081745c();
    /* 007bdafb: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bdb00: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x7bdb05u); f_00817604();
    /* 007bdb05: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bdb0a: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bdb0fu); f_00818f80();
    /* 007bdb0f: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x7bdb14u); f_005ba748();
    /* 007bdb14: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x7bdb19u); f_00814168();
    /* 007bdb19: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x7bdb1eu); f_006c38bc();
    /* 007bdb1e: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x7bdb23u); f_007bfedc();
    /* 007bdb23: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007bdb26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdb28: jne 0x7bdce1 */ if (!fZ) goto L_007bdce1;
L_007bdb2e:; BB(0x007bdb2e);
    /* 007bdb2e: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bdb33u); f_0080030c();
    /* 007bdb33: mov eax, dword ptr [0xa3ad08] */ r_eax = R32((u32)(0xa3ad08u));
    /* 007bdb38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdb3a: jne 0x7bdad8 */ if (!fZ) goto L_007bdad8;
L_007bdb3c:; BB(0x007bdb3c);
    /* 007bdb3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdb3e: call 0x417cb8 */ r_esp -= 4; W32(r_esp, 0x7bdb43u); f_00417cb8();
    /* 007bdb43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bdb44: call 0x40821c */ r_esp -= 4; W32(r_esp, 0x7bdb49u); f_0040821c();
    /* 007bdb49: mov ebx, eax */ r_ebx = r_eax;
    /* 007bdb4b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdb4e: je 0x7bda56 */ if (fZ) goto L_007bda56;
L_007bdb54:; BB(0x007bdb54);
    /* 007bdb54: call 0x407b5c */ r_esp -= 4; W32(r_esp, 0x7bdb59u); f_00407b5c();
    /* 007bdb59: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdb5b: je 0x7bdb8b */ if (fZ) goto L_007bdb8b;
L_007bdb5d:; BB(0x007bdb5d);
    /* 007bdb5d: call 0x6c2f54 */ r_esp -= 4; W32(r_esp, 0x7bdb62u); f_006c2f54();
    /* 007bdb62: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdb65: jne 0x7bdb71 */ if (!fZ) goto L_007bdb71;
L_007bdb67:; BB(0x007bdb67);
    /* 007bdb67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdb69: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x7bdb6eu); f_007a618c();
    /* 007bdb6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bdb6f: jmp 0x7bdb79 */ goto L_007bdb79;
L_007bdb71:; BB(0x007bdb71);
    /* 007bdb71: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdb73: call 0x7a618c */ r_esp -= 4; W32(r_esp, 0x7bdb78u); f_007a618c();
    /* 007bdb78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007bdb79:; BB(0x007bdb79);
    /* 007bdb79: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdb7b: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7bdb80u); f_007a60dc();
    /* 007bdb80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bdb81: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bdb86u); f_00417c10();
    /* 007bdb86: jmp 0x7bdca9 */ goto L_007bdca9;
L_007bdb8b:; BB(0x007bdb8b);
    /* 007bdb8b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007bdb92: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdb94: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bdb99u); f_005caba4();
    /* 007bdb99: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007bdb9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bdb9f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007bdba2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdba4: je 0x7bdcd7 */ if (fZ) goto L_007bdcd7;
L_007bdbaa:; BB(0x007bdbaa);
    /* 007bdbaa: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007bdbb1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bdbb8: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bdbbe: mov ecx, eax */ r_ecx = r_eax;
    /* 007bdbc0: call 0x797908 */ r_esp -= 4; W32(r_esp, 0x7bdbc5u); f_00797908();
    /* 007bdbc5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_007bdbcc:; BB(0x007bdbcc);
    /* 007bdbcc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bdbd3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007bdbda: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdbdc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bdbe1u); f_005caba4();
    /* 007bdbe1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bdbe2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007bdbe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdbe7: je 0x7bdc0b */ if (fZ) goto L_007bdc0b;
L_007bdbe9:; BB(0x007bdbe9);
    /* 007bdbe9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007bdbf0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007bdbf7: push dword ptr [0xaca388] */ { u32 v = R32((u32)(0xaca388u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bdbfd: mov ecx, eax */ r_ecx = r_eax;
    /* 007bdbff: call 0x800674 */ r_esp -= 4; W32(r_esp, 0x7bdc04u); f_00800674();
    /* 007bdc04: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007bdc0b:; BB(0x007bdc0b);
    /* 007bdc0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bdc12: call 0x79eb30 */ r_esp -= 4; W32(r_esp, 0x7bdc17u); f_0079eb30();
    /* 007bdc17: mov dword ptr [0xac9d54], 0x10 */ W32((u32)(0xac9d54u), 0x10u);
    /* 007bdc21: mov edx, 0xf */ r_edx = 0xfu;
    /* 007bdc26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bdc28: mov dword ptr [0xac9d50], edx */ W32((u32)(0xac9d50u), r_edx);
    /* 007bdc2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bdc2f: mov dword ptr [0xac9d5c], eax */ W32((u32)(0xac9d5cu), r_eax);
    /* 007bdc34: mov dword ptr [0xac9d60], eax */ W32((u32)(0xac9d60u), r_eax);
    /* 007bdc39: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 007bdc43: mov dword ptr [0xac9d64], eax */ W32((u32)(0xac9d64u), r_eax);
    /* 007bdc48: mov dword ptr [0xac9d68], eax */ W32((u32)(0xac9d68u), r_eax);
    /* 007bdc4d: mov dword ptr [0xac9d6c], eax */ W32((u32)(0xac9d6cu), r_eax);
    /* 007bdc52: mov dword ptr [0xac9d58], eax */ W32((u32)(0xac9d58u), r_eax);
    /* 007bdc57: call 0x806fa0 */ r_esp -= 4; W32(r_esp, 0x7bdc5cu); f_00806fa0();
    /* 007bdc5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bdc5d: mov dword ptr [0xaafc98], 0 */ W32((u32)(0xaafc98u), 0x0u);
    /* 007bdc67: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 007bdc6c: call 0x815730 */ r_esp -= 4; W32(r_esp, 0x7bdc71u); f_00815730();
    /* 007bdc71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdc73: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7bdc78u); f_00791748();
    /* 007bdc78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bdc79: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x7bdc7eu); f_00417c10();
    /* 007bdc7e: call 0x79eb78 */ r_esp -= 4; W32(r_esp, 0x7bdc83u); f_0079eb78();
    /* 007bdc83: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bdc88: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7bdc8du); f_0061cdb0();
    /* 007bdc8d: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bdc92: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7bdc97u); f_0081745c();
    /* 007bdc97: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007bdc9c: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7bdca1u); f_00818f80();
    /* 007bdca1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007bdca4: call 0x79b698 */ r_esp -= 4; W32(r_esp, 0x7bdca9u); f_0079b698();
L_007bdca9:; BB(0x007bdca9);
    /* 007bdca9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bdcab: mov dword ptr [0xa9c4ec], eax */ W32((u32)(0xa9c4ecu), r_eax);
    /* 007bdcb0: mov word ptr [0xaae6d4], ax */ W16((u32)(0xaae6d4u), (u16)r_eax);
    /* 007bdcb6: mov dword ptr [0xaae6dc], eax */ W32((u32)(0xaae6dcu), r_eax);
    /* 007bdcbb: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7bdcc0u); f_0080030c();
    /* 007bdcc0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bdcc3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007bdcc6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007bdcc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bdccc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bdcd3: mov esp, ebp */ r_esp = r_ebp;
    /* 007bdcd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bdcd6: ret  */ FN_RET(0x007bd97c); r_esp += 4; return;
L_007bdcd7:; BB(0x007bdcd7);
    /* 007bdcd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bdcd9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007bdcdc: jmp 0x7bdbcc */ goto L_007bdbcc;
L_007bdce1:; BB(0x007bdce1);
    /* 007bdce1: mov ebx, 3 */ r_ebx = 0x3u;
    /* 007bdce6: jmp 0x7bdb54 */ goto L_007bdb54;
}

void f_007bdcec(void) /* sub_7BDCEC */
{
    FN_ENTER(0x007bdcec);
    /* 007bdcec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bdced: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007bdcef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bdcf1: call 0x7bdd10 */ r_esp -= 4; W32(r_esp, 0x7bdcf6u); f_007bdd10();
    /* 007bdcf6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007bdcfa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bdcfc: jne 0x7bdd02 */ if (!fZ) goto L_007bdd02;
L_007bdcfe:; BB(0x007bdcfe);
    /* 007bdcfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bdcff: ret 4 */ FN_RET(0x007bdcec); r_esp += 8; return;
L_007bdd02:; BB(0x007bdd02);
    /* 007bdd02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bdd03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7bdd08u); f_005c2f74();
    /* 007bdd08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bdd09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bdd0a: ret 4 */ FN_RET(0x007bdcec); r_esp += 8; return;
}

void f_007bdd10(void) /* sub_7BDD10 */
{
    FN_ENTER(0x007bdd10);
    /* 007bdd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bdd11: mov ebp, esp */ r_ebp = r_esp;
    /* 007bdd13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bdd15: push 0x8f66fc */ { u32 v = 0x8f66fcu; r_esp -= 4; W32(r_esp, v); }
    /* 007bdd1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bdd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bdd21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bdd28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bdd2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bdd2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bdd31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bdd34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bdd37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007bdd3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bdd41: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bdd44: mov dword ptr [eax], 0xb46cd0 */ W32((u32)(r_eax), 0xb46cd0u);
    /* 007bdd4a: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x7bdd4fu); f_00815434();
    /* 007bdd4f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bdd52: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 007bdd55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdd57: je 0x7bdd70 */ if (fZ) goto L_007bdd70;
L_007bdd59:; BB(0x007bdd59);
    /* 007bdd59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bdd5c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007bdd60: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bdd65: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007bdd69: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_007bdd70:; BB(0x007bdd70);
    /* 007bdd70: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 007bdd73: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdd75: je 0x7bdd8e */ if (fZ) goto L_007bdd8e;
L_007bdd77:; BB(0x007bdd77);
    /* 007bdd77: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bdd7a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007bdd7e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bdd83: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007bdd87: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_007bdd8e:; BB(0x007bdd8e);
    /* 007bdd8e: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 007bdd91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdd93: je 0x7bddac */ if (fZ) goto L_007bddac;
L_007bdd95:; BB(0x007bdd95);
    /* 007bdd95: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bdd98: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007bdd9c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007bdda1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007bdda5: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_007bddac:; BB(0x007bddac);
    /* 007bddac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007bddb3: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7bddb8u); f_008171e8();
    /* 007bddb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bddbb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bddc2: mov esp, ebp */ r_esp = r_ebp;
    /* 007bddc4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bddc5: ret  */ FN_RET(0x007bdd10); r_esp += 4; return;
}

void f_007bddc8(void) /* sub_7BDDC8 */
{
    FN_ENTER(0x007bddc8);
    /* 007bddc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007bddc9: mov ebp, esp */ r_ebp = r_esp;
    /* 007bddcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007bddcd: push 0x8f6784 */ { u32 v = 0x8f6784u; r_esp -= 4; W32(r_esp, v); }
    /* 007bddd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007bddd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bddd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007bdde0: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bdde3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007bdde6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007bdde9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007bddec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007bddef: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bddf5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007bddf8: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7bddfdu); f_008193cc();
    /* 007bddfd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bde04: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bde07: mov dword ptr [eax], 0xb46cd0 */ W32((u32)(r_eax), 0xb46cd0u);
    /* 007bde0d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007bde0f: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 007bde16: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bde1bu); f_005caba4();
    /* 007bde1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bde1c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007bde1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bde21: je 0x7bde43 */ if (fZ) goto L_007bde43;
L_007bde23:; BB(0x007bde23);
    /* 007bde23: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 007bde2a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007bde31: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bde34: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 007bde37: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x7bde3cu); f_004010b0();
    /* 007bde3c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_007bde43:; BB(0x007bde43);
    /* 007bde43: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bde4a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 007bde51: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 007bde53: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bde58u); f_005caba4();
    /* 007bde58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bde59: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007bde5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bde5e: je 0x7bde80 */ if (fZ) goto L_007bde80;
L_007bde60:; BB(0x007bde60);
    /* 007bde60: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 007bde67: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007bde6e: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bde71: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 007bde74: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x7bde79u); f_004012cc();
    /* 007bde79: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_007bde80:; BB(0x007bde80);
    /* 007bde80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bde87: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007bde8e: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 007bde93: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bde98u); f_005caba4();
    /* 007bde98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007bde99: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007bde9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bde9e: je 0x7bdec2 */ if (fZ) goto L_007bdec2;
L_007bdea0:; BB(0x007bdea0);
    /* 007bdea0: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007bdea7: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007bdeae: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007bdeb1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdeb3: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bdeb6: call 0x415154 */ r_esp -= 4; W32(r_esp, 0x7bdebbu); f_00415154();
    /* 007bdebb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_007bdec2:; BB(0x007bdec2);
    /* 007bdec2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007bdec9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdecb: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x7bded0u); f_007a6198();
    /* 007bded0: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bded3: mov dword ptr [esi + 0x20], 4 */ W32((u32)(r_esi+0x20u), 0x4u);
    /* 007bdeda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007bdedc: mov byte ptr [esi + 0x1c], al */ W8((u32)(r_esi+0x1cu), (u8)r_eax);
    /* 007bdedf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007bdee2: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdee4: mov word ptr [esi + 0x1e], ax */ W16((u32)(r_esi+0x1eu), (u16)r_eax);
    /* 007bdee8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7bdeedu); f_005caba4();
    /* 007bdeed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bdef0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007bdef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdef5: je 0x7bdf39 */ if (fZ) goto L_007bdf39;
L_007bdef7:; BB(0x007bdef7);
    /* 007bdef7: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007bdefe: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007bdf05: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007bdf08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007bdf0b: call 0x73d750 */ r_esp -= 4; W32(r_esp, 0x7bdf10u); f_0073d750();
    /* 007bdf10: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007bdf13: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007bdf1a:; BB(0x007bdf1a);
    /* 007bdf1a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007bdf1d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007bdf20: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 007bdf23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007bdf25: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 007bdf28: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 007bdf2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007bdf2e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007bdf35: mov esp, ebp */ r_esp = r_ebp;
    /* 007bdf37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007bdf38: ret  */ FN_RET(0x007bddc8); r_esp += 4; return;
L_007bdf39:; BB(0x007bdf39);
    /* 007bdf39: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007bdf3b: jmp 0x7bdf1a */ goto L_007bdf1a;
}

void f_007bdf40(void) /* sub_7BDF40 */
{
    FN_ENTER(0x007bdf40);
    /* 007bdf40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007bdf41: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007bdf44: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007bdf46: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007bdf4d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007bdf55: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 007bdf5d: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 007bdf65: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 007bdf6d: mov dword ptr [esp + 0x14], 0xc2c80000 */ W32((u32)(r_esp+0x14u), 0xc2c80000u);
    /* 007bdf75: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007bdf77: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x7bdf7cu); f_004d31f4();
    /* 007bdf7c: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007bdf80: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 007bdf84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007bdf85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007bdf86: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x7bdf8bu); f_004d33c0();
    /* 007bdf8b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007bdf8e: movsx eax, byte ptr [ebx + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x1cu));
    /* 007bdf92: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007bdf95: ja 0x7be108 */ if ((!fC&&!fZ)) goto L_007be108;
L_007bdf9b:; BB(0x007bdf9b);
    /* 007bdf9b: mov eax, dword ptr [eax*4 + 0x97e488] */ r_eax = R32((u32)(r_eax*4+0x97e488u));
    /* 007bdfa2: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007be108:; BB(0x007be108);
    /* 007be108: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be10b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be10c: ret  */ FN_RET(0x007bdf40); r_esp += 4; return;
}

void f_007bdfa4(void)
{
    FN_ENTER(0x007bdfa4);
    /* 007bdfa4: movsx edx, word ptr [ebx + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x1eu));
    /* 007bdfa8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007bdfab: mov word ptr [ebx + 0x1e], dx */ W16((u32)(r_ebx+0x1eu), (u16)r_edx);
    /* 007bdfaf: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007bdfb2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007bdfb6: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007bdfba: fcomp dword ptr [0x97e4c8] */ fx_compare(ST(0), R_F32((u32)(0x97e4c8u))); FPOP();
    /* 007bdfc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007bdfc2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007bdfc3: jbe 0x7be108 */ if ((fC||fZ)) goto L_007be108;
L_007bdfc9:; BB(0x007bdfc9);
    /* 007bdfc9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007bdfcb: call 0x7be158 */ r_esp -= 4; W32(r_esp, 0x7bdfd0u); f_007be158();
    /* 007bdfd0: mov byte ptr [ebx + 0x1c], 9 */ W8((u32)(r_ebx+0x1cu), 0x9u);
    /* 007bdfd4: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007bdfd7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007bdfd8: ret  */ FN_RET(0x007bdfa4); r_esp += 4; return;
L_007be108:; BB(0x007be108);
    /* 007be108: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be10b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be10c: ret  */ FN_RET(0x007bdfa4); r_esp += 4; return;
}

void f_007bdfd9(void)
{
    FN_ENTER(0x007bdfd9);
    /* 007bdfd9: mov edx, dword ptr [0xa95de0] */ r_edx = R32((u32)(0xa95de0u));
    /* 007bdfdf: movsx eax, word ptr [ebx + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x1eu));
    /* 007bdfe3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007bdfe6: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 007bdfea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007bdfec: jne 0x7be108 */ if (!fZ) goto L_007be108;
L_007bdff2:; BB(0x007bdff2);
    /* 007bdff2: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007bdff5: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 007bdff9: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 007bdffd: fcomp dword ptr [0x97e4c4] */ fx_compare(ST(0), R_F32((u32)(0x97e4c4u))); FPOP();
    /* 007be003: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007be005: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007be006: jbe 0x7be108 */ if ((fC||fZ)) goto L_007be108;
L_007be00c:; BB(0x007be00c);
    /* 007be00c: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 007be00f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7be014u); f_007127b0();
    /* 007be014: mov byte ptr [ebx + 0x1c], 8 */ W8((u32)(r_ebx+0x1cu), 0x8u);
    /* 007be018: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007be01a: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 007be01d: mov word ptr [ebx + 0x1e], ax */ W16((u32)(r_ebx+0x1eu), (u16)r_eax);
    /* 007be021: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be024: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be025: ret  */ FN_RET(0x007bdfd9); r_esp += 4; return;
L_007be108:; BB(0x007be108);
    /* 007be108: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007be10b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007be10c: ret  */ FN_RET(0x007bdfd9); r_esp += 4; return;
}

