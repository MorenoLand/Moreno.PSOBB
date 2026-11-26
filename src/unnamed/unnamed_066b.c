#include "protos.h"

void f_0066b1c4(void) /* sub_66B1C4 */
{
    FN_ENTER(0x0066b1c4);
    /* 0066b1c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b1c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066b1c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b1c9: call 0x66b21c */ r_esp -= 4; W32(r_esp, 0x66b1ceu); f_0066b21c();
    /* 0066b1ce: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0066b1d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b1d7: je 0x66b211 */ if (fZ) goto L_0066b211;
L_0066b1d9:; BB(0x0066b1d9);
    /* 0066b1d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b1dc: je 0x66b208 */ if (fZ) goto L_0066b208;
L_0066b1de:; BB(0x0066b1de);
    /* 0066b1de: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b1e1: je 0x66b1ff */ if (fZ) goto L_0066b1ff;
L_0066b1e3:; BB(0x0066b1e3);
    /* 0066b1e3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b1e6: jne 0x66b1f1 */ if (!fZ) goto L_0066b1f1;
L_0066b1e8:; BB(0x0066b1e8);
    /* 0066b1e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b1ea: call 0x66b370 */ r_esp -= 4; W32(r_esp, 0x66b1efu); f_0066b370();
    /* 0066b1ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b1f0: ret  */ FN_RET(0x0066b1c4); r_esp += 4; return;
L_0066b1f1:; BB(0x0066b1f1);
    /* 0066b1f1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066b1f4: jne 0x66b206 */ if (!fZ) goto L_0066b206;
L_0066b1f6:; BB(0x0066b1f6);
    /* 0066b1f6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b1f8: call 0x64bc3c */ r_esp -= 4; W32(r_esp, 0x66b1fdu); f_0064bc3c();
    /* 0066b1fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b1fe: ret  */ FN_RET(0x0066b1c4); r_esp += 4; return;
L_0066b1ff:; BB(0x0066b1ff);
    /* 0066b1ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b201: call 0x66b4fc */ r_esp -= 4; W32(r_esp, 0x66b206u); f_0066b4fc();
L_0066b206:; BB(0x0066b206);
    /* 0066b206: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b207: ret  */ FN_RET(0x0066b1c4); r_esp += 4; return;
L_0066b208:; BB(0x0066b208);
    /* 0066b208: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b20a: call 0x66b5f8 */ r_esp -= 4; W32(r_esp, 0x66b20fu); f_0066b5f8();
    /* 0066b20f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b210: ret  */ FN_RET(0x0066b1c4); r_esp += 4; return;
L_0066b211:; BB(0x0066b211);
    /* 0066b211: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b213: call 0x66b9e0 */ r_esp -= 4; W32(r_esp, 0x66b218u); f_0066b9e0();
    /* 0066b218: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b219: ret  */ FN_RET(0x0066b1c4); r_esp += 4; return;
}

