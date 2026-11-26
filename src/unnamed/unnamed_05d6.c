#include "protos.h"

void f_005d63fc(void) /* sub_5D63FC */
{
    FN_ENTER(0x005d63fc);
    /* 005d63fc: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 005d63ff: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6402: jne 0x5d640d */ if (!fZ) goto L_005d640d;
L_005d6404:; BB(0x005d6404);
    /* 005d6404: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 005d6408: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d640b: je 0x5d6410 */ if (fZ) goto L_005d6410;
L_005d640d:; BB(0x005d640d);
    /* 005d640d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d640f: ret  */ FN_RET(0x005d63fc); r_esp += 4; return;
L_005d6410:; BB(0x005d6410);
    /* 005d6410: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6415: movzx eax, byte ptr [ecx + 4] */ r_eax = (u32)R8((u32)(r_ecx+0x4u));
    /* 005d6419: movzx ecx, byte ptr [ecx + 2] */ r_ecx = (u32)R8((u32)(r_ecx+0x2u));
    /* 005d641d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d641e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d641f: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x5d6424u); f_006ded14();
    /* 005d6424: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6427: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6429: je 0x5d640d */ if (fZ) goto L_005d640d;
L_005d642b:; BB(0x005d642b);
    /* 005d642b: movsx eax, word ptr [eax + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x14u));
    /* 005d642f: ret  */ FN_RET(0x005d63fc); r_esp += 4; return;
}

void f_005d6430(void) /* sub_5D6430 */
{
    FN_ENTER(0x005d6430);
    /* 005d6430: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6431: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d6433: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6435: call 0x5d24b0 */ r_esp -= 4; W32(r_esp, 0x5d643au); f_005d24b0();
    /* 005d643a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d643c: je 0x5d6456 */ if (fZ) goto L_005d6456;
L_005d643e:; BB(0x005d643e);
    /* 005d643e: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 005d6441: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d6444: jne 0x5d644f */ if (!fZ) goto L_005d644f;
L_005d6446:; BB(0x005d6446);
    /* 005d6446: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005d644a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d644d: je 0x5d645d */ if (fZ) goto L_005d645d;
L_005d644f:; BB(0x005d644f);
    /* 005d644f: mov eax, 0xa */ r_eax = 0xau;
    /* 005d6454: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6455: ret  */ FN_RET(0x005d6430); r_esp += 4; return;
L_005d6456:; BB(0x005d6456);
    /* 005d6456: mov eax, 1 */ r_eax = 0x1u;
    /* 005d645b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d645c: ret  */ FN_RET(0x005d6430); r_esp += 4; return;
L_005d645d:; BB(0x005d645d);
    /* 005d645d: mov eax, 0x63 */ r_eax = 0x63u;
    /* 005d6462: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6463: ret  */ FN_RET(0x005d6430); r_esp += 4; return;
}

