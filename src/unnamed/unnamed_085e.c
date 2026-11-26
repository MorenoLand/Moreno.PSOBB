#include "protos.h"

void f_0085e188(void) /* _setlocale */
{
    FN_ENTER(0x0085e188);
    /* 0085e188: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e18a: push 0x9983a0 */ { u32 v = 0x9983a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e18f: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85e194u); f_0085e5ac();
    /* 0085e194: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0085e197: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085e199: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e19b: jl 0x85e2da */ if ((fS!=fO)) goto L_0085e2da;
L_0085e1a1:; BB(0x0085e1a1);
    /* 0085e1a1: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e1a4: jg 0x85e2da */ if ((!fZ&&fS==fO)) goto L_0085e2da;
L_0085e1aa:; BB(0x0085e1aa);
    /* 0085e1aa: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085e1ac: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x85e1b1u); f_0085e57a();
    /* 0085e1b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e1b2: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0085e1b5: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e1b8: jne 0x85e1d9 */ if (!fZ) goto L_0085e1d9;
L_0085e1ba:; BB(0x0085e1ba);
    /* 0085e1ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085e1bc: mov edx, edi */ r_edx = r_edi;
    /* 0085e1be: call 0x85dfaf */ r_esp -= 4; W32(r_esp, 0x85e1c3u); f_0085dfaf();
    /* 0085e1c3: mov esi, eax */ r_esi = r_eax;
    /* 0085e1c5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0085e1c7: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085e1ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e1cb: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x85e1d0u); f_0085790e();
    /* 0085e1d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e1d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e1d2: mov eax, esi */ r_eax = r_esi;
    /* 0085e1d4: jmp 0x85e2dc */ goto L_0085e2dc;
L_0085e1d9:; BB(0x0085e1d9);
    /* 0085e1d9: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e1db: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85e1e0u); f_00859c55();
    /* 0085e1e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e1e1: mov esi, eax */ r_esi = r_eax;
    /* 0085e1e3: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0085e1e6: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e1e8: jne 0x85e1f2 */ if (!fZ) goto L_0085e1f2;
L_0085e1ea:; BB(0x0085e1ea);
    /* 0085e1ea: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0085e1ed: jmp 0x85e2b3 */ goto L_0085e2b3;
L_0085e1f2:; BB(0x0085e1f2);
    /* 0085e1f2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0085e1f5: mov edx, edi */ r_edx = r_edi;
    /* 0085e1f7: call 0x85dfaf */ r_esp -= 4; W32(r_esp, 0x85e1fcu); f_0085dfaf();
    /* 0085e1fc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085e1ff: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e201: je 0x85e2b3 */ if (fZ) goto L_0085e2b3;
L_0085e207:; BB(0x0085e207);
    /* 0085e207: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 0085e209: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
    /* 0085e20e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0085e211: mov eax, dword ptr [0xae7eb0] */ r_eax = R32((u32)(0xae7eb0u));
    /* 0085e216: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0085e219: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085e21b:; BB(0x0085e21b);
    /* 0085e21b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0085e21e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e221: jg 0x85e231 */ if ((!fZ&&fS==fO)) goto L_0085e231;
L_0085e223:; BB(0x0085e223);
    /* 0085e223: mov ecx, dword ptr [eax*4 + 0xae7e94] */ r_ecx = R32((u32)(r_eax*4+0xae7e94u));
    /* 0085e22a: mov dword ptr [esi + eax*4 + 0xc], ecx */ W32((u32)(r_esi+r_eax*4+0xcu), r_ecx);
    /* 0085e22e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085e22f: jmp 0x85e21b */ goto L_0085e21b;
L_0085e231:; BB(0x0085e231);
    /* 0085e231: mov eax, dword ptr [0xa24500] */ r_eax = R32((u32)(0xa24500u));
    /* 0085e236: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0085e239: mov eax, dword ptr [0xa23f90] */ r_eax = R32((u32)(0xa23f90u));
    /* 0085e23e: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0085e241: mov eax, dword ptr [0xaf082c] */ r_eax = R32((u32)(0xaf082cu));
    /* 0085e246: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 0085e249: mov eax, dword ptr [0xaf0830] */ r_eax = R32((u32)(0xaf0830u));
    /* 0085e24e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0085e251: mov eax, dword ptr [0xaf0828] */ r_eax = R32((u32)(0xaf0828u));
    /* 0085e256: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0085e259: mov eax, dword ptr [0xa244f4] */ r_eax = R32((u32)(0xa244f4u));
    /* 0085e25e: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0085e261: mov eax, dword ptr [0xae7e6c] */ r_eax = R32((u32)(0xae7e6cu));
    /* 0085e266: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0085e269: mov eax, dword ptr [0xaf0824] */ r_eax = R32((u32)(0xaf0824u));
    /* 0085e26e: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0085e271: mov eax, dword ptr [0xaf0820] */ r_eax = R32((u32)(0xaf0820u));
    /* 0085e276: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0085e279: mov eax, dword ptr [0xa23fa0] */ r_eax = R32((u32)(0xa23fa0u));
    /* 0085e27e: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 0085e281: mov eax, dword ptr [0xa242d0] */ r_eax = R32((u32)(0xa242d0u));
    /* 0085e286: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 0085e289: mov eax, dword ptr [0xae7e68] */ r_eax = R32((u32)(0xae7e68u));
    /* 0085e28e: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 0085e291: mov eax, dword ptr [0xa23cec] */ r_eax = R32((u32)(0xa23cecu));
    /* 0085e296: cmp dword ptr [eax], ebx */ {  u32 a = R32((u32)(r_eax)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e298: jne 0x85e2a8 */ if (!fZ) goto L_0085e2a8;
L_0085e29a:; BB(0x0085e29a);
    /* 0085e29a: cmp eax, 0xa23c98 */ {  u32 a = r_eax; u32 b = 0xa23c98u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e29f: je 0x85e2a8 */ if (fZ) goto L_0085e2a8;
L_0085e2a1:; BB(0x0085e2a1);
    /* 0085e2a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e2a2: call 0x85d7eb */ r_esp -= 4; W32(r_esp, 0x85e2a7u); f_0085d7eb();
    /* 0085e2a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085e2a8:; BB(0x0085e2a8);
    /* 0085e2a8: mov dword ptr [0xa23cec], esi */ W32((u32)(0xa23cecu), r_esi);
    /* 0085e2ae: call 0x85d8bb */ r_esp -= 4; W32(r_esp, 0x85e2b3u); f_0085d8bb();
L_0085e2b3:; BB(0x0085e2b3);
    /* 0085e2b3: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e2b6: jne 0x85e2c3 */ if (!fZ) goto L_0085e2c3;
L_0085e2b8:; BB(0x0085e2b8);
    /* 0085e2b8: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e2ba: je 0x85e2c3 */ if (fZ) goto L_0085e2c3;
L_0085e2bc:; BB(0x0085e2bc);
    /* 0085e2bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e2bd: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85e2c2u); f_00858882();
    /* 0085e2c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085e2c3:; BB(0x0085e2c3);
    /* 0085e2c3: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e2c7: call 0x85e2d1 */ r_esp -= 4; W32(r_esp, 0x85e2ccu); f_0085e2d1();
    /* 0085e2cc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085e2cf: jmp 0x85e2dc */ goto L_0085e2dc;
L_0085e2da:; BB(0x0085e2da);
    /* 0085e2da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085e2dc:; BB(0x0085e2dc);
    /* 0085e2dc: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85e2e1u); f_0085e5e7();
    /* 0085e2e1: ret  */ FN_RET(0x0085e188); r_esp += 4; return;
}

void f_0085e2d1(void)
{
    FN_ENTER(0x0085e2d1);
    /* 0085e2d1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085e2d3: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85e2d8u); f_0085e4c5();
    /* 0085e2d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e2d9: ret  */ FN_RET(0x0085e2d1); r_esp += 4; return;
}

void f_0085e2f0(void) /* _strcpy */
{
    FN_ENTER(0x0085e2f0);
    /* 0085e2f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e2f1: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0085e2f5: jmp 0x85e365 */ goto L_0085e365;
L_0085e365:; BB(0x0085e365);
    /* 0085e365: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0085e369: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e36f: je 0x85e38e */ if (fZ) goto L_0085e38e;
L_0085e371:; BB(0x0085e371);
    /* 0085e371: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0085e373: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085e376: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e378: je 0x85e3e0 */ if (fZ) goto L_0085e3e0;
L_0085e37a:; BB(0x0085e37a);
    /* 0085e37a: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 0085e37c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085e37f: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e385: jne 0x85e371 */ if (!fZ) goto L_0085e371;
L_0085e387:; BB(0x0085e387);
    /* 0085e387: jmp 0x85e38e */ goto L_0085e38e;
L_0085e389:; BB(0x0085e389);
    /* 0085e389: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0085e38b: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0085e38e:; BB(0x0085e38e);
    /* 0085e38e: mov edx, 0x7efefeff */ r_edx = 0x7efefeffu;
    /* 0085e393: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085e395: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085e397: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e39a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e39c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0085e39e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085e3a1: test eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e3a6: je 0x85e389 */ if (fZ) goto L_0085e389;
L_0085e3a8:; BB(0x0085e3a8);
    /* 0085e3a8: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e3aa: je 0x85e3e0 */ if (fZ) goto L_0085e3e0;
L_0085e3ac:; BB(0x0085e3ac);
    /* 0085e3ac: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e3ae: je 0x85e3d7 */ if (fZ) goto L_0085e3d7;
L_0085e3b0:; BB(0x0085e3b0);
    /* 0085e3b0: test edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e3b6: je 0x85e3ca */ if (fZ) goto L_0085e3ca;
L_0085e3b8:; BB(0x0085e3b8);
    /* 0085e3b8: test edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e3be: je 0x85e3c2 */ if (fZ) goto L_0085e3c2;
L_0085e3c0:; BB(0x0085e3c0);
    /* 0085e3c0: jmp 0x85e389 */ goto L_0085e389;
L_0085e3c2:; BB(0x0085e3c2);
    /* 0085e3c2: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0085e3c4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085e3c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e3c9: ret  */ FN_RET(0x0085e2f0); r_esp += 4; return;
L_0085e3ca:; BB(0x0085e3ca);
    /* 0085e3ca: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 0085e3cd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085e3d1: mov byte ptr [edi + 2], 0 */ W8((u32)(r_edi+0x2u), 0x0u);
    /* 0085e3d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e3d6: ret  */ FN_RET(0x0085e2f0); r_esp += 4; return;
L_0085e3d7:; BB(0x0085e3d7);
    /* 0085e3d7: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 0085e3da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085e3de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e3df: ret  */ FN_RET(0x0085e2f0); r_esp += 4; return;
L_0085e3e0:; BB(0x0085e3e0);
    /* 0085e3e0: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 0085e3e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085e3e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e3e7: ret  */ FN_RET(0x0085e2f0); r_esp += 4; return;
}

void f_0085e300(void) /* _strcat */
{
    FN_ENTER(0x0085e300);
    /* 0085e300: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0085e304: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e305: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e30b: je 0x85e320 */ if (fZ) goto L_0085e320;
L_0085e30d:; BB(0x0085e30d);
    /* 0085e30d: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0085e30f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085e312: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085e314: je 0x85e353 */ if (fZ) goto L_0085e353;
L_0085e316:; BB(0x0085e316);
    /* 0085e316: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e31c: jne 0x85e30d */ if (!fZ) goto L_0085e30d;
L_0085e31e:; BB(0x0085e31e);
    /* 0085e31e: mov edi, edi */ r_edi = r_edi;
L_0085e320:; BB(0x0085e320);
    /* 0085e320: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085e322: mov edx, 0x7efefeff */ r_edx = 0x7efefeffu;
    /* 0085e327: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085e329: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e32c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e32e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085e331: test eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e336: je 0x85e320 */ if (fZ) goto L_0085e320;
L_0085e338:; BB(0x0085e338);
    /* 0085e338: mov eax, dword ptr [ecx - 4] */ r_eax = R32((u32)(r_ecx+0xfffffffcu));
    /* 0085e33b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085e33d: je 0x85e362 */ if (fZ) goto L_0085e362;
L_0085e33f:; BB(0x0085e33f);
    /* 0085e33f: test ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085e341: je 0x85e35d */ if (fZ) goto L_0085e35d;
L_0085e343:; BB(0x0085e343);
    /* 0085e343: test eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e348: je 0x85e358 */ if (fZ) goto L_0085e358;
L_0085e34a:; BB(0x0085e34a);
    /* 0085e34a: test eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e34f: je 0x85e353 */ if (fZ) goto L_0085e353;
L_0085e351:; BB(0x0085e351);
    /* 0085e351: jmp 0x85e320 */ goto L_0085e320;
L_0085e353:; BB(0x0085e353);
    /* 0085e353: lea edi, [ecx - 1] */ r_edi = (u32)(r_ecx+0xffffffffu);
    /* 0085e356: jmp 0x85e365 */ goto L_0085e365;
L_0085e358:; BB(0x0085e358);
    /* 0085e358: lea edi, [ecx - 2] */ r_edi = (u32)(r_ecx+0xfffffffeu);
    /* 0085e35b: jmp 0x85e365 */ goto L_0085e365;
L_0085e35d:; BB(0x0085e35d);
    /* 0085e35d: lea edi, [ecx - 3] */ r_edi = (u32)(r_ecx+0xfffffffdu);
    /* 0085e360: jmp 0x85e365 */ goto L_0085e365;
L_0085e362:; BB(0x0085e362);
    /* 0085e362: lea edi, [ecx - 4] */ r_edi = (u32)(r_ecx+0xfffffffcu);
L_0085e365:; BB(0x0085e365);
    /* 0085e365: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0085e369: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e36f: je 0x85e38e */ if (fZ) goto L_0085e38e;
L_0085e371:; BB(0x0085e371);
    /* 0085e371: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0085e373: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085e376: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e378: je 0x85e3e0 */ if (fZ) goto L_0085e3e0;
L_0085e37a:; BB(0x0085e37a);
    /* 0085e37a: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 0085e37c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085e37f: test ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e385: jne 0x85e371 */ if (!fZ) goto L_0085e371;
L_0085e387:; BB(0x0085e387);
    /* 0085e387: jmp 0x85e38e */ goto L_0085e38e;
L_0085e389:; BB(0x0085e389);
    /* 0085e389: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0085e38b: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0085e38e:; BB(0x0085e38e);
    /* 0085e38e: mov edx, 0x7efefeff */ r_edx = 0x7efefeffu;
    /* 0085e393: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085e395: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085e397: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e39a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e39c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0085e39e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085e3a1: test eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e3a6: je 0x85e389 */ if (fZ) goto L_0085e389;
L_0085e3a8:; BB(0x0085e3a8);
    /* 0085e3a8: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e3aa: je 0x85e3e0 */ if (fZ) goto L_0085e3e0;
L_0085e3ac:; BB(0x0085e3ac);
    /* 0085e3ac: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e3ae: je 0x85e3d7 */ if (fZ) goto L_0085e3d7;
L_0085e3b0:; BB(0x0085e3b0);
    /* 0085e3b0: test edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e3b6: je 0x85e3ca */ if (fZ) goto L_0085e3ca;
L_0085e3b8:; BB(0x0085e3b8);
    /* 0085e3b8: test edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e3be: je 0x85e3c2 */ if (fZ) goto L_0085e3c2;
L_0085e3c0:; BB(0x0085e3c0);
    /* 0085e3c0: jmp 0x85e389 */ goto L_0085e389;
L_0085e3c2:; BB(0x0085e3c2);
    /* 0085e3c2: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0085e3c4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085e3c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e3c9: ret  */ FN_RET(0x0085e300); r_esp += 4; return;
L_0085e3ca:; BB(0x0085e3ca);
    /* 0085e3ca: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 0085e3cd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085e3d1: mov byte ptr [edi + 2], 0 */ W8((u32)(r_edi+0x2u), 0x0u);
    /* 0085e3d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e3d6: ret  */ FN_RET(0x0085e300); r_esp += 4; return;
L_0085e3d7:; BB(0x0085e3d7);
    /* 0085e3d7: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 0085e3da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085e3de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e3df: ret  */ FN_RET(0x0085e300); r_esp += 4; return;
L_0085e3e0:; BB(0x0085e3e0);
    /* 0085e3e0: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 0085e3e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0085e3e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e3e7: ret  */ FN_RET(0x0085e300); r_esp += 4; return;
}

void f_0085e405(void)
{
    FN_ENTER(0x0085e405);
    /* 0085e405: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085e407: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085e408: ret  */ FN_RET(0x0085e405); r_esp += 4; return;
}

void f_0085e409(void)
{
    FN_ENTER(0x0085e409);
    /* 0085e409: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085e40c: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e410: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e412: call dword ptr [0x8f816c] */ { u32 t = R32((u32)(0x8f816cu)); r_esp -= 4; W32(r_esp, 0x85e418u); call_ind(t); }
    /* 0085e418: int3  */ UNSUP(0x0085e418, "int3");
}

void f_0085e419(void) /* sub_85E419 */
{
    FN_ENTER(0x0085e419);
    /* 0085e419: cmp ecx, dword ptr [0xa23c64] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa23c64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085e41f: jne 0x85e422 */ if (!fZ) goto L_0085e422;
L_0085e421:; BB(0x0085e421);
    /* 0085e421: ret  */ FN_RET(0x0085e419); r_esp += 4; return;
L_0085e422:; BB(0x0085e422);
    /* 0085e422: jmp 0x85e3e8 */ f_0085e3e8(); return;
}

void f_0085e427(void) /* __mtinitlocks */
{
    FN_ENTER(0x0085e427);
    /* 0085e427: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e428: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e429: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085e42b: mov edi, 0xae7aa8 */ r_edi = 0xae7aa8u;
L_0085e430:; BB(0x0085e430);
    /* 0085e430: cmp dword ptr [esi*8 + 0xa23e74], 1 */ {  u32 a = R32((u32)(r_esi*8+0xa23e74u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e438: jne 0x85e458 */ if (!fZ) goto L_0085e458;
L_0085e43a:; BB(0x0085e43a);
    /* 0085e43a: lea eax, [esi*8 + 0xa23e70] */ r_eax = (u32)(r_esi*8+0xa23e70u);
    /* 0085e441: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 0085e443: push 0xfa0 */ { u32 v = 0xfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e448: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e44a: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085e44d: call 0x868a8e */ r_esp -= 4; W32(r_esp, 0x85e452u); f_00868a8e();
    /* 0085e452: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e454: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e455: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e456: je 0x85e464 */ if (fZ) goto L_0085e464;
L_0085e458:; BB(0x0085e458);
    /* 0085e458: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085e459: cmp esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e45c: jl 0x85e430 */ if ((fS!=fO)) goto L_0085e430;
L_0085e45e:; BB(0x0085e45e);
    /* 0085e45e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085e460: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_0085e461:; BB(0x0085e461);
    /* 0085e461: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e462: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085e463: ret  */ FN_RET(0x0085e427); r_esp += 4; return;
L_0085e464:; BB(0x0085e464);
    /* 0085e464: and dword ptr [esi*8 + 0xa23e70], 0 */ { u32 ad = (u32)(r_esi*8+0xa23e70u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e46c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e46e: jmp 0x85e461 */ goto L_0085e461;
}

void f_0085e470(void) /* __mtdeletelocks */
{
    FN_ENTER(0x0085e470);
    /* 0085e470: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e471: mov ebx, dword ptr [0x8f81b0] */ r_ebx = R32((u32)(0x8f81b0u));
    /* 0085e477: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e478: mov esi, 0xa23e70 */ r_esi = 0xa23e70u;
    /* 0085e47d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0085e47e:; BB(0x0085e47e);
    /* 0085e47e: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0085e480: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e482: je 0x85e497 */ if (fZ) goto L_0085e497;
L_0085e484:; BB(0x0085e484);
    /* 0085e484: cmp dword ptr [esi + 4], 1 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e488: je 0x85e497 */ if (fZ) goto L_0085e497;
L_0085e48a:; BB(0x0085e48a);
    /* 0085e48a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e48b: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x85e48du); call_ind(t); }
    /* 0085e48d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e48e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85e493u); f_00858882();
    /* 0085e493: and dword ptr [esi], 0 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e496: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085e497:; BB(0x0085e497);
    /* 0085e497: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085e49a: cmp esi, 0xa23f90 */ {  u32 a = r_esi; u32 b = 0xa23f90u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e4a0: jl 0x85e47e */ if ((fS!=fO)) goto L_0085e47e;
L_0085e4a2:; BB(0x0085e4a2);
    /* 0085e4a2: mov esi, 0xa23e70 */ r_esi = 0xa23e70u;
    /* 0085e4a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0085e4a8:; BB(0x0085e4a8);
    /* 0085e4a8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0085e4aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e4ac: je 0x85e4b7 */ if (fZ) goto L_0085e4b7;
L_0085e4ae:; BB(0x0085e4ae);
    /* 0085e4ae: cmp dword ptr [esi + 4], 1 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e4b2: jne 0x85e4b7 */ if (!fZ) goto L_0085e4b7;
L_0085e4b4:; BB(0x0085e4b4);
    /* 0085e4b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e4b5: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x85e4b7u); call_ind(t); }
L_0085e4b7:; BB(0x0085e4b7);
    /* 0085e4b7: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085e4ba: cmp esi, 0xa23f90 */ {  u32 a = r_esi; u32 b = 0xa23f90u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085e4c0: jl 0x85e4a8 */ if ((fS!=fO)) goto L_0085e4a8;
L_0085e4c2:; BB(0x0085e4c2);
    /* 0085e4c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085e4c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085e4c4: ret  */ FN_RET(0x0085e470); r_esp += 4; return;
}

void f_0085e4c5(void) /* __unlock */
{
    FN_ENTER(0x0085e4c5);
    /* 0085e4c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085e4c6: mov ebp, esp */ r_ebp = r_esp;
    /* 0085e4c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085e4cb: push dword ptr [eax*8 + 0xa23e70] */ { u32 v = R32((u32)(r_eax*8+0xa23e70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e4d2: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x85e4d8u); call_ind(t); }
    /* 0085e4d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085e4d9: ret  */ FN_RET(0x0085e4c5); r_esp += 4; return;
}

void f_0085e4da(void) /* __mtinitlocknum */
{
    FN_ENTER(0x0085e4da);
    /* 0085e4da: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e4dc: push 0x9983c0 */ { u32 v = 0x9983c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e4e1: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85e4e6u); f_0085e5ac();
    /* 0085e4e6: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085e4e9: lea esi, [esi*8 + 0xa23e70] */ r_esi = (u32)(r_esi*8+0xa23e70u);
    /* 0085e4f0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085e4f2: cmp dword ptr [esi], ebx */ {  u32 a = R32((u32)(r_esi)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e4f4: jne 0x85e568 */ if (!fZ) goto L_0085e568;
L_0085e4f6:; BB(0x0085e4f6);
    /* 0085e4f6: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e4f8: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85e4fdu); f_00859c55();
    /* 0085e4fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e4fe: mov edi, eax */ r_edi = r_eax;
    /* 0085e500: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e502: jne 0x85e511 */ if (!fZ) goto L_0085e511;
L_0085e504:; BB(0x0085e504);
    /* 0085e504: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85e509u); f_00859dd6();
    /* 0085e509: mov dword ptr [eax], 0xc */ W32((u32)(r_eax), 0xcu);
    /* 0085e50f: jmp 0x85e550 */ goto L_0085e550;
L_0085e511:; BB(0x0085e511);
    /* 0085e511: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085e513: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x85e518u); f_0085e57a();
    /* 0085e518: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e519: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0085e51c: cmp dword ptr [esi], ebx */ {  u32 a = R32((u32)(r_esi)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e51e: jne 0x85e558 */ if (!fZ) goto L_0085e558;
L_0085e520:; BB(0x0085e520);
    /* 0085e520: push 0xfa0 */ { u32 v = 0xfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e525: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e526: call 0x868a8e */ r_esp -= 4; W32(r_esp, 0x85e52bu); f_00868a8e();
    /* 0085e52b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e52c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e52d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e52f: jne 0x85e554 */ if (!fZ) goto L_0085e554;
L_0085e531:; BB(0x0085e531);
    /* 0085e531: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e532: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85e537u); f_00858882();
    /* 0085e537: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x85e53cu); f_00859dd6();
    /* 0085e53c: mov dword ptr [eax], 0xc */ W32((u32)(r_eax), 0xcu);
    /* 0085e542: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0085e544: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085e547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e548: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x85e54du); f_0085790e();
    /* 0085e54d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085e550:; BB(0x0085e550);
    /* 0085e550: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e552: jmp 0x85e56b */ goto L_0085e56b;
L_0085e554:; BB(0x0085e554);
    /* 0085e554: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 0085e556: jmp 0x85e55f */ goto L_0085e55f;
L_0085e558:; BB(0x0085e558);
    /* 0085e558: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e559: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85e55eu); f_00858882();
    /* 0085e55e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085e55f:; BB(0x0085e55f);
    /* 0085e55f: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e563: call 0x85e571 */ r_esp -= 4; W32(r_esp, 0x85e568u); f_0085e571();
L_0085e568:; BB(0x0085e568);
    /* 0085e568: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e56a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085e56b:; BB(0x0085e56b);
    /* 0085e56b: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85e570u); f_0085e5e7();
    /* 0085e570: ret  */ FN_RET(0x0085e4da); r_esp += 4; return;
}

void f_0085e571(void)
{
    FN_ENTER(0x0085e571);
    /* 0085e571: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085e573: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85e578u); f_0085e4c5();
    /* 0085e578: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e579: ret  */ FN_RET(0x0085e571); r_esp += 4; return;
}

void f_0085e57a(void) /* __lock */
{
    FN_ENTER(0x0085e57a);
    /* 0085e57a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085e57b: mov ebp, esp */ r_ebp = r_esp;
    /* 0085e57d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085e580: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e581: lea esi, [eax*8 + 0xa23e70] */ r_esi = (u32)(r_eax*8+0xa23e70u);
    /* 0085e588: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e58b: jne 0x85e5a0 */ if (!fZ) goto L_0085e5a0;
L_0085e58d:; BB(0x0085e58d);
    /* 0085e58d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e58e: call 0x85e4da */ r_esp -= 4; W32(r_esp, 0x85e593u); f_0085e4da();
    /* 0085e593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e595: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e596: jne 0x85e5a0 */ if (!fZ) goto L_0085e5a0;
L_0085e598:; BB(0x0085e598);
    /* 0085e598: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e59a: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85e59fu); f_0085aaf3();
    /* 0085e59f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085e5a0:; BB(0x0085e5a0);
    /* 0085e5a0: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e5a2: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x85e5a8u); call_ind(t); }
    /* 0085e5a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085e5a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085e5aa: ret  */ FN_RET(0x0085e57a); r_esp += 4; return;
}

void f_0085e66f(void) /* __hextodec */
{
    FN_ENTER(0x0085e66f);
    /* 0085e66f: test si, 0xff00 */ {  u32 a = (u16)r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e674: jne 0x85e68c */ if (!fZ) goto L_0085e68c;
L_0085e676:; BB(0x0085e676);
    /* 0085e676: mov eax, esi */ r_eax = r_esi;
    /* 0085e678: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085e67d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e67e: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85e683u); f_00858286();
    /* 0085e683: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e686: je 0x85e68c */ if (fZ) goto L_0085e68c;
L_0085e688:; BB(0x0085e688);
    /* 0085e688: mov ax, si */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_esi) & 0xffffu);
    /* 0085e68b: ret  */ FN_RET(0x0085e66f); r_esp += 4; return;
L_0085e68c:; BB(0x0085e68c);
    /* 0085e68c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e68e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e68f: call 0x858ba3 */ r_esp -= 4; W32(r_esp, 0x85e694u); f_00858ba3();
    /* 0085e694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e697: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e698: lea eax, [esi - 0x27] */ r_eax = (u32)(r_esi+0xffffffd9u);
    /* 0085e69b: jne 0x85e6a0 */ if (!fZ) goto L_0085e6a0;
L_0085e69d:; BB(0x0085e69d);
    /* 0085e69d: lea eax, [esi - 7] */ r_eax = (u32)(r_esi+0xfffffff9u);
L_0085e6a0:; BB(0x0085e6a0);
    /* 0085e6a0: ret  */ FN_RET(0x0085e66f); r_esp += 4; return;
}

void f_0085e6b0(void) /* __whiteout */
{
    FN_ENTER(0x0085e6b0);
    /* 0085e6b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0085e6b1:; BB(0x0085e6b1);
    /* 0085e6b1: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e6b5: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e6b7: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85e6bcu); f_00864767();
    /* 0085e6bc: mov edi, eax */ r_edi = r_eax;
    /* 0085e6be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e6bf: call 0x868c29 */ r_esp -= 4; W32(r_esp, 0x85e6c4u); f_00868c29();
    /* 0085e6c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085e6c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e6c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e6c8: jne 0x85e6b1 */ if (!fZ) goto L_0085e6b1;
L_0085e6ca:; BB(0x0085e6ca);
    /* 0085e6ca: mov ax, di */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_edi) & 0xffffu);
    /* 0085e6cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e6ce: ret  */ FN_RET(0x0085e6b0); r_esp += 4; return;
}

void f_0085e6cf(void) /* __winput */
{
    FN_ENTER(0x0085e6cf);
    /* 0085e6cf: push 0x324 */ { u32 v = 0x324u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e6d4: push 0x9983d0 */ { u32 v = 0x9983d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e6d9: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85e6deu); f_0085e5ac();
    /* 0085e6de: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0085e6e3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085e6e6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085e6e8: mov dword ptr [ebp - 0x31c], ebx */ W32((u32)(r_ebp+0xfffffce4u), r_ebx);
    /* 0085e6ee: mov dword ptr [ebp - 0x32c], ebx */ W32((u32)(r_ebp+0xfffffcd4u), r_ebx);
    /* 0085e6f4: mov dword ptr [ebp - 0x300], ebx */ W32((u32)(r_ebp+0xfffffd00u), r_ebx);
    /* 0085e6fa: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085e700: mov byte ptr [ebp - 0x2e8], bl */ W8((u32)(r_ebp+0xfffffd18u), (u8)r_ebx);
    /* 0085e706: mov dword ptr [ebp - 0x2e0], ebx */ W32((u32)(r_ebp+0xfffffd20u), r_ebx);
    /* 0085e70c: mov dword ptr [ebp - 0x320], ebx */ W32((u32)(r_ebp+0xfffffce0u), r_ebx);
L_0085e712:; BB(0x0085e712);
    /* 0085e712: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085e715: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0085e718: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e71b: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085e721:; BB(0x0085e721);
    /* 0085e721: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e723: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e724: call 0x858ba3 */ r_esp -= 4; W32(r_esp, 0x85e729u); f_00858ba3();
    /* 0085e729: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e72a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e72b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e72d: je 0x85e766 */ if (fZ) goto L_0085e766;
L_0085e72f:; BB(0x0085e72f);
    /* 0085e72f: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e735: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e738: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e73b: lea esi, [ebp - 0x2e0] */ r_esi = (u32)(r_ebp+0xfffffd20u);
    /* 0085e741: call 0x85e6b0 */ r_esp -= 4; W32(r_esp, 0x85e746u); f_0085e6b0();
    /* 0085e746: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e748: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85e74du); f_0085e6a1();
    /* 0085e74d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e74e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085e74f:; BB(0x0085e74f);
    /* 0085e74f: add dword ptr [ebp + 0xc], 2 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e753: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085e756: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0085e759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e75a: call 0x868c29 */ r_esp -= 4; W32(r_esp, 0x85e75fu); f_00868c29();
    /* 0085e75f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e762: jne 0x85e74f */ if (!fZ) goto L_0085e74f;
L_0085e764:; BB(0x0085e764);
    /* 0085e764: jmp 0x85e712 */ goto L_0085e712;
L_0085e766:; BB(0x0085e766);
    /* 0085e766: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085e769: cmp word ptr [edi], 0x25 */ {  u32 a = R16((u32)(r_edi)); u32 b = 0x25u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e76d: jne 0x85f4bf */ if (!fZ) goto L_0085f4bf;
L_0085e773:; BB(0x0085e773);
    /* 0085e773: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e775: mov dword ptr [ebp - 0x304], eax */ W32((u32)(r_ebp+0xfffffcfcu), r_eax);
    /* 0085e77b: mov dword ptr [ebp - 0x314], eax */ W32((u32)(r_ebp+0xfffffcecu), r_eax);
    /* 0085e781: mov dword ptr [ebp - 0x2fc], eax */ W32((u32)(r_ebp+0xfffffd04u), r_eax);
    /* 0085e787: mov dword ptr [ebp - 0x318], eax */ W32((u32)(r_ebp+0xfffffce8u), r_eax);
    /* 0085e78d: mov dword ptr [ebp - 0x2e4], eax */ W32((u32)(r_ebp+0xfffffd1cu), r_eax);
    /* 0085e793: mov byte ptr [ebp - 0x30d], al */ W8((u32)(r_ebp+0xfffffcf3u), (u8)r_eax);
    /* 0085e799: mov byte ptr [ebp - 0x2f1], al */ W8((u32)(r_ebp+0xfffffd0fu), (u8)r_eax);
    /* 0085e79f: mov byte ptr [ebp - 0x2e7], al */ W8((u32)(r_ebp+0xfffffd19u), (u8)r_eax);
    /* 0085e7a5: mov byte ptr [ebp - 0x2d9], al */ W8((u32)(r_ebp+0xfffffd27u), (u8)r_eax);
    /* 0085e7ab: mov byte ptr [ebp - 0x2e9], al */ W8((u32)(r_ebp+0xfffffd17u), (u8)r_eax);
    /* 0085e7b1: mov byte ptr [ebp - 0x2e5], al */ W8((u32)(r_ebp+0xfffffd1bu), (u8)r_eax);
    /* 0085e7b7: mov byte ptr [ebp - 0x2e6], 1 */ W8((u32)(r_ebp+0xfffffd1au), 0x1u);
    /* 0085e7be: mov dword ptr [ebp - 0x328], eax */ W32((u32)(r_ebp+0xfffffcd8u), r_eax);
L_0085e7c4:; BB(0x0085e7c4);
    /* 0085e7c4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085e7c5: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085e7c6: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 0085e7c9: test si, 0xff00 */ {  u32 a = (u16)r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e7ce: jne 0x85e800 */ if (!fZ) goto L_0085e800;
L_0085e7d0:; BB(0x0085e7d0);
    /* 0085e7d0: mov eax, esi */ r_eax = r_esi;
    /* 0085e7d2: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085e7d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e7d8: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85e7ddu); f_00858286();
    /* 0085e7dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e7de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e7e0: je 0x85e800 */ if (fZ) goto L_0085e800;
L_0085e7e2:; BB(0x0085e7e2);
    /* 0085e7e2: inc dword ptr [ebp - 0x318] */ { u32 ad = (u32)(r_ebp+0xfffffce8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e7e8: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085e7ee: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085e7f1: lea eax, [esi + eax*2 - 0x30] */ r_eax = (u32)(r_esi+r_eax*2+0xffffffd0u);
    /* 0085e7f5: mov dword ptr [ebp - 0x2e4], eax */ W32((u32)(r_ebp+0xfffffd1cu), r_eax);
    /* 0085e7fb: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e800:; BB(0x0085e800);
    /* 0085e800: cmp esi, 0x4e */ {  u32 a = r_esi; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e803: jg 0x85e8a0 */ if ((!fZ&&fS==fO)) goto L_0085e8a0;
L_0085e809:; BB(0x0085e809);
    /* 0085e809: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e80f:; BB(0x0085e80f);
    /* 0085e80f: cmp esi, 0x2a */ {  u32 a = r_esi; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e812: je 0x85e898 */ if (fZ) goto L_0085e898;
L_0085e818:; BB(0x0085e818);
    /* 0085e818: cmp esi, 0x46 */ {  u32 a = r_esi; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e81b: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e821:; BB(0x0085e821);
    /* 0085e821: cmp esi, 0x49 */ {  u32 a = r_esi; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e824: je 0x85e83a */ if (fZ) goto L_0085e83a;
L_0085e826:; BB(0x0085e826);
    /* 0085e826: cmp esi, 0x4c */ {  u32 a = r_esi; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e829: jne 0x85e8af */ if (!fZ) goto L_0085e8af;
L_0085e82f:; BB(0x0085e82f);
    /* 0085e82f: inc byte ptr [ebp - 0x2e6] */ { u32 ad = (u32)(r_ebp+0xfffffd1au); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085e835: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e83a:; BB(0x0085e83a);
    /* 0085e83a: mov cx, word ptr [edi + 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edi+0x2u))) & 0xffffu);
    /* 0085e83e: cmp cx, 0x36 */ {  u32 a = (u16)r_ecx; u32 b = 0x36u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e842: jne 0x85e865 */ if (!fZ) goto L_0085e865;
L_0085e844:; BB(0x0085e844);
    /* 0085e844: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 0085e847: cmp word ptr [eax], 0x34 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x34u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e84b: jne 0x85e865 */ if (!fZ) goto L_0085e865;
L_0085e84d:; BB(0x0085e84d);
    /* 0085e84d: mov edi, eax */ r_edi = r_eax;
    /* 0085e84f: inc dword ptr [ebp - 0x328] */ { u32 ad = (u32)(r_ebp+0xfffffcd8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e855: and dword ptr [ebp - 0x30c], 0 */ { u32 ad = (u32)(r_ebp+0xfffffcf4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e85c: and dword ptr [ebp - 0x308], 0 */ { u32 ad = (u32)(r_ebp+0xfffffcf8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e863: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e865:; BB(0x0085e865);
    /* 0085e865: cmp cx, 0x33 */ {  u32 a = (u16)r_ecx; u32 b = 0x33u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e869: jne 0x85e878 */ if (!fZ) goto L_0085e878;
L_0085e86b:; BB(0x0085e86b);
    /* 0085e86b: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 0085e86e: cmp word ptr [eax], 0x32 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x32u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e872: jne 0x85e878 */ if (!fZ) goto L_0085e878;
L_0085e874:; BB(0x0085e874);
    /* 0085e874: mov edi, eax */ r_edi = r_eax;
    /* 0085e876: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e878:; BB(0x0085e878);
    /* 0085e878: cmp cx, 0x64 */ {  u32 a = (u16)r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e87c: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e87e:; BB(0x0085e87e);
    /* 0085e87e: cmp cx, 0x69 */ {  u32 a = (u16)r_ecx; u32 b = 0x69u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e882: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e884:; BB(0x0085e884);
    /* 0085e884: cmp cx, 0x6f */ {  u32 a = (u16)r_ecx; u32 b = 0x6fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e888: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e88a:; BB(0x0085e88a);
    /* 0085e88a: cmp cx, 0x78 */ {  u32 a = (u16)r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e88e: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e890:; BB(0x0085e890);
    /* 0085e890: cmp cx, 0x58 */ {  u32 a = (u16)r_ecx; u32 b = 0x58u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e894: jne 0x85e8af */ if (!fZ) goto L_0085e8af;
L_0085e896:; BB(0x0085e896);
    /* 0085e896: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e898:; BB(0x0085e898);
    /* 0085e898: inc byte ptr [ebp - 0x2e7] */ { u32 ad = (u32)(r_ebp+0xfffffd19u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085e89e: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e8a0:; BB(0x0085e8a0);
    /* 0085e8a0: cmp esi, 0x68 */ {  u32 a = r_esi; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e8a3: je 0x85e8c5 */ if (fZ) goto L_0085e8c5;
L_0085e8a5:; BB(0x0085e8a5);
    /* 0085e8a5: cmp esi, 0x6c */ {  u32 a = r_esi; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e8a8: je 0x85e8b7 */ if (fZ) goto L_0085e8b7;
L_0085e8aa:; BB(0x0085e8aa);
    /* 0085e8aa: cmp esi, 0x77 */ {  u32 a = r_esi; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e8ad: je 0x85e8bd */ if (fZ) goto L_0085e8bd;
L_0085e8af:; BB(0x0085e8af);
    /* 0085e8af: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085e8b5: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e8b7:; BB(0x0085e8b7);
    /* 0085e8b7: inc byte ptr [ebp - 0x2e6] */ { u32 ad = (u32)(r_ebp+0xfffffd1au); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085e8bd:; BB(0x0085e8bd);
    /* 0085e8bd: inc byte ptr [ebp - 0x2e5] */ { u32 ad = (u32)(r_ebp+0xfffffd1bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085e8c3: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e8c5:; BB(0x0085e8c5);
    /* 0085e8c5: dec byte ptr [ebp - 0x2e6] */ { u32 ad = (u32)(r_ebp+0xfffffd1au); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 0085e8cb: dec byte ptr [ebp - 0x2e5] */ { u32 ad = (u32)(r_ebp+0xfffffd1bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
L_0085e8d1:; BB(0x0085e8d1);
    /* 0085e8d1: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e8d8: je 0x85e7c4 */ if (fZ) goto L_0085e7c4;
L_0085e8de:; BB(0x0085e8de);
    /* 0085e8de: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 0085e8e1: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e8e8: jne 0x85e904 */ if (!fZ) goto L_0085e904;
L_0085e8ea:; BB(0x0085e8ea);
    /* 0085e8ea: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0085e8ed: mov dword ptr [ebp - 0x334], eax */ W32((u32)(r_ebp+0xfffffcccu), r_eax);
    /* 0085e8f3: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085e8f6: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0085e8f9: mov edi, dword ptr [eax - 4] */ r_edi = R32((u32)(r_eax+0xfffffffcu));
    /* 0085e8fc: mov dword ptr [ebp - 0x300], edi */ W32((u32)(r_ebp+0xfffffd00u), r_edi);
    /* 0085e902: jmp 0x85e90a */ goto L_0085e90a;
L_0085e904:; BB(0x0085e904);
    /* 0085e904: mov edi, dword ptr [ebp - 0x300] */ r_edi = R32((u32)(r_ebp+0xfffffd00u));
L_0085e90a:; BB(0x0085e90a);
    /* 0085e90a: mov byte ptr [ebp - 0x2d9], 0 */ W8((u32)(r_ebp+0xfffffd27u), 0x0u);
    /* 0085e911: cmp byte ptr [ebp - 0x2e5], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd1bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e918: jne 0x85e93a */ if (!fZ) goto L_0085e93a;
L_0085e91a:; BB(0x0085e91a);
    /* 0085e91a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085e91d: mov ax, word ptr [eax] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0085e920: cmp ax, 0x53 */ {  u32 a = (u16)r_eax; u32 b = 0x53u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e924: je 0x85e933 */ if (fZ) goto L_0085e933;
L_0085e926:; BB(0x0085e926);
    /* 0085e926: cmp ax, 0x43 */ {  u32 a = (u16)r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e92a: mov byte ptr [ebp - 0x2e5], 1 */ W8((u32)(r_ebp+0xfffffd1bu), 0x1u);
    /* 0085e931: jne 0x85e93a */ if (!fZ) goto L_0085e93a;
L_0085e933:; BB(0x0085e933);
    /* 0085e933: mov byte ptr [ebp - 0x2e5], 0xff */ W8((u32)(r_ebp+0xfffffd1bu), 0xffu);
L_0085e93a:; BB(0x0085e93a);
    /* 0085e93a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085e93d: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 0085e940: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0085e943: mov dword ptr [ebp - 0x2f8], esi */ W32((u32)(r_ebp+0xfffffd08u), r_esi);
    /* 0085e949: cmp esi, 0x6e */ {  u32 a = r_esi; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e94c: je 0x85e985 */ if (fZ) goto L_0085e985;
L_0085e94e:; BB(0x0085e94e);
    /* 0085e94e: cmp esi, 0x63 */ {  u32 a = r_esi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e951: je 0x85e96e */ if (fZ) goto L_0085e96e;
L_0085e953:; BB(0x0085e953);
    /* 0085e953: cmp esi, 0x7b */ {  u32 a = r_esi; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e956: je 0x85e96e */ if (fZ) goto L_0085e96e;
L_0085e958:; BB(0x0085e958);
    /* 0085e958: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e95b: lea esi, [ebp - 0x2e0] */ r_esi = (u32)(r_ebp+0xfffffd20u);
    /* 0085e961: call 0x85e6b0 */ r_esp -= 4; W32(r_esp, 0x85e966u); f_0085e6b0();
    /* 0085e966: mov esi, dword ptr [ebp - 0x2f8] */ r_esi = R32((u32)(r_ebp+0xfffffd08u));
    /* 0085e96c: jmp 0x85e97c */ goto L_0085e97c;
L_0085e96e:; BB(0x0085e96e);
    /* 0085e96e: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e974: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e977: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85e97cu); f_00864767();
L_0085e97c:; BB(0x0085e97c);
    /* 0085e97c: mov ebx, eax */ r_ebx = r_eax;
    /* 0085e97e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e97f: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085e985:; BB(0x0085e985);
    /* 0085e985: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0085e98b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e98d: je 0x85e99c */ if (fZ) goto L_0085e99c;
L_0085e98f:; BB(0x0085e98f);
    /* 0085e98f: cmp dword ptr [ebp - 0x2e4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e996: je 0x85f4e7 */ if (fZ) goto L_0085f4e7;
L_0085e99c:; BB(0x0085e99c);
    /* 0085e99c: cmp esi, 0x6f */ {  u32 a = r_esi; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e99f: jg 0x85eda2 */ if ((!fZ&&fS==fO)) goto L_0085eda2;
L_0085e9a5:; BB(0x0085e9a5);
    /* 0085e9a5: je 0x85f111 */ if (fZ) goto L_0085f111;
L_0085e9ab:; BB(0x0085e9ab);
    /* 0085e9ab: cmp esi, 0x63 */ {  u32 a = r_esi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e9ae: je 0x85ec9d */ if (fZ) goto L_0085ec9d;
L_0085e9b4:; BB(0x0085e9b4);
    /* 0085e9b4: cmp esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e9b7: je 0x85f111 */ if (fZ) goto L_0085f111;
L_0085e9bd:; BB(0x0085e9bd);
    /* 0085e9bd: jle 0x85edcc */ if ((fZ||fS!=fO)) goto L_0085edcc;
L_0085e9c3:; BB(0x0085e9c3);
    /* 0085e9c3: cmp esi, 0x67 */ {  u32 a = r_esi; u32 b = 0x67u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e9c6: jle 0x85ea0d */ if ((fZ||fS!=fO)) goto L_0085ea0d;
L_0085e9c8:; BB(0x0085e9c8);
    /* 0085e9c8: cmp esi, 0x69 */ {  u32 a = r_esi; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e9cb: je 0x85e9ee */ if (fZ) goto L_0085e9ee;
L_0085e9cd:; BB(0x0085e9cd);
    /* 0085e9cd: cmp esi, 0x6e */ {  u32 a = r_esi; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e9d0: jne 0x85edcc */ if (!fZ) goto L_0085edcc;
L_0085e9d6:; BB(0x0085e9d6);
    /* 0085e9d6: mov eax, dword ptr [ebp - 0x2e0] */ r_eax = R32((u32)(r_ebp+0xfffffd20u));
    /* 0085e9dc: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e9e3: je 0x85f423 */ if (fZ) goto L_0085f423;
L_0085e9e9:; BB(0x0085e9e9);
    /* 0085e9e9: jmp 0x85f44f */ goto L_0085f44f;
L_0085e9ee:; BB(0x0085e9ee);
    /* 0085e9ee: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e9f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085e9f1: mov dword ptr [ebp - 0x2f8], esi */ W32((u32)(r_ebp+0xfffffd08u), r_esi);
L_0085e9f7:; BB(0x0085e9f7);
    /* 0085e9f7: cmp bx, 0x2d */ {  u32 a = (u16)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e9fb: jne 0x85efa0 */ if (!fZ) goto L_0085efa0;
L_0085ea01:; BB(0x0085ea01);
    /* 0085ea01: mov byte ptr [ebp - 0x2f1], 1 */ W8((u32)(r_ebp+0xfffffd0fu), 0x1u);
    /* 0085ea08: jmp 0x85efa6 */ goto L_0085efa6;
L_0085ea0d:; BB(0x0085ea0d);
    /* 0085ea0d: lea esi, [ebp - 0x2d8] */ r_esi = (u32)(r_ebp+0xfffffd28u);
    /* 0085ea13: cmp bx, 0x2d */ {  u32 a = (u16)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ea17: jne 0x85ea28 */ if (!fZ) goto L_0085ea28;
L_0085ea19:; BB(0x0085ea19);
    /* 0085ea19: mov word ptr [ebp - 0x2d8], bx */ W16((u32)(r_ebp+0xfffffd28u), (u16)r_ebx);
    /* 0085ea20: lea esi, [ebp - 0x2d6] */ r_esi = (u32)(r_ebp+0xfffffd2au);
    /* 0085ea26: jmp 0x85ea2e */ goto L_0085ea2e;
L_0085ea28:; BB(0x0085ea28);
    /* 0085ea28: cmp bx, 0x2b */ {  u32 a = (u16)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ea2c: jne 0x85ea4b */ if (!fZ) goto L_0085ea4b;
L_0085ea2e:; BB(0x0085ea2e);
    /* 0085ea2e: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ea34: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ea3a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ea3d: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85ea42u); f_00864767();
    /* 0085ea42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ea43: mov ebx, eax */ r_ebx = r_eax;
    /* 0085ea45: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085ea4b:; BB(0x0085ea4b);
    /* 0085ea4b: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ea52: je 0x85ea60 */ if (fZ) goto L_0085ea60;
L_0085ea54:; BB(0x0085ea54);
    /* 0085ea54: cmp dword ptr [ebp - 0x2e4], 0x15d */ {  u32 a = R32((u32)(r_ebp+0xfffffd1cu)); u32 b = 0x15du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085ea5e: jle 0x85ea6a */ if ((fZ||fS!=fO)) goto L_0085ea6a;
L_0085ea60:; BB(0x0085ea60);
    /* 0085ea60: mov dword ptr [ebp - 0x2e4], 0x15d */ W32((u32)(r_ebp+0xfffffd1cu), 0x15du);
L_0085ea6a:; BB(0x0085ea6a);
    /* 0085ea6a: mov edi, 0xff00 */ r_edi = 0xff00u;
    /* 0085ea6f: jmp 0x85eab5 */ goto L_0085eab5;
L_0085ea71:; BB(0x0085ea71);
    /* 0085ea71: mov eax, ebx */ r_eax = r_ebx;
    /* 0085ea73: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085ea78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ea79: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85ea7eu); f_00858286();
    /* 0085ea7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ea7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ea81: je 0x85eaba */ if (fZ) goto L_0085eaba;
L_0085ea83:; BB(0x0085ea83);
    /* 0085ea83: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085ea89: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ea8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ea91: je 0x85eaba */ if (fZ) goto L_0085eaba;
L_0085ea93:; BB(0x0085ea93);
    /* 0085ea93: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ea99: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0085ea9c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ea9d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ea9e: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eaa4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eaa7: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85eaacu); f_00864767();
    /* 0085eaac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085eaad: mov ebx, eax */ r_ebx = r_eax;
    /* 0085eaaf: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085eab5:; BB(0x0085eab5);
    /* 0085eab5: test di, bx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ebx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eab8: je 0x85ea71 */ if (fZ) goto L_0085ea71;
L_0085eaba:; BB(0x0085eaba);
    /* 0085eaba: push dword ptr [0xa23f90] */ { u32 v = R32((u32)(0xa23f90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eac0: push 0xa23f94 */ { u32 v = 0xa23f94u; r_esp -= 4; W32(r_esp, v); }
    /* 0085eac5: lea eax, [ebp - 0x324] */ r_eax = (u32)(r_ebp+0xfffffcdcu);
    /* 0085eacb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085eacc: call 0x866f7f */ r_esp -= 4; W32(r_esp, 0x85ead1u); f_00866f7f();
    /* 0085ead1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085ead4: cmp word ptr [ebp - 0x324], bx */ {  u32 a = R16((u32)(r_ebp+0xfffffcdcu)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eadb: jne 0x85eb54 */ if (!fZ) goto L_0085eb54;
L_0085eadd:; BB(0x0085eadd);
    /* 0085eadd: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085eae3: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eae9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eaeb: je 0x85eb54 */ if (fZ) goto L_0085eb54;
L_0085eaed:; BB(0x0085eaed);
    /* 0085eaed: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eaf3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eaf6: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85eafbu); f_00864767();
    /* 0085eafb: mov ebx, eax */ r_ebx = r_eax;
    /* 0085eafd: mov ax, word ptr [ebp - 0x324] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffcdcu))) & 0xffffu);
    /* 0085eb04: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0085eb07: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb08: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb09: jmp 0x85eb48 */ goto L_0085eb48;
L_0085eb0b:; BB(0x0085eb0b);
    /* 0085eb0b: mov eax, ebx */ r_eax = r_ebx;
    /* 0085eb0d: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085eb12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085eb13: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85eb18u); f_00858286();
    /* 0085eb18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085eb19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eb1b: je 0x85eb54 */ if (fZ) goto L_0085eb54;
L_0085eb1d:; BB(0x0085eb1d);
    /* 0085eb1d: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085eb23: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eb2b: je 0x85eb54 */ if (fZ) goto L_0085eb54;
L_0085eb2d:; BB(0x0085eb2d);
    /* 0085eb2d: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb33: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0085eb36: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb37: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb38: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eb41: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85eb46u); f_00864767();
    /* 0085eb46: mov ebx, eax */ r_ebx = r_eax;
L_0085eb48:; BB(0x0085eb48);
    /* 0085eb48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085eb49: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085eb4f: test di, bx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ebx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eb52: je 0x85eb0b */ if (fZ) goto L_0085eb0b;
L_0085eb54:; BB(0x0085eb54);
    /* 0085eb54: cmp dword ptr [ebp - 0x2fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eb5b: je 0x85ec17 */ if (fZ) goto L_0085ec17;
L_0085eb61:; BB(0x0085eb61);
    /* 0085eb61: cmp bx, 0x65 */ {  u32 a = (u16)r_ebx; u32 b = 0x65u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eb65: je 0x85eb71 */ if (fZ) goto L_0085eb71;
L_0085eb67:; BB(0x0085eb67);
    /* 0085eb67: cmp bx, 0x45 */ {  u32 a = (u16)r_ebx; u32 b = 0x45u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eb6b: jne 0x85ec17 */ if (!fZ) goto L_0085ec17;
L_0085eb71:; BB(0x0085eb71);
    /* 0085eb71: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085eb77: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eb7f: je 0x85ec17 */ if (fZ) goto L_0085ec17;
L_0085eb85:; BB(0x0085eb85);
    /* 0085eb85: mov word ptr [esi], 0x65 */ W16((u32)(r_esi), 0x65u);
    /* 0085eb8a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb8b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb8c: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eb95: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85eb9au); f_00864767();
    /* 0085eb9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085eb9b: mov ebx, eax */ r_ebx = r_eax;
    /* 0085eb9d: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085eba3: cmp bx, 0x2d */ {  u32 a = (u16)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eba7: jne 0x85ebb0 */ if (!fZ) goto L_0085ebb0;
L_0085eba9:; BB(0x0085eba9);
    /* 0085eba9: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0085ebac: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ebad: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ebae: jmp 0x85ebb6 */ goto L_0085ebb6;
L_0085ebb0:; BB(0x0085ebb0);
    /* 0085ebb0: cmp bx, 0x2b */ {  u32 a = (u16)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ebb4: jne 0x85ec12 */ if (!fZ) goto L_0085ec12;
L_0085ebb6:; BB(0x0085ebb6);
    /* 0085ebb6: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085ebbc: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ebc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ebc4: jne 0x85ebfb */ if (!fZ) goto L_0085ebfb;
L_0085ebc6:; BB(0x0085ebc6);
    /* 0085ebc6: and dword ptr [ebp - 0x2e4], eax */ { u32 ad = (u32)(r_ebp+0xfffffd1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ebcc: jmp 0x85ec12 */ goto L_0085ec12;
L_0085ebce:; BB(0x0085ebce);
    /* 0085ebce: mov eax, ebx */ r_eax = r_ebx;
    /* 0085ebd0: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085ebd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ebd6: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85ebdbu); f_00858286();
    /* 0085ebdb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ebdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ebde: je 0x85ec17 */ if (fZ) goto L_0085ec17;
L_0085ebe0:; BB(0x0085ebe0);
    /* 0085ebe0: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085ebe6: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ebec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ebee: je 0x85ec17 */ if (fZ) goto L_0085ec17;
L_0085ebf0:; BB(0x0085ebf0);
    /* 0085ebf0: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ebf6: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0085ebf9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ebfa: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0085ebfb:; BB(0x0085ebfb);
    /* 0085ebfb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ebfe: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ec04: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85ec09u); f_00864767();
    /* 0085ec09: mov ebx, eax */ r_ebx = r_eax;
    /* 0085ec0b: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085ec11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ec12:; BB(0x0085ec12);
    /* 0085ec12: test di, bx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ebx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ec15: je 0x85ebce */ if (fZ) goto L_0085ebce;
L_0085ec17:; BB(0x0085ec17);
    /* 0085ec17: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ec1d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ec20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec21: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85ec26u); f_0085e6a1();
    /* 0085ec26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ec27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ec28: cmp dword ptr [ebp - 0x2fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ec2f: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085ec35:; BB(0x0085ec35);
    /* 0085ec35: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ec3c: jne 0x85f44f */ if (!fZ) goto L_0085f44f;
L_0085ec42:; BB(0x0085ec42);
    /* 0085ec42: inc dword ptr [ebp - 0x320] */ { u32 ad = (u32)(r_ebp+0xfffffce0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ec48: and word ptr [esi], 0 */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 0085ec4c: lea eax, [ebp - 0x2d8] */ r_eax = (u32)(r_ebp+0xfffffd28u);
    /* 0085ec52: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085ec54: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0085ec56: lea esi, [esi + esi + 2] */ r_esi = (u32)(r_esi+r_esi+0x2u);
    /* 0085ec5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec5b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85ec60u); f_00859c55();
    /* 0085ec60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ec61: mov edi, eax */ r_edi = r_eax;
    /* 0085ec63: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ec65: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085ec6b:; BB(0x0085ec6b);
    /* 0085ec6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec6c: lea eax, [ebp - 0x2d8] */ r_eax = (u32)(r_ebp+0xfffffd28u);
    /* 0085ec72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec73: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec74: call 0x858618 */ r_esp -= 4; W32(r_esp, 0x85ec79u); f_00858618();
    /* 0085ec79: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec7a: push dword ptr [ebp - 0x300] */ { u32 v = R32((u32)(r_ebp+0xfffffd00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ec80: movsx eax, byte ptr [ebp - 0x2e6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd1au));
    /* 0085ec87: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085ec88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec89: call dword ptr [0xa23c78] */ { u32 t = R32((u32)(0xa23c78u)); r_esp -= 4; W32(r_esp, 0x85ec8fu); call_ind(t); }
    /* 0085ec8f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec90: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85ec95u); f_00858882();
    /* 0085ec95: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085ec98: jmp 0x85f44f */ goto L_0085f44f;
L_0085ec9d:; BB(0x0085ec9d);
    /* 0085ec9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ec9f: jne 0x85ecb1 */ if (!fZ) goto L_0085ecb1;
L_0085eca1:; BB(0x0085eca1);
    /* 0085eca1: mov dword ptr [ebp - 0x318], 1 */ W32((u32)(r_ebp+0xfffffce8u), 0x1u);
    /* 0085ecab: inc dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085ecb1:; BB(0x0085ecb1);
    /* 0085ecb1: cmp byte ptr [ebp - 0x2e5], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd1bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0085ecb8: jle 0x85ecc1 */ if ((fZ||fS!=fO)) goto L_0085ecc1;
L_0085ecba:; BB(0x0085ecba);
    /* 0085ecba: mov byte ptr [ebp - 0x2e9], 1 */ W8((u32)(r_ebp+0xfffffd17u), 0x1u);
L_0085ecc1:; BB(0x0085ecc1);
    /* 0085ecc1: mov esi, dword ptr [ebp - 0x300] */ r_esi = R32((u32)(r_ebp+0xfffffd00u));
    /* 0085ecc7: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eccd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ecd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ecd1: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85ecd6u); f_0085e6a1();
L_0085ecd6:; BB(0x0085ecd6);
    /* 0085ecd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ecd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ecd8:; BB(0x0085ecd8);
    /* 0085ecd8: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ecdf: je 0x85ecf5 */ if (fZ) goto L_0085ecf5;
L_0085ece1:; BB(0x0085ece1);
    /* 0085ece1: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085ece7: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eced: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ecef: je 0x85f0be */ if (fZ) goto L_0085f0be;
L_0085ecf5:; BB(0x0085ecf5);
    /* 0085ecf5: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ecfb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ecfe: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85ed03u); f_00864767();
    /* 0085ed03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ed04: mov ebx, eax */ r_ebx = r_eax;
    /* 0085ed06: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085ed0c: cmp bx, 0xffff */ {  u32 a = (u16)r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ed11: je 0x85f0ad */ if (fZ) goto L_0085f0ad;
L_0085ed17:; BB(0x0085ed17);
    /* 0085ed17: cmp dword ptr [ebp - 0x2f8], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ed1e: je 0x85ed73 */ if (fZ) goto L_0085ed73;
L_0085ed20:; BB(0x0085ed20);
    /* 0085ed20: cmp dword ptr [ebp - 0x2f8], 0x73 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ed27: jne 0x85ed3b */ if (!fZ) goto L_0085ed3b;
L_0085ed29:; BB(0x0085ed29);
    /* 0085ed29: cmp bx, 9 */ {  u32 a = (u16)r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085ed2d: jb 0x85ed35 */ if (fC) goto L_0085ed35;
L_0085ed2f:; BB(0x0085ed2f);
    /* 0085ed2f: cmp bx, 0xd */ {  u32 a = (u16)r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085ed33: jbe 0x85ed3b */ if ((fC||fZ)) goto L_0085ed3b;
L_0085ed35:; BB(0x0085ed35);
    /* 0085ed35: cmp bx, 0x20 */ {  u32 a = (u16)r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ed39: jne 0x85ed73 */ if (!fZ) goto L_0085ed73;
L_0085ed3b:; BB(0x0085ed3b);
    /* 0085ed3b: cmp dword ptr [ebp - 0x2f8], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ed42: jne 0x85f0ad */ if (!fZ) goto L_0085f0ad;
L_0085ed48:; BB(0x0085ed48);
    /* 0085ed48: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085ed4b: mov ecx, eax */ r_ecx = r_eax;
    /* 0085ed4d: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ed50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 0085ed52: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085ed53: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0085ed55: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085ed58: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 0085ed5e: movsx eax, byte ptr [eax + ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx));
    /* 0085ed62: movsx ecx, byte ptr [ebp - 0x30d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffcf3u));
    /* 0085ed69: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085ed6b: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ed6d: je 0x85f0ad */ if (fZ) goto L_0085f0ad;
L_0085ed73:; BB(0x0085ed73);
    /* 0085ed73: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ed7a: jne 0x85f0a6 */ if (!fZ) goto L_0085f0a6;
L_0085ed80:; BB(0x0085ed80);
    /* 0085ed80: cmp byte ptr [ebp - 0x2e9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd17u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ed87: je 0x85f08f */ if (fZ) goto L_0085f08f;
L_0085ed8d:; BB(0x0085ed8d);
    /* 0085ed8d: mov eax, dword ptr [ebp - 0x300] */ r_eax = R32((u32)(r_ebp+0xfffffd00u));
    /* 0085ed93: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 0085ed96: add dword ptr [ebp - 0x300], 2 */ { u32 ad = (u32)(r_ebp+0xfffffd00u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ed9d: jmp 0x85ecd8 */ goto L_0085ecd8;
L_0085eda2:; BB(0x0085eda2);
    /* 0085eda2: mov eax, esi */ r_eax = r_esi;
    /* 0085eda4: sub eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085eda7: je 0x85f10a */ if (fZ) goto L_0085f10a;
L_0085edad:; BB(0x0085edad);
    /* 0085edad: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085edb0: je 0x85ecb1 */ if (fZ) goto L_0085ecb1;
L_0085edb6:; BB(0x0085edb6);
    /* 0085edb6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085edb7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085edb8: je 0x85f111 */ if (fZ) goto L_0085f111;
L_0085edbe:; BB(0x0085edbe);
    /* 0085edbe: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085edc1: je 0x85e9f7 */ if (fZ) goto L_0085e9f7;
L_0085edc7:; BB(0x0085edc7);
    /* 0085edc7: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085edca: je 0x85edf9 */ if (fZ) goto L_0085edf9;
L_0085edcc:; BB(0x0085edcc);
    /* 0085edcc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085edcf: cmp word ptr [eax], bx */ {  u32 a = R16((u32)(r_eax)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085edd2: jne 0x85f4e7 */ if (!fZ) goto L_0085f4e7;
L_0085edd8:; BB(0x0085edd8);
    /* 0085edd8: dec byte ptr [ebp - 0x2e8] */ { u32 ad = (u32)(r_ebp+0xfffffd18u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 0085edde: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ede5: jne 0x85f44f */ if (!fZ) goto L_0085f44f;
L_0085edeb:; BB(0x0085edeb);
    /* 0085edeb: mov eax, dword ptr [ebp - 0x334] */ r_eax = R32((u32)(r_ebp+0xfffffcccu));
    /* 0085edf1: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0085edf4: jmp 0x85f44f */ goto L_0085f44f;
L_0085edf9:; BB(0x0085edf9);
    /* 0085edf9: cmp byte ptr [ebp - 0x2e5], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd1bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0085ee00: jle 0x85ee09 */ if ((fZ||fS!=fO)) goto L_0085ee09;
L_0085ee02:; BB(0x0085ee02);
    /* 0085ee02: mov byte ptr [ebp - 0x2e9], 1 */ W8((u32)(r_ebp+0xfffffd17u), 0x1u);
L_0085ee09:; BB(0x0085ee09);
    /* 0085ee09: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085ee0c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085ee0d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085ee0e: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 0085ee11: mov dword ptr [ebp - 0x330], edi */ W32((u32)(r_ebp+0xfffffcd0u), r_edi);
    /* 0085ee17: cmp word ptr [edi], 0x5e */ {  u32 a = R16((u32)(r_edi)); u32 b = 0x5eu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ee1b: jne 0x85ee2d */ if (!fZ) goto L_0085ee2d;
L_0085ee1d:; BB(0x0085ee1d);
    /* 0085ee1d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085ee20: mov dword ptr [ebp - 0x330], edi */ W32((u32)(r_ebp+0xfffffcd0u), r_edi);
    /* 0085ee26: mov byte ptr [ebp - 0x30d], 0xff */ W8((u32)(r_ebp+0xfffffcf3u), 0xffu);
L_0085ee2d:; BB(0x0085ee2d);
    /* 0085ee2d: cmp dword ptr [ebp - 0x31c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ee34: jne 0x85ee9f */ if (!fZ) goto L_0085ee9f;
L_0085ee36:; BB(0x0085ee36);
    /* 0085ee36: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ee3a: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 0085ee3f: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x85ee44u); f_00858020();
    /* 0085ee44: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0085ee47: mov eax, esp */ r_eax = r_esp;
    /* 0085ee49: mov dword ptr [ebp - 0x31c], eax */ W32((u32)(r_ebp+0xfffffce4u), r_eax);
    /* 0085ee4f: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ee53: jmp 0x85ee9f */ goto L_0085ee9f;
L_0085ee9f:; BB(0x0085ee9f);
    /* 0085ee9f: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085eea4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085eea6: mov esi, dword ptr [ebp - 0x31c] */ r_esi = R32((u32)(r_ebp+0xfffffce4u));
    /* 0085eeac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085eead: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x85eeb2u); f_0085f580();
    /* 0085eeb2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085eeb5: cmp dword ptr [ebp - 0x2f8], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eebc: jne 0x85eed2 */ if (!fZ) goto L_0085eed2;
L_0085eebe:; BB(0x0085eebe);
    /* 0085eebe: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0085eec0: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0085eec1: cmp word ptr [edi], ax */ {  u32 a = R16((u32)(r_edi)); u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eec4: jne 0x85eed2 */ if (!fZ) goto L_0085eed2;
L_0085eec6:; BB(0x0085eec6);
    /* 0085eec6: mov dword ptr [ebp - 0x314], eax */ W32((u32)(r_ebp+0xfffffcecu), r_eax);
    /* 0085eecc: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eecd: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eece: mov byte ptr [esi + 0xb], 0x20 */ W8((u32)(r_esi+0xbu), 0x20u);
L_0085eed2:; BB(0x0085eed2);
    /* 0085eed2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085eed4: jmp 0x85ef75 */ goto L_0085ef75;
L_0085eed9:; BB(0x0085eed9);
    /* 0085eed9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eeda: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eedb: cmp ax, 0x2d */ {  u32 a = (u16)r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eedf: jne 0x85ef56 */ if (!fZ) goto L_0085ef56;
L_0085eee1:; BB(0x0085eee1);
    /* 0085eee1: cmp word ptr [ebp - 0x314], 0 */ {  u32 a = R16((u32)(r_ebp+0xfffffcecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eee9: je 0x85ef56 */ if (fZ) goto L_0085ef56;
L_0085eeeb:; BB(0x0085eeeb);
    /* 0085eeeb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085eeed: mov cx, word ptr [edi] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 0085eef0: cmp cx, 0x5d */ {  u32 a = (u16)r_ecx; u32 b = 0x5du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eef4: je 0x85ef56 */ if (fZ) goto L_0085ef56;
L_0085eef6:; BB(0x0085eef6);
    /* 0085eef6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eef7: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eef8: cmp word ptr [ebp - 0x314], cx */ {  u32 a = R16((u32)(r_ebp+0xfffffcecu)); u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085eeff: jae 0x85ef05 */ if (!fC) goto L_0085ef05;
L_0085ef01:; BB(0x0085ef01);
    /* 0085ef01: mov eax, ecx */ r_eax = r_ecx;
    /* 0085ef03: jmp 0x85ef11 */ goto L_0085ef11;
L_0085ef05:; BB(0x0085ef05);
    /* 0085ef05: mov eax, dword ptr [ebp - 0x314] */ r_eax = R32((u32)(r_ebp+0xfffffcecu));
    /* 0085ef0b: mov dword ptr [ebp - 0x314], ecx */ W32((u32)(r_ebp+0xfffffcecu), r_ecx);
L_0085ef11:; BB(0x0085ef11);
    /* 0085ef11: cmp word ptr [ebp - 0x314], ax */ {  u32 a = R16((u32)(r_ebp+0xfffffcecu)); u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085ef18: ja 0x85ef4d */ if ((!fC&&!fZ)) goto L_0085ef4d;
L_0085ef1a:; BB(0x0085ef1a);
    /* 0085ef1a: movzx esi, word ptr [ebp - 0x314] */ r_esi = (u32)R16((u32)(r_ebp+0xfffffcecu));
    /* 0085ef21: sub eax, dword ptr [ebp - 0x314] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffcecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085ef27: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085ef28: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
L_0085ef2b:; BB(0x0085ef2b);
    /* 0085ef2b: mov eax, esi */ r_eax = r_esi;
    /* 0085ef2d: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085ef30: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 0085ef36: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085ef38: mov ecx, esi */ r_ecx = r_esi;
    /* 0085ef3a: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0085ef3d: mov bl, 1 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0085ef3f: shl bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0085ef41: or byte ptr [eax], bl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0085ef43: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ef44: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0085ef45: jne 0x85ef2b */ if (!fZ) goto L_0085ef2b;
L_0085ef47:; BB(0x0085ef47);
    /* 0085ef47: mov ebx, dword ptr [ebp - 0x2f0] */ r_ebx = R32((u32)(r_ebp+0xfffffd10u));
L_0085ef4d:; BB(0x0085ef4d);
    /* 0085ef4d: and dword ptr [ebp - 0x314], 0 */ { u32 ad = (u32)(r_ebp+0xfffffcecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ef54: jmp 0x85ef75 */ goto L_0085ef75;
L_0085ef56:; BB(0x0085ef56);
    /* 0085ef56: mov dword ptr [ebp - 0x314], eax */ W32((u32)(r_ebp+0xfffffcecu), r_eax);
    /* 0085ef5c: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0085ef5f: mov eax, ecx */ r_eax = r_ecx;
    /* 0085ef61: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085ef64: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 0085ef6a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085ef6c: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0085ef6f: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0085ef71: shl dl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0085ef73: or byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0085ef75:; BB(0x0085ef75);
    /* 0085ef75: mov ax, word ptr [edi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 0085ef78: cmp ax, 0x5d */ {  u32 a = (u16)r_eax; u32 b = 0x5du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ef7c: jne 0x85eed9 */ if (!fZ) goto L_0085eed9;
L_0085ef82:; BB(0x0085ef82);
    /* 0085ef82: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ef85: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085ef8b:; BB(0x0085ef8b);
    /* 0085ef8b: cmp dword ptr [ebp - 0x2f8], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ef92: jne 0x85ecc1 */ if (!fZ) goto L_0085ecc1;
L_0085ef98:; BB(0x0085ef98);
    /* 0085ef98: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 0085ef9b: jmp 0x85ecc1 */ goto L_0085ecc1;
L_0085efa0:; BB(0x0085efa0);
    /* 0085efa0: cmp bx, 0x2b */ {  u32 a = (u16)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085efa4: jne 0x85efd2 */ if (!fZ) goto L_0085efd2;
L_0085efa6:; BB(0x0085efa6);
    /* 0085efa6: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085efac: jne 0x85efbb */ if (!fZ) goto L_0085efbb;
L_0085efae:; BB(0x0085efae);
    /* 0085efae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085efb0: je 0x85efbb */ if (fZ) goto L_0085efbb;
L_0085efb2:; BB(0x0085efb2);
    /* 0085efb2: mov byte ptr [ebp - 0x2d9], 1 */ W8((u32)(r_ebp+0xfffffd27u), 0x1u);
    /* 0085efb9: jmp 0x85efd2 */ goto L_0085efd2;
L_0085efbb:; BB(0x0085efbb);
    /* 0085efbb: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085efc1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085efc4: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85efc9u); f_00864767();
    /* 0085efc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085efca: mov ebx, eax */ r_ebx = r_eax;
    /* 0085efcc: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085efd2:; BB(0x0085efd2);
    /* 0085efd2: cmp bx, 0x30 */ {  u32 a = (u16)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085efd6: jne 0x85f152 */ if (!fZ) goto L_0085f152;
L_0085efdc:; BB(0x0085efdc);
    /* 0085efdc: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085efe2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085efe5: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85efeau); f_00864767();
    /* 0085efea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085efeb: mov ebx, eax */ r_ebx = r_eax;
    /* 0085efed: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085eff3: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0085eff5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085eff6: cmp bx, di */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eff9: je 0x85f04e */ if (fZ) goto L_0085f04e;
L_0085effb:; BB(0x0085effb);
    /* 0085effb: cmp bx, 0x58 */ {  u32 a = (u16)r_ebx; u32 b = 0x58u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085efff: je 0x85f04e */ if (fZ) goto L_0085f04e;
L_0085f001:; BB(0x0085f001);
    /* 0085f001: mov dword ptr [ebp - 0x2fc], 1 */ W32((u32)(r_ebp+0xfffffd04u), 0x1u);
    /* 0085f00b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f00d: je 0x85f035 */ if (fZ) goto L_0085f035;
L_0085f00f:; BB(0x0085f00f);
    /* 0085f00f: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f016: je 0x85f026 */ if (fZ) goto L_0085f026;
L_0085f018:; BB(0x0085f018);
    /* 0085f018: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085f01e: jne 0x85f026 */ if (!fZ) goto L_0085f026;
L_0085f020:; BB(0x0085f020);
    /* 0085f020: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085f026:; BB(0x0085f026);
    /* 0085f026: mov dword ptr [ebp - 0x2f8], 0x6f */ W32((u32)(r_ebp+0xfffffd08u), 0x6fu);
    /* 0085f030: jmp 0x85f152 */ goto L_0085f152;
L_0085f035:; BB(0x0085f035);
    /* 0085f035: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f03b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f03e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f03f: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f044u); f_0085e6a1();
    /* 0085f044: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f045: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f046: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f048: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085f049: jmp 0x85f14c */ goto L_0085f14c;
L_0085f04e:; BB(0x0085f04e);
    /* 0085f04e: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f054: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f057: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f05cu); f_00864767();
    /* 0085f05c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f05d: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f05f: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085f065: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f06c: je 0x85f084 */ if (fZ) goto L_0085f084;
L_0085f06e:; BB(0x0085f06e);
    /* 0085f06e: sub dword ptr [ebp - 0x2e4], 2 */ { u32 ad = (u32)(r_ebp+0xfffffd1cu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f075: cmp dword ptr [ebp - 0x2e4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffd1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085f07c: jge 0x85f084 */ if ((fS==fO)) goto L_0085f084;
L_0085f07e:; BB(0x0085f07e);
    /* 0085f07e: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085f084:; BB(0x0085f084);
    /* 0085f084: mov dword ptr [ebp - 0x2f8], edi */ W32((u32)(r_ebp+0xfffffd08u), r_edi);
    /* 0085f08a: jmp 0x85f152 */ goto L_0085f152;
L_0085f08f:; BB(0x0085f08f);
    /* 0085f08f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f090: push dword ptr [ebp - 0x300] */ { u32 v = R32((u32)(r_ebp+0xfffffd00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f096: call 0x85ad71 */ r_esp -= 4; W32(r_esp, 0x85f09bu); f_0085ad71();
    /* 0085f09b: add dword ptr [ebp - 0x300], eax */ { u32 ad = (u32)(r_ebp+0xfffffd00u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f0a1: jmp 0x85ecd6 */ goto L_0085ecd6;
L_0085f0a6:; BB(0x0085f0a6);
    /* 0085f0a6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085f0a7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085f0a8: jmp 0x85ecd8 */ goto L_0085ecd8;
L_0085f0ad:; BB(0x0085f0ad);
    /* 0085f0ad: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f0b3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f0b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f0b7: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f0bcu); f_0085e6a1();
    /* 0085f0bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f0bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f0be:; BB(0x0085f0be);
    /* 0085f0be: cmp esi, dword ptr [ebp - 0x300] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffd00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f0c4: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085f0ca:; BB(0x0085f0ca);
    /* 0085f0ca: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f0d1: jne 0x85f44f */ if (!fZ) goto L_0085f44f;
L_0085f0d7:; BB(0x0085f0d7);
    /* 0085f0d7: inc dword ptr [ebp - 0x320] */ { u32 ad = (u32)(r_ebp+0xfffffce0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f0dd: cmp dword ptr [ebp - 0x2f8], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f0e4: je 0x85f44f */ if (fZ) goto L_0085f44f;
L_0085f0ea:; BB(0x0085f0ea);
    /* 0085f0ea: mov eax, dword ptr [ebp - 0x300] */ r_eax = R32((u32)(r_ebp+0xfffffd00u));
    /* 0085f0f0: cmp byte ptr [ebp - 0x2e9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd17u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f0f7: je 0x85f102 */ if (fZ) goto L_0085f102;
L_0085f0f9:; BB(0x0085f0f9);
    /* 0085f0f9: and word ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 0085f0fd: jmp 0x85f44f */ goto L_0085f44f;
L_0085f102:; BB(0x0085f102);
    /* 0085f102: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0085f105: jmp 0x85f44f */ goto L_0085f44f;
L_0085f10a:; BB(0x0085f10a);
    /* 0085f10a: mov byte ptr [ebp - 0x2e6], 1 */ W8((u32)(r_ebp+0xfffffd1au), 0x1u);
L_0085f111:; BB(0x0085f111);
    /* 0085f111: cmp bx, 0x2d */ {  u32 a = (u16)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f115: jne 0x85f120 */ if (!fZ) goto L_0085f120;
L_0085f117:; BB(0x0085f117);
    /* 0085f117: mov byte ptr [ebp - 0x2f1], 1 */ W8((u32)(r_ebp+0xfffffd0fu), 0x1u);
    /* 0085f11e: jmp 0x85f126 */ goto L_0085f126;
L_0085f120:; BB(0x0085f120);
    /* 0085f120: cmp bx, 0x2b */ {  u32 a = (u16)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f124: jne 0x85f152 */ if (!fZ) goto L_0085f152;
L_0085f126:; BB(0x0085f126);
    /* 0085f126: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085f12c: jne 0x85f13b */ if (!fZ) goto L_0085f13b;
L_0085f12e:; BB(0x0085f12e);
    /* 0085f12e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f130: je 0x85f13b */ if (fZ) goto L_0085f13b;
L_0085f132:; BB(0x0085f132);
    /* 0085f132: mov byte ptr [ebp - 0x2d9], 1 */ W8((u32)(r_ebp+0xfffffd27u), 0x1u);
    /* 0085f139: jmp 0x85f152 */ goto L_0085f152;
L_0085f13b:; BB(0x0085f13b);
    /* 0085f13b: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f141: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f144: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f149u); f_00864767();
    /* 0085f149: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f14a: mov ebx, eax */ r_ebx = r_eax;
L_0085f14c:; BB(0x0085f14c);
    /* 0085f14c: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085f152:; BB(0x0085f152);
    /* 0085f152: cmp dword ptr [ebp - 0x328], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f159: je 0x85f2de */ if (fZ) goto L_0085f2de;
L_0085f15f:; BB(0x0085f15f);
    /* 0085f15f: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f166: jne 0x85f2ad */ if (!fZ) goto L_0085f2ad;
L_0085f16c:; BB(0x0085f16c);
    /* 0085f16c: cmp dword ptr [ebp - 0x2f8], 0x78 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f173: je 0x85f1f4 */ if (fZ) goto L_0085f1f4;
L_0085f175:; BB(0x0085f175);
    /* 0085f175: cmp dword ptr [ebp - 0x2f8], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f17c: je 0x85f1f4 */ if (fZ) goto L_0085f1f4;
L_0085f17e:; BB(0x0085f17e);
    /* 0085f17e: test bh, 0xff */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xffu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085f181: jne 0x85f235 */ if (!fZ) goto L_0085f235;
L_0085f187:; BB(0x0085f187);
    /* 0085f187: mov eax, ebx */ r_eax = r_ebx;
    /* 0085f189: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085f18e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f18f: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85f194u); f_00858286();
    /* 0085f194: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f195: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f197: je 0x85f235 */ if (fZ) goto L_0085f235;
L_0085f19d:; BB(0x0085f19d);
    /* 0085f19d: cmp dword ptr [ebp - 0x2f8], 0x6f */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f1a4: jne 0x85f1d1 */ if (!fZ) goto L_0085f1d1;
L_0085f1a6:; BB(0x0085f1a6);
    /* 0085f1a6: cmp bx, 0x38 */ {  u32 a = (u16)r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085f1aa: jae 0x85f235 */ if (!fC) goto L_0085f235;
L_0085f1b0:; BB(0x0085f1b0);
    /* 0085f1b0: mov eax, dword ptr [ebp - 0x30c] */ r_eax = R32((u32)(r_ebp+0xfffffcf4u));
    /* 0085f1b6: mov ecx, dword ptr [ebp - 0x308] */ r_ecx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 0085f1bc: shld ecx, eax, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_ecx = r; } }
    /* 0085f1c0: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f1c3: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 0085f1c9: mov dword ptr [ebp - 0x308], ecx */ W32((u32)(r_ebp+0xfffffcf8u), r_ecx);
    /* 0085f1cf: jmp 0x85f23b */ goto L_0085f23b;
L_0085f1d1:; BB(0x0085f1d1);
    /* 0085f1d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f1d3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085f1d5: push dword ptr [ebp - 0x308] */ { u32 v = R32((u32)(r_ebp+0xfffffcf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f1db: push dword ptr [ebp - 0x30c] */ { u32 v = R32((u32)(r_ebp+0xfffffcf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f1e1: call 0x85ada0 */ r_esp -= 4; W32(r_esp, 0x85f1e6u); f_0085ada0();
    /* 0085f1e6: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 0085f1ec: mov dword ptr [ebp - 0x308], edx */ W32((u32)(r_ebp+0xfffffcf8u), r_edx);
    /* 0085f1f2: jmp 0x85f23b */ goto L_0085f23b;
L_0085f1f4:; BB(0x0085f1f4);
    /* 0085f1f4: test bh, 0xff */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xffu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085f1f7: jne 0x85f235 */ if (!fZ) goto L_0085f235;
L_0085f1f9:; BB(0x0085f1f9);
    /* 0085f1f9: mov eax, ebx */ r_eax = r_ebx;
    /* 0085f1fb: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085f200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f201: call 0x8582c0 */ r_esp -= 4; W32(r_esp, 0x85f206u); f_008582c0();
    /* 0085f206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f209: je 0x85f235 */ if (fZ) goto L_0085f235;
L_0085f20b:; BB(0x0085f20b);
    /* 0085f20b: mov eax, dword ptr [ebp - 0x30c] */ r_eax = R32((u32)(r_ebp+0xfffffcf4u));
    /* 0085f211: mov ecx, dword ptr [ebp - 0x308] */ r_ecx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 0085f217: shld ecx, eax, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_ecx = r; } }
    /* 0085f21b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f21e: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 0085f224: mov dword ptr [ebp - 0x308], ecx */ W32((u32)(r_ebp+0xfffffcf8u), r_ecx);
    /* 0085f22a: mov esi, ebx */ r_esi = r_ebx;
    /* 0085f22c: call 0x85e66f */ r_esp -= 4; W32(r_esp, 0x85f231u); f_0085e66f();
    /* 0085f231: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f233: jmp 0x85f23b */ goto L_0085f23b;
L_0085f235:; BB(0x0085f235);
    /* 0085f235: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085f23b:; BB(0x0085f23b);
    /* 0085f23b: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f242: jne 0x85f289 */ if (!fZ) goto L_0085f289;
L_0085f244:; BB(0x0085f244);
    /* 0085f244: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f24a: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085f24d: sub eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085f250: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085f251: add dword ptr [ebp - 0x30c], eax */ { u32 ad = (u32)(r_ebp+0xfffffcf4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 0085f257: adc dword ptr [ebp - 0x308], edx */ { u32 ad = (u32)(r_ebp+0xfffffcf8u); u32 c = fC; u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 0085f25d: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f264: je 0x85f277 */ if (fZ) goto L_0085f277;
L_0085f266:; BB(0x0085f266);
    /* 0085f266: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085f26c: jne 0x85f277 */ if (!fZ) goto L_0085f277;
L_0085f26e:; BB(0x0085f26e);
    /* 0085f26e: mov byte ptr [ebp - 0x2d9], 1 */ W8((u32)(r_ebp+0xfffffd27u), 0x1u);
    /* 0085f275: jmp 0x85f29a */ goto L_0085f29a;
L_0085f277:; BB(0x0085f277);
    /* 0085f277: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f27d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f280: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f285u); f_00864767();
    /* 0085f285: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f287: jmp 0x85f299 */ goto L_0085f299;
L_0085f289:; BB(0x0085f289);
    /* 0085f289: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f28f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f292: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f293: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f298u); f_0085e6a1();
    /* 0085f298: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f299:; BB(0x0085f299);
    /* 0085f299: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f29a:; BB(0x0085f29a);
    /* 0085f29a: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f2a1: je 0x85f16c */ if (fZ) goto L_0085f16c;
L_0085f2a7:; BB(0x0085f2a7);
    /* 0085f2a7: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085f2ad:; BB(0x0085f2ad);
    /* 0085f2ad: cmp byte ptr [ebp - 0x2f1], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd0fu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f2b4: je 0x85f3ef */ if (fZ) goto L_0085f3ef;
L_0085f2ba:; BB(0x0085f2ba);
    /* 0085f2ba: mov eax, dword ptr [ebp - 0x30c] */ r_eax = R32((u32)(r_ebp+0xfffffcf4u));
    /* 0085f2c0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0085f2c2: mov ecx, dword ptr [ebp - 0x308] */ r_ecx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 0085f2c8: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0085f2cb: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085f2cd: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 0085f2d3: mov dword ptr [ebp - 0x308], ecx */ W32((u32)(r_ebp+0xfffffcf8u), r_ecx);
    /* 0085f2d9: jmp 0x85f3ef */ goto L_0085f3ef;
L_0085f2de:; BB(0x0085f2de);
    /* 0085f2de: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f2e5: jne 0x85f3e0 */ if (!fZ) goto L_0085f3e0;
L_0085f2eb:; BB(0x0085f2eb);
    /* 0085f2eb: cmp dword ptr [ebp - 0x2f8], 0x78 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f2f2: je 0x85f33f */ if (fZ) goto L_0085f33f;
L_0085f2f4:; BB(0x0085f2f4);
    /* 0085f2f4: cmp dword ptr [ebp - 0x2f8], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f2fb: je 0x85f33f */ if (fZ) goto L_0085f33f;
L_0085f2fd:; BB(0x0085f2fd);
    /* 0085f2fd: test bh, 0xff */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xffu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085f300: jne 0x85f368 */ if (!fZ) goto L_0085f368;
L_0085f302:; BB(0x0085f302);
    /* 0085f302: mov eax, ebx */ r_eax = r_ebx;
    /* 0085f304: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085f309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f30a: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85f30fu); f_00858286();
    /* 0085f30f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f310: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f312: je 0x85f368 */ if (fZ) goto L_0085f368;
L_0085f314:; BB(0x0085f314);
    /* 0085f314: cmp dword ptr [ebp - 0x2f8], 0x6f */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f31b: jne 0x85f32c */ if (!fZ) goto L_0085f32c;
L_0085f31d:; BB(0x0085f31d);
    /* 0085f31d: cmp bx, 0x38 */ {  u32 a = (u16)r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085f321: jae 0x85f368 */ if (!fC) goto L_0085f368;
L_0085f323:; BB(0x0085f323);
    /* 0085f323: shl dword ptr [ebp - 0x304], 3 */ { u32 ad = (u32)(r_ebp+0xfffffcfcu); u32 c = (3u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 0085f32a: jmp 0x85f36e */ goto L_0085f36e;
L_0085f32c:; BB(0x0085f32c);
    /* 0085f32c: mov eax, dword ptr [ebp - 0x304] */ r_eax = R32((u32)(r_ebp+0xfffffcfcu));
    /* 0085f332: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085f335: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f337: mov dword ptr [ebp - 0x304], eax */ W32((u32)(r_ebp+0xfffffcfcu), r_eax);
    /* 0085f33d: jmp 0x85f36e */ goto L_0085f36e;
L_0085f33f:; BB(0x0085f33f);
    /* 0085f33f: test bh, 0xff */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xffu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085f342: jne 0x85f368 */ if (!fZ) goto L_0085f368;
L_0085f344:; BB(0x0085f344);
    /* 0085f344: mov eax, ebx */ r_eax = r_ebx;
    /* 0085f346: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085f34b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f34c: call 0x8582c0 */ r_esp -= 4; W32(r_esp, 0x85f351u); f_008582c0();
    /* 0085f351: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f354: je 0x85f368 */ if (fZ) goto L_0085f368;
L_0085f356:; BB(0x0085f356);
    /* 0085f356: shl dword ptr [ebp - 0x304], 4 */ { u32 ad = (u32)(r_ebp+0xfffffcfcu); u32 c = (4u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 0085f35d: mov esi, ebx */ r_esi = r_ebx;
    /* 0085f35f: call 0x85e66f */ r_esp -= 4; W32(r_esp, 0x85f364u); f_0085e66f();
    /* 0085f364: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f366: jmp 0x85f36e */ goto L_0085f36e;
L_0085f368:; BB(0x0085f368);
    /* 0085f368: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085f36e:; BB(0x0085f36e);
    /* 0085f36e: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f375: jne 0x85f3bc */ if (!fZ) goto L_0085f3bc;
L_0085f377:; BB(0x0085f377);
    /* 0085f377: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f37d: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085f380: mov ecx, dword ptr [ebp - 0x304] */ r_ecx = R32((u32)(r_ebp+0xfffffcfcu));
    /* 0085f386: lea eax, [ecx + eax - 0x30] */ r_eax = (u32)(r_ecx+r_eax+0xffffffd0u);
    /* 0085f38a: mov dword ptr [ebp - 0x304], eax */ W32((u32)(r_ebp+0xfffffcfcu), r_eax);
    /* 0085f390: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f397: je 0x85f3aa */ if (fZ) goto L_0085f3aa;
L_0085f399:; BB(0x0085f399);
    /* 0085f399: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085f39f: jne 0x85f3aa */ if (!fZ) goto L_0085f3aa;
L_0085f3a1:; BB(0x0085f3a1);
    /* 0085f3a1: mov byte ptr [ebp - 0x2d9], 1 */ W8((u32)(r_ebp+0xfffffd27u), 0x1u);
    /* 0085f3a8: jmp 0x85f3cd */ goto L_0085f3cd;
L_0085f3aa:; BB(0x0085f3aa);
    /* 0085f3aa: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f3b0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f3b3: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f3b8u); f_00864767();
    /* 0085f3b8: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f3ba: jmp 0x85f3cc */ goto L_0085f3cc;
L_0085f3bc:; BB(0x0085f3bc);
    /* 0085f3bc: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f3c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f3c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f3c6: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f3cbu); f_0085e6a1();
    /* 0085f3cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f3cc:; BB(0x0085f3cc);
    /* 0085f3cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f3cd:; BB(0x0085f3cd);
    /* 0085f3cd: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f3d4: je 0x85f2eb */ if (fZ) goto L_0085f2eb;
L_0085f3da:; BB(0x0085f3da);
    /* 0085f3da: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085f3e0:; BB(0x0085f3e0);
    /* 0085f3e0: cmp byte ptr [ebp - 0x2f1], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd0fu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f3e7: je 0x85f3ef */ if (fZ) goto L_0085f3ef;
L_0085f3e9:; BB(0x0085f3e9);
    /* 0085f3e9: neg dword ptr [ebp - 0x304] */ { u32 ad = (u32)(r_ebp+0xfffffcfcu); u32 x = R32(ad); u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085f3ef:; BB(0x0085f3ef);
    /* 0085f3ef: cmp dword ptr [ebp - 0x2f8], 0x46 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f3f6: jne 0x85f3ff */ if (!fZ) goto L_0085f3ff;
L_0085f3f8:; BB(0x0085f3f8);
    /* 0085f3f8: and dword ptr [ebp - 0x2fc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffd04u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085f3ff:; BB(0x0085f3ff);
    /* 0085f3ff: cmp dword ptr [ebp - 0x2fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f406: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085f408:; BB(0x0085f408);
    /* 0085f408: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f40f: jne 0x85f44f */ if (!fZ) goto L_0085f44f;
L_0085f411:; BB(0x0085f411);
    /* 0085f411: inc dword ptr [ebp - 0x320] */ { u32 ad = (u32)(r_ebp+0xfffffce0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f417: mov edi, dword ptr [ebp - 0x300] */ r_edi = R32((u32)(r_ebp+0xfffffd00u));
    /* 0085f41d: mov eax, dword ptr [ebp - 0x304] */ r_eax = R32((u32)(r_ebp+0xfffffcfcu));
L_0085f423:; BB(0x0085f423);
    /* 0085f423: cmp dword ptr [ebp - 0x328], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f42a: je 0x85f43f */ if (fZ) goto L_0085f43f;
L_0085f42c:; BB(0x0085f42c);
    /* 0085f42c: mov eax, dword ptr [ebp - 0x30c] */ r_eax = R32((u32)(r_ebp+0xfffffcf4u));
    /* 0085f432: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0085f434: mov eax, dword ptr [ebp - 0x308] */ r_eax = R32((u32)(r_ebp+0xfffffcf8u));
    /* 0085f43a: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0085f43d: jmp 0x85f44f */ goto L_0085f44f;
L_0085f43f:; BB(0x0085f43f);
    /* 0085f43f: cmp byte ptr [ebp - 0x2e6], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd1au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f446: je 0x85f44c */ if (fZ) goto L_0085f44c;
L_0085f448:; BB(0x0085f448);
    /* 0085f448: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0085f44a: jmp 0x85f44f */ goto L_0085f44f;
L_0085f44c:; BB(0x0085f44c);
    /* 0085f44c: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
L_0085f44f:; BB(0x0085f44f);
    /* 0085f44f: inc byte ptr [ebp - 0x2e8] */ { u32 ad = (u32)(r_ebp+0xfffffd18u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085f455: add dword ptr [ebp + 0xc], 2 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085f459:; BB(0x0085f459);
    /* 0085f459: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085f45c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f45f: jne 0x85e712 */ if (!fZ) goto L_0085e712;
L_0085f465:; BB(0x0085f465);
    /* 0085f465: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085f468: cmp word ptr [eax], 0x25 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x25u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f46c: jne 0x85f479 */ if (!fZ) goto L_0085f479;
L_0085f46e:; BB(0x0085f46e);
    /* 0085f46e: cmp word ptr [eax + 2], 0x6e */ {  u32 a = R16((u32)(r_eax+0x2u)); u32 b = 0x6eu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f473: je 0x85e712 */ if (fZ) goto L_0085e712;
L_0085f479:; BB(0x0085f479);
    /* 0085f479: cmp dword ptr [ebp - 0x32c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffcd4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f480: jne 0x85f48e */ if (!fZ) goto L_0085f48e;
L_0085f482:; BB(0x0085f482);
    /* 0085f482: push dword ptr [ebp - 0x31c] */ { u32 v = R32((u32)(r_ebp+0xfffffce4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f488: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85f48du); f_00858882();
    /* 0085f48d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f48e:; BB(0x0085f48e);
    /* 0085f48e: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085f491: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f494: mov eax, dword ptr [ebp - 0x320] */ r_eax = R32((u32)(r_ebp+0xfffffce0u));
    /* 0085f49a: jne 0x85f4ab */ if (!fZ) goto L_0085f4ab;
L_0085f49c:; BB(0x0085f49c);
    /* 0085f49c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f49e: jne 0x85f4ab */ if (!fZ) goto L_0085f4ab;
L_0085f4a0:; BB(0x0085f4a0);
    /* 0085f4a0: cmp byte ptr [ebp - 0x2e8], al */ {  u32 a = R8((u32)(r_ebp+0xfffffd18u)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f4a6: jne 0x85f4ab */ if (!fZ) goto L_0085f4ab;
L_0085f4a8:; BB(0x0085f4a8);
    /* 0085f4a8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0085f4ab:; BB(0x0085f4ab);
    /* 0085f4ab: lea esp, [ebp - 0x340] */ r_esp = (u32)(r_ebp+0xfffffcc0u);
    /* 0085f4b1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085f4b4: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85f4b9u); f_0085e419();
    /* 0085f4b9: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85f4beu); f_0085e5e7();
    /* 0085f4be: ret  */ FN_RET(0x0085e6cf); r_esp += 4; return;
L_0085f4bf:; BB(0x0085f4bf);
    /* 0085f4bf: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f4c5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f4c8: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f4cdu); f_00864767();
    /* 0085f4cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f4ce: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f4d0: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085f4d6: mov ax, word ptr [edi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 0085f4d9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085f4da: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085f4db: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 0085f4de: cmp ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f4e1: je 0x85f459 */ if (fZ) goto L_0085f459;
L_0085f4e7:; BB(0x0085f4e7);
    /* 0085f4e7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f4ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f4eb: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f4f0u); f_0085e6a1();
    /* 0085f4f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f4f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f4f2: jmp 0x85f479 */ goto L_0085f479;
}

void f_0085ed5d(void)
{
    FN_ENTER(0x0085ed5d);
    /* 0085ed5d: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ed5f: mov esi, 0xbe0f0804 */ r_esi = 0xbe0f0804u;
    UNSUP(0x0085ed64, "falls out of decoded code");
}

void f_0085ee55(void)
{
    FN_ENTER(0x0085ee55);
    /* 0085ee55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085ee57: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085ee58: ret  */ FN_RET(0x0085ee55); r_esp += 4; return;
}

void f_0085ee59(void)
{
    FN_ENTER(0x0085ee59);
    goto L_0085ee59;
L_0085e712:; BB(0x0085e712);
    /* 0085e712: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085e715: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0085e718: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e71b: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085e721:; BB(0x0085e721);
    /* 0085e721: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e723: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e724: call 0x858ba3 */ r_esp -= 4; W32(r_esp, 0x85e729u); f_00858ba3();
    /* 0085e729: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e72a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e72b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e72d: je 0x85e766 */ if (fZ) goto L_0085e766;
L_0085e72f:; BB(0x0085e72f);
    /* 0085e72f: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e735: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e738: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e73b: lea esi, [ebp - 0x2e0] */ r_esi = (u32)(r_ebp+0xfffffd20u);
    /* 0085e741: call 0x85e6b0 */ r_esp -= 4; W32(r_esp, 0x85e746u); f_0085e6b0();
    /* 0085e746: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e748: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85e74du); f_0085e6a1();
    /* 0085e74d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e74e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085e74f:; BB(0x0085e74f);
    /* 0085e74f: add dword ptr [ebp + 0xc], 2 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e753: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085e756: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0085e759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e75a: call 0x868c29 */ r_esp -= 4; W32(r_esp, 0x85e75fu); f_00868c29();
    /* 0085e75f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e762: jne 0x85e74f */ if (!fZ) goto L_0085e74f;
L_0085e764:; BB(0x0085e764);
    /* 0085e764: jmp 0x85e712 */ goto L_0085e712;
L_0085e766:; BB(0x0085e766);
    /* 0085e766: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085e769: cmp word ptr [edi], 0x25 */ {  u32 a = R16((u32)(r_edi)); u32 b = 0x25u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e76d: jne 0x85f4bf */ if (!fZ) goto L_0085f4bf;
L_0085e773:; BB(0x0085e773);
    /* 0085e773: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085e775: mov dword ptr [ebp - 0x304], eax */ W32((u32)(r_ebp+0xfffffcfcu), r_eax);
    /* 0085e77b: mov dword ptr [ebp - 0x314], eax */ W32((u32)(r_ebp+0xfffffcecu), r_eax);
    /* 0085e781: mov dword ptr [ebp - 0x2fc], eax */ W32((u32)(r_ebp+0xfffffd04u), r_eax);
    /* 0085e787: mov dword ptr [ebp - 0x318], eax */ W32((u32)(r_ebp+0xfffffce8u), r_eax);
    /* 0085e78d: mov dword ptr [ebp - 0x2e4], eax */ W32((u32)(r_ebp+0xfffffd1cu), r_eax);
    /* 0085e793: mov byte ptr [ebp - 0x30d], al */ W8((u32)(r_ebp+0xfffffcf3u), (u8)r_eax);
    /* 0085e799: mov byte ptr [ebp - 0x2f1], al */ W8((u32)(r_ebp+0xfffffd0fu), (u8)r_eax);
    /* 0085e79f: mov byte ptr [ebp - 0x2e7], al */ W8((u32)(r_ebp+0xfffffd19u), (u8)r_eax);
    /* 0085e7a5: mov byte ptr [ebp - 0x2d9], al */ W8((u32)(r_ebp+0xfffffd27u), (u8)r_eax);
    /* 0085e7ab: mov byte ptr [ebp - 0x2e9], al */ W8((u32)(r_ebp+0xfffffd17u), (u8)r_eax);
    /* 0085e7b1: mov byte ptr [ebp - 0x2e5], al */ W8((u32)(r_ebp+0xfffffd1bu), (u8)r_eax);
    /* 0085e7b7: mov byte ptr [ebp - 0x2e6], 1 */ W8((u32)(r_ebp+0xfffffd1au), 0x1u);
    /* 0085e7be: mov dword ptr [ebp - 0x328], eax */ W32((u32)(r_ebp+0xfffffcd8u), r_eax);
L_0085e7c4:; BB(0x0085e7c4);
    /* 0085e7c4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085e7c5: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085e7c6: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 0085e7c9: test si, 0xff00 */ {  u32 a = (u16)r_esi; u32 b = 0xff00u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e7ce: jne 0x85e800 */ if (!fZ) goto L_0085e800;
L_0085e7d0:; BB(0x0085e7d0);
    /* 0085e7d0: mov eax, esi */ r_eax = r_esi;
    /* 0085e7d2: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085e7d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e7d8: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85e7ddu); f_00858286();
    /* 0085e7dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e7de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e7e0: je 0x85e800 */ if (fZ) goto L_0085e800;
L_0085e7e2:; BB(0x0085e7e2);
    /* 0085e7e2: inc dword ptr [ebp - 0x318] */ { u32 ad = (u32)(r_ebp+0xfffffce8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e7e8: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085e7ee: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085e7f1: lea eax, [esi + eax*2 - 0x30] */ r_eax = (u32)(r_esi+r_eax*2+0xffffffd0u);
    /* 0085e7f5: mov dword ptr [ebp - 0x2e4], eax */ W32((u32)(r_ebp+0xfffffd1cu), r_eax);
    /* 0085e7fb: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e800:; BB(0x0085e800);
    /* 0085e800: cmp esi, 0x4e */ {  u32 a = r_esi; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e803: jg 0x85e8a0 */ if ((!fZ&&fS==fO)) goto L_0085e8a0;
L_0085e809:; BB(0x0085e809);
    /* 0085e809: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e80f:; BB(0x0085e80f);
    /* 0085e80f: cmp esi, 0x2a */ {  u32 a = r_esi; u32 b = 0x2au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e812: je 0x85e898 */ if (fZ) goto L_0085e898;
L_0085e818:; BB(0x0085e818);
    /* 0085e818: cmp esi, 0x46 */ {  u32 a = r_esi; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e81b: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e821:; BB(0x0085e821);
    /* 0085e821: cmp esi, 0x49 */ {  u32 a = r_esi; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e824: je 0x85e83a */ if (fZ) goto L_0085e83a;
L_0085e826:; BB(0x0085e826);
    /* 0085e826: cmp esi, 0x4c */ {  u32 a = r_esi; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e829: jne 0x85e8af */ if (!fZ) goto L_0085e8af;
L_0085e82f:; BB(0x0085e82f);
    /* 0085e82f: inc byte ptr [ebp - 0x2e6] */ { u32 ad = (u32)(r_ebp+0xfffffd1au); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085e835: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e83a:; BB(0x0085e83a);
    /* 0085e83a: mov cx, word ptr [edi + 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edi+0x2u))) & 0xffffu);
    /* 0085e83e: cmp cx, 0x36 */ {  u32 a = (u16)r_ecx; u32 b = 0x36u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e842: jne 0x85e865 */ if (!fZ) goto L_0085e865;
L_0085e844:; BB(0x0085e844);
    /* 0085e844: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 0085e847: cmp word ptr [eax], 0x34 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x34u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e84b: jne 0x85e865 */ if (!fZ) goto L_0085e865;
L_0085e84d:; BB(0x0085e84d);
    /* 0085e84d: mov edi, eax */ r_edi = r_eax;
    /* 0085e84f: inc dword ptr [ebp - 0x328] */ { u32 ad = (u32)(r_ebp+0xfffffcd8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e855: and dword ptr [ebp - 0x30c], 0 */ { u32 ad = (u32)(r_ebp+0xfffffcf4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e85c: and dword ptr [ebp - 0x308], 0 */ { u32 ad = (u32)(r_ebp+0xfffffcf8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e863: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e865:; BB(0x0085e865);
    /* 0085e865: cmp cx, 0x33 */ {  u32 a = (u16)r_ecx; u32 b = 0x33u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e869: jne 0x85e878 */ if (!fZ) goto L_0085e878;
L_0085e86b:; BB(0x0085e86b);
    /* 0085e86b: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 0085e86e: cmp word ptr [eax], 0x32 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x32u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e872: jne 0x85e878 */ if (!fZ) goto L_0085e878;
L_0085e874:; BB(0x0085e874);
    /* 0085e874: mov edi, eax */ r_edi = r_eax;
    /* 0085e876: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e878:; BB(0x0085e878);
    /* 0085e878: cmp cx, 0x64 */ {  u32 a = (u16)r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e87c: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e87e:; BB(0x0085e87e);
    /* 0085e87e: cmp cx, 0x69 */ {  u32 a = (u16)r_ecx; u32 b = 0x69u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e882: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e884:; BB(0x0085e884);
    /* 0085e884: cmp cx, 0x6f */ {  u32 a = (u16)r_ecx; u32 b = 0x6fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e888: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e88a:; BB(0x0085e88a);
    /* 0085e88a: cmp cx, 0x78 */ {  u32 a = (u16)r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e88e: je 0x85e8d1 */ if (fZ) goto L_0085e8d1;
L_0085e890:; BB(0x0085e890);
    /* 0085e890: cmp cx, 0x58 */ {  u32 a = (u16)r_ecx; u32 b = 0x58u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e894: jne 0x85e8af */ if (!fZ) goto L_0085e8af;
L_0085e896:; BB(0x0085e896);
    /* 0085e896: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e898:; BB(0x0085e898);
    /* 0085e898: inc byte ptr [ebp - 0x2e7] */ { u32 ad = (u32)(r_ebp+0xfffffd19u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085e89e: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e8a0:; BB(0x0085e8a0);
    /* 0085e8a0: cmp esi, 0x68 */ {  u32 a = r_esi; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e8a3: je 0x85e8c5 */ if (fZ) goto L_0085e8c5;
L_0085e8a5:; BB(0x0085e8a5);
    /* 0085e8a5: cmp esi, 0x6c */ {  u32 a = r_esi; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e8a8: je 0x85e8b7 */ if (fZ) goto L_0085e8b7;
L_0085e8aa:; BB(0x0085e8aa);
    /* 0085e8aa: cmp esi, 0x77 */ {  u32 a = r_esi; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e8ad: je 0x85e8bd */ if (fZ) goto L_0085e8bd;
L_0085e8af:; BB(0x0085e8af);
    /* 0085e8af: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085e8b5: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e8b7:; BB(0x0085e8b7);
    /* 0085e8b7: inc byte ptr [ebp - 0x2e6] */ { u32 ad = (u32)(r_ebp+0xfffffd1au); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085e8bd:; BB(0x0085e8bd);
    /* 0085e8bd: inc byte ptr [ebp - 0x2e5] */ { u32 ad = (u32)(r_ebp+0xfffffd1bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085e8c3: jmp 0x85e8d1 */ goto L_0085e8d1;
L_0085e8c5:; BB(0x0085e8c5);
    /* 0085e8c5: dec byte ptr [ebp - 0x2e6] */ { u32 ad = (u32)(r_ebp+0xfffffd1au); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 0085e8cb: dec byte ptr [ebp - 0x2e5] */ { u32 ad = (u32)(r_ebp+0xfffffd1bu); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
L_0085e8d1:; BB(0x0085e8d1);
    /* 0085e8d1: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e8d8: je 0x85e7c4 */ if (fZ) goto L_0085e7c4;
L_0085e8de:; BB(0x0085e8de);
    /* 0085e8de: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 0085e8e1: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e8e8: jne 0x85e904 */ if (!fZ) goto L_0085e904;
L_0085e8ea:; BB(0x0085e8ea);
    /* 0085e8ea: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0085e8ed: mov dword ptr [ebp - 0x334], eax */ W32((u32)(r_ebp+0xfffffcccu), r_eax);
    /* 0085e8f3: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085e8f6: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0085e8f9: mov edi, dword ptr [eax - 4] */ r_edi = R32((u32)(r_eax+0xfffffffcu));
    /* 0085e8fc: mov dword ptr [ebp - 0x300], edi */ W32((u32)(r_ebp+0xfffffd00u), r_edi);
    /* 0085e902: jmp 0x85e90a */ goto L_0085e90a;
L_0085e904:; BB(0x0085e904);
    /* 0085e904: mov edi, dword ptr [ebp - 0x300] */ r_edi = R32((u32)(r_ebp+0xfffffd00u));
L_0085e90a:; BB(0x0085e90a);
    /* 0085e90a: mov byte ptr [ebp - 0x2d9], 0 */ W8((u32)(r_ebp+0xfffffd27u), 0x0u);
    /* 0085e911: cmp byte ptr [ebp - 0x2e5], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd1bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e918: jne 0x85e93a */ if (!fZ) goto L_0085e93a;
L_0085e91a:; BB(0x0085e91a);
    /* 0085e91a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085e91d: mov ax, word ptr [eax] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0085e920: cmp ax, 0x53 */ {  u32 a = (u16)r_eax; u32 b = 0x53u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e924: je 0x85e933 */ if (fZ) goto L_0085e933;
L_0085e926:; BB(0x0085e926);
    /* 0085e926: cmp ax, 0x43 */ {  u32 a = (u16)r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e92a: mov byte ptr [ebp - 0x2e5], 1 */ W8((u32)(r_ebp+0xfffffd1bu), 0x1u);
    /* 0085e931: jne 0x85e93a */ if (!fZ) goto L_0085e93a;
L_0085e933:; BB(0x0085e933);
    /* 0085e933: mov byte ptr [ebp - 0x2e5], 0xff */ W8((u32)(r_ebp+0xfffffd1bu), 0xffu);
L_0085e93a:; BB(0x0085e93a);
    /* 0085e93a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085e93d: movzx esi, word ptr [eax] */ r_esi = (u32)R16((u32)(r_eax));
    /* 0085e940: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0085e943: mov dword ptr [ebp - 0x2f8], esi */ W32((u32)(r_ebp+0xfffffd08u), r_esi);
    /* 0085e949: cmp esi, 0x6e */ {  u32 a = r_esi; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e94c: je 0x85e985 */ if (fZ) goto L_0085e985;
L_0085e94e:; BB(0x0085e94e);
    /* 0085e94e: cmp esi, 0x63 */ {  u32 a = r_esi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e951: je 0x85e96e */ if (fZ) goto L_0085e96e;
L_0085e953:; BB(0x0085e953);
    /* 0085e953: cmp esi, 0x7b */ {  u32 a = r_esi; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e956: je 0x85e96e */ if (fZ) goto L_0085e96e;
L_0085e958:; BB(0x0085e958);
    /* 0085e958: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e95b: lea esi, [ebp - 0x2e0] */ r_esi = (u32)(r_ebp+0xfffffd20u);
    /* 0085e961: call 0x85e6b0 */ r_esp -= 4; W32(r_esp, 0x85e966u); f_0085e6b0();
    /* 0085e966: mov esi, dword ptr [ebp - 0x2f8] */ r_esi = R32((u32)(r_ebp+0xfffffd08u));
    /* 0085e96c: jmp 0x85e97c */ goto L_0085e97c;
L_0085e96e:; BB(0x0085e96e);
    /* 0085e96e: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e974: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085e977: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85e97cu); f_00864767();
L_0085e97c:; BB(0x0085e97c);
    /* 0085e97c: mov ebx, eax */ r_ebx = r_eax;
    /* 0085e97e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e97f: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085e985:; BB(0x0085e985);
    /* 0085e985: mov ecx, dword ptr [ebp - 0x318] */ r_ecx = R32((u32)(r_ebp+0xfffffce8u));
    /* 0085e98b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e98d: je 0x85e99c */ if (fZ) goto L_0085e99c;
L_0085e98f:; BB(0x0085e98f);
    /* 0085e98f: cmp dword ptr [ebp - 0x2e4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e996: je 0x85f4e7 */ if (fZ) goto L_0085f4e7;
L_0085e99c:; BB(0x0085e99c);
    /* 0085e99c: cmp esi, 0x6f */ {  u32 a = r_esi; u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e99f: jg 0x85eda2 */ if ((!fZ&&fS==fO)) goto L_0085eda2;
L_0085e9a5:; BB(0x0085e9a5);
    /* 0085e9a5: je 0x85f111 */ if (fZ) goto L_0085f111;
L_0085e9ab:; BB(0x0085e9ab);
    /* 0085e9ab: cmp esi, 0x63 */ {  u32 a = r_esi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e9ae: je 0x85ec9d */ if (fZ) goto L_0085ec9d;
L_0085e9b4:; BB(0x0085e9b4);
    /* 0085e9b4: cmp esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e9b7: je 0x85f111 */ if (fZ) goto L_0085f111;
L_0085e9bd:; BB(0x0085e9bd);
    /* 0085e9bd: jle 0x85edcc */ if ((fZ||fS!=fO)) goto L_0085edcc;
L_0085e9c3:; BB(0x0085e9c3);
    /* 0085e9c3: cmp esi, 0x67 */ {  u32 a = r_esi; u32 b = 0x67u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085e9c6: jle 0x85ea0d */ if ((fZ||fS!=fO)) goto L_0085ea0d;
L_0085e9c8:; BB(0x0085e9c8);
    /* 0085e9c8: cmp esi, 0x69 */ {  u32 a = r_esi; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e9cb: je 0x85e9ee */ if (fZ) goto L_0085e9ee;
L_0085e9cd:; BB(0x0085e9cd);
    /* 0085e9cd: cmp esi, 0x6e */ {  u32 a = r_esi; u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085e9d0: jne 0x85edcc */ if (!fZ) goto L_0085edcc;
L_0085e9d6:; BB(0x0085e9d6);
    /* 0085e9d6: mov eax, dword ptr [ebp - 0x2e0] */ r_eax = R32((u32)(r_ebp+0xfffffd20u));
    /* 0085e9dc: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085e9e3: je 0x85f423 */ if (fZ) goto L_0085f423;
L_0085e9e9:; BB(0x0085e9e9);
    /* 0085e9e9: jmp 0x85f44f */ goto L_0085f44f;
L_0085e9ee:; BB(0x0085e9ee);
    /* 0085e9ee: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e9f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085e9f1: mov dword ptr [ebp - 0x2f8], esi */ W32((u32)(r_ebp+0xfffffd08u), r_esi);
L_0085e9f7:; BB(0x0085e9f7);
    /* 0085e9f7: cmp bx, 0x2d */ {  u32 a = (u16)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085e9fb: jne 0x85efa0 */ if (!fZ) goto L_0085efa0;
L_0085ea01:; BB(0x0085ea01);
    /* 0085ea01: mov byte ptr [ebp - 0x2f1], 1 */ W8((u32)(r_ebp+0xfffffd0fu), 0x1u);
    /* 0085ea08: jmp 0x85efa6 */ goto L_0085efa6;
L_0085ea0d:; BB(0x0085ea0d);
    /* 0085ea0d: lea esi, [ebp - 0x2d8] */ r_esi = (u32)(r_ebp+0xfffffd28u);
    /* 0085ea13: cmp bx, 0x2d */ {  u32 a = (u16)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ea17: jne 0x85ea28 */ if (!fZ) goto L_0085ea28;
L_0085ea19:; BB(0x0085ea19);
    /* 0085ea19: mov word ptr [ebp - 0x2d8], bx */ W16((u32)(r_ebp+0xfffffd28u), (u16)r_ebx);
    /* 0085ea20: lea esi, [ebp - 0x2d6] */ r_esi = (u32)(r_ebp+0xfffffd2au);
    /* 0085ea26: jmp 0x85ea2e */ goto L_0085ea2e;
L_0085ea28:; BB(0x0085ea28);
    /* 0085ea28: cmp bx, 0x2b */ {  u32 a = (u16)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ea2c: jne 0x85ea4b */ if (!fZ) goto L_0085ea4b;
L_0085ea2e:; BB(0x0085ea2e);
    /* 0085ea2e: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ea34: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ea3a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ea3d: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85ea42u); f_00864767();
    /* 0085ea42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ea43: mov ebx, eax */ r_ebx = r_eax;
    /* 0085ea45: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085ea4b:; BB(0x0085ea4b);
    /* 0085ea4b: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ea52: je 0x85ea60 */ if (fZ) goto L_0085ea60;
L_0085ea54:; BB(0x0085ea54);
    /* 0085ea54: cmp dword ptr [ebp - 0x2e4], 0x15d */ {  u32 a = R32((u32)(r_ebp+0xfffffd1cu)); u32 b = 0x15du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085ea5e: jle 0x85ea6a */ if ((fZ||fS!=fO)) goto L_0085ea6a;
L_0085ea60:; BB(0x0085ea60);
    /* 0085ea60: mov dword ptr [ebp - 0x2e4], 0x15d */ W32((u32)(r_ebp+0xfffffd1cu), 0x15du);
L_0085ea6a:; BB(0x0085ea6a);
    /* 0085ea6a: mov edi, 0xff00 */ r_edi = 0xff00u;
    /* 0085ea6f: jmp 0x85eab5 */ goto L_0085eab5;
L_0085ea71:; BB(0x0085ea71);
    /* 0085ea71: mov eax, ebx */ r_eax = r_ebx;
    /* 0085ea73: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085ea78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ea79: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85ea7eu); f_00858286();
    /* 0085ea7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ea7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ea81: je 0x85eaba */ if (fZ) goto L_0085eaba;
L_0085ea83:; BB(0x0085ea83);
    /* 0085ea83: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085ea89: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ea8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ea91: je 0x85eaba */ if (fZ) goto L_0085eaba;
L_0085ea93:; BB(0x0085ea93);
    /* 0085ea93: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ea99: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0085ea9c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ea9d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ea9e: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eaa4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eaa7: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85eaacu); f_00864767();
    /* 0085eaac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085eaad: mov ebx, eax */ r_ebx = r_eax;
    /* 0085eaaf: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085eab5:; BB(0x0085eab5);
    /* 0085eab5: test di, bx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ebx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eab8: je 0x85ea71 */ if (fZ) goto L_0085ea71;
L_0085eaba:; BB(0x0085eaba);
    /* 0085eaba: push dword ptr [0xa23f90] */ { u32 v = R32((u32)(0xa23f90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eac0: push 0xa23f94 */ { u32 v = 0xa23f94u; r_esp -= 4; W32(r_esp, v); }
    /* 0085eac5: lea eax, [ebp - 0x324] */ r_eax = (u32)(r_ebp+0xfffffcdcu);
    /* 0085eacb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085eacc: call 0x866f7f */ r_esp -= 4; W32(r_esp, 0x85ead1u); f_00866f7f();
    /* 0085ead1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085ead4: cmp word ptr [ebp - 0x324], bx */ {  u32 a = R16((u32)(r_ebp+0xfffffcdcu)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eadb: jne 0x85eb54 */ if (!fZ) goto L_0085eb54;
L_0085eadd:; BB(0x0085eadd);
    /* 0085eadd: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085eae3: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eae9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eaeb: je 0x85eb54 */ if (fZ) goto L_0085eb54;
L_0085eaed:; BB(0x0085eaed);
    /* 0085eaed: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eaf3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eaf6: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85eafbu); f_00864767();
    /* 0085eafb: mov ebx, eax */ r_ebx = r_eax;
    /* 0085eafd: mov ax, word ptr [ebp - 0x324] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffcdcu))) & 0xffffu);
    /* 0085eb04: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 0085eb07: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb08: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb09: jmp 0x85eb48 */ goto L_0085eb48;
L_0085eb0b:; BB(0x0085eb0b);
    /* 0085eb0b: mov eax, ebx */ r_eax = r_ebx;
    /* 0085eb0d: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085eb12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085eb13: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85eb18u); f_00858286();
    /* 0085eb18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085eb19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eb1b: je 0x85eb54 */ if (fZ) goto L_0085eb54;
L_0085eb1d:; BB(0x0085eb1d);
    /* 0085eb1d: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085eb23: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eb2b: je 0x85eb54 */ if (fZ) goto L_0085eb54;
L_0085eb2d:; BB(0x0085eb2d);
    /* 0085eb2d: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb33: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0085eb36: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb37: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb38: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eb41: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85eb46u); f_00864767();
    /* 0085eb46: mov ebx, eax */ r_ebx = r_eax;
L_0085eb48:; BB(0x0085eb48);
    /* 0085eb48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085eb49: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085eb4f: test di, bx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ebx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eb52: je 0x85eb0b */ if (fZ) goto L_0085eb0b;
L_0085eb54:; BB(0x0085eb54);
    /* 0085eb54: cmp dword ptr [ebp - 0x2fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eb5b: je 0x85ec17 */ if (fZ) goto L_0085ec17;
L_0085eb61:; BB(0x0085eb61);
    /* 0085eb61: cmp bx, 0x65 */ {  u32 a = (u16)r_ebx; u32 b = 0x65u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eb65: je 0x85eb71 */ if (fZ) goto L_0085eb71;
L_0085eb67:; BB(0x0085eb67);
    /* 0085eb67: cmp bx, 0x45 */ {  u32 a = (u16)r_ebx; u32 b = 0x45u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eb6b: jne 0x85ec17 */ if (!fZ) goto L_0085ec17;
L_0085eb71:; BB(0x0085eb71);
    /* 0085eb71: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085eb77: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eb7f: je 0x85ec17 */ if (fZ) goto L_0085ec17;
L_0085eb85:; BB(0x0085eb85);
    /* 0085eb85: mov word ptr [esi], 0x65 */ W16((u32)(r_esi), 0x65u);
    /* 0085eb8a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb8b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085eb8c: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eb92: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085eb95: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85eb9au); f_00864767();
    /* 0085eb9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085eb9b: mov ebx, eax */ r_ebx = r_eax;
    /* 0085eb9d: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085eba3: cmp bx, 0x2d */ {  u32 a = (u16)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eba7: jne 0x85ebb0 */ if (!fZ) goto L_0085ebb0;
L_0085eba9:; BB(0x0085eba9);
    /* 0085eba9: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0085ebac: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ebad: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ebae: jmp 0x85ebb6 */ goto L_0085ebb6;
L_0085ebb0:; BB(0x0085ebb0);
    /* 0085ebb0: cmp bx, 0x2b */ {  u32 a = (u16)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ebb4: jne 0x85ec12 */ if (!fZ) goto L_0085ec12;
L_0085ebb6:; BB(0x0085ebb6);
    /* 0085ebb6: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085ebbc: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ebc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ebc4: jne 0x85ebfb */ if (!fZ) goto L_0085ebfb;
L_0085ebc6:; BB(0x0085ebc6);
    /* 0085ebc6: and dword ptr [ebp - 0x2e4], eax */ { u32 ad = (u32)(r_ebp+0xfffffd1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ebcc: jmp 0x85ec12 */ goto L_0085ec12;
L_0085ebce:; BB(0x0085ebce);
    /* 0085ebce: mov eax, ebx */ r_eax = r_ebx;
    /* 0085ebd0: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085ebd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ebd6: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85ebdbu); f_00858286();
    /* 0085ebdb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ebdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ebde: je 0x85ec17 */ if (fZ) goto L_0085ec17;
L_0085ebe0:; BB(0x0085ebe0);
    /* 0085ebe0: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085ebe6: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ebec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ebee: je 0x85ec17 */ if (fZ) goto L_0085ec17;
L_0085ebf0:; BB(0x0085ebf0);
    /* 0085ebf0: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ebf6: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 0085ebf9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ebfa: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0085ebfb:; BB(0x0085ebfb);
    /* 0085ebfb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ebfe: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ec04: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85ec09u); f_00864767();
    /* 0085ec09: mov ebx, eax */ r_ebx = r_eax;
    /* 0085ec0b: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085ec11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ec12:; BB(0x0085ec12);
    /* 0085ec12: test di, bx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ebx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ec15: je 0x85ebce */ if (fZ) goto L_0085ebce;
L_0085ec17:; BB(0x0085ec17);
    /* 0085ec17: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ec1d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ec20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec21: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85ec26u); f_0085e6a1();
    /* 0085ec26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ec27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ec28: cmp dword ptr [ebp - 0x2fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ec2f: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085ec35:; BB(0x0085ec35);
    /* 0085ec35: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ec3c: jne 0x85f44f */ if (!fZ) goto L_0085f44f;
L_0085ec42:; BB(0x0085ec42);
    /* 0085ec42: inc dword ptr [ebp - 0x320] */ { u32 ad = (u32)(r_ebp+0xfffffce0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ec48: and word ptr [esi], 0 */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 0085ec4c: lea eax, [ebp - 0x2d8] */ r_eax = (u32)(r_ebp+0xfffffd28u);
    /* 0085ec52: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085ec54: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0085ec56: lea esi, [esi + esi + 2] */ r_esi = (u32)(r_esi+r_esi+0x2u);
    /* 0085ec5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec5b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85ec60u); f_00859c55();
    /* 0085ec60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ec61: mov edi, eax */ r_edi = r_eax;
    /* 0085ec63: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ec65: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085ec6b:; BB(0x0085ec6b);
    /* 0085ec6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec6c: lea eax, [ebp - 0x2d8] */ r_eax = (u32)(r_ebp+0xfffffd28u);
    /* 0085ec72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec73: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec74: call 0x858618 */ r_esp -= 4; W32(r_esp, 0x85ec79u); f_00858618();
    /* 0085ec79: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec7a: push dword ptr [ebp - 0x300] */ { u32 v = R32((u32)(r_ebp+0xfffffd00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ec80: movsx eax, byte ptr [ebp - 0x2e6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffd1au));
    /* 0085ec87: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085ec88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec89: call dword ptr [0xa23c78] */ { u32 t = R32((u32)(0xa23c78u)); r_esp -= 4; W32(r_esp, 0x85ec8fu); call_ind(t); }
    /* 0085ec8f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ec90: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85ec95u); f_00858882();
    /* 0085ec95: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085ec98: jmp 0x85f44f */ goto L_0085f44f;
L_0085ec9d:; BB(0x0085ec9d);
    /* 0085ec9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ec9f: jne 0x85ecb1 */ if (!fZ) goto L_0085ecb1;
L_0085eca1:; BB(0x0085eca1);
    /* 0085eca1: mov dword ptr [ebp - 0x318], 1 */ W32((u32)(r_ebp+0xfffffce8u), 0x1u);
    /* 0085ecab: inc dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085ecb1:; BB(0x0085ecb1);
    /* 0085ecb1: cmp byte ptr [ebp - 0x2e5], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd1bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0085ecb8: jle 0x85ecc1 */ if ((fZ||fS!=fO)) goto L_0085ecc1;
L_0085ecba:; BB(0x0085ecba);
    /* 0085ecba: mov byte ptr [ebp - 0x2e9], 1 */ W8((u32)(r_ebp+0xfffffd17u), 0x1u);
L_0085ecc1:; BB(0x0085ecc1);
    /* 0085ecc1: mov esi, dword ptr [ebp - 0x300] */ r_esi = R32((u32)(r_ebp+0xfffffd00u));
    /* 0085ecc7: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eccd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ecd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ecd1: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85ecd6u); f_0085e6a1();
L_0085ecd6:; BB(0x0085ecd6);
    /* 0085ecd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ecd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085ecd8:; BB(0x0085ecd8);
    /* 0085ecd8: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ecdf: je 0x85ecf5 */ if (fZ) goto L_0085ecf5;
L_0085ece1:; BB(0x0085ece1);
    /* 0085ece1: mov eax, dword ptr [ebp - 0x2e4] */ r_eax = R32((u32)(r_ebp+0xfffffd1cu));
    /* 0085ece7: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085eced: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ecef: je 0x85f0be */ if (fZ) goto L_0085f0be;
L_0085ecf5:; BB(0x0085ecf5);
    /* 0085ecf5: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ecfb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ecfe: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85ed03u); f_00864767();
    /* 0085ed03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ed04: mov ebx, eax */ r_ebx = r_eax;
    /* 0085ed06: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085ed0c: cmp bx, 0xffff */ {  u32 a = (u16)r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ed11: je 0x85f0ad */ if (fZ) goto L_0085f0ad;
L_0085ed17:; BB(0x0085ed17);
    /* 0085ed17: cmp dword ptr [ebp - 0x2f8], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ed1e: je 0x85ed73 */ if (fZ) goto L_0085ed73;
L_0085ed20:; BB(0x0085ed20);
    /* 0085ed20: cmp dword ptr [ebp - 0x2f8], 0x73 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ed27: jne 0x85ed3b */ if (!fZ) goto L_0085ed3b;
L_0085ed29:; BB(0x0085ed29);
    /* 0085ed29: cmp bx, 9 */ {  u32 a = (u16)r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085ed2d: jb 0x85ed35 */ if (fC) goto L_0085ed35;
L_0085ed2f:; BB(0x0085ed2f);
    /* 0085ed2f: cmp bx, 0xd */ {  u32 a = (u16)r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085ed33: jbe 0x85ed3b */ if ((fC||fZ)) goto L_0085ed3b;
L_0085ed35:; BB(0x0085ed35);
    /* 0085ed35: cmp bx, 0x20 */ {  u32 a = (u16)r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ed39: jne 0x85ed73 */ if (!fZ) goto L_0085ed73;
L_0085ed3b:; BB(0x0085ed3b);
    /* 0085ed3b: cmp dword ptr [ebp - 0x2f8], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ed42: jne 0x85f0ad */ if (!fZ) goto L_0085f0ad;
L_0085ed48:; BB(0x0085ed48);
    /* 0085ed48: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085ed4b: mov ecx, eax */ r_ecx = r_eax;
    /* 0085ed4d: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ed50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 0085ed52: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085ed53: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0085ed55: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085ed58: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 0085ed5e: movsx eax, byte ptr [eax + ecx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx));
    /* 0085ed62: movsx ecx, byte ptr [ebp - 0x30d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffcf3u));
    /* 0085ed69: xor eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085ed6b: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ed6d: je 0x85f0ad */ if (fZ) goto L_0085f0ad;
L_0085ed73:; BB(0x0085ed73);
    /* 0085ed73: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ed7a: jne 0x85f0a6 */ if (!fZ) goto L_0085f0a6;
L_0085ed80:; BB(0x0085ed80);
    /* 0085ed80: cmp byte ptr [ebp - 0x2e9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd17u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ed87: je 0x85f08f */ if (fZ) goto L_0085f08f;
L_0085ed8d:; BB(0x0085ed8d);
    /* 0085ed8d: mov eax, dword ptr [ebp - 0x300] */ r_eax = R32((u32)(r_ebp+0xfffffd00u));
    /* 0085ed93: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 0085ed96: add dword ptr [ebp - 0x300], 2 */ { u32 ad = (u32)(r_ebp+0xfffffd00u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ed9d: jmp 0x85ecd8 */ goto L_0085ecd8;
L_0085eda2:; BB(0x0085eda2);
    /* 0085eda2: mov eax, esi */ r_eax = r_esi;
    /* 0085eda4: sub eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085eda7: je 0x85f10a */ if (fZ) goto L_0085f10a;
L_0085edad:; BB(0x0085edad);
    /* 0085edad: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085edb0: je 0x85ecb1 */ if (fZ) goto L_0085ecb1;
L_0085edb6:; BB(0x0085edb6);
    /* 0085edb6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085edb7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085edb8: je 0x85f111 */ if (fZ) goto L_0085f111;
L_0085edbe:; BB(0x0085edbe);
    /* 0085edbe: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085edc1: je 0x85e9f7 */ if (fZ) goto L_0085e9f7;
L_0085edc7:; BB(0x0085edc7);
    /* 0085edc7: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085edca: je 0x85edf9 */ if (fZ) goto L_0085edf9;
L_0085edcc:; BB(0x0085edcc);
    /* 0085edcc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085edcf: cmp word ptr [eax], bx */ {  u32 a = R16((u32)(r_eax)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085edd2: jne 0x85f4e7 */ if (!fZ) goto L_0085f4e7;
L_0085edd8:; BB(0x0085edd8);
    /* 0085edd8: dec byte ptr [ebp - 0x2e8] */ { u32 ad = (u32)(r_ebp+0xfffffd18u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 0085edde: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ede5: jne 0x85f44f */ if (!fZ) goto L_0085f44f;
L_0085edeb:; BB(0x0085edeb);
    /* 0085edeb: mov eax, dword ptr [ebp - 0x334] */ r_eax = R32((u32)(r_ebp+0xfffffcccu));
    /* 0085edf1: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 0085edf4: jmp 0x85f44f */ goto L_0085f44f;
L_0085edf9:; BB(0x0085edf9);
    /* 0085edf9: cmp byte ptr [ebp - 0x2e5], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd1bu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0085ee00: jle 0x85ee09 */ if ((fZ||fS!=fO)) goto L_0085ee09;
L_0085ee02:; BB(0x0085ee02);
    /* 0085ee02: mov byte ptr [ebp - 0x2e9], 1 */ W8((u32)(r_ebp+0xfffffd17u), 0x1u);
L_0085ee09:; BB(0x0085ee09);
    /* 0085ee09: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085ee0c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085ee0d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085ee0e: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 0085ee11: mov dword ptr [ebp - 0x330], edi */ W32((u32)(r_ebp+0xfffffcd0u), r_edi);
    /* 0085ee17: cmp word ptr [edi], 0x5e */ {  u32 a = R16((u32)(r_edi)); u32 b = 0x5eu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ee1b: jne 0x85ee2d */ if (!fZ) goto L_0085ee2d;
L_0085ee1d:; BB(0x0085ee1d);
    /* 0085ee1d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085ee20: mov dword ptr [ebp - 0x330], edi */ W32((u32)(r_ebp+0xfffffcd0u), r_edi);
    /* 0085ee26: mov byte ptr [ebp - 0x30d], 0xff */ W8((u32)(r_ebp+0xfffffcf3u), 0xffu);
L_0085ee2d:; BB(0x0085ee2d);
    /* 0085ee2d: cmp dword ptr [ebp - 0x31c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ee34: jne 0x85ee9f */ if (!fZ) goto L_0085ee9f;
L_0085ee36:; BB(0x0085ee36);
    /* 0085ee36: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ee3a: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 0085ee3f: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x85ee44u); f_00858020();
    /* 0085ee44: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0085ee47: mov eax, esp */ r_eax = r_esp;
    /* 0085ee49: mov dword ptr [ebp - 0x31c], eax */ W32((u32)(r_ebp+0xfffffce4u), r_eax);
    /* 0085ee4f: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ee53: jmp 0x85ee9f */ goto L_0085ee9f;
L_0085ee59:; BB(0x0085ee59);
    /* 0085ee59: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085ee5c: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x85ee61u); f_00865365();
    /* 0085ee61: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ee66: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85ee6bu); f_00859c55();
    /* 0085ee6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ee6c: mov dword ptr [ebp - 0x31c], eax */ W32((u32)(r_ebp+0xfffffce4u), r_eax);
    /* 0085ee72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ee74: jne 0x85ee85 */ if (!fZ) goto L_0085ee85;
L_0085ee76:; BB(0x0085ee76);
    /* 0085ee76: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ee7a: mov ebx, dword ptr [ebp - 0x2f0] */ r_ebx = R32((u32)(r_ebp+0xfffffd10u));
    /* 0085ee80: jmp 0x85f479 */ goto L_0085f479;
L_0085ee85:; BB(0x0085ee85);
    /* 0085ee85: mov dword ptr [ebp - 0x32c], 1 */ W32((u32)(r_ebp+0xfffffcd4u), 0x1u);
    /* 0085ee8f: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ee93: mov edi, dword ptr [ebp - 0x330] */ r_edi = R32((u32)(r_ebp+0xfffffcd0u));
    /* 0085ee99: mov ebx, dword ptr [ebp - 0x2f0] */ r_ebx = R32((u32)(r_ebp+0xfffffd10u));
L_0085ee9f:; BB(0x0085ee9f);
    /* 0085ee9f: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085eea4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085eea6: mov esi, dword ptr [ebp - 0x31c] */ r_esi = R32((u32)(r_ebp+0xfffffce4u));
    /* 0085eeac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085eead: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x85eeb2u); f_0085f580();
    /* 0085eeb2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085eeb5: cmp dword ptr [ebp - 0x2f8], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085eebc: jne 0x85eed2 */ if (!fZ) goto L_0085eed2;
L_0085eebe:; BB(0x0085eebe);
    /* 0085eebe: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0085eec0: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0085eec1: cmp word ptr [edi], ax */ {  u32 a = R16((u32)(r_edi)); u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eec4: jne 0x85eed2 */ if (!fZ) goto L_0085eed2;
L_0085eec6:; BB(0x0085eec6);
    /* 0085eec6: mov dword ptr [ebp - 0x314], eax */ W32((u32)(r_ebp+0xfffffcecu), r_eax);
    /* 0085eecc: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eecd: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eece: mov byte ptr [esi + 0xb], 0x20 */ W8((u32)(r_esi+0xbu), 0x20u);
L_0085eed2:; BB(0x0085eed2);
    /* 0085eed2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085eed4: jmp 0x85ef75 */ goto L_0085ef75;
L_0085eed9:; BB(0x0085eed9);
    /* 0085eed9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eeda: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eedb: cmp ax, 0x2d */ {  u32 a = (u16)r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eedf: jne 0x85ef56 */ if (!fZ) goto L_0085ef56;
L_0085eee1:; BB(0x0085eee1);
    /* 0085eee1: cmp word ptr [ebp - 0x314], 0 */ {  u32 a = R16((u32)(r_ebp+0xfffffcecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eee9: je 0x85ef56 */ if (fZ) goto L_0085ef56;
L_0085eeeb:; BB(0x0085eeeb);
    /* 0085eeeb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085eeed: mov cx, word ptr [edi] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 0085eef0: cmp cx, 0x5d */ {  u32 a = (u16)r_ecx; u32 b = 0x5du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eef4: je 0x85ef56 */ if (fZ) goto L_0085ef56;
L_0085eef6:; BB(0x0085eef6);
    /* 0085eef6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eef7: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085eef8: cmp word ptr [ebp - 0x314], cx */ {  u32 a = R16((u32)(r_ebp+0xfffffcecu)); u32 b = (u16)r_ecx; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085eeff: jae 0x85ef05 */ if (!fC) goto L_0085ef05;
L_0085ef01:; BB(0x0085ef01);
    /* 0085ef01: mov eax, ecx */ r_eax = r_ecx;
    /* 0085ef03: jmp 0x85ef11 */ goto L_0085ef11;
L_0085ef05:; BB(0x0085ef05);
    /* 0085ef05: mov eax, dword ptr [ebp - 0x314] */ r_eax = R32((u32)(r_ebp+0xfffffcecu));
    /* 0085ef0b: mov dword ptr [ebp - 0x314], ecx */ W32((u32)(r_ebp+0xfffffcecu), r_ecx);
L_0085ef11:; BB(0x0085ef11);
    /* 0085ef11: cmp word ptr [ebp - 0x314], ax */ {  u32 a = R16((u32)(r_ebp+0xfffffcecu)); u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085ef18: ja 0x85ef4d */ if ((!fC&&!fZ)) goto L_0085ef4d;
L_0085ef1a:; BB(0x0085ef1a);
    /* 0085ef1a: movzx esi, word ptr [ebp - 0x314] */ r_esi = (u32)R16((u32)(r_ebp+0xfffffcecu));
    /* 0085ef21: sub eax, dword ptr [ebp - 0x314] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffcecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085ef27: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085ef28: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
L_0085ef2b:; BB(0x0085ef2b);
    /* 0085ef2b: mov eax, esi */ r_eax = r_esi;
    /* 0085ef2d: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085ef30: mov ecx, dword ptr [ebp - 0x31c] */ r_ecx = R32((u32)(r_ebp+0xfffffce4u));
    /* 0085ef36: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085ef38: mov ecx, esi */ r_ecx = r_esi;
    /* 0085ef3a: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0085ef3d: mov bl, 1 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0085ef3f: shl bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0085ef41: or byte ptr [eax], bl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0085ef43: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085ef44: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0085ef45: jne 0x85ef2b */ if (!fZ) goto L_0085ef2b;
L_0085ef47:; BB(0x0085ef47);
    /* 0085ef47: mov ebx, dword ptr [ebp - 0x2f0] */ r_ebx = R32((u32)(r_ebp+0xfffffd10u));
L_0085ef4d:; BB(0x0085ef4d);
    /* 0085ef4d: and dword ptr [ebp - 0x314], 0 */ { u32 ad = (u32)(r_ebp+0xfffffcecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ef54: jmp 0x85ef75 */ goto L_0085ef75;
L_0085ef56:; BB(0x0085ef56);
    /* 0085ef56: mov dword ptr [ebp - 0x314], eax */ W32((u32)(r_ebp+0xfffffcecu), r_eax);
    /* 0085ef5c: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0085ef5f: mov eax, ecx */ r_eax = r_ecx;
    /* 0085ef61: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0085ef64: mov edx, dword ptr [ebp - 0x31c] */ r_edx = R32((u32)(r_ebp+0xfffffce4u));
    /* 0085ef6a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085ef6c: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0085ef6f: mov dl, 1 */ r_edx = (r_edx & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0085ef71: shl dl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0085ef73: or byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0085ef75:; BB(0x0085ef75);
    /* 0085ef75: mov ax, word ptr [edi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 0085ef78: cmp ax, 0x5d */ {  u32 a = (u16)r_eax; u32 b = 0x5du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ef7c: jne 0x85eed9 */ if (!fZ) goto L_0085eed9;
L_0085ef82:; BB(0x0085ef82);
    /* 0085ef82: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ef85: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085ef8b:; BB(0x0085ef8b);
    /* 0085ef8b: cmp dword ptr [ebp - 0x2f8], 0x7b */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ef92: jne 0x85ecc1 */ if (!fZ) goto L_0085ecc1;
L_0085ef98:; BB(0x0085ef98);
    /* 0085ef98: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 0085ef9b: jmp 0x85ecc1 */ goto L_0085ecc1;
L_0085efa0:; BB(0x0085efa0);
    /* 0085efa0: cmp bx, 0x2b */ {  u32 a = (u16)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085efa4: jne 0x85efd2 */ if (!fZ) goto L_0085efd2;
L_0085efa6:; BB(0x0085efa6);
    /* 0085efa6: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085efac: jne 0x85efbb */ if (!fZ) goto L_0085efbb;
L_0085efae:; BB(0x0085efae);
    /* 0085efae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085efb0: je 0x85efbb */ if (fZ) goto L_0085efbb;
L_0085efb2:; BB(0x0085efb2);
    /* 0085efb2: mov byte ptr [ebp - 0x2d9], 1 */ W8((u32)(r_ebp+0xfffffd27u), 0x1u);
    /* 0085efb9: jmp 0x85efd2 */ goto L_0085efd2;
L_0085efbb:; BB(0x0085efbb);
    /* 0085efbb: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085efc1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085efc4: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85efc9u); f_00864767();
    /* 0085efc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085efca: mov ebx, eax */ r_ebx = r_eax;
    /* 0085efcc: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085efd2:; BB(0x0085efd2);
    /* 0085efd2: cmp bx, 0x30 */ {  u32 a = (u16)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085efd6: jne 0x85f152 */ if (!fZ) goto L_0085f152;
L_0085efdc:; BB(0x0085efdc);
    /* 0085efdc: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085efe2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085efe5: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85efeau); f_00864767();
    /* 0085efea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085efeb: mov ebx, eax */ r_ebx = r_eax;
    /* 0085efed: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085eff3: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0085eff5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085eff6: cmp bx, di */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085eff9: je 0x85f04e */ if (fZ) goto L_0085f04e;
L_0085effb:; BB(0x0085effb);
    /* 0085effb: cmp bx, 0x58 */ {  u32 a = (u16)r_ebx; u32 b = 0x58u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085efff: je 0x85f04e */ if (fZ) goto L_0085f04e;
L_0085f001:; BB(0x0085f001);
    /* 0085f001: mov dword ptr [ebp - 0x2fc], 1 */ W32((u32)(r_ebp+0xfffffd04u), 0x1u);
    /* 0085f00b: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f00d: je 0x85f035 */ if (fZ) goto L_0085f035;
L_0085f00f:; BB(0x0085f00f);
    /* 0085f00f: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f016: je 0x85f026 */ if (fZ) goto L_0085f026;
L_0085f018:; BB(0x0085f018);
    /* 0085f018: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085f01e: jne 0x85f026 */ if (!fZ) goto L_0085f026;
L_0085f020:; BB(0x0085f020);
    /* 0085f020: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085f026:; BB(0x0085f026);
    /* 0085f026: mov dword ptr [ebp - 0x2f8], 0x6f */ W32((u32)(r_ebp+0xfffffd08u), 0x6fu);
    /* 0085f030: jmp 0x85f152 */ goto L_0085f152;
L_0085f035:; BB(0x0085f035);
    /* 0085f035: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f03b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f03e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f03f: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f044u); f_0085e6a1();
    /* 0085f044: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f045: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f046: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f048: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085f049: jmp 0x85f14c */ goto L_0085f14c;
L_0085f04e:; BB(0x0085f04e);
    /* 0085f04e: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f054: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f057: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f05cu); f_00864767();
    /* 0085f05c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f05d: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f05f: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085f065: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f06c: je 0x85f084 */ if (fZ) goto L_0085f084;
L_0085f06e:; BB(0x0085f06e);
    /* 0085f06e: sub dword ptr [ebp - 0x2e4], 2 */ { u32 ad = (u32)(r_ebp+0xfffffd1cu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f075: cmp dword ptr [ebp - 0x2e4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffd1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085f07c: jge 0x85f084 */ if ((fS==fO)) goto L_0085f084;
L_0085f07e:; BB(0x0085f07e);
    /* 0085f07e: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085f084:; BB(0x0085f084);
    /* 0085f084: mov dword ptr [ebp - 0x2f8], edi */ W32((u32)(r_ebp+0xfffffd08u), r_edi);
    /* 0085f08a: jmp 0x85f152 */ goto L_0085f152;
L_0085f08f:; BB(0x0085f08f);
    /* 0085f08f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f090: push dword ptr [ebp - 0x300] */ { u32 v = R32((u32)(r_ebp+0xfffffd00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f096: call 0x85ad71 */ r_esp -= 4; W32(r_esp, 0x85f09bu); f_0085ad71();
    /* 0085f09b: add dword ptr [ebp - 0x300], eax */ { u32 ad = (u32)(r_ebp+0xfffffd00u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f0a1: jmp 0x85ecd6 */ goto L_0085ecd6;
L_0085f0a6:; BB(0x0085f0a6);
    /* 0085f0a6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085f0a7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085f0a8: jmp 0x85ecd8 */ goto L_0085ecd8;
L_0085f0ad:; BB(0x0085f0ad);
    /* 0085f0ad: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f0b3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f0b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f0b7: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f0bcu); f_0085e6a1();
    /* 0085f0bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f0bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f0be:; BB(0x0085f0be);
    /* 0085f0be: cmp esi, dword ptr [ebp - 0x300] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffd00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f0c4: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085f0ca:; BB(0x0085f0ca);
    /* 0085f0ca: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f0d1: jne 0x85f44f */ if (!fZ) goto L_0085f44f;
L_0085f0d7:; BB(0x0085f0d7);
    /* 0085f0d7: inc dword ptr [ebp - 0x320] */ { u32 ad = (u32)(r_ebp+0xfffffce0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f0dd: cmp dword ptr [ebp - 0x2f8], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f0e4: je 0x85f44f */ if (fZ) goto L_0085f44f;
L_0085f0ea:; BB(0x0085f0ea);
    /* 0085f0ea: mov eax, dword ptr [ebp - 0x300] */ r_eax = R32((u32)(r_ebp+0xfffffd00u));
    /* 0085f0f0: cmp byte ptr [ebp - 0x2e9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd17u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f0f7: je 0x85f102 */ if (fZ) goto L_0085f102;
L_0085f0f9:; BB(0x0085f0f9);
    /* 0085f0f9: and word ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 0085f0fd: jmp 0x85f44f */ goto L_0085f44f;
L_0085f102:; BB(0x0085f102);
    /* 0085f102: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0085f105: jmp 0x85f44f */ goto L_0085f44f;
L_0085f10a:; BB(0x0085f10a);
    /* 0085f10a: mov byte ptr [ebp - 0x2e6], 1 */ W8((u32)(r_ebp+0xfffffd1au), 0x1u);
L_0085f111:; BB(0x0085f111);
    /* 0085f111: cmp bx, 0x2d */ {  u32 a = (u16)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f115: jne 0x85f120 */ if (!fZ) goto L_0085f120;
L_0085f117:; BB(0x0085f117);
    /* 0085f117: mov byte ptr [ebp - 0x2f1], 1 */ W8((u32)(r_ebp+0xfffffd0fu), 0x1u);
    /* 0085f11e: jmp 0x85f126 */ goto L_0085f126;
L_0085f120:; BB(0x0085f120);
    /* 0085f120: cmp bx, 0x2b */ {  u32 a = (u16)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f124: jne 0x85f152 */ if (!fZ) goto L_0085f152;
L_0085f126:; BB(0x0085f126);
    /* 0085f126: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085f12c: jne 0x85f13b */ if (!fZ) goto L_0085f13b;
L_0085f12e:; BB(0x0085f12e);
    /* 0085f12e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f130: je 0x85f13b */ if (fZ) goto L_0085f13b;
L_0085f132:; BB(0x0085f132);
    /* 0085f132: mov byte ptr [ebp - 0x2d9], 1 */ W8((u32)(r_ebp+0xfffffd27u), 0x1u);
    /* 0085f139: jmp 0x85f152 */ goto L_0085f152;
L_0085f13b:; BB(0x0085f13b);
    /* 0085f13b: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f141: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f144: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f149u); f_00864767();
    /* 0085f149: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f14a: mov ebx, eax */ r_ebx = r_eax;
L_0085f14c:; BB(0x0085f14c);
    /* 0085f14c: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085f152:; BB(0x0085f152);
    /* 0085f152: cmp dword ptr [ebp - 0x328], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f159: je 0x85f2de */ if (fZ) goto L_0085f2de;
L_0085f15f:; BB(0x0085f15f);
    /* 0085f15f: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f166: jne 0x85f2ad */ if (!fZ) goto L_0085f2ad;
L_0085f16c:; BB(0x0085f16c);
    /* 0085f16c: cmp dword ptr [ebp - 0x2f8], 0x78 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f173: je 0x85f1f4 */ if (fZ) goto L_0085f1f4;
L_0085f175:; BB(0x0085f175);
    /* 0085f175: cmp dword ptr [ebp - 0x2f8], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f17c: je 0x85f1f4 */ if (fZ) goto L_0085f1f4;
L_0085f17e:; BB(0x0085f17e);
    /* 0085f17e: test bh, 0xff */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xffu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085f181: jne 0x85f235 */ if (!fZ) goto L_0085f235;
L_0085f187:; BB(0x0085f187);
    /* 0085f187: mov eax, ebx */ r_eax = r_ebx;
    /* 0085f189: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085f18e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f18f: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85f194u); f_00858286();
    /* 0085f194: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f195: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f197: je 0x85f235 */ if (fZ) goto L_0085f235;
L_0085f19d:; BB(0x0085f19d);
    /* 0085f19d: cmp dword ptr [ebp - 0x2f8], 0x6f */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f1a4: jne 0x85f1d1 */ if (!fZ) goto L_0085f1d1;
L_0085f1a6:; BB(0x0085f1a6);
    /* 0085f1a6: cmp bx, 0x38 */ {  u32 a = (u16)r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085f1aa: jae 0x85f235 */ if (!fC) goto L_0085f235;
L_0085f1b0:; BB(0x0085f1b0);
    /* 0085f1b0: mov eax, dword ptr [ebp - 0x30c] */ r_eax = R32((u32)(r_ebp+0xfffffcf4u));
    /* 0085f1b6: mov ecx, dword ptr [ebp - 0x308] */ r_ecx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 0085f1bc: shld ecx, eax, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_ecx = r; } }
    /* 0085f1c0: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f1c3: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 0085f1c9: mov dword ptr [ebp - 0x308], ecx */ W32((u32)(r_ebp+0xfffffcf8u), r_ecx);
    /* 0085f1cf: jmp 0x85f23b */ goto L_0085f23b;
L_0085f1d1:; BB(0x0085f1d1);
    /* 0085f1d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f1d3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085f1d5: push dword ptr [ebp - 0x308] */ { u32 v = R32((u32)(r_ebp+0xfffffcf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f1db: push dword ptr [ebp - 0x30c] */ { u32 v = R32((u32)(r_ebp+0xfffffcf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f1e1: call 0x85ada0 */ r_esp -= 4; W32(r_esp, 0x85f1e6u); f_0085ada0();
    /* 0085f1e6: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 0085f1ec: mov dword ptr [ebp - 0x308], edx */ W32((u32)(r_ebp+0xfffffcf8u), r_edx);
    /* 0085f1f2: jmp 0x85f23b */ goto L_0085f23b;
L_0085f1f4:; BB(0x0085f1f4);
    /* 0085f1f4: test bh, 0xff */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xffu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085f1f7: jne 0x85f235 */ if (!fZ) goto L_0085f235;
L_0085f1f9:; BB(0x0085f1f9);
    /* 0085f1f9: mov eax, ebx */ r_eax = r_ebx;
    /* 0085f1fb: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085f200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f201: call 0x8582c0 */ r_esp -= 4; W32(r_esp, 0x85f206u); f_008582c0();
    /* 0085f206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f209: je 0x85f235 */ if (fZ) goto L_0085f235;
L_0085f20b:; BB(0x0085f20b);
    /* 0085f20b: mov eax, dword ptr [ebp - 0x30c] */ r_eax = R32((u32)(r_ebp+0xfffffcf4u));
    /* 0085f211: mov ecx, dword ptr [ebp - 0x308] */ r_ecx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 0085f217: shld ecx, eax, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_ecx = r; } }
    /* 0085f21b: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f21e: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 0085f224: mov dword ptr [ebp - 0x308], ecx */ W32((u32)(r_ebp+0xfffffcf8u), r_ecx);
    /* 0085f22a: mov esi, ebx */ r_esi = r_ebx;
    /* 0085f22c: call 0x85e66f */ r_esp -= 4; W32(r_esp, 0x85f231u); f_0085e66f();
    /* 0085f231: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f233: jmp 0x85f23b */ goto L_0085f23b;
L_0085f235:; BB(0x0085f235);
    /* 0085f235: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085f23b:; BB(0x0085f23b);
    /* 0085f23b: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f242: jne 0x85f289 */ if (!fZ) goto L_0085f289;
L_0085f244:; BB(0x0085f244);
    /* 0085f244: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f24a: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085f24d: sub eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085f250: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085f251: add dword ptr [ebp - 0x30c], eax */ { u32 ad = (u32)(r_ebp+0xfffffcf4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 0085f257: adc dword ptr [ebp - 0x308], edx */ { u32 ad = (u32)(r_ebp+0xfffffcf8u); u32 c = fC; u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; W32(ad, r);  }
    /* 0085f25d: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f264: je 0x85f277 */ if (fZ) goto L_0085f277;
L_0085f266:; BB(0x0085f266);
    /* 0085f266: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085f26c: jne 0x85f277 */ if (!fZ) goto L_0085f277;
L_0085f26e:; BB(0x0085f26e);
    /* 0085f26e: mov byte ptr [ebp - 0x2d9], 1 */ W8((u32)(r_ebp+0xfffffd27u), 0x1u);
    /* 0085f275: jmp 0x85f29a */ goto L_0085f29a;
L_0085f277:; BB(0x0085f277);
    /* 0085f277: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f27d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f280: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f285u); f_00864767();
    /* 0085f285: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f287: jmp 0x85f299 */ goto L_0085f299;
L_0085f289:; BB(0x0085f289);
    /* 0085f289: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f28f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f292: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f293: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f298u); f_0085e6a1();
    /* 0085f298: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f299:; BB(0x0085f299);
    /* 0085f299: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f29a:; BB(0x0085f29a);
    /* 0085f29a: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f2a1: je 0x85f16c */ if (fZ) goto L_0085f16c;
L_0085f2a7:; BB(0x0085f2a7);
    /* 0085f2a7: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085f2ad:; BB(0x0085f2ad);
    /* 0085f2ad: cmp byte ptr [ebp - 0x2f1], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd0fu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f2b4: je 0x85f3ef */ if (fZ) goto L_0085f3ef;
L_0085f2ba:; BB(0x0085f2ba);
    /* 0085f2ba: mov eax, dword ptr [ebp - 0x30c] */ r_eax = R32((u32)(r_ebp+0xfffffcf4u));
    /* 0085f2c0: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0085f2c2: mov ecx, dword ptr [ebp - 0x308] */ r_ecx = R32((u32)(r_ebp+0xfffffcf8u));
    /* 0085f2c8: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0085f2cb: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085f2cd: mov dword ptr [ebp - 0x30c], eax */ W32((u32)(r_ebp+0xfffffcf4u), r_eax);
    /* 0085f2d3: mov dword ptr [ebp - 0x308], ecx */ W32((u32)(r_ebp+0xfffffcf8u), r_ecx);
    /* 0085f2d9: jmp 0x85f3ef */ goto L_0085f3ef;
L_0085f2de:; BB(0x0085f2de);
    /* 0085f2de: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f2e5: jne 0x85f3e0 */ if (!fZ) goto L_0085f3e0;
L_0085f2eb:; BB(0x0085f2eb);
    /* 0085f2eb: cmp dword ptr [ebp - 0x2f8], 0x78 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f2f2: je 0x85f33f */ if (fZ) goto L_0085f33f;
L_0085f2f4:; BB(0x0085f2f4);
    /* 0085f2f4: cmp dword ptr [ebp - 0x2f8], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f2fb: je 0x85f33f */ if (fZ) goto L_0085f33f;
L_0085f2fd:; BB(0x0085f2fd);
    /* 0085f2fd: test bh, 0xff */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xffu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085f300: jne 0x85f368 */ if (!fZ) goto L_0085f368;
L_0085f302:; BB(0x0085f302);
    /* 0085f302: mov eax, ebx */ r_eax = r_ebx;
    /* 0085f304: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085f309: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f30a: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85f30fu); f_00858286();
    /* 0085f30f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f310: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f312: je 0x85f368 */ if (fZ) goto L_0085f368;
L_0085f314:; BB(0x0085f314);
    /* 0085f314: cmp dword ptr [ebp - 0x2f8], 0x6f */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f31b: jne 0x85f32c */ if (!fZ) goto L_0085f32c;
L_0085f31d:; BB(0x0085f31d);
    /* 0085f31d: cmp bx, 0x38 */ {  u32 a = (u16)r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085f321: jae 0x85f368 */ if (!fC) goto L_0085f368;
L_0085f323:; BB(0x0085f323);
    /* 0085f323: shl dword ptr [ebp - 0x304], 3 */ { u32 ad = (u32)(r_ebp+0xfffffcfcu); u32 c = (3u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 0085f32a: jmp 0x85f36e */ goto L_0085f36e;
L_0085f32c:; BB(0x0085f32c);
    /* 0085f32c: mov eax, dword ptr [ebp - 0x304] */ r_eax = R32((u32)(r_ebp+0xfffffcfcu));
    /* 0085f332: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085f335: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085f337: mov dword ptr [ebp - 0x304], eax */ W32((u32)(r_ebp+0xfffffcfcu), r_eax);
    /* 0085f33d: jmp 0x85f36e */ goto L_0085f36e;
L_0085f33f:; BB(0x0085f33f);
    /* 0085f33f: test bh, 0xff */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0xffu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085f342: jne 0x85f368 */ if (!fZ) goto L_0085f368;
L_0085f344:; BB(0x0085f344);
    /* 0085f344: mov eax, ebx */ r_eax = r_ebx;
    /* 0085f346: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085f34b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f34c: call 0x8582c0 */ r_esp -= 4; W32(r_esp, 0x85f351u); f_008582c0();
    /* 0085f351: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f354: je 0x85f368 */ if (fZ) goto L_0085f368;
L_0085f356:; BB(0x0085f356);
    /* 0085f356: shl dword ptr [ebp - 0x304], 4 */ { u32 ad = (u32)(r_ebp+0xfffffcfcu); u32 c = (4u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 0085f35d: mov esi, ebx */ r_esi = r_ebx;
    /* 0085f35f: call 0x85e66f */ r_esp -= 4; W32(r_esp, 0x85f364u); f_0085e66f();
    /* 0085f364: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f366: jmp 0x85f36e */ goto L_0085f36e;
L_0085f368:; BB(0x0085f368);
    /* 0085f368: inc byte ptr [ebp - 0x2d9] */ { u32 ad = (u32)(r_ebp+0xfffffd27u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0085f36e:; BB(0x0085f36e);
    /* 0085f36e: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f375: jne 0x85f3bc */ if (!fZ) goto L_0085f3bc;
L_0085f377:; BB(0x0085f377);
    /* 0085f377: inc dword ptr [ebp - 0x2fc] */ { u32 ad = (u32)(r_ebp+0xfffffd04u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f37d: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085f380: mov ecx, dword ptr [ebp - 0x304] */ r_ecx = R32((u32)(r_ebp+0xfffffcfcu));
    /* 0085f386: lea eax, [ecx + eax - 0x30] */ r_eax = (u32)(r_ecx+r_eax+0xffffffd0u);
    /* 0085f38a: mov dword ptr [ebp - 0x304], eax */ W32((u32)(r_ebp+0xfffffcfcu), r_eax);
    /* 0085f390: cmp dword ptr [ebp - 0x318], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffce8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f397: je 0x85f3aa */ if (fZ) goto L_0085f3aa;
L_0085f399:; BB(0x0085f399);
    /* 0085f399: dec dword ptr [ebp - 0x2e4] */ { u32 ad = (u32)(r_ebp+0xfffffd1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085f39f: jne 0x85f3aa */ if (!fZ) goto L_0085f3aa;
L_0085f3a1:; BB(0x0085f3a1);
    /* 0085f3a1: mov byte ptr [ebp - 0x2d9], 1 */ W8((u32)(r_ebp+0xfffffd27u), 0x1u);
    /* 0085f3a8: jmp 0x85f3cd */ goto L_0085f3cd;
L_0085f3aa:; BB(0x0085f3aa);
    /* 0085f3aa: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f3b0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f3b3: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f3b8u); f_00864767();
    /* 0085f3b8: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f3ba: jmp 0x85f3cc */ goto L_0085f3cc;
L_0085f3bc:; BB(0x0085f3bc);
    /* 0085f3bc: dec dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f3c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f3c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f3c6: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f3cbu); f_0085e6a1();
    /* 0085f3cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f3cc:; BB(0x0085f3cc);
    /* 0085f3cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f3cd:; BB(0x0085f3cd);
    /* 0085f3cd: cmp byte ptr [ebp - 0x2d9], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd27u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f3d4: je 0x85f2eb */ if (fZ) goto L_0085f2eb;
L_0085f3da:; BB(0x0085f3da);
    /* 0085f3da: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
L_0085f3e0:; BB(0x0085f3e0);
    /* 0085f3e0: cmp byte ptr [ebp - 0x2f1], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd0fu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f3e7: je 0x85f3ef */ if (fZ) goto L_0085f3ef;
L_0085f3e9:; BB(0x0085f3e9);
    /* 0085f3e9: neg dword ptr [ebp - 0x304] */ { u32 ad = (u32)(r_ebp+0xfffffcfcu); u32 x = R32(ad); u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085f3ef:; BB(0x0085f3ef);
    /* 0085f3ef: cmp dword ptr [ebp - 0x2f8], 0x46 */ {  u32 a = R32((u32)(r_ebp+0xfffffd08u)); u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f3f6: jne 0x85f3ff */ if (!fZ) goto L_0085f3ff;
L_0085f3f8:; BB(0x0085f3f8);
    /* 0085f3f8: and dword ptr [ebp - 0x2fc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffd04u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085f3ff:; BB(0x0085f3ff);
    /* 0085f3ff: cmp dword ptr [ebp - 0x2fc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd04u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f406: je 0x85f479 */ if (fZ) goto L_0085f479;
L_0085f408:; BB(0x0085f408);
    /* 0085f408: cmp byte ptr [ebp - 0x2e7], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd19u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f40f: jne 0x85f44f */ if (!fZ) goto L_0085f44f;
L_0085f411:; BB(0x0085f411);
    /* 0085f411: inc dword ptr [ebp - 0x320] */ { u32 ad = (u32)(r_ebp+0xfffffce0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f417: mov edi, dword ptr [ebp - 0x300] */ r_edi = R32((u32)(r_ebp+0xfffffd00u));
    /* 0085f41d: mov eax, dword ptr [ebp - 0x304] */ r_eax = R32((u32)(r_ebp+0xfffffcfcu));
L_0085f423:; BB(0x0085f423);
    /* 0085f423: cmp dword ptr [ebp - 0x328], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffcd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f42a: je 0x85f43f */ if (fZ) goto L_0085f43f;
L_0085f42c:; BB(0x0085f42c);
    /* 0085f42c: mov eax, dword ptr [ebp - 0x30c] */ r_eax = R32((u32)(r_ebp+0xfffffcf4u));
    /* 0085f432: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0085f434: mov eax, dword ptr [ebp - 0x308] */ r_eax = R32((u32)(r_ebp+0xfffffcf8u));
    /* 0085f43a: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0085f43d: jmp 0x85f44f */ goto L_0085f44f;
L_0085f43f:; BB(0x0085f43f);
    /* 0085f43f: cmp byte ptr [ebp - 0x2e6], 0 */ {  u32 a = R8((u32)(r_ebp+0xfffffd1au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f446: je 0x85f44c */ if (fZ) goto L_0085f44c;
L_0085f448:; BB(0x0085f448);
    /* 0085f448: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0085f44a: jmp 0x85f44f */ goto L_0085f44f;
L_0085f44c:; BB(0x0085f44c);
    /* 0085f44c: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
L_0085f44f:; BB(0x0085f44f);
    /* 0085f44f: inc byte ptr [ebp - 0x2e8] */ { u32 ad = (u32)(r_ebp+0xfffffd18u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085f455: add dword ptr [ebp + 0xc], 2 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0085f459:; BB(0x0085f459);
    /* 0085f459: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085f45c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f45f: jne 0x85e712 */ if (!fZ) goto L_0085e712;
L_0085f465:; BB(0x0085f465);
    /* 0085f465: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085f468: cmp word ptr [eax], 0x25 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x25u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f46c: jne 0x85f479 */ if (!fZ) goto L_0085f479;
L_0085f46e:; BB(0x0085f46e);
    /* 0085f46e: cmp word ptr [eax + 2], 0x6e */ {  u32 a = R16((u32)(r_eax+0x2u)); u32 b = 0x6eu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f473: je 0x85e712 */ if (fZ) goto L_0085e712;
L_0085f479:; BB(0x0085f479);
    /* 0085f479: cmp dword ptr [ebp - 0x32c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffcd4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f480: jne 0x85f48e */ if (!fZ) goto L_0085f48e;
L_0085f482:; BB(0x0085f482);
    /* 0085f482: push dword ptr [ebp - 0x31c] */ { u32 v = R32((u32)(r_ebp+0xfffffce4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f488: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85f48du); f_00858882();
    /* 0085f48d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085f48e:; BB(0x0085f48e);
    /* 0085f48e: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085f491: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f494: mov eax, dword ptr [ebp - 0x320] */ r_eax = R32((u32)(r_ebp+0xfffffce0u));
    /* 0085f49a: jne 0x85f4ab */ if (!fZ) goto L_0085f4ab;
L_0085f49c:; BB(0x0085f49c);
    /* 0085f49c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f49e: jne 0x85f4ab */ if (!fZ) goto L_0085f4ab;
L_0085f4a0:; BB(0x0085f4a0);
    /* 0085f4a0: cmp byte ptr [ebp - 0x2e8], al */ {  u32 a = R8((u32)(r_ebp+0xfffffd18u)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085f4a6: jne 0x85f4ab */ if (!fZ) goto L_0085f4ab;
L_0085f4a8:; BB(0x0085f4a8);
    /* 0085f4a8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0085f4ab:; BB(0x0085f4ab);
    /* 0085f4ab: lea esp, [ebp - 0x340] */ r_esp = (u32)(r_ebp+0xfffffcc0u);
    /* 0085f4b1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085f4b4: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85f4b9u); f_0085e419();
    /* 0085f4b9: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85f4beu); f_0085e5e7();
    /* 0085f4be: ret  */ FN_RET(0x0085ee59); r_esp += 4; return;
L_0085f4bf:; BB(0x0085f4bf);
    /* 0085f4bf: inc dword ptr [ebp - 0x2e0] */ { u32 ad = (u32)(r_ebp+0xfffffd20u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085f4c5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f4c8: call 0x864767 */ r_esp -= 4; W32(r_esp, 0x85f4cdu); f_00864767();
    /* 0085f4cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f4ce: mov ebx, eax */ r_ebx = r_eax;
    /* 0085f4d0: mov dword ptr [ebp - 0x2f0], ebx */ W32((u32)(r_ebp+0xfffffd10u), r_ebx);
    /* 0085f4d6: mov ax, word ptr [edi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 0085f4d9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085f4da: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085f4db: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 0085f4de: cmp ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085f4e1: je 0x85f459 */ if (fZ) goto L_0085f459;
L_0085f4e7:; BB(0x0085f4e7);
    /* 0085f4e7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f4ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085f4eb: call 0x85e6a1 */ r_esp -= 4; W32(r_esp, 0x85f4f0u); f_0085e6a1();
    /* 0085f4f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f4f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f4f2: jmp 0x85f479 */ goto L_0085f479;
}