void f_0066b1da(void)
{
    FN_ENTER(0x0066b1da);
    /* 0066b1da: clc  */ fC = 0;
    /* 0066b1db: add dword ptr [edx + ebp - 0x7d], esi */ { u32 ad = (u32)(r_edx+r_ebp+0xffffff83u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0066b1df: clc  */ fC = 0;
    /* 0066b1e0: add dh, byte ptr [esp + ebx - 0x7d] */ {  u32 a = (u8)(r_edx>>8); u32 b = R8((u32)(r_esp+r_ebx+0xffffff83u)); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0066b1e4: clc  */ fC = 0;
    /* 0066b1e5: add esi, dword ptr [ebp + 9] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x9u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066b1e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b1ea: call 0x66b370 */ r_esp -= 4; W32(r_esp, 0x66b1efu); f_0066b370();
    /* 0066b1ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b1f0: ret  */ FN_RET(0x0066b1da); r_esp += 4; return;
}

void f_0066b21c(void) /* sub_66B21C */
{
    FN_ENTER(0x0066b21c);
    /* 0066b21c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b21d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b21e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b21f: mov edi, ecx */ r_edi = r_ecx;
    /* 0066b221: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b227: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66b22cu); f_0068d5a8();
    /* 0066b22c: mov ebx, eax */ r_ebx = r_eax;
    /* 0066b22e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b231: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0066b236: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b238: je 0x66b2ea */ if (fZ) goto L_0066b2ea;
L_0066b23e:; BB(0x0066b23e);
    /* 0066b23e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0066b240: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b242: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x66b248u); call_ind(t); }
    /* 0066b248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b24a: je 0x66b24e */ if (fZ) goto L_0066b24e;
L_0066b24c:; BB(0x0066b24c);
    /* 0066b24c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0066b24e:; BB(0x0066b24e);
    /* 0066b24e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b250: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x66b255u); f_00689410();
    /* 0066b255: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b257: jne 0x66b261 */ if (!fZ) goto L_0066b261;
L_0066b259:; BB(0x0066b259);
    /* 0066b259: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b25b: jne 0x66b2ea */ if (!fZ) goto L_0066b2ea;
L_0066b261:; BB(0x0066b261);
    /* 0066b261: mov edx, dword ptr [edi + 0x1cc] */ r_edx = R32((u32)(r_edi+0x1ccu));
    /* 0066b267: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b269: je 0x66b28c */ if (fZ) goto L_0066b28c;
L_0066b26b:; BB(0x0066b26b);
    /* 0066b26b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066b26f: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066b274: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066b278: mov ebx, dword ptr [edi + 0x1cc] */ r_ebx = R32((u32)(r_edi+0x1ccu));
    /* 0066b27e: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0066b282: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066b288: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
L_0066b28c:; BB(0x0066b28c);
    /* 0066b28c: mov edx, dword ptr [edi + 0xb0] */ r_edx = R32((u32)(r_edi+0xb0u));
    /* 0066b292: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b294: je 0x66b2b7 */ if (fZ) goto L_0066b2b7;
L_0066b296:; BB(0x0066b296);
    /* 0066b296: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066b29a: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066b29f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066b2a3: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 0066b2a9: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0066b2ad: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066b2b3: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
L_0066b2b7:; BB(0x0066b2b7);
    /* 0066b2b7: mov edx, dword ptr [edi + 0x1c8] */ r_edx = R32((u32)(r_edi+0x1c8u));
    /* 0066b2bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b2bf: je 0x66b36b */ if (fZ) goto L_0066b36b;
L_0066b2c5:; BB(0x0066b2c5);
    /* 0066b2c5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066b2c9: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066b2ce: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066b2d2: mov ecx, dword ptr [edi + 0x1c8] */ r_ecx = R32((u32)(r_edi+0x1c8u));
    /* 0066b2d8: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0066b2dc: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b2e2: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0066b2e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b2e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b2e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066b2e9: ret  */ FN_RET(0x0066b21c); r_esp += 4; return;
L_0066b2ea:; BB(0x0066b2ea);
    /* 0066b2ea: mov edx, dword ptr [edi + 0x1cc] */ r_edx = R32((u32)(r_edi+0x1ccu));
    /* 0066b2f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b2f2: je 0x66b315 */ if (fZ) goto L_0066b315;
L_0066b2f4:; BB(0x0066b2f4);
    /* 0066b2f4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066b2f8: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066b2fd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066b301: mov ebx, dword ptr [edi + 0x1cc] */ r_ebx = R32((u32)(r_edi+0x1ccu));
    /* 0066b307: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0066b30b: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0066b311: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
L_0066b315:; BB(0x0066b315);
    /* 0066b315: mov edx, dword ptr [edi + 0xb0] */ r_edx = R32((u32)(r_edi+0xb0u));
    /* 0066b31b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b31d: je 0x66b340 */ if (fZ) goto L_0066b340;
L_0066b31f:; BB(0x0066b31f);
    /* 0066b31f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066b323: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066b328: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066b32c: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 0066b332: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0066b336: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0066b33c: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
L_0066b340:; BB(0x0066b340);
    /* 0066b340: mov edx, dword ptr [edi + 0x1c8] */ r_edx = R32((u32)(r_edi+0x1c8u));
    /* 0066b346: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b348: je 0x66b36b */ if (fZ) goto L_0066b36b;
L_0066b34a:; BB(0x0066b34a);
    /* 0066b34a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066b34e: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066b353: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066b357: mov ecx, dword ptr [edi + 0x1c8] */ r_ecx = R32((u32)(r_edi+0x1c8u));
    /* 0066b35d: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0066b361: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b367: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_0066b36b:; BB(0x0066b36b);
    /* 0066b36b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b36c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b36d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066b36e: ret  */ FN_RET(0x0066b21c); r_esp += 4; return;
}

void f_0066b370(void) /* sub_66B370 */
{
    FN_ENTER(0x0066b370);
    /* 0066b370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b371: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066b373: movsx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xe4u));
    /* 0066b37a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b37c: je 0x66b3f7 */ if (fZ) goto L_0066b3f7;
L_0066b37e:; BB(0x0066b37e);
    /* 0066b37e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b381: jne 0x66b3b7 */ if (!fZ) goto L_0066b3b7;
L_0066b383:; BB(0x0066b383);
    /* 0066b383: push dword ptr [ebp + 0xac] */ { u32 v = R32((u32)(r_ebp+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b389: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066b38b: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x66b390u); f_0064cbb4();
    /* 0066b390: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b392: je 0x66b499 */ if (fZ) goto L_0066b499;
L_0066b398:; BB(0x0066b398);
    /* 0066b398: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0066b39e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b3a0: je 0x66b40f */ if (fZ) goto L_0066b40f;
L_0066b3a2:; BB(0x0066b3a2);
    /* 0066b3a2: mov eax, dword ptr [ebp + 0x1c0] */ r_eax = R32((u32)(r_ebp+0x1c0u));
    /* 0066b3a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b3aa: jne 0x66b40d */ if (!fZ) goto L_0066b40d;
L_0066b3ac:; BB(0x0066b3ac);
    /* 0066b3ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b3ae: mov word ptr [ebp + 0xe0], ax */ W16((u32)(r_ebp+0xe0u), (u16)r_eax);
    /* 0066b3b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b3b6: ret  */ FN_RET(0x0066b370); r_esp += 4; return;
L_0066b3b7:; BB(0x0066b3b7);
    /* 0066b3b7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066b3ba: jne 0x66b40d */ if (!fZ) goto L_0066b40d;
L_0066b3bc:; BB(0x0066b3bc);
    /* 0066b3bc: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066b3c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b3c4: je 0x66b3d5 */ if (fZ) goto L_0066b3d5;
L_0066b3c6:; BB(0x0066b3c6);
    /* 0066b3c6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66b3cbu); f_007127b0();
    /* 0066b3cb: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
L_0066b3d5:; BB(0x0066b3d5);
    /* 0066b3d5: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0066b3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b3dd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066b3df: call 0x66b4d8 */ r_esp -= 4; W32(r_esp, 0x66b3e4u); f_0066b4d8();
    /* 0066b3e4: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x66b3e9u); f_00717d48();
    /* 0066b3e9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b3ef: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x66b3f4u); f_00717ed8();
    /* 0066b3f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b3f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b3f6: ret  */ FN_RET(0x0066b370); r_esp += 4; return;
L_0066b3f7:; BB(0x0066b3f7);
    /* 0066b3f7: mov dword ptr [ebp + 0xd4], 0 */ W32((u32)(r_ebp+0xd4u), 0x0u);
    /* 0066b401: mov eax, 1 */ r_eax = 0x1u;
    /* 0066b406: mov word ptr [ebp + 0xe4], ax */ W16((u32)(r_ebp+0xe4u), (u16)r_eax);
L_0066b40d:; BB(0x0066b40d);
    /* 0066b40d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b40e: ret  */ FN_RET(0x0066b370); r_esp += 4; return;
L_0066b40f:; BB(0x0066b40f);
    /* 0066b40f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b411: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66b416u); f_0073ec50();
    /* 0066b416: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b419: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x66b41eu); f_00735708();
    /* 0066b41e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b421: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0066b427: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b429: je 0x66b474 */ if (fZ) goto L_0066b474;
L_0066b42b:; BB(0x0066b42b);
    /* 0066b42b: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b42d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x66b432u); f_0079317c();
    /* 0066b432: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b435: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066b43b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0066b43d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b43e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b43f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b440: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x66b445u); f_00735db8();
    /* 0066b445: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0066b44b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0066b452: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066b457: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0066b45e: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066b464: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x66b469u); f_0073608c();
    /* 0066b469: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066b46f: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x66b474u); f_00736458();
L_0066b474:; BB(0x0066b474);
    /* 0066b474: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0066b47b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b47c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066b47e: call 0x66c268 */ r_esp -= 4; W32(r_esp, 0x66b483u); f_0066c268();
    /* 0066b483: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66b488u); f_00717d68();
    /* 0066b488: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b48e: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x66b493u); f_00717f08();
    /* 0066b493: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b494: jmp 0x66b3a2 */ goto L_0066b3a2;
L_0066b499:; BB(0x0066b499);
    /* 0066b499: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066b49f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b4a1: je 0x66b4b2 */ if (fZ) goto L_0066b4b2;
L_0066b4a3:; BB(0x0066b4a3);
    /* 0066b4a3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66b4a8u); f_007127b0();
    /* 0066b4a8: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
L_0066b4b2:; BB(0x0066b4b2);
    /* 0066b4b2: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0066b4b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b4ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066b4bc: call 0x66b4d8 */ r_esp -= 4; W32(r_esp, 0x66b4c1u); f_0066b4d8();
    /* 0066b4c1: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x66b4c6u); f_00717d48();
    /* 0066b4c6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b4cc: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x66b4d1u); f_00717ed8();
    /* 0066b4d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b4d2: jmp 0x66b3a2 */ goto L_0066b3a2;
}

void f_0066b4d8(void) /* sub_66B4D8 */
{
    FN_ENTER(0x0066b4d8);
    /* 0066b4d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b4d9: movzx edi, word ptr [esp + 8] */ r_edi = (u32)R16((u32)(r_esp+0x8u));
    /* 0066b4de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b4df: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x66b4e4u); f_00718048();
    /* 0066b4e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b4e5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66b4eau); f_0068d5a8();
    /* 0066b4ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b4ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b4ef: je 0x66b4f8 */ if (fZ) goto L_0066b4f8;
L_0066b4f1:; BB(0x0066b4f1);
    /* 0066b4f1: mov ecx, eax */ r_ecx = r_eax;
    /* 0066b4f3: call 0x688d54 */ r_esp -= 4; W32(r_esp, 0x66b4f8u); f_00688d54();
L_0066b4f8:; BB(0x0066b4f8);
    /* 0066b4f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066b4f9: ret 4 */ FN_RET(0x0066b4d8); r_esp += 8; return;
}

void f_0066b4fc(void) /* sub_66B4FC */
{
    FN_ENTER(0x0066b4fc);
    /* 0066b4fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b4fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b4fe: mov edi, ecx */ r_edi = r_ecx;
    /* 0066b500: movsx eax, word ptr [edi + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xe4u));
    /* 0066b507: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b509: je 0x66b5a0 */ if (fZ) goto L_0066b5a0;
L_0066b50f:; BB(0x0066b50f);
    /* 0066b50f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b512: je 0x66b53f */ if (fZ) goto L_0066b53f;
L_0066b514:; BB(0x0066b514);
    /* 0066b514: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066b517: jne 0x66b59d */ if (!fZ) goto L_0066b59d;
L_0066b51d:; BB(0x0066b51d);
    /* 0066b51d: movzx eax, word ptr [edi + 0xe6] */ r_eax = (u32)R16((u32)(r_edi+0xe6u));
    /* 0066b524: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b529: mov word ptr [edi + 0xe6], ax */ W16((u32)(r_edi+0xe6u), (u16)r_eax);
    /* 0066b530: mov edx, 3 */ r_edx = 0x3u;
    /* 0066b535: mov word ptr [edi + 0xe0], dx */ W16((u32)(r_edi+0xe0u), (u16)r_edx);
    /* 0066b53c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b53d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066b53e: ret  */ FN_RET(0x0066b4fc); r_esp += 4; return;
L_0066b53f:; BB(0x0066b53f);
    /* 0066b53f: mov ecx, edi */ r_ecx = r_edi;
    /* 0066b541: call 0x66b5e4 */ r_esp -= 4; W32(r_esp, 0x66b546u); f_0066b5e4();
    /* 0066b546: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b548: jne 0x66b57e */ if (!fZ) goto L_0066b57e;
L_0066b54a:; BB(0x0066b54a);
    /* 0066b54a: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b550: mov ecx, edi */ r_ecx = r_edi;
    /* 0066b552: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x66b557u); f_0064cbb4();
    /* 0066b557: mov ebp, eax */ r_ebp = r_eax;
    /* 0066b559: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b55b: je 0x66b57e */ if (fZ) goto L_0066b57e;
L_0066b55d:; BB(0x0066b55d);
    /* 0066b55d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b563: mov ecx, edi */ r_ecx = r_edi;
    /* 0066b565: call 0x64bef4 */ r_esp -= 4; W32(r_esp, 0x66b56au); f_0064bef4();
    /* 0066b56a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b56b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0066b56d: mov ecx, edi */ r_ecx = r_edi;
    /* 0066b56f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x66b572u); call_ind(t); }
    /* 0066b572: mov eax, 2 */ r_eax = 0x2u;
    /* 0066b577: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
L_0066b57e:; BB(0x0066b57e);
    /* 0066b57e: mov eax, dword ptr [edi + 0x1e0] */ r_eax = R32((u32)(r_edi+0x1e0u));
    /* 0066b584: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066b587: mov dword ptr [edi + 0x1e0], eax */ W32((u32)(r_edi+0x1e0u), r_eax);
    /* 0066b58d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b58f: jg 0x66b59d */ if ((!fZ&&fS==fO)) goto L_0066b59d;
L_0066b591:; BB(0x0066b591);
    /* 0066b591: mov eax, 2 */ r_eax = 0x2u;
    /* 0066b596: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
L_0066b59d:; BB(0x0066b59d);
    /* 0066b59d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b59e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066b59f: ret  */ FN_RET(0x0066b4fc); r_esp += 4; return;
L_0066b5a0:; BB(0x0066b5a0);
    /* 0066b5a0: mov ebp, dword ptr [0xa8fd08] */ r_ebp = R32((u32)(0xa8fd08u));
    /* 0066b5a6: movzx edx, word ptr [edi + 0xe6] */ r_edx = (u32)R16((u32)(r_edi+0xe6u));
    /* 0066b5ad: mov dword ptr [edi + 0x1e0], 0x96 */ W32((u32)(r_edi+0x1e0u), 0x96u);
    /* 0066b5b7: mov eax, 1 */ r_eax = 0x1u;
    /* 0066b5bc: mov word ptr [edi + 0xe4], ax */ W16((u32)(r_edi+0xe4u), (u16)r_eax);
    /* 0066b5c3: mov eax, dword ptr [0xa8fd00] */ r_eax = R32((u32)(0xa8fd00u));
    /* 0066b5c8: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b5ce: mov word ptr [edi + 0xe6], dx */ W16((u32)(r_edi+0xe6u), (u16)r_edx);
    /* 0066b5d5: mov dword ptr [edi + 0xd4], ebp */ W32((u32)(r_edi+0xd4u), r_ebp);
    /* 0066b5db: mov dword ptr [edi + 0xd8], eax */ W32((u32)(r_edi+0xd8u), r_eax);
    /* 0066b5e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b5e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066b5e3: ret  */ FN_RET(0x0066b4fc); r_esp += 4; return;
}

void f_0066b5e4(void) /* sub_66B5E4 */
{
    FN_ENTER(0x0066b5e4);
    /* 0066b5e4: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x66b5e9u); f_007a61a4();
    /* 0066b5e9: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066b5ec: je 0x66b5f1 */ if (fZ) goto L_0066b5f1;
L_0066b5ee:; BB(0x0066b5ee);
    /* 0066b5ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066b5f0: ret  */ FN_RET(0x0066b5e4); r_esp += 4; return;
L_0066b5f1:; BB(0x0066b5f1);
    /* 0066b5f1: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 0066b5f6: ret  */ FN_RET(0x0066b5e4); r_esp += 4; return;
}

void f_0066b5f8(void) /* sub_66B5F8 */
{
    FN_ENTER(0x0066b5f8);
    /* 0066b5f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b5f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b5fa: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066b5fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066b5ff: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0066b606: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b608: je 0x66b999 */ if (fZ) goto L_0066b999;
L_0066b60e:; BB(0x0066b60e);
    /* 0066b60e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b611: je 0x66b631 */ if (fZ) goto L_0066b631;
L_0066b613:; BB(0x0066b613);
    /* 0066b613: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b616: je 0x66b7b3 */ if (fZ) goto L_0066b7b3;
L_0066b61c:; BB(0x0066b61c);
    /* 0066b61c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b61f: jne 0x66b7b3 */ if (!fZ) goto L_0066b7b3;
L_0066b625:; BB(0x0066b625);
    /* 0066b625: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b627: call 0x66c2ac */ r_esp -= 4; W32(r_esp, 0x66b62cu); f_0066c2ac();
    /* 0066b62c: jmp 0x66b7b3 */ goto L_0066b7b3;
L_0066b631:; BB(0x0066b631);
    /* 0066b631: push dword ptr [ebx + 0xac] */ { u32 v = R32((u32)(r_ebx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b637: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b639: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x66b63eu); f_0064cbb4();
    /* 0066b63e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b640: je 0x66b6fa */ if (fZ) goto L_0066b6fa;
L_0066b646:; BB(0x0066b646);
    /* 0066b646: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0066b64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b64f: jne 0x66b66c */ if (!fZ) goto L_0066b66c;
L_0066b651:; BB(0x0066b651);
    /* 0066b651: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b653: call 0x66c254 */ r_esp -= 4; W32(r_esp, 0x66b658u); f_0066c254();
    /* 0066b658: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b65a: jne 0x66b67f */ if (!fZ) goto L_0066b67f;
L_0066b65c:; BB(0x0066b65c);
    /* 0066b65c: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0066b662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b664: je 0x66b7b9 */ if (fZ) goto L_0066b7b9;
L_0066b66a:; BB(0x0066b66a);
    /* 0066b66a: jmp 0x66b67f */ goto L_0066b67f;
L_0066b66c:; BB(0x0066b66c);
    /* 0066b66c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b66f: jne 0x66b67f */ if (!fZ) goto L_0066b67f;
L_0066b671:; BB(0x0066b671);
    /* 0066b671: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0066b677: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b679: je 0x66b838 */ if (fZ) goto L_0066b838;
L_0066b67f:; BB(0x0066b67f);
    /* 0066b67f: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066b685: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b687: je 0x66b8e8 */ if (fZ) goto L_0066b8e8;
L_0066b68d:; BB(0x0066b68d);
    /* 0066b68d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b68f: je 0x66b882 */ if (fZ) goto L_0066b882;
L_0066b695:; BB(0x0066b695);
    /* 0066b695: mov eax, dword ptr [ebx + 0x1b8] */ r_eax = R32((u32)(r_ebx+0x1b8u));
    /* 0066b69b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0066b69d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066b69f: jle 0x66b882 */ if ((fZ||fS!=fO)) goto L_0066b882;
L_0066b6a5:; BB(0x0066b6a5);
    /* 0066b6a5: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066b6a8: jmp 0x66b6b0 */ goto L_0066b6b0;
L_0066b6aa:; BB(0x0066b6aa);
    /* 0066b6aa: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
L_0066b6b0:; BB(0x0066b6b0);
    /* 0066b6b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b6b1: mov edi, dword ptr [ebx + esi*4 + 0x1a8] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x1a8u));
    /* 0066b6b8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b6ba: mov eax, 0 */ r_eax = 0x0u;
    /* 0066b6bf: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0066b6c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b6c3: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x66b6c8u); f_00714d7c();
    /* 0066b6c8: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0066b6cf: mov edi, 0xfff0f0f0 */ r_edi = 0xfff0f0f0u;
    /* 0066b6d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b6d7: je 0x66b8b4 */ if (fZ) goto L_0066b8b4;
L_0066b6dd:; BB(0x0066b6dd);
    /* 0066b6dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b6de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b6df: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066b6e5: call 0x714df8 */ r_esp -= 4; W32(r_esp, 0x66b6eau); f_00714df8();
    /* 0066b6ea: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066b6ed: cmp esi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b6f3: jl 0x66b6aa */ if ((fS!=fO)) goto L_0066b6aa;
L_0066b6f5:; BB(0x0066b6f5);
    /* 0066b6f5: jmp 0x66b87f */ goto L_0066b87f;
L_0066b6fa:; BB(0x0066b6fa);
    /* 0066b6fa: mov eax, dword ptr [0x9c9558] */ r_eax = R32((u32)(0x9c9558u));
    /* 0066b6ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b701: jne 0x66b709 */ if (!fZ) goto L_0066b709;
L_0066b703:; BB(0x0066b703);
    /* 0066b703: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066b706: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b707: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066b708: ret  */ FN_RET(0x0066b5f8); r_esp += 4; return;
L_0066b709:; BB(0x0066b709);
    /* 0066b709: add dword ptr [ebx + 0x1c4], -1 */ { u32 ad = (u32)(r_ebx+0x1c4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0066b710: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x66b715u); f_0052cf54();
    /* 0066b715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b717: je 0x66b7b3 */ if (fZ) goto L_0066b7b3;
L_0066b71d:; BB(0x0066b71d);
    /* 0066b71d: mov eax, dword ptr [ebx + 0x1c4] */ r_eax = R32((u32)(r_ebx+0x1c4u));
    /* 0066b723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066b725: jg 0x66b75a */ if ((!fZ&&fS==fO)) goto L_0066b75a;
L_0066b727:; BB(0x0066b727);
    /* 0066b727: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0066b72b: mov byte ptr [esp + 0xc], 0x6a */ W8((u32)(r_esp+0xcu), 0x6au);
    /* 0066b730: mov eax, 2 */ r_eax = 0x2u;
    /* 0066b735: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 0066b739: mov word ptr [esp + 0xe], si */ W16((u32)(r_esp+0xeu), (u16)r_esi);
    /* 0066b73e: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0066b743: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0066b747: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x66b74cu); f_008003e0();
    /* 0066b74c: mov eax, 2 */ r_eax = 0x2u;
    /* 0066b751: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0066b758: jmp 0x66b7b3 */ goto L_0066b7b3;
L_0066b75a:; BB(0x0066b75a);
    /* 0066b75a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066b75d: mov esi, 1 */ r_esi = 0x1u;
    /* 0066b762: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066b764: mov edi, eax */ r_edi = r_eax;
L_0066b766:; BB(0x0066b766);
    /* 0066b766: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b767: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66b76cu); f_0068d5a8();
    /* 0066b76c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b76d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b76f: je 0x66b7a0 */ if (fZ) goto L_0066b7a0;
L_0066b771:; BB(0x0066b771);
    /* 0066b771: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0066b777: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b77d: jne 0x66b79e */ if (!fZ) goto L_0066b79e;
L_0066b77f:; BB(0x0066b77f);
    /* 0066b77f: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066b782: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0066b785: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b786: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b787: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66b78cu); f_0078ea50();
    /* 0066b78c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b78f: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 0066b795: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066b797: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066b799: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066b79b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066b79c: jae 0x66b7a0 */ if (!fC) goto L_0066b7a0;
L_0066b79e:; BB(0x0066b79e);
    /* 0066b79e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0066b7a0:; BB(0x0066b7a0);
    /* 0066b7a0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066b7a3: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b7a6: jl 0x66b766 */ if ((fS!=fO)) goto L_0066b766;
L_0066b7a8:; BB(0x0066b7a8);
    /* 0066b7a8: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0066b7ab: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b7ad: jne 0x66b727 */ if (!fZ) goto L_0066b727;
L_0066b7b3:; BB(0x0066b7b3);
    /* 0066b7b3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066b7b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066b7b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066b7b8: ret  */ FN_RET(0x0066b5f8); r_esp += 4; return;
L_0066b7b9:; BB(0x0066b7b9);
    /* 0066b7b9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b7bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7c0: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x66b7c5u); f_0073cd8c();
    /* 0066b7c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b7c8: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0066b7ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b7d0: je 0x66b67f */ if (fZ) goto L_0066b67f;
L_0066b7d6:; BB(0x0066b7d6);
    /* 0066b7d6: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7d8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x66b7ddu); f_0079317c();
    /* 0066b7dd: mov esi, eax */ r_esi = r_eax;
    /* 0066b7df: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7e1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66b7e6u); f_0073ec50();
    /* 0066b7e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b7e9: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7ef: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066b7f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7f6: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x66b7fbu); f_0073ce70();
    /* 0066b7fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7fd: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066b803: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x66b808u); f_0073d148();
    /* 0066b808: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066b80e: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x66b813u); f_0073d170();
    /* 0066b813: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0066b81a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b81b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b81d: call 0x66c268 */ r_esp -= 4; W32(r_esp, 0x66b822u); f_0066c268();
    /* 0066b822: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66b827u); f_00717d68();
    /* 0066b827: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b82d: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x66b832u); f_00717f08();
    /* 0066b832: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b833: jmp 0x66b67f */ goto L_0066b67f;
L_0066b838:; BB(0x0066b838);
    /* 0066b838: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b83e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b83f: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x66b844u); f_0073cd8c();
    /* 0066b844: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b847: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0066b84d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b84f: je 0x66b67f */ if (fZ) goto L_0066b67f;
L_0066b855:; BB(0x0066b855);
    /* 0066b855: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b857: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x66b85cu); f_0079317c();
    /* 0066b85c: mov esi, eax */ r_esi = r_eax;
    /* 0066b85e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b860: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66b865u); f_0073ec50();
    /* 0066b865: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b868: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b86d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b86e: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066b874: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b875: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x66b87au); f_0073d0b0();
    /* 0066b87a: jmp 0x66b67f */ goto L_0066b67f;
L_0066b87f:; BB(0x0066b87f);
    /* 0066b87f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0066b882:; BB(0x0066b882);
    /* 0066b882: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b884: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66b889u); f_00791748();
    /* 0066b889: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b88a: mov eax, dword ptr [ebx + 0x1d4] */ r_eax = R32((u32)(r_ebx+0x1d4u));
    /* 0066b890: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b892: jne 0x66b6fa */ if (!fZ) goto L_0066b6fa;
L_0066b898:; BB(0x0066b898);
    /* 0066b898: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066b89e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066b8a0: call 0x64cc10 */ r_esp -= 4; W32(r_esp, 0x66b8a5u); f_0064cc10();
    /* 0066b8a5: mov dword ptr [ebx + 0x1d4], 1 */ W32((u32)(r_ebx+0x1d4u), 0x1u);
    /* 0066b8af: jmp 0x66b6fa */ goto L_0066b6fa;
L_0066b8b4:; BB(0x0066b8b4);
    /* 0066b8b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b8b5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66b8bau); f_0068d5a8();
    /* 0066b8ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b8bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b8bd: je 0x66b6dd */ if (fZ) goto L_0066b6dd;
L_0066b8c3:; BB(0x0066b8c3);
    /* 0066b8c3: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 0066b8c9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066b8cb: je 0x66b8d4 */ if (fZ) goto L_0066b8d4;
L_0066b8cd:; BB(0x0066b8cd);
    /* 0066b8cd: mov eax, 1 */ r_eax = 0x1u;
    /* 0066b8d2: jmp 0x66b8d6 */ goto L_0066b8d6;
L_0066b8d4:; BB(0x0066b8d4);
    /* 0066b8d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0066b8d6:; BB(0x0066b8d6);
    /* 0066b8d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b8d8: je 0x66b6dd */ if (fZ) goto L_0066b6dd;
L_0066b8de:; BB(0x0066b8de);
    /* 0066b8de: mov edi, 0xffffff00 */ r_edi = 0xffffff00u;
    /* 0066b8e3: jmp 0x66b6dd */ goto L_0066b6dd;
L_0066b8e8:; BB(0x0066b8e8);
    /* 0066b8e8: mov dword ptr [esp + 4], 0x43650000 */ W32((u32)(r_esp+0x4u), 0x43650000u);
    /* 0066b8f0: mov dword ptr [esp + 8], 0x42d00000 */ W32((u32)(r_esp+0x8u), 0x42d00000u);
    /* 0066b8f8: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b8fa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66b8ffu); f_0073ec50();
    /* 0066b8ff: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0066b903: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b905: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x66b90au); f_00714ab0();
    /* 0066b90a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b90d: mov dword ptr [ebx + 0x1c8], eax */ W32((u32)(r_ebx+0x1c8u), r_eax);
    /* 0066b913: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b915: je 0x66b989 */ if (fZ) goto L_0066b989;
L_0066b917:; BB(0x0066b917);
    /* 0066b917: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0066b91e: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066b924: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0066b92b: mov esi, dword ptr [ebx + 0x1c8] */ r_esi = R32((u32)(r_ebx+0x1c8u));
    /* 0066b931: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0066b938: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066b93d: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 0066b944: mov edx, dword ptr [ebx + 0x1b8] */ r_edx = R32((u32)(r_ebx+0x1b8u));
    /* 0066b94a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066b94c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066b94e: jle 0x66b989 */ if ((fZ||fS!=fO)) goto L_0066b989;
L_0066b950:; BB(0x0066b950);
    /* 0066b950: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066b953: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0066b956: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066b958: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0066b95a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066b95c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066b95e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066b960: lea esi, [edx + edx + 0xe8] */ r_esi = (u32)(r_edx+r_edx+0xe8u);
    /* 0066b967: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066b969: mov edi, eax */ r_edi = r_eax;
L_0066b96b:; BB(0x0066b96b);
    /* 0066b96b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b96c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b96d: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066b973: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x66b978u); f_00714d34();
    /* 0066b978: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066b97b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066b97e: cmp edi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b984: jl 0x66b96b */ if ((fS!=fO)) goto L_0066b96b;
L_0066b986:; BB(0x0066b986);
    /* 0066b986: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0066b989:; BB(0x0066b989);
    /* 0066b989: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66b98eu); f_00717d68();
    /* 0066b98e: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066b994: jmp 0x66b68d */ goto L_0066b68d;
L_0066b999:; BB(0x0066b999);
    /* 0066b999: mov dword ptr [ebx + 0x1c4], 0x12c */ W32((u32)(r_ebx+0x1c4u), 0x12cu);
    /* 0066b9a3: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0066b9a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066b9a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b9a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b9aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b9ab: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b9ad: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x66b9b2u); f_00814298();
    /* 0066b9b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b9b5: mov edx, dword ptr [0xa8fd08] */ r_edx = R32((u32)(0xa8fd08u));
    /* 0066b9bb: mov esi, dword ptr [0xa8fd00] */ r_esi = R32((u32)(0xa8fd00u));
    /* 0066b9c1: mov eax, 1 */ r_eax = 0x1u;
    /* 0066b9c6: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0066b9cd: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 0066b9d3: mov dword ptr [ebx + 0xd8], esi */ W32((u32)(r_ebx+0xd8u), r_esi);
    /* 0066b9d9: jmp 0x66b7b3 */ goto L_0066b7b3;
}

void f_0066b9e0(void) /* sub_66B9E0 */
{
    FN_ENTER(0x0066b9e0);
    /* 0066b9e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066b9e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b9e2: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066b9e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066b9e7: mov eax, dword ptr [ebx + 0x1c0] */ r_eax = R32((u32)(r_ebx+0x1c0u));
    /* 0066b9ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b9f0: je 0x66c241 */ if (fZ) goto L_0066c241;
L_0066b9f6:; BB(0x0066b9f6);
    /* 0066b9f6: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0066b9fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066b9ff: je 0x66c20b */ if (fZ) goto L_0066c20b;
L_0066ba05:; BB(0x0066ba05);
    /* 0066ba05: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba08: je 0x66bf24 */ if (fZ) goto L_0066bf24;
L_0066ba0e:; BB(0x0066ba0e);
    /* 0066ba0e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba11: je 0x66bb22 */ if (fZ) goto L_0066bb22;
L_0066ba17:; BB(0x0066ba17);
    /* 0066ba17: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba1a: je 0x66bb04 */ if (fZ) goto L_0066bb04;
L_0066ba20:; BB(0x0066ba20);
    /* 0066ba20: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba23: je 0x66ba38 */ if (fZ) goto L_0066ba38;
L_0066ba25:; BB(0x0066ba25);
    /* 0066ba25: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba28: je 0x66ba6a */ if (fZ) goto L_0066ba6a;
L_0066ba2a:; BB(0x0066ba2a);
    /* 0066ba2a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba2d: jne 0x66ba6a */ if (!fZ) goto L_0066ba6a;
L_0066ba2f:; BB(0x0066ba2f);
    /* 0066ba2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066ba31: call 0x66c2ac */ r_esp -= 4; W32(r_esp, 0x66ba36u); f_0066c2ac();
    /* 0066ba36: jmp 0x66ba6a */ goto L_0066ba6a;
L_0066ba38:; BB(0x0066ba38);
    /* 0066ba38: push dword ptr [ebx + 0xac] */ { u32 v = R32((u32)(r_ebx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066ba3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066ba40: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x66ba45u); f_0064cbb4();
    /* 0066ba45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba47: jne 0x66ba57 */ if (!fZ) goto L_0066ba57;
L_0066ba49:; BB(0x0066ba49);
    /* 0066ba49: mov eax, 1 */ r_eax = 0x1u;
    /* 0066ba4e: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0066ba55: jmp 0x66ba6a */ goto L_0066ba6a;
L_0066ba57:; BB(0x0066ba57);
    /* 0066ba57: mov eax, dword ptr [0x9c9558] */ r_eax = R32((u32)(0x9c9558u));
    /* 0066ba5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba5e: je 0x66ba6a */ if (fZ) goto L_0066ba6a;
L_0066ba60:; BB(0x0066ba60);
    /* 0066ba60: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x66ba65u); f_007a61a4();
    /* 0066ba65: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba68: je 0x66ba70 */ if (fZ) goto L_0066ba70;
L_0066ba6a:; BB(0x0066ba6a);
    /* 0066ba6a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066ba6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066ba6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066ba6f: ret  */ FN_RET(0x0066b9e0); r_esp += 4; return;
L_0066ba70:; BB(0x0066ba70);
    /* 0066ba70: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x66ba75u); f_0052cf54();
    /* 0066ba75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba77: je 0x66ba6a */ if (fZ) goto L_0066ba6a;
L_0066ba79:; BB(0x0066ba79);
    /* 0066ba79: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066ba7c: mov esi, 1 */ r_esi = 0x1u;
    /* 0066ba81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ba83: mov edi, eax */ r_edi = r_eax;
L_0066ba85:; BB(0x0066ba85);
    /* 0066ba85: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ba86: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66ba8bu); f_0068d5a8();
    /* 0066ba8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066ba8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba8e: je 0x66babf */ if (fZ) goto L_0066babf;
L_0066ba90:; BB(0x0066ba90);
    /* 0066ba90: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0066ba96: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ba9c: jne 0x66babd */ if (!fZ) goto L_0066babd;
L_0066ba9e:; BB(0x0066ba9e);
    /* 0066ba9e: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066baa1: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0066baa4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066baa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066baa6: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66baabu); f_0078ea50();
    /* 0066baab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066baae: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 0066bab4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066bab6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066bab8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066baba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066babb: jae 0x66babf */ if (!fC) goto L_0066babf;
L_0066babd:; BB(0x0066babd);
    /* 0066babd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0066babf:; BB(0x0066babf);
    /* 0066babf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066bac2: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066bac5: jl 0x66ba85 */ if ((fS!=fO)) goto L_0066ba85;
L_0066bac7:; BB(0x0066bac7);
    /* 0066bac7: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0066baca: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bacc: je 0x66ba6a */ if (fZ) goto L_0066ba6a;
L_0066bace:; BB(0x0066bace);
    /* 0066bace: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0066bad2: mov byte ptr [esp + 4], 0x6a */ W8((u32)(r_esp+0x4u), 0x6au);
    /* 0066bad7: mov eax, 2 */ r_eax = 0x2u;
    /* 0066badc: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 0066bae0: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 0066bae5: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0066baea: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0066baee: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x66baf3u); f_008003e0();
    /* 0066baf3: mov eax, 5 */ r_eax = 0x5u;
    /* 0066baf8: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0066baff: jmp 0x66ba6a */ goto L_0066ba6a;
L_0066bb04:; BB(0x0066bb04);
    /* 0066bb04: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066bb0a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066bb0c: call 0x64bef4 */ r_esp -= 4; W32(r_esp, 0x66bb11u); f_0064bef4();
    /* 0066bb11: mov eax, 4 */ r_eax = 0x4u;
    /* 0066bb16: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0066bb1d: jmp 0x66ba6a */ goto L_0066ba6a;
L_0066bb22:; BB(0x0066bb22);
    /* 0066bb22: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0066bb29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bb2b: jne 0x66bb48 */ if (!fZ) goto L_0066bb48;
L_0066bb2d:; BB(0x0066bb2d);
    /* 0066bb2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066bb2f: call 0x66c254 */ r_esp -= 4; W32(r_esp, 0x66bb34u); f_0066c254();
    /* 0066bb34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bb36: jne 0x66bb5b */ if (!fZ) goto L_0066bb5b;
L_0066bb38:; BB(0x0066bb38);
    /* 0066bb38: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0066bb3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bb40: je 0x66bbd6 */ if (fZ) goto L_0066bbd6;
L_0066bb46:; BB(0x0066bb46);
    /* 0066bb46: jmp 0x66bb5b */ goto L_0066bb5b;
L_0066bb48:; BB(0x0066bb48);
    /* 0066bb48: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bb4b: jne 0x66bb5b */ if (!fZ) goto L_0066bb5b;
L_0066bb4d:; BB(0x0066bb4d);
    /* 0066bb4d: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0066bb53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bb55: je 0x66bc55 */ if (fZ) goto L_0066bc55;
L_0066bb5b:; BB(0x0066bb5b);
    /* 0066bb5b: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066bb61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bb63: je 0x66be73 */ if (fZ) goto L_0066be73;
L_0066bb69:; BB(0x0066bb69);
    /* 0066bb69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bb6b: je 0x66bc9f */ if (fZ) goto L_0066bc9f;
L_0066bb71:; BB(0x0066bb71);
    /* 0066bb71: mov eax, dword ptr [ebx + 0x1b8] */ r_eax = R32((u32)(r_ebx+0x1b8u));
    /* 0066bb77: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0066bb79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066bb7b: jle 0x66bc9f */ if ((fZ||fS!=fO)) goto L_0066bc9f;
L_0066bb81:; BB(0x0066bb81);
    /* 0066bb81: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066bb84: jmp 0x66bb8c */ goto L_0066bb8c;
L_0066bb86:; BB(0x0066bb86);
    /* 0066bb86: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
L_0066bb8c:; BB(0x0066bb8c);
    /* 0066bb8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bb8d: mov edi, dword ptr [ebx + esi*4 + 0x1a8] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x1a8u));
    /* 0066bb94: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bb96: mov eax, 0 */ r_eax = 0x0u;
    /* 0066bb9b: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0066bb9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bb9f: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x66bba4u); f_00714d7c();
    /* 0066bba4: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0066bbab: mov edi, 0xfff0f0f0 */ r_edi = 0xfff0f0f0u;
    /* 0066bbb0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bbb3: je 0x66be3f */ if (fZ) goto L_0066be3f;
L_0066bbb9:; BB(0x0066bbb9);
    /* 0066bbb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbbb: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066bbc1: call 0x714df8 */ r_esp -= 4; W32(r_esp, 0x66bbc6u); f_00714df8();
    /* 0066bbc6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066bbc9: cmp esi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066bbcf: jl 0x66bb86 */ if ((fS!=fO)) goto L_0066bb86;
L_0066bbd1:; BB(0x0066bbd1);
    /* 0066bbd1: jmp 0x66bc9c */ goto L_0066bc9c;
L_0066bbd6:; BB(0x0066bbd6);
    /* 0066bbd6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066bbdc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbdd: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x66bbe2u); f_0073cd8c();
    /* 0066bbe2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066bbe5: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0066bbeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bbed: je 0x66bb5b */ if (fZ) goto L_0066bb5b;
L_0066bbf3:; BB(0x0066bbf3);
    /* 0066bbf3: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbf5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x66bbfau); f_0079317c();
    /* 0066bbfa: mov esi, eax */ r_esi = r_eax;
    /* 0066bbfc: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bbfe: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66bc03u); f_0073ec50();
    /* 0066bc03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066bc06: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc0c: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066bc12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc13: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x66bc18u); f_0073ce70();
    /* 0066bc18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc1a: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066bc20: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x66bc25u); f_0073d148();
    /* 0066bc25: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066bc2b: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x66bc30u); f_0073d170();
    /* 0066bc30: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0066bc37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066bc3a: call 0x66c268 */ r_esp -= 4; W32(r_esp, 0x66bc3fu); f_0066c268();
    /* 0066bc3f: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66bc44u); f_00717d68();
    /* 0066bc44: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066bc4a: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x66bc4fu); f_00717f08();
    /* 0066bc4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066bc50: jmp 0x66bb5b */ goto L_0066bb5b;
L_0066bc55:; BB(0x0066bc55);
    /* 0066bc55: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066bc5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc5c: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x66bc61u); f_0073cd8c();
    /* 0066bc61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066bc64: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0066bc6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bc6c: je 0x66bb5b */ if (fZ) goto L_0066bb5b;
L_0066bc72:; BB(0x0066bc72);
    /* 0066bc72: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc74: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x66bc79u); f_0079317c();
    /* 0066bc79: mov esi, eax */ r_esi = r_eax;
    /* 0066bc7b: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc7d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66bc82u); f_0073ec50();
    /* 0066bc82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066bc85: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc8b: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066bc91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bc92: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x66bc97u); f_0073d0b0();
    /* 0066bc97: jmp 0x66bb5b */ goto L_0066bb5b;
L_0066bc9c:; BB(0x0066bc9c);
    /* 0066bc9c: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0066bc9f:; BB(0x0066bc9f);
    /* 0066bc9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066bca1: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66bca6u); f_00791748();
    /* 0066bca6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066bca7: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066bcad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bcaf: je 0x66bd42 */ if (fZ) goto L_0066bd42;
L_0066bcb5:; BB(0x0066bcb5);
    /* 0066bcb5: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x66bcbau); f_0073d114();
    /* 0066bcba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bcbc: je 0x66bccc */ if (fZ) goto L_0066bccc;
L_0066bcbe:; BB(0x0066bcbe);
    /* 0066bcbe: mov eax, 3 */ r_eax = 0x3u;
    /* 0066bcc3: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0066bcca: jmp 0x66bd42 */ goto L_0066bd42;
L_0066bccc:; BB(0x0066bccc);
    /* 0066bccc: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066bcd2: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x66bcd7u); f_0073ce50();
    /* 0066bcd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bcd9: je 0x66bd42 */ if (fZ) goto L_0066bd42;
L_0066bcdb:; BB(0x0066bcdb);
    /* 0066bcdb: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066bce1: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x66bce6u); f_0073d134();
    /* 0066bce6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bce8: je 0x66bcfd */ if (fZ) goto L_0066bcfd;
L_0066bcea:; BB(0x0066bcea);
    /* 0066bcea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bced: jne 0x66bd42 */ if (!fZ) goto L_0066bd42;
L_0066bcef:; BB(0x0066bcef);
    /* 0066bcef: mov eax, 3 */ r_eax = 0x3u;
    /* 0066bcf4: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0066bcfb: jmp 0x66bd42 */ goto L_0066bd42;
L_0066bcfd:; BB(0x0066bcfd);
    /* 0066bcfd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066bd03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066bd05: call 0x64cc10 */ r_esp -= 4; W32(r_esp, 0x66bd0au); f_0064cc10();
    /* 0066bd0a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0066bd0e: mov byte ptr [esp + 0x14], 0x6a */ W8((u32)(r_esp+0x14u), 0x6au);
    /* 0066bd13: mov edx, 1 */ r_edx = 0x1u;
    /* 0066bd18: mov dword ptr [ebx + 0x1d4], edx */ W32((u32)(r_ebx+0x1d4u), r_edx);
    /* 0066bd1e: mov byte ptr [esp + 0x15], 2 */ W8((u32)(r_esp+0x15u), 0x2u);
    /* 0066bd23: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0066bd28: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 0066bd2d: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 0066bd31: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x66bd36u); f_008003e0();
    /* 0066bd36: mov eax, 5 */ r_eax = 0x5u;
    /* 0066bd3b: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
L_0066bd42:; BB(0x0066bd42);
    /* 0066bd42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066bd44: call 0x66c340 */ r_esp -= 4; W32(r_esp, 0x66bd49u); f_0066c340();
    /* 0066bd49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bd4b: je 0x66bd59 */ if (fZ) goto L_0066bd59;
L_0066bd4d:; BB(0x0066bd4d);
    /* 0066bd4d: mov eax, 3 */ r_eax = 0x3u;
    /* 0066bd52: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
L_0066bd59:; BB(0x0066bd59);
    /* 0066bd59: mov eax, dword ptr [0x9c9558] */ r_eax = R32((u32)(0x9c9558u));
    /* 0066bd5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bd60: jne 0x66bd6b */ if (!fZ) goto L_0066bd6b;
L_0066bd62:; BB(0x0066bd62);
    /* 0066bd62: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0066bd69: jmp 0x66bd7c */ goto L_0066bd7c;
L_0066bd6b:; BB(0x0066bd6b);
    /* 0066bd6b: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x66bd70u); f_007a61a4();
    /* 0066bd70: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bd73: je 0x66bd91 */ if (fZ) goto L_0066bd91;
L_0066bd75:; BB(0x0066bd75);
    /* 0066bd75: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
L_0066bd7c:; BB(0x0066bd7c);
    /* 0066bd7c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bd7f: je 0x66ba6a */ if (fZ) goto L_0066ba6a;
L_0066bd85:; BB(0x0066bd85);
    /* 0066bd85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066bd87: call 0x66c2ac */ r_esp -= 4; W32(r_esp, 0x66bd8cu); f_0066c2ac();
    /* 0066bd8c: jmp 0x66ba6a */ goto L_0066ba6a;
L_0066bd91:; BB(0x0066bd91);
    /* 0066bd91: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x66bd96u); f_0052cf54();
    /* 0066bd96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bd98: jne 0x66bda3 */ if (!fZ) goto L_0066bda3;
L_0066bd9a:; BB(0x0066bd9a);
    /* 0066bd9a: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0066bda1: jmp 0x66bd7c */ goto L_0066bd7c;
L_0066bda3:; BB(0x0066bda3);
    /* 0066bda3: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066bda6: mov esi, 1 */ r_esi = 0x1u;
    /* 0066bdab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066bdad: mov edi, eax */ r_edi = r_eax;
L_0066bdaf:; BB(0x0066bdaf);
    /* 0066bdaf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bdb0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66bdb5u); f_0068d5a8();
    /* 0066bdb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066bdb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bdb8: je 0x66bde9 */ if (fZ) goto L_0066bde9;
L_0066bdba:; BB(0x0066bdba);
    /* 0066bdba: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0066bdc0: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bdc6: jne 0x66bde7 */ if (!fZ) goto L_0066bde7;
L_0066bdc8:; BB(0x0066bdc8);
    /* 0066bdc8: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066bdcb: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0066bdce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066bdcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bdd0: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66bdd5u); f_0078ea50();
    /* 0066bdd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066bdd8: fld dword ptr [ebx + 0xac] */ FPUSH(R_F32((u32)(r_ebx+0xacu)));
    /* 0066bdde: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066bde0: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066bde2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066bde4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066bde5: jae 0x66bde9 */ if (!fC) goto L_0066bde9;
L_0066bde7:; BB(0x0066bde7);
    /* 0066bde7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0066bde9:; BB(0x0066bde9);
    /* 0066bde9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066bdec: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066bdef: jl 0x66bdaf */ if ((fS!=fO)) goto L_0066bdaf;
L_0066bdf1:; BB(0x0066bdf1);
    /* 0066bdf1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0066bdf4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bdf6: jne 0x66be04 */ if (!fZ) goto L_0066be04;
L_0066bdf8:; BB(0x0066bdf8);
    /* 0066bdf8: movsx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe4u));
    /* 0066bdff: jmp 0x66bd7c */ goto L_0066bd7c;
L_0066be04:; BB(0x0066be04);
    /* 0066be04: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0066be08: mov byte ptr [esp + 0x1c], 0x6a */ W8((u32)(r_esp+0x1cu), 0x6au);
    /* 0066be0d: mov eax, 2 */ r_eax = 0x2u;
    /* 0066be12: mov byte ptr [esp + 0x1d], al */ W8((u32)(r_esp+0x1du), (u8)r_eax);
    /* 0066be16: mov word ptr [esp + 0x1e], si */ W16((u32)(r_esp+0x1eu), (u16)r_esi);
    /* 0066be1b: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 0066be20: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 0066be24: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x66be29u); f_008003e0();
    /* 0066be29: mov eax, 5 */ r_eax = 0x5u;
    /* 0066be2e: mov edx, 5 */ r_edx = 0x5u;
    /* 0066be33: mov word ptr [ebx + 0xe4], dx */ W16((u32)(r_ebx+0xe4u), (u16)r_edx);
    /* 0066be3a: jmp 0x66bd7c */ goto L_0066bd7c;
L_0066be3f:; BB(0x0066be3f);
    /* 0066be3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066be40: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66be45u); f_0068d5a8();
    /* 0066be45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066be46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066be48: je 0x66bbb9 */ if (fZ) goto L_0066bbb9;
L_0066be4e:; BB(0x0066be4e);
    /* 0066be4e: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 0066be54: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066be56: je 0x66be5f */ if (fZ) goto L_0066be5f;
L_0066be58:; BB(0x0066be58);
    /* 0066be58: mov eax, 1 */ r_eax = 0x1u;
    /* 0066be5d: jmp 0x66be61 */ goto L_0066be61;
L_0066be5f:; BB(0x0066be5f);
    /* 0066be5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0066be61:; BB(0x0066be61);
    /* 0066be61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066be63: je 0x66bbb9 */ if (fZ) goto L_0066bbb9;
L_0066be69:; BB(0x0066be69);
    /* 0066be69: mov edi, 0xffffff00 */ r_edi = 0xffffff00u;
    /* 0066be6e: jmp 0x66bbb9 */ goto L_0066bbb9;
L_0066be73:; BB(0x0066be73);
    /* 0066be73: mov dword ptr [esp + 0xc], 0x43650000 */ W32((u32)(r_esp+0xcu), 0x43650000u);
    /* 0066be7b: mov dword ptr [esp + 0x10], 0x42d00000 */ W32((u32)(r_esp+0x10u), 0x42d00000u);
    /* 0066be83: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0066be85: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66be8au); f_0073ec50();
    /* 0066be8a: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0066be8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066be8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066be90: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x66be95u); f_00714ab0();
    /* 0066be95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066be98: mov dword ptr [ebx + 0x1c8], eax */ W32((u32)(r_ebx+0x1c8u), r_eax);
    /* 0066be9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bea0: je 0x66bf14 */ if (fZ) goto L_0066bf14;
L_0066bea2:; BB(0x0066bea2);
    /* 0066bea2: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0066bea9: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066beaf: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0066beb6: mov esi, dword ptr [ebx + 0x1c8] */ r_esi = R32((u32)(r_ebx+0x1c8u));
    /* 0066bebc: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0066bec3: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066bec8: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 0066becf: mov edx, dword ptr [ebx + 0x1b8] */ r_edx = R32((u32)(r_ebx+0x1b8u));
    /* 0066bed5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066bed7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066bed9: jle 0x66bf14 */ if ((fZ||fS!=fO)) goto L_0066bf14;
L_0066bedb:; BB(0x0066bedb);
    /* 0066bedb: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066bede: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0066bee1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066bee3: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0066bee5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066bee7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066bee9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066beeb: lea esi, [edx + edx + 0xe8] */ r_esi = (u32)(r_edx+r_edx+0xe8u);
    /* 0066bef2: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066bef4: mov edi, eax */ r_edi = r_eax;
L_0066bef6:; BB(0x0066bef6);
    /* 0066bef6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bef7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bef8: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066befe: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x66bf03u); f_00714d34();
    /* 0066bf03: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066bf06: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066bf09: cmp edi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066bf0f: jl 0x66bef6 */ if ((fS!=fO)) goto L_0066bef6;
L_0066bf11:; BB(0x0066bf11);
    /* 0066bf11: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0066bf14:; BB(0x0066bf14);
    /* 0066bf14: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66bf19u); f_00717d68();
    /* 0066bf19: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066bf1f: jmp 0x66bb69 */ goto L_0066bb69;
L_0066bf24:; BB(0x0066bf24);
    /* 0066bf24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066bf26: call 0x66c340 */ r_esp -= 4; W32(r_esp, 0x66bf2bu); f_0066c340();
    /* 0066bf2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf2d: jne 0x66bffc */ if (!fZ) goto L_0066bffc;
L_0066bf33:; BB(0x0066bf33);
    /* 0066bf33: push dword ptr [ebx + 0xac] */ { u32 v = R32((u32)(r_ebx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066bf39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066bf3b: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x66bf40u); f_0064cbb4();
    /* 0066bf40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf42: je 0x66bffc */ if (fZ) goto L_0066bffc;
L_0066bf48:; BB(0x0066bf48);
    /* 0066bf48: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0066bf4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf51: jne 0x66bf6e */ if (!fZ) goto L_0066bf6e;
L_0066bf53:; BB(0x0066bf53);
    /* 0066bf53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066bf55: call 0x66c254 */ r_esp -= 4; W32(r_esp, 0x66bf5au); f_0066c254();
    /* 0066bf5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf5c: jne 0x66bf81 */ if (!fZ) goto L_0066bf81;
L_0066bf5e:; BB(0x0066bf5e);
    /* 0066bf5e: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0066bf64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf66: je 0x66c037 */ if (fZ) goto L_0066c037;
L_0066bf6c:; BB(0x0066bf6c);
    /* 0066bf6c: jmp 0x66bf81 */ goto L_0066bf81;
L_0066bf6e:; BB(0x0066bf6e);
    /* 0066bf6e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf71: jne 0x66bf81 */ if (!fZ) goto L_0066bf81;
L_0066bf73:; BB(0x0066bf73);
    /* 0066bf73: mov eax, dword ptr [ebx + 0x1cc] */ r_eax = R32((u32)(r_ebx+0x1ccu));
    /* 0066bf79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf7b: je 0x66c0b6 */ if (fZ) goto L_0066c0b6;
L_0066bf81:; BB(0x0066bf81);
    /* 0066bf81: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066bf87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf89: je 0x66c15a */ if (fZ) goto L_0066c15a;
L_0066bf8f:; BB(0x0066bf8f);
    /* 0066bf8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bf91: je 0x66c100 */ if (fZ) goto L_0066c100;
L_0066bf97:; BB(0x0066bf97);
    /* 0066bf97: mov eax, dword ptr [ebx + 0x1b8] */ r_eax = R32((u32)(r_ebx+0x1b8u));
    /* 0066bf9d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0066bf9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066bfa1: jle 0x66c100 */ if ((fZ||fS!=fO)) goto L_0066c100;
L_0066bfa7:; BB(0x0066bfa7);
    /* 0066bfa7: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066bfaa: jmp 0x66bfb2 */ goto L_0066bfb2;
L_0066bfac:; BB(0x0066bfac);
    /* 0066bfac: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
L_0066bfb2:; BB(0x0066bfb2);
    /* 0066bfb2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bfb3: mov edi, dword ptr [ebx + esi*4 + 0x1a8] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x1a8u));
    /* 0066bfba: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bfbc: mov eax, 0 */ r_eax = 0x0u;
    /* 0066bfc1: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0066bfc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066bfc5: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x66bfcau); f_00714d7c();
    /* 0066bfca: movsx eax, word ptr [ebx + 0xe2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xe2u));
    /* 0066bfd1: mov edi, 0xfff0f0f0 */ r_edi = 0xfff0f0f0u;
    /* 0066bfd6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066bfd9: je 0x66c126 */ if (fZ) goto L_0066c126;
L_0066bfdf:; BB(0x0066bfdf);
    /* 0066bfdf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bfe0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066bfe1: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066bfe7: call 0x714df8 */ r_esp -= 4; W32(r_esp, 0x66bfecu); f_00714df8();
    /* 0066bfec: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066bfef: cmp esi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066bff5: jl 0x66bfac */ if ((fS!=fO)) goto L_0066bfac;
L_0066bff7:; BB(0x0066bff7);
    /* 0066bff7: jmp 0x66c0fd */ goto L_0066c0fd;
L_0066bffc:; BB(0x0066bffc);
    /* 0066bffc: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0066c002: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c004: je 0x66c015 */ if (fZ) goto L_0066c015;
L_0066c006:; BB(0x0066c006);
    /* 0066c006: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66c00bu); f_007127b0();
    /* 0066c00b: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
L_0066c015:; BB(0x0066c015);
    /* 0066c015: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066c01b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c01d: je 0x66ba6a */ if (fZ) goto L_0066ba6a;
L_0066c023:; BB(0x0066c023);
    /* 0066c023: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66c028u); f_007127b0();
    /* 0066c028: mov dword ptr [ebx + 0x1c8], 0 */ W32((u32)(r_ebx+0x1c8u), 0x0u);
    /* 0066c032: jmp 0x66ba6a */ goto L_0066ba6a;
L_0066c037:; BB(0x0066c037);
    /* 0066c037: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c03d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c03e: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x66c043u); f_0073cd8c();
    /* 0066c043: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c046: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0066c04c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c04e: je 0x66bf81 */ if (fZ) goto L_0066bf81;
L_0066c054:; BB(0x0066c054);
    /* 0066c054: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c056: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x66c05bu); f_0079317c();
    /* 0066c05b: mov esi, eax */ r_esi = r_eax;
    /* 0066c05d: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c05f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66c064u); f_0073ec50();
    /* 0066c064: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c067: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c06c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c06d: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066c073: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c074: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x66c079u); f_0073ce70();
    /* 0066c079: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c07b: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066c081: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x66c086u); f_0073d148();
    /* 0066c086: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066c08c: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x66c091u); f_0073d170();
    /* 0066c091: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0066c098: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c099: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066c09b: call 0x66c268 */ r_esp -= 4; W32(r_esp, 0x66c0a0u); f_0066c268();
    /* 0066c0a0: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66c0a5u); f_00717d68();
    /* 0066c0a5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c0ab: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x66c0b0u); f_00717f08();
    /* 0066c0b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c0b1: jmp 0x66bf81 */ goto L_0066bf81;
L_0066c0b6:; BB(0x0066c0b6);
    /* 0066c0b6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c0bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c0bd: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x66c0c2u); f_0073cd8c();
    /* 0066c0c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c0c5: mov dword ptr [ebx + 0x1cc], eax */ W32((u32)(r_ebx+0x1ccu), r_eax);
    /* 0066c0cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c0cd: je 0x66bf81 */ if (fZ) goto L_0066bf81;
L_0066c0d3:; BB(0x0066c0d3);
    /* 0066c0d3: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c0d5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x66c0dau); f_0079317c();
    /* 0066c0da: mov esi, eax */ r_esi = r_eax;
    /* 0066c0dc: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c0de: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66c0e3u); f_0073ec50();
    /* 0066c0e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c0e6: push 0x43b80000 */ { u32 v = 0x43b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c0eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c0ec: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066c0f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c0f3: call 0x73d0b0 */ r_esp -= 4; W32(r_esp, 0x66c0f8u); f_0073d0b0();
    /* 0066c0f8: jmp 0x66bf81 */ goto L_0066bf81;
L_0066c0fd:; BB(0x0066c0fd);
    /* 0066c0fd: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0066c100:; BB(0x0066c100);
    /* 0066c100: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c102: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66c107u); f_00791748();
    /* 0066c107: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c108: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c10e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066c110: call 0x64cc10 */ r_esp -= 4; W32(r_esp, 0x66c115u); f_0064cc10();
    /* 0066c115: mov eax, 2 */ r_eax = 0x2u;
    /* 0066c11a: mov word ptr [ebx + 0xe4], ax */ W16((u32)(r_ebx+0xe4u), (u16)r_eax);
    /* 0066c121: jmp 0x66ba6a */ goto L_0066ba6a;
L_0066c126:; BB(0x0066c126);
    /* 0066c126: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c127: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66c12cu); f_0068d5a8();
    /* 0066c12c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c12d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c12f: je 0x66bfdf */ if (fZ) goto L_0066bfdf;
L_0066c135:; BB(0x0066c135);
    /* 0066c135: mov eax, dword ptr [eax + 0x33c] */ r_eax = R32((u32)(r_eax+0x33cu));
    /* 0066c13b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066c13d: je 0x66c146 */ if (fZ) goto L_0066c146;
L_0066c13f:; BB(0x0066c13f);
    /* 0066c13f: mov eax, 1 */ r_eax = 0x1u;
    /* 0066c144: jmp 0x66c148 */ goto L_0066c148;
L_0066c146:; BB(0x0066c146);
    /* 0066c146: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0066c148:; BB(0x0066c148);
    /* 0066c148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c14a: je 0x66bfdf */ if (fZ) goto L_0066bfdf;
L_0066c150:; BB(0x0066c150);
    /* 0066c150: mov edi, 0xffffff00 */ r_edi = 0xffffff00u;
    /* 0066c155: jmp 0x66bfdf */ goto L_0066bfdf;
L_0066c15a:; BB(0x0066c15a);
    /* 0066c15a: mov dword ptr [esp + 0x24], 0x43650000 */ W32((u32)(r_esp+0x24u), 0x43650000u);
    /* 0066c162: mov dword ptr [esp + 0x28], 0x42d00000 */ W32((u32)(r_esp+0x28u), 0x42d00000u);
    /* 0066c16a: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c16c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66c171u); f_0073ec50();
    /* 0066c171: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0066c175: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c177: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x66c17cu); f_00714ab0();
    /* 0066c17c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c17f: mov dword ptr [ebx + 0x1c8], eax */ W32((u32)(r_ebx+0x1c8u), r_eax);
    /* 0066c185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c187: je 0x66c1fb */ if (fZ) goto L_0066c1fb;
L_0066c189:; BB(0x0066c189);
    /* 0066c189: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0066c190: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066c196: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 0066c19d: mov esi, dword ptr [ebx + 0x1c8] */ r_esi = R32((u32)(r_ebx+0x1c8u));
    /* 0066c1a3: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0066c1aa: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066c1af: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 0066c1b6: mov edx, dword ptr [ebx + 0x1b8] */ r_edx = R32((u32)(r_ebx+0x1b8u));
    /* 0066c1bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c1be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066c1c0: jle 0x66c1fb */ if ((fZ||fS!=fO)) goto L_0066c1fb;
L_0066c1c2:; BB(0x0066c1c2);
    /* 0066c1c2: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066c1c5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0066c1c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066c1ca: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0066c1cc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066c1ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066c1d0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066c1d2: lea esi, [edx + edx + 0xe8] */ r_esi = (u32)(r_edx+r_edx+0xe8u);
    /* 0066c1d9: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066c1db: mov edi, eax */ r_edi = r_eax;
L_0066c1dd:; BB(0x0066c1dd);
    /* 0066c1dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c1de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c1df: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066c1e5: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x66c1eau); f_00714d34();
    /* 0066c1ea: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066c1ed: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066c1f0: cmp edi, dword ptr [ebx + 0x1b8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x1b8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066c1f6: jl 0x66c1dd */ if ((fS!=fO)) goto L_0066c1dd;
L_0066c1f8:; BB(0x0066c1f8);
    /* 0066c1f8: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0066c1fb:; BB(0x0066c1fb);
    /* 0066c1fb: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66c200u); f_00717d68();
    /* 0066c200: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066c206: jmp 0x66bf8f */ goto L_0066bf8f;
L_0066c20b:; BB(0x0066c20b);
    /* 0066c20b: mov esi, dword ptr [0xa8fd0c] */ r_esi = R32((u32)(0xa8fd0cu));
    /* 0066c211: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c213: mov dword ptr [ebx + 0x1d4], eax */ W32((u32)(r_ebx+0x1d4u), r_eax);
    /* 0066c219: mov dword ptr [ebx + 0x1d8], eax */ W32((u32)(r_ebx+0x1d8u), r_eax);
    /* 0066c21f: mov eax, dword ptr [0xa8fd04] */ r_eax = R32((u32)(0xa8fd04u));
    /* 0066c224: mov edx, 1 */ r_edx = 0x1u;
    /* 0066c229: mov word ptr [ebx + 0xe4], dx */ W16((u32)(r_ebx+0xe4u), (u16)r_edx);
    /* 0066c230: mov dword ptr [ebx + 0xd4], esi */ W32((u32)(r_ebx+0xd4u), r_esi);
    /* 0066c236: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 0066c23c: jmp 0x66ba6a */ goto L_0066ba6a;
L_0066c241:; BB(0x0066c241);
    /* 0066c241: mov eax, 3 */ r_eax = 0x3u;
    /* 0066c246: mov word ptr [ebx + 0xe0], ax */ W16((u32)(r_ebx+0xe0u), (u16)r_eax);
    /* 0066c24d: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066c250: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066c251: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066c252: ret  */ FN_RET(0x0066b9e0); r_esp += 4; return;
}