void f_005d6464(void) /* sub_5D6464 */
{
    FN_ENTER(0x005d6464);
    /* 005d6464: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d6465: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6466: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6467: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d646a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d646c: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 005d6470: movzx ebx, byte ptr [esp + 0x28] */ r_ebx = (u32)R8((u32)(r_esp+0x28u));
    /* 005d6475: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d6477: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5d647cu); f_005d6a3c();
    /* 005d647c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d647e: je 0x5d66b5 */ if (fZ) goto L_005d66b5;
L_005d6484:; BB(0x005d6484);
    /* 005d6484: cmp ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6487: jl 0x5d6491 */ if ((fS!=fO)) goto L_005d6491;
L_005d6489:; BB(0x005d6489);
    /* 005d6489: cmp ebx, 0x88 */ {  u32 a = r_ebx; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d648f: jle 0x5d64a9 */ if ((fZ||fS!=fO)) goto L_005d64a9;
L_005d6491:; BB(0x005d6491);
    /* 005d6491: cmp ebx, 0xa5 */ {  u32 a = r_ebx; u32 b = 0xa5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6497: jl 0x5d66b5 */ if ((fS!=fO)) goto L_005d66b5;
L_005d649d:; BB(0x005d649d);
    /* 005d649d: cmp ebx, 0xa9 */ {  u32 a = r_ebx; u32 b = 0xa9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d64a3: jg 0x5d66b5 */ if ((!fZ&&fS==fO)) goto L_005d66b5;
L_005d64a9:; BB(0x005d64a9);
    /* 005d64a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d64ab: mov byte ptr [ebp], al */ W8((u32)(r_ebp), (u8)r_eax);
    /* 005d64ae: mov byte ptr [ebp + 1], bl */ W8((u32)(r_ebp+0x1u), (u8)r_ebx);
    /* 005d64b1: mov byte ptr [ebp + 2], al */ W8((u32)(r_ebp+0x2u), (u8)r_eax);
    /* 005d64b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d64b6: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005d64b9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005d64bd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005d64c1: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005d64c5: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005d64c9: lea edx, [esp + 2] */ r_edx = (u32)(r_esp+0x2u);
    /* 005d64cd: mov eax, 0x41 */ r_eax = 0x41u;
    /* 005d64d2: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005d64d6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d64d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d64d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d64da: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x5d64dfu); f_00857dec();
    /* 005d64df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d64e2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005d64e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d64e8: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d64eb: jl 0x5d64fa */ if ((fS!=fO)) goto L_005d64fa;
L_005d64ed:; BB(0x005d64ed);
    /* 005d64ed: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d64f0: jg 0x5d64fa */ if ((!fZ&&fS==fO)) goto L_005d64fa;
L_005d64f2:; BB(0x005d64f2);
    /* 005d64f2: add eax, -0x60 */ {  u32 a = r_eax; u32 b = 0xffffffa0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d64f5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d64f8: jmp 0x5d650a */ goto L_005d650a;
L_005d64fa:; BB(0x005d64fa);
    /* 005d64fa: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d64fd: jl 0x5d650a */ if ((fS!=fO)) goto L_005d650a;
L_005d64ff:; BB(0x005d64ff);
    /* 005d64ff: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6502: jg 0x5d650a */ if ((!fZ&&fS==fO)) goto L_005d650a;
L_005d6504:; BB(0x005d6504);
    /* 005d6504: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6507: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_005d650a:; BB(0x005d650a);
    /* 005d650a: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 005d650f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d6511: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6514: jl 0x5d6523 */ if ((fS!=fO)) goto L_005d6523;
L_005d6516:; BB(0x005d6516);
    /* 005d6516: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6519: jg 0x5d6523 */ if ((!fZ&&fS==fO)) goto L_005d6523;
L_005d651b:; BB(0x005d651b);
    /* 005d651b: add eax, -0x60 */ {  u32 a = r_eax; u32 b = 0xffffffa0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d651e: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 005d6521: jmp 0x5d6533 */ goto L_005d6533;
L_005d6523:; BB(0x005d6523);
    /* 005d6523: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6526: jl 0x5d6533 */ if ((fS!=fO)) goto L_005d6533;
L_005d6528:; BB(0x005d6528);
    /* 005d6528: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d652b: jg 0x5d6533 */ if ((!fZ&&fS==fO)) goto L_005d6533;
L_005d652d:; BB(0x005d652d);
    /* 005d652d: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6530: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
L_005d6533:; BB(0x005d6533);
    /* 005d6533: movsx esi, bl */ r_esi = (u32)(i32)(i8)(u8)r_ebx;
    /* 005d6536: movzx ebx, word ptr [esp + 4] */ r_ebx = (u32)R16((u32)(r_esp+0x4u));
    /* 005d653b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d653d: cmp ebx, 0x61 */ {  u32 a = r_ebx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6540: jl 0x5d654f */ if ((fS!=fO)) goto L_005d654f;
L_005d6542:; BB(0x005d6542);
    /* 005d6542: cmp ebx, 0x7a */ {  u32 a = r_ebx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6545: jg 0x5d654f */ if ((!fZ&&fS==fO)) goto L_005d654f;
L_005d6547:; BB(0x005d6547);
    /* 005d6547: add ebx, -0x60 */ {  u32 a = r_ebx; u32 b = 0xffffffa0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d654a: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 005d654d: jmp 0x5d655f */ goto L_005d655f;
L_005d654f:; BB(0x005d654f);
    /* 005d654f: cmp ebx, 0x41 */ {  u32 a = r_ebx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6552: jl 0x5d655f */ if ((fS!=fO)) goto L_005d655f;
L_005d6554:; BB(0x005d6554);
    /* 005d6554: cmp ebx, 0x5a */ {  u32 a = r_ebx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6557: jg 0x5d655f */ if ((!fZ&&fS==fO)) goto L_005d655f;
L_005d6559:; BB(0x005d6559);
    /* 005d6559: add ebx, -0x40 */ {  u32 a = r_ebx; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d655c: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
L_005d655f:; BB(0x005d655f);
    /* 005d655f: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d6562: shl esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005d6565: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005d6567: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 005d656a: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005d656c: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 005d656f: mov eax, edx */ r_eax = r_edx;
    /* 005d6571: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005d6574: or eax, 0xffffff80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d6577: mov byte ptr [ebp + 6], al */ W8((u32)(r_ebp+0x6u), (u8)r_eax);
    /* 005d657a: mov byte ptr [ebp + 7], dl */ W8((u32)(r_ebp+0x7u), (u8)r_edx);
    /* 005d657d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d657f: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 005d6584: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6587: jl 0x5d6596 */ if ((fS!=fO)) goto L_005d6596;
L_005d6589:; BB(0x005d6589);
    /* 005d6589: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d658c: jg 0x5d6596 */ if ((!fZ&&fS==fO)) goto L_005d6596;
L_005d658e:; BB(0x005d658e);
    /* 005d658e: add eax, -0x60 */ {  u32 a = r_eax; u32 b = 0xffffffa0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6591: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d6594: jmp 0x5d65a6 */ goto L_005d65a6;
L_005d6596:; BB(0x005d6596);
    /* 005d6596: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6599: jl 0x5d65a6 */ if ((fS!=fO)) goto L_005d65a6;
L_005d659b:; BB(0x005d659b);
    /* 005d659b: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d659e: jg 0x5d65a6 */ if ((!fZ&&fS==fO)) goto L_005d65a6;
L_005d65a0:; BB(0x005d65a0);
    /* 005d65a0: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d65a3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_005d65a6:; BB(0x005d65a6);
    /* 005d65a6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d65ab: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d65ad: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d65b0: jl 0x5d65bf */ if ((fS!=fO)) goto L_005d65bf;
L_005d65b2:; BB(0x005d65b2);
    /* 005d65b2: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d65b5: jg 0x5d65bf */ if ((!fZ&&fS==fO)) goto L_005d65bf;
L_005d65b7:; BB(0x005d65b7);
    /* 005d65b7: add eax, -0x60 */ {  u32 a = r_eax; u32 b = 0xffffffa0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d65ba: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 005d65bd: jmp 0x5d65cf */ goto L_005d65cf;
L_005d65bf:; BB(0x005d65bf);
    /* 005d65bf: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d65c2: jl 0x5d65cf */ if ((fS!=fO)) goto L_005d65cf;
L_005d65c4:; BB(0x005d65c4);
    /* 005d65c4: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d65c7: jg 0x5d65cf */ if ((!fZ&&fS==fO)) goto L_005d65cf;
L_005d65c9:; BB(0x005d65c9);
    /* 005d65c9: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d65cc: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
L_005d65cf:; BB(0x005d65cf);
    /* 005d65cf: movsx esi, bl */ r_esi = (u32)(i32)(i8)(u8)r_ebx;
    /* 005d65d2: movzx ebx, word ptr [esp + 0xa] */ r_ebx = (u32)R16((u32)(r_esp+0xau));
    /* 005d65d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d65d9: cmp ebx, 0x61 */ {  u32 a = r_ebx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d65dc: jl 0x5d65eb */ if ((fS!=fO)) goto L_005d65eb;
L_005d65de:; BB(0x005d65de);
    /* 005d65de: cmp ebx, 0x7a */ {  u32 a = r_ebx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d65e1: jg 0x5d65eb */ if ((!fZ&&fS==fO)) goto L_005d65eb;
L_005d65e3:; BB(0x005d65e3);
    /* 005d65e3: add ebx, -0x60 */ {  u32 a = r_ebx; u32 b = 0xffffffa0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d65e6: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 005d65e9: jmp 0x5d65fb */ goto L_005d65fb;
L_005d65eb:; BB(0x005d65eb);
    /* 005d65eb: cmp ebx, 0x41 */ {  u32 a = r_ebx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d65ee: jl 0x5d65fb */ if ((fS!=fO)) goto L_005d65fb;
L_005d65f0:; BB(0x005d65f0);
    /* 005d65f0: cmp ebx, 0x5a */ {  u32 a = r_ebx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d65f3: jg 0x5d65fb */ if ((!fZ&&fS==fO)) goto L_005d65fb;
L_005d65f5:; BB(0x005d65f5);
    /* 005d65f5: add ebx, -0x40 */ {  u32 a = r_ebx; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d65f8: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
L_005d65fb:; BB(0x005d65fb);
    /* 005d65fb: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d65fe: shl esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005d6601: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005d6603: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 005d6606: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005d6608: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 005d660b: mov eax, edx */ r_eax = r_edx;
    /* 005d660d: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005d6610: or eax, 0xffffff80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d6613: mov byte ptr [ebp + 8], al */ W8((u32)(r_ebp+0x8u), (u8)r_eax);
    /* 005d6616: mov byte ptr [ebp + 9], dl */ W8((u32)(r_ebp+0x9u), (u8)r_edx);
    /* 005d6619: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d661b: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005d6620: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6623: jl 0x5d6632 */ if ((fS!=fO)) goto L_005d6632;
L_005d6625:; BB(0x005d6625);
    /* 005d6625: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6628: jg 0x5d6632 */ if ((!fZ&&fS==fO)) goto L_005d6632;
L_005d662a:; BB(0x005d662a);
    /* 005d662a: add eax, -0x60 */ {  u32 a = r_eax; u32 b = 0xffffffa0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d662d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d6630: jmp 0x5d6642 */ goto L_005d6642;
L_005d6632:; BB(0x005d6632);
    /* 005d6632: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6635: jl 0x5d6642 */ if ((fS!=fO)) goto L_005d6642;
L_005d6637:; BB(0x005d6637);
    /* 005d6637: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d663a: jg 0x5d6642 */ if ((!fZ&&fS==fO)) goto L_005d6642;
L_005d663c:; BB(0x005d663c);
    /* 005d663c: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d663f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_005d6642:; BB(0x005d6642);
    /* 005d6642: movzx eax, word ptr [esp + 0xe] */ r_eax = (u32)R16((u32)(r_esp+0xeu));
    /* 005d6647: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d6649: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d664c: jl 0x5d665b */ if ((fS!=fO)) goto L_005d665b;
L_005d664e:; BB(0x005d664e);
    /* 005d664e: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6651: jg 0x5d665b */ if ((!fZ&&fS==fO)) goto L_005d665b;
L_005d6653:; BB(0x005d6653);
    /* 005d6653: add eax, -0x60 */ {  u32 a = r_eax; u32 b = 0xffffffa0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6656: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 005d6659: jmp 0x5d666b */ goto L_005d666b;
L_005d665b:; BB(0x005d665b);
    /* 005d665b: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d665e: jl 0x5d666b */ if ((fS!=fO)) goto L_005d666b;
L_005d6660:; BB(0x005d6660);
    /* 005d6660: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6663: jg 0x5d666b */ if ((!fZ&&fS==fO)) goto L_005d666b;
L_005d6665:; BB(0x005d6665);
    /* 005d6665: add eax, -0x40 */ {  u32 a = r_eax; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6668: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
L_005d666b:; BB(0x005d666b);
    /* 005d666b: movsx esi, bl */ r_esi = (u32)(i32)(i8)(u8)r_ebx;
    /* 005d666e: movzx ebx, word ptr [esp + 0x10] */ r_ebx = (u32)R16((u32)(r_esp+0x10u));
    /* 005d6673: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d6675: cmp ebx, 0x61 */ {  u32 a = r_ebx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6678: jl 0x5d6687 */ if ((fS!=fO)) goto L_005d6687;
L_005d667a:; BB(0x005d667a);
    /* 005d667a: cmp ebx, 0x7a */ {  u32 a = r_ebx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d667d: jg 0x5d6687 */ if ((!fZ&&fS==fO)) goto L_005d6687;
L_005d667f:; BB(0x005d667f);
    /* 005d667f: add ebx, -0x60 */ {  u32 a = r_ebx; u32 b = 0xffffffa0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d6682: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 005d6685: jmp 0x5d6697 */ goto L_005d6697;
L_005d6687:; BB(0x005d6687);
    /* 005d6687: cmp ebx, 0x41 */ {  u32 a = r_ebx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d668a: jl 0x5d6697 */ if ((fS!=fO)) goto L_005d6697;
L_005d668c:; BB(0x005d668c);
    /* 005d668c: cmp ebx, 0x5a */ {  u32 a = r_ebx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d668f: jg 0x5d6697 */ if ((!fZ&&fS==fO)) goto L_005d6697;
L_005d6691:; BB(0x005d6691);
    /* 005d6691: add ebx, -0x40 */ {  u32 a = r_ebx; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d6694: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
L_005d6697:; BB(0x005d6697);
    /* 005d6697: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005d669a: shl esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005d669d: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005d669f: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
    /* 005d66a2: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005d66a4: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 005d66a7: mov eax, edx */ r_eax = r_edx;
    /* 005d66a9: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005d66ac: or eax, 0xffffff80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d66af: mov byte ptr [ebp + 0xa], al */ W8((u32)(r_ebp+0xau), (u8)r_eax);
    /* 005d66b2: mov byte ptr [ebp + 0xb], dl */ W8((u32)(r_ebp+0xbu), (u8)r_edx);
L_005d66b5:; BB(0x005d66b5);
    /* 005d66b5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d66b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d66b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d66ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d66bb: ret 8 */ FN_RET(0x005d6464); r_esp += 12; return;
}

void f_005d66c0(void) /* sub_5D66C0 */
{
    FN_ENTER(0x005d66c0);
    /* 005d66c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d66c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d66c3: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d66c6: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5d66cbu); f_005c5528();
    /* 005d66cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d66cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d66ce: je 0x5d66d4 */ if (fZ) goto L_005d66d4;
L_005d66d0:; BB(0x005d66d0);
    /* 005d66d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d66d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d66d3: ret  */ FN_RET(0x005d66c0); r_esp += 4; return;
L_005d66d4:; BB(0x005d66d4);
    /* 005d66d4: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 005d66d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d66d9: je 0x5d6712 */ if (fZ) goto L_005d6712;
L_005d66db:; BB(0x005d66db);
    /* 005d66db: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d66de: je 0x5d6712 */ if (fZ) goto L_005d6712;
L_005d66e0:; BB(0x005d66e0);
    /* 005d66e0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d66e3: je 0x5d6701 */ if (fZ) goto L_005d6701;
L_005d66e5:; BB(0x005d66e5);
    /* 005d66e5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d66e8: jne 0x5d66f1 */ if (!fZ) goto L_005d66f1;
L_005d66ea:; BB(0x005d66ea);
    /* 005d66ea: mov eax, 1 */ r_eax = 0x1u;
    /* 005d66ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d66f0: ret  */ FN_RET(0x005d66c0); r_esp += 4; return;
L_005d66f1:; BB(0x005d66f1);
    /* 005d66f1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d66f4: jne 0x5d66fd */ if (!fZ) goto L_005d66fd;
L_005d66f6:; BB(0x005d66f6);
    /* 005d66f6: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 005d66f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d66fb: jne 0x5d66ea */ if (!fZ) goto L_005d66ea;
L_005d66fd:; BB(0x005d66fd);
    /* 005d66fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d66ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6700: ret  */ FN_RET(0x005d66c0); r_esp += 4; return;
L_005d6701:; BB(0x005d6701);
    /* 005d6701: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005d6705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6707: jne 0x5d66ea */ if (!fZ) goto L_005d66ea;
L_005d6709:; BB(0x005d6709);
    /* 005d6709: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d670c: jl 0x5d66ea */ if ((fS!=fO)) goto L_005d66ea;
L_005d670e:; BB(0x005d670e);
    /* 005d670e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6710: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6711: ret  */ FN_RET(0x005d66c0); r_esp += 4; return;
L_005d6712:; BB(0x005d6712);
    /* 005d6712: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6714: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d6719u); f_005d2890();
    /* 005d6719: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d671b: jne 0x5d66ea */ if (!fZ) goto L_005d66ea;
L_005d671d:; BB(0x005d671d);
    /* 005d671d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d671f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6720: ret  */ FN_RET(0x005d66c0); r_esp += 4; return;
}

void f_005d6724(void) /* sub_5D6724 */
{
    FN_ENTER(0x005d6724);
    /* 005d6724: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6727: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 005d672a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d672c: jne 0x5d67db */ if (!fZ) goto L_005d67db;
L_005d6732:; BB(0x005d6732);
    /* 005d6732: mov eax, 0x92c360 */ r_eax = 0x92c360u;
    /* 005d6737: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6739: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005d673c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d673f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005d6743: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d6746: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005d674a: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005d674d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005d6751: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005d6754: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005d6758: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005d675b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005d675f: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005d6762: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005d6766: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005d6769: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005d676d: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005d6770: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005d6774: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005d6777: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 005d677b: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005d677e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005d6782: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005d6785: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005d6789: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005d678c: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 005d6790: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005d6793: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005d6797: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005d679a: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005d679e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005d67a1: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005d67a5: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005d67a8: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005d67ac: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005d67af: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 005d67b2: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 005d67b6: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005d67ba: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 005d67be: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d67c3: jge 0x5d67cc */ if ((fS==fO)) goto L_005d67cc;
L_005d67c5:; BB(0x005d67c5);
    /* 005d67c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d67c6: call 0x5e4dd0 */ r_esp -= 4; W32(r_esp, 0x5d67cbu); f_005e4dd0();
    /* 005d67cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005d67cc:; BB(0x005d67cc);
    /* 005d67cc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d67cf: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005d67d2: jae 0x5d67db */ if (!fC) goto L_005d67db;
L_005d67d4:; BB(0x005d67d4);
    /* 005d67d4: mov eax, dword ptr [esp + eax*4] */ r_eax = R32((u32)(r_esp+r_eax*4));
    /* 005d67d7: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d67da: ret  */ FN_RET(0x005d6724); r_esp += 4; return;
L_005d67db:; BB(0x005d67db);
    /* 005d67db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d67dd: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d67e0: ret  */ FN_RET(0x005d6724); r_esp += 4; return;
}

void f_005d67e4(void) /* sub_5D67E4 */
{
    FN_ENTER(0x005d67e4);
    /* 005d67e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d67e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d67e6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d67e9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d67eb: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005d67ef: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005d67f3: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005d67f7: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005d67fa: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 005d67fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6800: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5d6805u); f_005dbdb8();
    /* 005d6805: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 005d6809: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005d680d: movzx eax, byte ptr [ebx + 0xd] */ r_eax = (u32)R8((u32)(r_ebx+0xdu));
    /* 005d6811: and edx, 0x7ffe */ {  u32 a = r_edx; u32 b = 0x7ffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005d6817: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 005d681b: movzx eax, word ptr [ebx + 6] */ r_eax = (u32)R16((u32)(r_ebx+0x6u));
    /* 005d681f: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 005d6824: and eax, 0x7ffe */ {  u32 a = r_eax; u32 b = 0x7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d6829: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 005d682e: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005d6832: and eax, 0x7ffe */ {  u32 a = r_eax; u32 b = 0x7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d6837: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 005d683c: movzx eax, word ptr [ebx + 0xa] */ r_eax = (u32)R16((u32)(r_ebx+0xau));
    /* 005d6840: and eax, 0x7ffe */ {  u32 a = r_eax; u32 b = 0x7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d6845: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 005d684a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d684d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005d6851: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 005d6855: mov byte ptr [esp + 0x10], al */ W8((u32)(r_esp+0x10u), (u8)r_eax);
    /* 005d6859: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 005d685c: mov byte ptr [esp + 0x11], al */ W8((u32)(r_esp+0x11u), (u8)r_eax);
    /* 005d6860: movzx eax, byte ptr [ebx + 0xc] */ r_eax = (u32)R8((u32)(r_ebx+0xcu));
    /* 005d6864: movzx ebx, byte ptr [ebx + 0xe] */ r_ebx = (u32)R8((u32)(r_ebx+0xeu));
    /* 005d6868: mov byte ptr [esp + 0x12], al */ W8((u32)(r_esp+0x12u), (u8)r_eax);
    /* 005d686c: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005d686f: mov byte ptr [esp + 0x13], bl */ W8((u32)(r_esp+0x13u), (u8)r_ebx);
    /* 005d6873: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 005d6876: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005d687a: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 005d687d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d6881: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005d6884: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005d6888: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005d688b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d688f: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 005d6892: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d6895: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6896: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6897: ret 4 */ FN_RET(0x005d67e4); r_esp += 8; return;
}

void f_005d689c(void) /* sub_5D689C */
{
    FN_ENTER(0x005d689c);
    /* 005d689c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005d68a1: mov edx, eax */ r_edx = r_eax;
    /* 005d68a3: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005d68a6: mov byte ptr [ecx + 0xb], al */ W8((u32)(r_ecx+0xbu), (u8)r_eax);
    /* 005d68a9: or edx, 0xffffff80 */ {  u32 a = r_edx; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d68ac: mov byte ptr [ecx + 0xa], dl */ W8((u32)(r_ecx+0xau), (u8)r_edx);
    /* 005d68af: ret 4 */ FN_RET(0x005d689c); r_esp += 8; return;
}

void f_005d68b4(void) /* sub_5D68B4 */
{
    FN_ENTER(0x005d68b4);
    /* 005d68b4: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 005d68b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d68b9: je 0x5d68d8 */ if (fZ) goto L_005d68d8;
L_005d68bb:; BB(0x005d68bb);
    /* 005d68bb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d68be: jne 0x5d68c8 */ if (!fZ) goto L_005d68c8;
L_005d68c0:; BB(0x005d68c0);
    /* 005d68c0: movzx eax, byte ptr [ecx + 4] */ r_eax = (u32)R8((u32)(r_ecx+0x4u));
    /* 005d68c4: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d68c7: ret  */ FN_RET(0x005d68b4); r_esp += 4; return;
L_005d68c8:; BB(0x005d68c8);
    /* 005d68c8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d68cb: jne 0x5d68d5 */ if (!fZ) goto L_005d68d5;
L_005d68cd:; BB(0x005d68cd);
    /* 005d68cd: movzx eax, byte ptr [ecx + 3] */ r_eax = (u32)R8((u32)(r_ecx+0x3u));
    /* 005d68d1: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d68d4: ret  */ FN_RET(0x005d68b4); r_esp += 4; return;
L_005d68d5:; BB(0x005d68d5);
    /* 005d68d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d68d7: ret  */ FN_RET(0x005d68b4); r_esp += 4; return;
L_005d68d8:; BB(0x005d68d8);
    /* 005d68d8: movzx eax, byte ptr [ecx + 5] */ r_eax = (u32)R8((u32)(r_ecx+0x5u));
    /* 005d68dc: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d68df: ret  */ FN_RET(0x005d68b4); r_esp += 4; return;
}

void f_005d68e0(void) /* sub_5D68E0 */
{
    FN_ENTER(0x005d68e0);
    /* 005d68e0: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005d68e5: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 005d68e8: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d68eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d68ed: je 0x5d6905 */ if (fZ) goto L_005d6905;
L_005d68ef:; BB(0x005d68ef);
    /* 005d68ef: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d68f2: jne 0x5d68fa */ if (!fZ) goto L_005d68fa;
L_005d68f4:; BB(0x005d68f4);
    /* 005d68f4: or byte ptr [ecx + 4], al */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d68f7: ret 4 */ FN_RET(0x005d68e0); r_esp += 8; return;
L_005d68fa:; BB(0x005d68fa);
    /* 005d68fa: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d68fd: jne 0x5d6908 */ if (!fZ) goto L_005d6908;
L_005d68ff:; BB(0x005d68ff);
    /* 005d68ff: or byte ptr [ecx + 3], al */ { u32 ad = (u32)(r_ecx+0x3u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6902: ret 4 */ FN_RET(0x005d68e0); r_esp += 8; return;
L_005d6905:; BB(0x005d6905);
    /* 005d6905: or byte ptr [ecx + 5], al */ { u32 ad = (u32)(r_ecx+0x5u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005d6908:; BB(0x005d6908);
    /* 005d6908: ret 4 */ FN_RET(0x005d68e0); r_esp += 8; return;
}

void f_005d690c(void) /* sub_5D690C */
{
    FN_ENTER(0x005d690c);
    /* 005d690c: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d6911u); f_005d2890();
    /* 005d6911: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6913: je 0x5d6919 */ if (fZ) goto L_005d6919;
L_005d6915:; BB(0x005d6915);
    /* 005d6915: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005d6918: ret  */ FN_RET(0x005d690c); r_esp += 4; return;
L_005d6919:; BB(0x005d6919);
    /* 005d6919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d691b: ret  */ FN_RET(0x005d690c); r_esp += 4; return;
}

void f_005d691c(void) /* sub_5D691C */
{
    FN_ENTER(0x005d691c);
    /* 005d691c: mov dword ptr [0xa8d9d0], 0x3f800000 */ W32((u32)(0xa8d9d0u), 0x3f800000u);
    /* 005d6926: mov dword ptr [0xa8d9d4], 0x41000000 */ W32((u32)(0xa8d9d4u), 0x41000000u);
    /* 005d6930: mov dword ptr [0xa8d9d8], 0x3fc00000 */ W32((u32)(0xa8d9d8u), 0x3fc00000u);
    /* 005d693a: ret  */ FN_RET(0x005d691c); r_esp += 4; return;
}

void f_005d693c(void) /* sub_5D693C */
{
    FN_ENTER(0x005d693c);
    /* 005d693c: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 005d693f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d6941: jl 0x5d6983 */ if ((fS!=fO)) goto L_005d6983;
L_005d6943:; BB(0x005d6943);
    /* 005d6943: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d6946: jle 0x5d697a */ if ((fZ||fS!=fO)) goto L_005d697a;
L_005d6948:; BB(0x005d6948);
    /* 005d6948: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d694b: jne 0x5d6966 */ if (!fZ) goto L_005d6966;
L_005d694d:; BB(0x005d694d);
    /* 005d694d: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d6952u); f_005d2890();
    /* 005d6952: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6954: je 0x5d6983 */ if (fZ) goto L_005d6983;
L_005d6956:; BB(0x005d6956);
    /* 005d6956: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 005d6959: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d695e: je 0x5d6983 */ if (fZ) goto L_005d6983;
L_005d6960:; BB(0x005d6960);
    /* 005d6960: mov eax, 0xc */ r_eax = 0xcu;
    /* 005d6965: ret  */ FN_RET(0x005d693c); r_esp += 4; return;
L_005d6966:; BB(0x005d6966);
    /* 005d6966: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6969: jne 0x5d6983 */ if (!fZ) goto L_005d6983;
L_005d696b:; BB(0x005d696b);
    /* 005d696b: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 005d696f: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d6972: jl 0x5d6983 */ if ((fS!=fO)) goto L_005d6983;
L_005d6974:; BB(0x005d6974);
    /* 005d6974: mov eax, 0xc */ r_eax = 0xcu;
    /* 005d6979: ret  */ FN_RET(0x005d693c); r_esp += 4; return;
L_005d697a:; BB(0x005d697a);
    /* 005d697a: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5d697fu); f_005d2890();
    /* 005d697f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6981: jne 0x5d6986 */ if (!fZ) goto L_005d6986;
L_005d6983:; BB(0x005d6983);
    /* 005d6983: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6985: ret  */ FN_RET(0x005d693c); r_esp += 4; return;
L_005d6986:; BB(0x005d6986);
    /* 005d6986: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005d6988: call 0x5e5450 */ r_esp -= 4; W32(r_esp, 0x5d698du); f_005e5450();
    /* 005d698d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d698e: ret  */ FN_RET(0x005d693c); r_esp += 4; return;
}

void f_005d6990(void) /* sub_5D6990 */
{
    FN_ENTER(0x005d6990);
    /* 005d6990: call 0x5d693c */ r_esp -= 4; W32(r_esp, 0x5d6995u); f_005d693c();
    /* 005d6995: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d6998: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d699b: jge 0x5d69a0 */ if ((fS==fO)) goto L_005d69a0;
L_005d699d:; BB(0x005d699d);
    /* 005d699d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d699f: ret  */ FN_RET(0x005d6990); r_esp += 4; return;
L_005d69a0:; BB(0x005d69a0);
    /* 005d69a0: mov eax, 1 */ r_eax = 0x1u;
    /* 005d69a5: ret  */ FN_RET(0x005d6990); r_esp += 4; return;
}

void f_005d69a8(void) /* sub_5D69A8 */
{
    FN_ENTER(0x005d69a8);
    /* 005d69a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d69a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d69aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d69ab: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d69ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d69af: call 0x5d693c */ r_esp -= 4; W32(r_esp, 0x5d69b4u); f_005d693c();
    /* 005d69b4: mov ebp, eax */ r_ebp = r_eax;
    /* 005d69b6: movzx edx, byte ptr [ebx] */ r_edx = (u32)R8((u32)(r_ebx));
    /* 005d69b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69bb: jne 0x5d69f9 */ if (!fZ) goto L_005d69f9;
L_005d69bd:; BB(0x005d69bd);
    /* 005d69bd: mov edi, ebp */ r_edi = r_ebp;
    /* 005d69bf: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 005d69c5: cmp edi, 9 */ {  u32 a = r_edi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d69c8: jge 0x5d69e9 */ if ((fS==fO)) goto L_005d69e9;
L_005d69ca:; BB(0x005d69ca);
    /* 005d69ca: movzx edx, byte ptr [ebx + 4] */ r_edx = (u32)R8((u32)(r_ebx+0x4u));
    /* 005d69ce: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69d4: jne 0x5d6a07 */ if (!fZ) goto L_005d6a07;
L_005d69d6:; BB(0x005d69d6);
    /* 005d69d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d69d7: call 0x5e4e74 */ r_esp -= 4; W32(r_esp, 0x5d69dcu); f_005e4e74();
    /* 005d69dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d69dd: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d69df: mov ebp, edi */ r_ebp = r_edi;
    /* 005d69e1: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 005d69e7: jmp 0x5d6a07 */ goto L_005d6a07;
L_005d69e9:; BB(0x005d69e9);
    /* 005d69e9: movzx edx, byte ptr [ebx + 4] */ r_edx = (u32)R8((u32)(r_ebx+0x4u));
    /* 005d69ed: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69f3: je 0x5d6a07 */ if (fZ) goto L_005d6a07;
L_005d69f5:; BB(0x005d69f5);
    /* 005d69f5: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005d69f7: jmp 0x5d6a07 */ goto L_005d6a07;
L_005d69f9:; BB(0x005d69f9);
    /* 005d69f9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d69fc: jne 0x5d6a07 */ if (!fZ) goto L_005d6a07;
L_005d69fe:; BB(0x005d69fe);
    /* 005d69fe: movzx edx, byte ptr [ebx + 1] */ r_edx = (u32)R8((u32)(r_ebx+0x1u));
    /* 005d6a02: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6a05: je 0x5d6a1f */ if (fZ) goto L_005d6a1f;
L_005d6a07:; BB(0x005d6a07);
    /* 005d6a07: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 005d6a0d: mov edx, 0xc */ r_edx = 0xcu;
    /* 005d6a12: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d6a15: jl 0x5d6a19 */ if ((fS!=fO)) goto L_005d6a19;
L_005d6a17:; BB(0x005d6a17);
    /* 005d6a17: mov ebp, edx */ r_ebp = r_edx;
L_005d6a19:; BB(0x005d6a19);
    /* 005d6a19: mov eax, ebp */ r_eax = r_ebp;
    /* 005d6a1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6a1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6a1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d6a1e: ret  */ FN_RET(0x005d69a8); r_esp += 4; return;
L_005d6a1f:; BB(0x005d6a1f);
    /* 005d6a1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6a21: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5d6a26u); f_005d2880();
    /* 005d6a26: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005d6a29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d6a2b: jl 0x5d6a34 */ if ((fS!=fO)) goto L_005d6a34;
L_005d6a2d:; BB(0x005d6a2d);
    /* 005d6a2d: jle 0x5d6a07 */ if ((fZ||fS!=fO)) goto L_005d6a07;
L_005d6a2f:; BB(0x005d6a2f);
    /* 005d6a2f: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d6a32: jmp 0x5d6a07 */ goto L_005d6a07;
L_005d6a34:; BB(0x005d6a34);
    /* 005d6a34: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d6a37: jmp 0x5d6a07 */ goto L_005d6a07;
}

void f_005d6a3c(void) /* sub_5D6A3C */
{
    FN_ENTER(0x005d6a3c);
    /* 005d6a3c: mov dword ptr [ecx + 0xc], 0xffffffff */ W32((u32)(r_ecx+0xcu), 0xffffffffu);
    /* 005d6a43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6a45: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 005d6a47: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 005d6a4a: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005d6a4d: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 005d6a50: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 005d6a53: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 005d6a56: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005d6a59: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 005d6a5c: mov byte ptr [ecx + 7], al */ W8((u32)(r_ecx+0x7u), (u8)r_eax);
    /* 005d6a5f: mov byte ptr [ecx + 8], al */ W8((u32)(r_ecx+0x8u), (u8)r_eax);
    /* 005d6a62: mov byte ptr [ecx + 9], al */ W8((u32)(r_ecx+0x9u), (u8)r_eax);
    /* 005d6a65: mov byte ptr [ecx + 0xa], al */ W8((u32)(r_ecx+0xau), (u8)r_eax);
    /* 005d6a68: mov byte ptr [ecx + 0xb], al */ W8((u32)(r_ecx+0xbu), (u8)r_eax);
    /* 005d6a6b: ret  */ FN_RET(0x005d6a3c); r_esp += 4; return;
}

void f_005d6a6c(void) /* sub_5D6A6C */
{
    FN_ENTER(0x005d6a6c);
    /* 005d6a6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6a6e: mov edx, ecx */ r_edx = r_ecx;
    /* 005d6a70: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005d6a73: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6a76: je 0x5d6ab0 */ if (fZ) goto L_005d6ab0;
L_005d6a78:; BB(0x005d6a78);
    /* 005d6a78: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d6a7a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6a7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d6a7f: jl 0x5d6aaa */ if ((fS!=fO)) goto L_005d6aaa;
L_005d6a81:; BB(0x005d6a81);
    /* 005d6a81: mov ebx, eax */ r_ebx = r_eax;
    /* 005d6a83: mov esi, edx */ r_esi = r_edx;
L_005d6a85:; BB(0x005d6a85);
    /* 005d6a85: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 005d6a88: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005d6a8b: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d6a8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6a90: je 0x5d6ab3 */ if (fZ) goto L_005d6ab3;
L_005d6a92:; BB(0x005d6a92);
    /* 005d6a92: movzx ecx, byte ptr [ecx + ebx + 1] */ r_ecx = (u32)R8((u32)(r_ecx+r_ebx+0x1u));
    /* 005d6a97: mov ecx, dword ptr [eax + ecx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_ecx*8+0x4u));
L_005d6a9b:; BB(0x005d6a9b);
    /* 005d6a9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6a9d: je 0x5d6aa1 */ if (fZ) goto L_005d6aa1;
L_005d6a9f:; BB(0x005d6a9f);
    /* 005d6a9f: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x5d6aa1u); call_ind(t); }
L_005d6aa1:; BB(0x005d6aa1);
    /* 005d6aa1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d6aa3: jge 0x5d6a85 */ if ((fS==fO)) goto L_005d6a85;
L_005d6aa5:; BB(0x005d6aa5);
    /* 005d6aa5: mov edx, esi */ r_edx = r_esi;
    /* 005d6aa7: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
L_005d6aaa:; BB(0x005d6aaa);
    /* 005d6aaa: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6aad: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
L_005d6ab0:; BB(0x005d6ab0);
    /* 005d6ab0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6ab1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d6ab2: ret  */ FN_RET(0x005d6a6c); r_esp += 4; return;
L_005d6ab3:; BB(0x005d6ab3);
    /* 005d6ab3: mov ecx, dword ptr [eax + ebx*8 + 0xc] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0xcu));
    /* 005d6ab7: jmp 0x5d6a9b */ goto L_005d6a9b;
}

void f_005d6abc(void) /* sub_5D6ABC */
{
    FN_ENTER(0x005d6abc);
    /* 005d6abc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d6abd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d6abe: mov esi, ecx */ r_esi = r_ecx;
    /* 005d6ac0: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 005d6ac3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6ac5: jne 0x5d6b07 */ if (!fZ) goto L_005d6b07;
L_005d6ac7:; BB(0x005d6ac7);
    /* 005d6ac7: mov ecx, esi */ r_ecx = r_esi;
    /* 005d6ac9: call 0x5d6c1c */ r_esp -= 4; W32(r_esp, 0x5d6aceu); f_005d6c1c();
    /* 005d6ace: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005d6ad0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d6ad2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6ad4: je 0x5d6afe */ if (fZ) goto L_005d6afe;
L_005d6ad6:; BB(0x005d6ad6);
    /* 005d6ad6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005d6ad9: mov ebx, eax */ r_ebx = r_eax;
L_005d6adb:; BB(0x005d6adb);
    /* 005d6adb: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 005d6ade: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005d6ae1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6ae3: je 0x5d6b0a */ if (fZ) goto L_005d6b0a;
L_005d6ae5:; BB(0x005d6ae5);
    /* 005d6ae5: movzx ecx, byte ptr [ecx + ebx] */ r_ecx = (u32)R8((u32)(r_ecx+r_ebx));
    /* 005d6ae9: mov ecx, dword ptr [eax + ecx*8] */ r_ecx = R32((u32)(r_eax+r_ecx*8));
L_005d6aec:; BB(0x005d6aec);
    /* 005d6aec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6aee: je 0x5d6af4 */ if (fZ) goto L_005d6af4;
L_005d6af0:; BB(0x005d6af0);
    /* 005d6af0: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x5d6af2u); call_ind(t); }
    /* 005d6af2: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
L_005d6af4:; BB(0x005d6af4);
    /* 005d6af4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d6af7: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6af9: jne 0x5d6adb */ if (!fZ) goto L_005d6adb;
L_005d6afb:; BB(0x005d6afb);
    /* 005d6afb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_005d6afe:; BB(0x005d6afe);
    /* 005d6afe: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 005d6b01: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6b04: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_005d6b07:; BB(0x005d6b07);
    /* 005d6b07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6b08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d6b09: ret  */ FN_RET(0x005d6abc); r_esp += 4; return;
L_005d6b0a:; BB(0x005d6b0a);
    /* 005d6b0a: mov ecx, dword ptr [eax + ebx*8] */ r_ecx = R32((u32)(r_eax+r_ebx*8));
    /* 005d6b0d: jmp 0x5d6aec */ goto L_005d6aec;
}

void f_005d6b10(void) /* sub_5D6B10 */
{
    FN_ENTER(0x005d6b10);
    /* 005d6b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6b13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b15: push 0x8da65c */ { u32 v = 0x8da65cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d6b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d6b28: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6b2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d6b2e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d6b31: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d6b34: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d6b37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6b3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6b3c: je 0x5d6bc3 */ if (fZ) goto L_005d6bc3;
L_005d6b42:; BB(0x005d6b42);
    /* 005d6b42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d6b44: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d6b47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005d6b49:; BB(0x005d6b49);
    /* 005d6b49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6b4c: mov edx, dword ptr [eax + ecx*8] */ r_edx = R32((u32)(r_eax+r_ecx*8));
    /* 005d6b4f: mov eax, dword ptr [eax + ecx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 005d6b53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6b55: je 0x5d6bba */ if (fZ) goto L_005d6bba;
L_005d6b57:; BB(0x005d6b57);
    /* 005d6b57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b5a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d6b5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6b5f: je 0x5d6b49 */ if (fZ) goto L_005d6b49;
L_005d6b61:; BB(0x005d6b61);
    /* 005d6b61: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005d6b68: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b6a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d6b6fu); f_008581c5();
    /* 005d6b6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6b70: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d6b73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6b75: je 0x5d6bb6 */ if (fZ) goto L_005d6bb6;
L_005d6b77:; BB(0x005d6b77);
    /* 005d6b77: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005d6b7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d6b85: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6b88: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d6b8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6b90: call 0x5d6bec */ r_esp -= 4; W32(r_esp, 0x5d6b95u); f_005d6bec();
    /* 005d6b95: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6b98: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d6b9f:; BB(0x005d6b9f);
    /* 005d6b9f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6ba2: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d6ba5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6ba8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6bab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6bb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6bb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6bb5: ret  */ FN_RET(0x005d6b10); r_esp += 4; return;
L_005d6bb6:; BB(0x005d6bb6);
    /* 005d6bb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6bb8: jmp 0x5d6b9f */ goto L_005d6b9f;
L_005d6bba:; BB(0x005d6bba);
    /* 005d6bba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6bbc: jne 0x5d6b57 */ if (!fZ) goto L_005d6b57;
L_005d6bbe:; BB(0x005d6bbe);
    /* 005d6bbe: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d6bc1: jmp 0x5d6b57 */ goto L_005d6b57;
L_005d6bc3:; BB(0x005d6bc3);
    /* 005d6bc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6bc5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6bc8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6bcf: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6bd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6bd2: ret  */ FN_RET(0x005d6b10); r_esp += 4; return;
}

void f_005d6bd4(void) /* sub_5D6BD4 */
{
    FN_ENTER(0x005d6bd4);
    /* 005d6bd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bd5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d6bd7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d6bd9: call 0x5d6a6c */ r_esp -= 4; W32(r_esp, 0x5d6bdeu); f_005d6a6c();
    /* 005d6bde: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d6be1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d6be6u); f_00857e98();
    /* 005d6be6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6be7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6be8: ret  */ FN_RET(0x005d6bd4); r_esp += 4; return;
}

void f_005d6bec(void) /* sub_5D6BEC */
{
    FN_ENTER(0x005d6bec);
    /* 005d6bec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d6bed: mov edi, ecx */ r_edi = r_ecx;
    /* 005d6bef: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d6bf3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005d6bf7: mov dword ptr [edi + 0xc], 0 */ W32((u32)(r_edi+0xcu), 0x0u);
    /* 005d6bfe: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 005d6c01: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005d6c03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c04: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5d6c09u); f_008581c5();
    /* 005d6c09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6c0a: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 005d6c0d: mov ecx, edi */ r_ecx = r_edi;
    /* 005d6c0f: call 0x5d6abc */ r_esp -= 4; W32(r_esp, 0x5d6c14u); f_005d6abc();
    /* 005d6c14: mov eax, edi */ r_eax = r_edi;
    /* 005d6c16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d6c17: ret 8 */ FN_RET(0x005d6bec); r_esp += 12; return;
}

void f_005d6c1c(void) /* sub_5D6C1C */
{
    FN_ENTER(0x005d6c1c);
    /* 005d6c1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6c1d: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6c20: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d6c22: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6c24: call 0x5d6ca4 */ r_esp -= 4; W32(r_esp, 0x5d6c29u); f_005d6ca4();
    /* 005d6c29: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005d6c2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6c2e: je 0x5d6c9e */ if (fZ) goto L_005d6c9e;
L_005d6c30:; BB(0x005d6c30);
    /* 005d6c30: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005d6c32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d6c34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6c36: je 0x5d6c9e */ if (fZ) goto L_005d6c9e;
L_005d6c38:; BB(0x005d6c38);
    /* 005d6c38: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 005d6c3c: mov esi, ebx */ r_esi = r_ebx;
    /* 005d6c3e: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 005d6c42: mov ebx, eax */ r_ebx = r_eax;
L_005d6c44:; BB(0x005d6c44);
    /* 005d6c44: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5d6c49u); f_008587a5();
    /* 005d6c49: fild dword ptr [esi] */ FPUSH((long double)(i32)R32((u32)(r_esi)));
    /* 005d6c4b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005d6c4e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005d6c51: fdiv dword ptr [0x92c530] */ ST(0) = ST(0) / R_F32((u32)(0x92c530u));
    /* 005d6c57: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005d6c59: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005d6c5d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005d6c62: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d6c67: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005d6c6b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005d6c6f: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 005d6c73: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005d6c77: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 005d6c7a: movzx edx, byte ptr [eax + ebx] */ r_edx = (u32)R8((u32)(r_eax+r_ebx));
    /* 005d6c7e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005d6c82: movzx ecx, byte ptr [edi + eax] */ r_ecx = (u32)R8((u32)(r_edi+r_eax));
    /* 005d6c86: mov byte ptr [eax + ebx], cl */ W8((u32)(r_eax+r_ebx), (u8)r_ecx);
    /* 005d6c89: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 005d6c8c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d6c8f: mov byte ptr [edi + eax], dl */ W8((u32)(r_edi+r_eax), (u8)r_edx);
    /* 005d6c92: cmp ebx, dword ptr [esi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6c94: jne 0x5d6c44 */ if (!fZ) goto L_005d6c44;
L_005d6c96:; BB(0x005d6c96);
    /* 005d6c96: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 005d6c9a: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
L_005d6c9e:; BB(0x005d6c9e);
    /* 005d6c9e: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d6ca1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6ca2: ret  */ FN_RET(0x005d6c1c); r_esp += 4; return;
}

void f_005d6ca4(void) /* sub_5D6CA4 */
{
    FN_ENTER(0x005d6ca4);
    /* 005d6ca4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ca5: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005d6ca8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6caa: je 0x5d6cc3 */ if (fZ) goto L_005d6cc3;
L_005d6cac:; BB(0x005d6cac);
    /* 005d6cac: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005d6cae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d6cb0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6cb2: je 0x5d6cc3 */ if (fZ) goto L_005d6cc3;
L_005d6cb4:; BB(0x005d6cb4);
    /* 005d6cb4: jmp 0x5d6cb9 */ goto L_005d6cb9;
L_005d6cb6:; BB(0x005d6cb6);
    /* 005d6cb6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
L_005d6cb9:; BB(0x005d6cb9);
    /* 005d6cb9: mov byte ptr [edx + eax], al */ W8((u32)(r_edx+r_eax), (u8)r_eax);
    /* 005d6cbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d6cbf: cmp eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d6cc1: jne 0x5d6cb6 */ if (!fZ) goto L_005d6cb6;
L_005d6cc3:; BB(0x005d6cc3);
    /* 005d6cc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6cc4: ret  */ FN_RET(0x005d6ca4); r_esp += 4; return;
}

void f_005d6cc8(void) /* sub_5D6CC8 */
{
    FN_ENTER(0x005d6cc8);
    /* 005d6cc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d6ccb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6ccd: call 0x5d6cec */ r_esp -= 4; W32(r_esp, 0x5d6cd2u); f_005d6cec();
    /* 005d6cd2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d6cd6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6cd8: jne 0x5d6cde */ if (!fZ) goto L_005d6cde;
L_005d6cda:; BB(0x005d6cda);
    /* 005d6cda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6cdb: ret 4 */ FN_RET(0x005d6cc8); r_esp += 8; return;
L_005d6cde:; BB(0x005d6cde);
    /* 005d6cde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cdf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d6ce4u); f_005c2f74();
    /* 005d6ce4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6ce5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6ce6: ret 4 */ FN_RET(0x005d6cc8); r_esp += 8; return;
}

void f_005d6cec(void) /* sub_5D6CEC */
{
    FN_ENTER(0x005d6cec);
    /* 005d6cec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ced: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6cef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cf1: push 0x8da678 */ { u32 v = 0x8da678u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d6cfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6cfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d6d04: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6d07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d6d0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d6d0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d6d10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d6d13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d6d16: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d6d1d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6d20: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005d6d23: mov dword ptr [ebx], 0xb0d634 */ W32((u32)(r_ebx), 0xb0d634u);
    /* 005d6d29: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6d2c: jne 0x5d6d3e */ if (!fZ) goto L_005d6d3e;
L_005d6d2e:; BB(0x005d6d2e);
    /* 005d6d2e: mov ecx, dword ptr [0xa8da10] */ r_ecx = R32((u32)(0xa8da10u));
    /* 005d6d34: call 0x5d6d8c */ r_esp -= 4; W32(r_esp, 0x5d6d39u); f_005d6d8c();
    /* 005d6d39: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6d3c: jmp 0x5d6d51 */ goto L_005d6d51;
L_005d6d3e:; BB(0x005d6d3e);
    /* 005d6d3e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6d41: jne 0x5d6d51 */ if (!fZ) goto L_005d6d51;
L_005d6d43:; BB(0x005d6d43);
    /* 005d6d43: mov ecx, dword ptr [0xa8da14] */ r_ecx = R32((u32)(0xa8da14u));
    /* 005d6d49: call 0x5d6d8c */ r_esp -= 4; W32(r_esp, 0x5d6d4eu); f_005d6d8c();
    /* 005d6d4e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_005d6d51:; BB(0x005d6d51);
    /* 005d6d51: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 005d6d54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6d56: je 0x5d6d6b */ if (fZ) goto L_005d6d6b;
L_005d6d58:; BB(0x005d6d58);
    /* 005d6d58: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d6d5a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d6d5d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6d5f: je 0x5d6d6b */ if (fZ) goto L_005d6d6b;
L_005d6d61:; BB(0x005d6d61);
    /* 005d6d61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6d62: call 0x81a7c0 */ r_esp -= 4; W32(r_esp, 0x5d6d67u); f_0081a7c0();
    /* 005d6d67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6d68: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_005d6d6b:; BB(0x005d6d6b);
    /* 005d6d6b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d6d72: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6d74: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5d6d79u); f_008171e8();
    /* 005d6d79: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6d7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6d7f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6d86: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6d88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6d89: ret  */ FN_RET(0x005d6cec); r_esp += 4; return;
}

void f_005d6d8c(void) /* sub_5D6D8C */
{
    FN_ENTER(0x005d6d8c);
    /* 005d6d8c: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005d6d8f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d6d91: je 0x5d6d9d */ if (fZ) goto L_005d6d9d;
L_005d6d93:; BB(0x005d6d93);
    /* 005d6d93: mov dword ptr [0xa8da1c], 0 */ W32((u32)(0xa8da1cu), 0x0u);
L_005d6d9d:; BB(0x005d6d9d);
    /* 005d6d9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6d9f: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 005d6da2: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 005d6da5: ret  */ FN_RET(0x005d6d8c); r_esp += 4; return;
}

void f_005d6da8(void) /* sub_5D6DA8 */
{
    FN_ENTER(0x005d6da8);
    /* 005d6da8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6da9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d6dab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6dad: call 0x5d6dcc */ r_esp -= 4; W32(r_esp, 0x5d6db2u); f_005d6dcc();
    /* 005d6db2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d6db6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6db8: jne 0x5d6dbe */ if (!fZ) goto L_005d6dbe;
L_005d6dba:; BB(0x005d6dba);
    /* 005d6dba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6dbb: ret 4 */ FN_RET(0x005d6da8); r_esp += 8; return;
L_005d6dbe:; BB(0x005d6dbe);
    /* 005d6dbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6dbf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d6dc4u); f_00857e98();
    /* 005d6dc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6dc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6dc6: ret 4 */ FN_RET(0x005d6da8); r_esp += 8; return;
}

void f_005d6dcc(void) /* sub_5D6DCC */
{
    FN_ENTER(0x005d6dcc);
    /* 005d6dcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6dcd: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6dcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6dd1: push 0x8da694 */ { u32 v = 0x8da694u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6dd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d6ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ddd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d6de4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6de7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d6dea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d6ded: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d6df0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d6df3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d6df6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6df9: mov dword ptr [ecx], 0xb0d62c */ W32((u32)(r_ecx), 0xb0d62cu);
    /* 005d6dff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d6e06: call 0x5d6e1c */ r_esp -= 4; W32(r_esp, 0x5d6e0bu); f_005d6e1c();
    /* 005d6e0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6e0e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6e15: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6e17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6e18: ret  */ FN_RET(0x005d6dcc); r_esp += 4; return;
}

void f_005d6e1c(void) /* sub_5D6E1C */
{
    FN_ENTER(0x005d6e1c);
    /* 005d6e1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e1d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6e1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e21: push 0x8da6b0 */ { u32 v = 0x8da6b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d6e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d6e34: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6e37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d6e3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d6e3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d6e40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d6e43: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d6e46: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6e49: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005d6e4c: mov dword ptr [ecx], 0xb0d624 */ W32((u32)(r_ecx), 0xb0d624u);
    /* 005d6e52: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d6e54: je 0x5d6e60 */ if (fZ) goto L_005d6e60;
L_005d6e56:; BB(0x005d6e56);
    /* 005d6e56: mov dword ptr [0xa8da1c], 0 */ W32((u32)(0xa8da1cu), 0x0u);
L_005d6e60:; BB(0x005d6e60);
    /* 005d6e60: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d6e67: call 0x5d6e7c */ r_esp -= 4; W32(r_esp, 0x5d6e6cu); f_005d6e7c();
    /* 005d6e6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6e6f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6e76: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6e78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6e79: ret  */ FN_RET(0x005d6e1c); r_esp += 4; return;
}

void f_005d6e7c(void) /* sub_5D6E7C */
{
    FN_ENTER(0x005d6e7c);
    /* 005d6e7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e7d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d6e7f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d6e81: mov dword ptr [ebp], 0xb0d608 */ W32((u32)(r_ebp), 0xb0d608u);
    /* 005d6e88: call 0x5d6e98 */ r_esp -= 4; W32(r_esp, 0x5d6e8du); f_005d6e98();
    /* 005d6e8d: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d6e90: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d6e95u); f_00857e98();
    /* 005d6e95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6e96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6e97: ret  */ FN_RET(0x005d6e7c); r_esp += 4; return;
}

void f_005d6e98(void) /* sub_5D6E98 */
{
    FN_ENTER(0x005d6e98);
    /* 005d6e98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6e99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d6e9b: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005d6e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6ea0: je 0x5d6eb1 */ if (fZ) goto L_005d6eb1;
L_005d6ea2:; BB(0x005d6ea2);
    /* 005d6ea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ea3: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5d6ea8u); f_0086db40();
    /* 005d6ea8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6ea9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6eab: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 005d6eae: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
L_005d6eb1:; BB(0x005d6eb1);
    /* 005d6eb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6eb2: ret  */ FN_RET(0x005d6e98); r_esp += 4; return;
}

void f_005d6eb4(void) /* sub_5D6EB4 */
{
    FN_ENTER(0x005d6eb4);
    /* 005d6eb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6eb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d6eb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6eb9: call 0x5d6ed8 */ r_esp -= 4; W32(r_esp, 0x5d6ebeu); f_005d6ed8();
    /* 005d6ebe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d6ec2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6ec4: jne 0x5d6eca */ if (!fZ) goto L_005d6eca;
L_005d6ec6:; BB(0x005d6ec6);
    /* 005d6ec6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6ec7: ret 4 */ FN_RET(0x005d6eb4); r_esp += 8; return;
L_005d6eca:; BB(0x005d6eca);
    /* 005d6eca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ecb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d6ed0u); f_00857e98();
    /* 005d6ed0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6ed1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6ed2: ret 4 */ FN_RET(0x005d6eb4); r_esp += 8; return;
}

void f_005d6ed8(void) /* sub_5D6ED8 */
{
    FN_ENTER(0x005d6ed8);
    /* 005d6ed8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ed9: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6edb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6edd: push 0x8da6cc */ { u32 v = 0x8da6ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ee2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d6ee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ee9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d6ef0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6ef3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d6ef6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d6ef9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d6efc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d6eff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d6f02: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6f05: mov dword ptr [ecx], 0xb0d654 */ W32((u32)(r_ecx), 0xb0d654u);
    /* 005d6f0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d6f12: call 0x5d6e1c */ r_esp -= 4; W32(r_esp, 0x5d6f17u); f_005d6e1c();
    /* 005d6f17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6f1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6f21: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6f23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6f24: ret  */ FN_RET(0x005d6ed8); r_esp += 4; return;
}

void f_005d6f28(void) /* sub_5D6F28 */
{
    FN_ENTER(0x005d6f28);
    /* 005d6f28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d6f2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6f2d: call 0x5d6e7c */ r_esp -= 4; W32(r_esp, 0x5d6f32u); f_005d6e7c();
    /* 005d6f32: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d6f36: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6f38: jne 0x5d6f3e */ if (!fZ) goto L_005d6f3e;
L_005d6f3a:; BB(0x005d6f3a);
    /* 005d6f3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6f3b: ret 4 */ FN_RET(0x005d6f28); r_esp += 8; return;
L_005d6f3e:; BB(0x005d6f3e);
    /* 005d6f3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f3f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d6f44u); f_00857e98();
    /* 005d6f44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6f45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6f46: ret 4 */ FN_RET(0x005d6f28); r_esp += 8; return;
}

void f_005d6f4c(void)
{
    FN_ENTER(0x005d6f4c);
    /* 005d6f4c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005d6f50: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6f52: mov dword ptr [ecx], 0xb0d60c */ W32((u32)(r_ecx), 0xb0d60cu);
    /* 005d6f58: jne 0x5d6f5d */ if (!fZ) goto L_005d6f5d;
L_005d6f5a:; BB(0x005d6f5a);
    /* 005d6f5a: ret 4 */ FN_RET(0x005d6f4c); r_esp += 8; return;
L_005d6f5d:; BB(0x005d6f5d);
    /* 005d6f5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f5e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d6f63u); f_00857e98();
    /* 005d6f63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6f64: ret 4 */ FN_RET(0x005d6f4c); r_esp += 8; return;
}

void f_005d6f68(void) /* sub_5D6F68 */
{
    FN_ENTER(0x005d6f68);
    /* 005d6f68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d6f6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6f6d: call 0x5d6f8c */ r_esp -= 4; W32(r_esp, 0x5d6f72u); f_005d6f8c();
    /* 005d6f72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d6f76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d6f78: jne 0x5d6f7e */ if (!fZ) goto L_005d6f7e;
L_005d6f7a:; BB(0x005d6f7a);
    /* 005d6f7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6f7b: ret 4 */ FN_RET(0x005d6f68); r_esp += 8; return;
L_005d6f7e:; BB(0x005d6f7e);
    /* 005d6f7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f7f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d6f84u); f_00857e98();
    /* 005d6f84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6f85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d6f86: ret 4 */ FN_RET(0x005d6f68); r_esp += 8; return;
}

void f_005d6f8c(void) /* sub_5D6F8C */
{
    FN_ENTER(0x005d6f8c);
    /* 005d6f8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f8d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d6f8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f91: push 0x8da6e8 */ { u32 v = 0x8da6e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d6f9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6f9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d6fa4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d6fa7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d6faa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d6fad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d6fb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d6fb3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d6fb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d6fbd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6fc0: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d6fc3: mov dword ptr [eax], 0xb0d614 */ W32((u32)(r_eax), 0xb0d614u);
    /* 005d6fc9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d6fceu); f_00857e98();
    /* 005d6fce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6fcf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6fd2: mov dword ptr [eax], 0xb0d60c */ W32((u32)(r_eax), 0xb0d60cu);
    /* 005d6fd8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d6fdb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6fe2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6fe4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6fe5: ret  */ FN_RET(0x005d6f8c); r_esp += 4; return;
}

void f_005d6fe8(void) /* sub_5D6FE8 */
{
    FN_ENTER(0x005d6fe8);
    /* 005d6fe8: mov dword ptr [ecx], 0xb0d60c */ W32((u32)(r_ecx), 0xb0d60cu);
    /* 005d6fee: ret  */ FN_RET(0x005d6fe8); r_esp += 4; return;
}

void f_005d6ff0(void) /* sub_5D6FF0 */
{
    FN_ENTER(0x005d6ff0);
    /* 005d6ff0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6ff1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d6ff3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d6ff5: call 0x5d7014 */ r_esp -= 4; W32(r_esp, 0x5d6ffau); f_005d7014();
    /* 005d6ffa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d6ffe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d7000: jne 0x5d7006 */ if (!fZ) goto L_005d7006;
L_005d7002:; BB(0x005d7002);
    /* 005d7002: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d7003: ret 4 */ FN_RET(0x005d6ff0); r_esp += 8; return;
L_005d7006:; BB(0x005d7006);
    /* 005d7006: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7007: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5d700cu); f_00857e98();
    /* 005d700c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d700d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d700e: ret 4 */ FN_RET(0x005d6ff0); r_esp += 8; return;
}

