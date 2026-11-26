#include "protos.h"

void f_0057b218(void) /* sub_57B218 */
{
    FN_ENTER(0x0057b218);
    /* 0057b218: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b219: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0057b21e: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 0057b223: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b225: jle 0x57b248 */ if ((fZ||fS!=fO)) goto L_0057b248;
L_0057b227:; BB(0x0057b227);
    /* 0057b227: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 0057b22c: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b22e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b230: jl 0x57b268 */ if ((fS!=fO)) goto L_0057b268;
L_0057b232:; BB(0x0057b232);
    /* 0057b232: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 0057b237: mov ebx, edx */ r_ebx = r_edx;
    /* 0057b239: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0057b23b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b23d: jl 0x57b268 */ if ((fS!=fO)) goto L_0057b268;
L_0057b23f:; BB(0x0057b23f);
    /* 0057b23f: mov eax, 1 */ r_eax = 0x1u;
    /* 0057b244: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057b245: ret 0xc */ FN_RET(0x0057b218); r_esp += 16; return;
L_0057b248:; BB(0x0057b248);
    /* 0057b248: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 0057b24d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b24f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b251: jle 0x57b288 */ if ((fZ||fS!=fO)) goto L_0057b288;
L_0057b253:; BB(0x0057b253);
    /* 0057b253: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b255: jl 0x57b262 */ if ((fS!=fO)) goto L_0057b262;
L_0057b257:; BB(0x0057b257);
    /* 0057b257: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0057b25c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057b25e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b260: jle 0x57b27f */ if ((fZ||fS!=fO)) goto L_0057b27f;
L_0057b262:; BB(0x0057b262);
    /* 0057b262: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b264: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057b265: ret 0xc */ FN_RET(0x0057b218); r_esp += 16; return;
L_0057b268:; BB(0x0057b268);
    /* 0057b268: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b26a: jle 0x57b272 */ if ((fZ||fS!=fO)) goto L_0057b272;
L_0057b26c:; BB(0x0057b26c);
    /* 0057b26c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b26e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057b26f: ret 0xc */ FN_RET(0x0057b218); r_esp += 16; return;
L_0057b272:; BB(0x0057b272);
    /* 0057b272: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0057b277: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057b279: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b27b: jle 0x57b23f */ if ((fZ||fS!=fO)) goto L_0057b23f;
L_0057b27d:; BB(0x0057b27d);
    /* 0057b27d: jmp 0x57b26c */ goto L_0057b26c;
L_0057b27f:; BB(0x0057b27f);
    /* 0057b27f: mov eax, 1 */ r_eax = 0x1u;
    /* 0057b284: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057b285: ret 0xc */ FN_RET(0x0057b218); r_esp += 16; return;
L_0057b288:; BB(0x0057b288);
    /* 0057b288: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 0057b28d: mov ebx, edx */ r_ebx = r_edx;
    /* 0057b28f: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0057b291: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b293: jge 0x57b27f */ if ((fS==fO)) goto L_0057b27f;
L_0057b295:; BB(0x0057b295);
    /* 0057b295: jmp 0x57b253 */ goto L_0057b253;
}

void f_0057b298(void) /* sub_57B298 */
{
    FN_ENTER(0x0057b298);
    /* 0057b298: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057b29a: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x57b2a0u); call_ind(t); }
    /* 0057b2a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b2a2: je 0x57b2aa */ if (fZ) goto L_0057b2aa;
L_0057b2a4:; BB(0x0057b2a4);
    /* 0057b2a4: mov eax, 1 */ r_eax = 0x1u;
    /* 0057b2a9: ret  */ FN_RET(0x0057b298); r_esp += 4; return;
L_0057b2aa:; BB(0x0057b2aa);
    /* 0057b2aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b2ac: ret  */ FN_RET(0x0057b298); r_esp += 4; return;
}

void f_0057b2b0(void) /* sub_57B2B0 */
{
    FN_ENTER(0x0057b2b0);
    /* 0057b2b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b2b1: mov edi, ecx */ r_edi = r_ecx;
    /* 0057b2b3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057b2b7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b2ba: je 0x57b31b */ if (fZ) goto L_0057b31b;
L_0057b2bc:; BB(0x0057b2bc);
    /* 0057b2bc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b2bf: je 0x57b303 */ if (fZ) goto L_0057b303;
L_0057b2c1:; BB(0x0057b2c1);
    /* 0057b2c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b2c3: jne 0x57b317 */ if (!fZ) goto L_0057b317;
L_0057b2c5:; BB(0x0057b2c5);
    /* 0057b2c5: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b2c7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57b2ccu); f_007aa094();
    /* 0057b2cc: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0057b2d2: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057b2d4: jne 0x57b2e0 */ if (!fZ) goto L_0057b2e0;
L_0057b2d6:; BB(0x0057b2d6);
    /* 0057b2d6: mov dword ptr [edi + 0xc8], 0x3fcccccd */ W32((u32)(r_edi+0xc8u), 0x3fcccccdu);
L_0057b2e0:; BB(0x0057b2e0);
    /* 0057b2e0: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0057b2e3: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0057b2e5: add eax, 0x280 */ {  u32 a = r_eax; u32 b = 0x280u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057b2ea: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0057b2ed: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b2ef: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57b2f5u); call_ind(t); }
    /* 0057b2f5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057b2f7: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b2f9: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x57b2ffu); call_ind(t); }
    /* 0057b2ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057b300: ret 4 */ FN_RET(0x0057b2b0); r_esp += 8; return;
L_0057b303:; BB(0x0057b303);
    /* 0057b303: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0057b306: cmp eax, dword ptr [edi + 0x4c4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x4c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057b30c: jl 0x57b317 */ if ((fS!=fO)) goto L_0057b317;
L_0057b30e:; BB(0x0057b30e);
    /* 0057b30e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b310: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b312: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57b317u); f_0051f62c();
L_0057b317:; BB(0x0057b317);
    /* 0057b317: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057b318: ret 4 */ FN_RET(0x0057b2b0); r_esp += 8; return;
L_0057b31b:; BB(0x0057b31b);
    /* 0057b31b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0057b31d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057b31f: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0057b326: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b328: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x57b32eu); call_ind(t); }
    /* 0057b32e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b330: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0057b336: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057b339: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0057b33f: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b341: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57b346u); f_0051f664();
    /* 0057b346: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0057b349: mov dword ptr [edi + 0x4b8], 0 */ W32((u32)(r_edi+0x4b8u), 0x0u);
    /* 0057b353: add eax, 0x3800 */ {  u32 a = r_eax; u32 b = 0x3800u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057b358: mov dword ptr [edi + 0x4c4], eax */ W32((u32)(r_edi+0x4c4u), r_eax);
    /* 0057b35e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057b35f: ret 4 */ FN_RET(0x0057b2b0); r_esp += 8; return;
}

void f_0057b364(void) /* sub_57B364 */
{
    FN_ENTER(0x0057b364);
    /* 0057b364: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b365: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b366: mov edi, ecx */ r_edi = r_ecx;
    /* 0057b368: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0057b36c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b36f: je 0x57b4a8 */ if (fZ) goto L_0057b4a8;
L_0057b375:; BB(0x0057b375);
    /* 0057b375: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b378: je 0x57b471 */ if (fZ) goto L_0057b471;
L_0057b37e:; BB(0x0057b37e);
    /* 0057b37e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b380: jne 0x57b495 */ if (!fZ) goto L_0057b495;
L_0057b386:; BB(0x0057b386);
    /* 0057b386: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b388: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57b38du); f_007aa094();
    /* 0057b38d: mov eax, dword ptr [edi + 0x4b8] */ r_eax = R32((u32)(r_edi+0x4b8u));
    /* 0057b393: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b395: jne 0x57b421 */ if (!fZ) goto L_0057b421;
L_0057b39b:; BB(0x0057b39b);
    /* 0057b39b: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b3a0: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b3a2: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x57b3a7u); f_00520ea0();
    /* 0057b3a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b3a9: jne 0x57b407 */ if (!fZ) goto L_0057b407;
L_0057b3ab:; BB(0x0057b3ab);
    /* 0057b3ab: mov eax, dword ptr [edi + 0x4bc] */ r_eax = R32((u32)(r_edi+0x4bcu));
    /* 0057b3b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057b3b4: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b3b7: jg 0x57b3c4 */ if ((!fZ&&fS==fO)) goto L_0057b3c4;
L_0057b3b9:; BB(0x0057b3b9);
    /* 0057b3b9: mov dword ptr [edi + 0x4bc], eax */ W32((u32)(r_edi+0x4bcu), r_eax);
    /* 0057b3bf: jmp 0x57b458 */ goto L_0057b458;
L_0057b3c4:; BB(0x0057b3c4);
    /* 0057b3c4: mov eax, dword ptr [edi + 0x3f4] */ r_eax = R32((u32)(r_edi+0x3f4u));
    /* 0057b3ca: mov dword ptr [edi + 0x4bc], 0 */ W32((u32)(r_edi+0x4bcu), 0x0u);
    /* 0057b3d4: lea ecx, [edi + 0x3f4] */ r_ecx = (u32)(r_edi+0x3f4u);
    /* 0057b3da: mov dword ptr [edi + 0x4b8], 1 */ W32((u32)(r_edi+0x4b8u), 0x1u);
    /* 0057b3e4: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x57b3e7u); call_ind(t); }
    /* 0057b3e7: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0057b3ed: lea ecx, [edi + 0x410] */ r_ecx = (u32)(r_edi+0x410u);
    /* 0057b3f3: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x57b3f6u); call_ind(t); }
    /* 0057b3f6: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0057b3fc: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057b3ff: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0057b405: jmp 0x57b458 */ goto L_0057b458;
L_0057b407:; BB(0x0057b407);
    /* 0057b407: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b409: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x57b40eu); f_005213d8();
    /* 0057b40e: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b410: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x57b415u); f_00521410();
    /* 0057b415: mov dword ptr [edi + 0x4b8], 2 */ W32((u32)(r_edi+0x4b8u), 0x2u);
    /* 0057b41f: jmp 0x57b458 */ goto L_0057b458;
L_0057b421:; BB(0x0057b421);
    /* 0057b421: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b424: jne 0x57b458 */ if (!fZ) goto L_0057b458;
L_0057b426:; BB(0x0057b426);
    /* 0057b426: mov eax, dword ptr [edi + 0x410] */ r_eax = R32((u32)(r_edi+0x410u));
    /* 0057b42c: lea ecx, [edi + 0x410] */ r_ecx = (u32)(r_edi+0x410u);
    /* 0057b432: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x57b435u); call_ind(t); }
    /* 0057b435: mov esi, eax */ r_esi = r_eax;
    /* 0057b437: mov edx, dword ptr [edi + 0x3f4] */ r_edx = R32((u32)(r_edi+0x3f4u));
    /* 0057b43d: lea ecx, [edi + 0x3f4] */ r_ecx = (u32)(r_edi+0x3f4u);
    /* 0057b443: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x57b446u); call_ind(t); }
    /* 0057b446: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b448: je 0x57b458 */ if (fZ) goto L_0057b458;
L_0057b44a:; BB(0x0057b44a);
    /* 0057b44a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b44c: je 0x57b458 */ if (fZ) goto L_0057b458;
L_0057b44e:; BB(0x0057b44e);
    /* 0057b44e: mov dword ptr [edi + 0x4b8], 3 */ W32((u32)(r_edi+0x4b8u), 0x3u);
L_0057b458:; BB(0x0057b458);
    /* 0057b458: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057b45a: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b45c: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57b462u); call_ind(t); }
    /* 0057b462: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057b464: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b466: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x57b46cu); call_ind(t); }
    /* 0057b46c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057b46d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057b46e: ret 4 */ FN_RET(0x0057b364); r_esp += 8; return;
L_0057b471:; BB(0x0057b471);
    /* 0057b471: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b473: call 0x57b298 */ r_esp -= 4; W32(r_esp, 0x57b478u); f_0057b298();
    /* 0057b478: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b47a: jne 0x57b495 */ if (!fZ) goto L_0057b495;
L_0057b47c:; BB(0x0057b47c);
    /* 0057b47c: mov eax, dword ptr [edi + 0x4b8] */ r_eax = R32((u32)(r_edi+0x4b8u));
    /* 0057b482: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b485: je 0x57b49a */ if (fZ) goto L_0057b49a;
L_0057b487:; BB(0x0057b487);
    /* 0057b487: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057b48a: jne 0x57b495 */ if (!fZ) goto L_0057b495;
L_0057b48c:; BB(0x0057b48c);
    /* 0057b48c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b48e: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b490: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57b495u); f_0051f62c();
L_0057b495:; BB(0x0057b495);
    /* 0057b495: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057b496: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057b497: ret 4 */ FN_RET(0x0057b364); r_esp += 8; return;
L_0057b49a:; BB(0x0057b49a);
    /* 0057b49a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b49c: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b49e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57b4a3u); f_0051f62c();
    /* 0057b4a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057b4a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057b4a5: ret 4 */ FN_RET(0x0057b364); r_esp += 8; return;
L_0057b4a8:; BB(0x0057b4a8);
    /* 0057b4a8: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0057b4aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057b4ac: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0057b4b3: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b4b5: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x57b4bbu); call_ind(t); }
    /* 0057b4bb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4bd: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0057b4c3: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057b4c6: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0057b4cc: mov ecx, edi */ r_ecx = r_edi;
    /* 0057b4ce: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57b4d3u); f_0051f664();
    /* 0057b4d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b4d5: mov dword ptr [edi + 0x4b8], eax */ W32((u32)(r_edi+0x4b8u), r_eax);
    /* 0057b4db: mov dword ptr [edi + 0x4bc], eax */ W32((u32)(r_edi+0x4bcu), r_eax);
    /* 0057b4e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057b4e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057b4e3: ret 4 */ FN_RET(0x0057b364); r_esp += 8; return;
}

void f_0057b4e8(void) /* sub_57B4E8 */
{
    FN_ENTER(0x0057b4e8);
    /* 0057b4e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4e9: mov ebx, esp */ r_ebx = r_esp;
    /* 0057b4eb: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0057b4ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4f0: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0057b4f3: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0057b4f7: mov ebp, esp */ r_ebp = r_esp;
    /* 0057b4f9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4fb: push 0x8d791a */ { u32 v = 0x8d791au; r_esp -= 4; W32(r_esp, v); }
    /* 0057b500: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057b506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b507: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057b50e: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057b511: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057b514: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057b517: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0057b51a: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 0057b51d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057b520: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0057b523: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b526: je 0x57ba5e */ if (fZ) goto L_0057ba5e;
L_0057b52c:; BB(0x0057b52c);
    /* 0057b52c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b52f: je 0x57b824 */ if (fZ) goto L_0057b824;
L_0057b535:; BB(0x0057b535);
    /* 0057b535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057b537: jne 0x57b835 */ if (!fZ) goto L_0057b835;
L_0057b53d:; BB(0x0057b53d);
    /* 0057b53d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57b542u); f_007aa094();
    /* 0057b542: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b545: mov eax, dword ptr [eax + 0x4b8] */ r_eax = R32((u32)(r_eax+0x4b8u));
    /* 0057b54b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b54d: je 0x57b9f2 */ if (fZ) goto L_0057b9f2;
L_0057b553:; BB(0x0057b553);
    /* 0057b553: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b556: je 0x57b9cb */ if (fZ) goto L_0057b9cb;
L_0057b55c:; BB(0x0057b55c);
    /* 0057b55c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b55f: je 0x57b936 */ if (fZ) goto L_0057b936;
L_0057b565:; BB(0x0057b565);
    /* 0057b565: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b568: je 0x57b667 */ if (fZ) goto L_0057b667;
L_0057b56e:; BB(0x0057b56e);
    /* 0057b56e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b571: jne 0x57b62e */ if (!fZ) goto L_0057b62e;
L_0057b577:; BB(0x0057b577);
    /* 0057b577: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b57a: mov edx, dword ptr [eax + 0x4c0] */ r_edx = R32((u32)(r_eax+0x4c0u));
    /* 0057b580: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057b583: mov dword ptr [eax + 0x4c0], edx */ W32((u32)(r_eax+0x4c0u), r_edx);
    /* 0057b589: mov ecx, dword ptr [0xa7410c] */ r_ecx = R32((u32)(0xa7410cu));
    /* 0057b58f: cmp edx, dword ptr [ecx + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b592: jl 0x57b715 */ if ((fS!=fO)) goto L_0057b715;
L_0057b598:; BB(0x0057b598);
    /* 0057b598: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b59a: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x57b59fu); f_00520f04();
    /* 0057b59f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b5a1: jne 0x57b5b5 */ if (!fZ) goto L_0057b5b5;
L_0057b5a3:; BB(0x0057b5a3);
    /* 0057b5a3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b5a6: mov dword ptr [eax + 0x4b8], 6 */ W32((u32)(r_eax+0x4b8u), 0x6u);
    /* 0057b5b0: jmp 0x57b715 */ goto L_0057b715;
L_0057b5b5:; BB(0x0057b5b5);
    /* 0057b5b5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b5b8: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x57b5bdu); f_005213d8();
    /* 0057b5bd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b5c0: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x57b5c5u); f_00521410();
    /* 0057b5c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b5c8: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0057b5ce: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0057b5d4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057b5d6: fmul qword ptr [0x9275c0] */ ST(0) = ST(0) * R_F64((u32)(0x9275c0u));
    /* 0057b5dc: fdiv qword ptr [0x9275b8] */ ST(0) = ST(0) / R_F64((u32)(0x9275b8u));
    /* 0057b5e2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b5e5: fnstcw word ptr [ebp - 0x58] */ W16((u32)(r_ebp+0xffffffa8u), fcw);
    /* 0057b5e8: movzx eax, word ptr [ebp - 0x58] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa8u));
    /* 0057b5ec: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057b5f1: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0057b5f4: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 0057b5f7: fistp dword ptr [ebp - 0x48] */ W32((u32)(r_ebp+0xffffffb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057b5fa: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 0057b5fd: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057b600: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0057b602: mov dword ptr [ecx + 0x4b8], esi */ W32((u32)(r_ecx+0x4b8u), r_esi);
    /* 0057b608: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057b60d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b60e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b60f: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0057b612: mov dword ptr [ecx + 0x4c4], edx */ W32((u32)(r_ecx+0x4c4u), r_edx);
    /* 0057b618: lea edi, [ecx + 0x38] */ r_edi = (u32)(r_ecx+0x38u);
    /* 0057b61b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b61c: push 0x27d */ { u32 v = 0x27du; r_esp -= 4; W32(r_esp, v); }
    /* 0057b621: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57b626u); f_00814298();
    /* 0057b626: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057b629: jmp 0x57b715 */ goto L_0057b715;
L_0057b62e:; BB(0x0057b62e);
    /* 0057b62e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b631: jne 0x57b715 */ if (!fZ) goto L_0057b715;
L_0057b637:; BB(0x0057b637);
    /* 0057b637: mov eax, dword ptr [0xa7410c] */ r_eax = R32((u32)(0xa7410cu));
    /* 0057b63c: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057b63f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b642: push dword ptr [ecx + 0x4c4] */ { u32 v = R32((u32)(r_ecx+0x4c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057b648: call 0x57bb14 */ r_esp -= 4; W32(r_esp, 0x57b64du); f_0057bb14();
    /* 0057b64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b64f: je 0x57b715 */ if (fZ) goto L_0057b715;
L_0057b655:; BB(0x0057b655);
    /* 0057b655: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b658: mov dword ptr [eax + 0x4b8], 6 */ W32((u32)(r_eax+0x4b8u), 0x6u);
    /* 0057b662: jmp 0x57b715 */ goto L_0057b715;
L_0057b667:; BB(0x0057b667);
    /* 0057b667: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b66a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0057b670: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057b673: je 0x57b67c */ if (fZ) goto L_0057b67c;
L_0057b675:; BB(0x0057b675);
    /* 0057b675: mov eax, 1 */ r_eax = 0x1u;
    /* 0057b67a: jmp 0x57b67e */ goto L_0057b67e;
L_0057b67c:; BB(0x0057b67c);
    /* 0057b67c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0057b67e:; BB(0x0057b67e);
    /* 0057b67e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b680: je 0x57b715 */ if (fZ) goto L_0057b715;
L_0057b686:; BB(0x0057b686);
    /* 0057b686: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b689: add dword ptr [ecx + 0x4bc], 1 */ { u32 ad = (u32)(r_ecx+0x4bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0057b690: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057b692: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0057b699: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x57b69eu); f_00520f04();
    /* 0057b69e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b6a0: je 0x57b730 */ if (fZ) goto L_0057b730;
L_0057b6a6:; BB(0x0057b6a6);
    /* 0057b6a6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b6a9: mov edx, dword ptr [eax + 0x4bc] */ r_edx = R32((u32)(r_eax+0x4bcu));
    /* 0057b6af: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b6b2: jl 0x57b6fa */ if ((fS!=fO)) goto L_0057b6fa;
L_0057b6b4:; BB(0x0057b6b4);
    /* 0057b6b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b6b6: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0057b6bc: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0057b6c2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057b6c4: fmul qword ptr [0x9275c0] */ ST(0) = ST(0) * R_F64((u32)(0x9275c0u));
    /* 0057b6ca: fdiv qword ptr [0x9275b8] */ ST(0) = ST(0) / R_F64((u32)(0x9275b8u));
    /* 0057b6d0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b6d3: fnstcw word ptr [ebp - 0x58] */ W16((u32)(r_ebp+0xffffffa8u), fcw);
    /* 0057b6d6: movzx eax, word ptr [ebp - 0x58] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa8u));
    /* 0057b6da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057b6df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0057b6e2: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 0057b6e5: fistp dword ptr [edx + 0x4c4] */ W32((u32)(r_edx+0x4c4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057b6eb: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 0057b6ee: mov dword ptr [edx + 0x4b8], 5 */ W32((u32)(r_edx+0x4b8u), 0x5u);
    /* 0057b6f8: jmp 0x57b715 */ goto L_0057b715;
L_0057b6fa:; BB(0x0057b6fa);
    /* 0057b6fa: mov edx, eax */ r_edx = r_eax;
    /* 0057b6fc: mov dword ptr [edx + 0x4b8], 4 */ W32((u32)(r_edx+0x4b8u), 0x4u);
    /* 0057b706: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057b708: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0057b70f: mov dword ptr [edx + 0x4c0], eax */ W32((u32)(r_edx+0x4c0u), r_eax);
L_0057b715:; BB(0x0057b715);
    /* 0057b715: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b718: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057b71a: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57b720u); call_ind(t); }
    /* 0057b720: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b723: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057b725: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x57b72bu); call_ind(t); }
    /* 0057b72b: jmp 0x57b835 */ goto L_0057b835;
L_0057b730:; BB(0x0057b730);
    /* 0057b730: fld dword ptr [0x927664] */ FPUSH(R_F32((u32)(0x927664u)));
    /* 0057b736: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0057b739: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0057b73e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057b741: mov ecx, 0xaaa */ r_ecx = 0xaaau;
    /* 0057b746: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x57b74bu); f_0082ddd8();
    /* 0057b74b: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 0057b74e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b751: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0057b754: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x57b759u); f_0082dcbc();
    /* 0057b759: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0057b75c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b75f: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0057b762: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x57b767u); f_0082ddd8();
    /* 0057b767: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0057b76a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0057b76f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057b772: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0057b774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057b776: jle 0x57b85d */ if ((fZ||fS!=fO)) goto L_0057b85d;
L_0057b77c:; BB(0x0057b77c);
    /* 0057b77c: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0057b783: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b784: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x57b789u); f_00520f3c();
    /* 0057b789: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057b78a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b78c: je 0x57b814 */ if (fZ) goto L_0057b814;
L_0057b792:; BB(0x0057b792);
    /* 0057b792: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0057b795: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0057b798: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0057b79b: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0057b79e: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0057b7a1: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0057b7a4: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0057b7a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b7aa: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 0057b7b0: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0057b7b3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x57b7b8u); f_0082f9c4();
    /* 0057b7b8: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0057b7bf: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0057b7c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b7c3: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x57b7c8u); f_007828e4();
    /* 0057b7c8: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0057b7cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057b7ce: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0057b7d1: fcomp dword ptr [0x9276ac] */ fx_compare(ST(0), R_F32((u32)(0x9276acu))); FPOP();
    /* 0057b7d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057b7d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057b7da: jae 0x57b814 */ if (!fC) goto L_0057b814;
L_0057b7dc:; BB(0x0057b7dc);
    /* 0057b7dc: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0057b7df: fcomp dword ptr [ebp - 0x28] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffd8u))); FPOP();
    /* 0057b7e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057b7e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057b7e5: jbe 0x57b814 */ if ((fC||fZ)) goto L_0057b814;
L_0057b7e7:; BB(0x0057b7e7);
    /* 0057b7e7: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 0057b7ea: fmul dword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd0u));
    /* 0057b7ed: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 0057b7f0: fmul dword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffc8u));
    /* 0057b7f3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0057b7f5: fcomp dword ptr [ebp - 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffd4u))); FPOP();
    /* 0057b7f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057b7fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057b7fb: jbe 0x57b814 */ if ((fC||fZ)) goto L_0057b814;
L_0057b7fd:; BB(0x0057b7fd);
    /* 0057b7fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057b800: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0057b806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b807: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b808: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x57b80du); f_00780d3c();
    /* 0057b80d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057b810: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b812: je 0x57b84e */ if (fZ) goto L_0057b84e;
L_0057b814:; BB(0x0057b814);
    /* 0057b814: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057b817: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057b81a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b81c: jl 0x57b77c */ if ((fS!=fO)) goto L_0057b77c;
L_0057b822:; BB(0x0057b822);
    /* 0057b822: jmp 0x57b85d */ goto L_0057b85d;
L_0057b824:; BB(0x0057b824);
    /* 0057b824: mov eax, ecx */ r_eax = r_ecx;
    /* 0057b826: mov edx, dword ptr [eax + 0x4b8] */ r_edx = R32((u32)(r_eax+0x4b8u));
    /* 0057b82c: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057b82f: je 0x57ba42 */ if (fZ) goto L_0057ba42;
L_0057b835:; BB(0x0057b835);
    /* 0057b835: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0057b838: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057b83b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057b83e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057b845: mov esp, ebp */ r_esp = r_ebp;
    /* 0057b847: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057b848: mov esp, ebx */ r_esp = r_ebx;
    /* 0057b84a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057b84b: ret 4 */ FN_RET(0x0057b4e8); r_esp += 8; return;
L_0057b84e:; BB(0x0057b84e);
    /* 0057b84e: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0057b851: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0057b855: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0057b858: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057b85b: jmp 0x57b814 */ goto L_0057b814;
L_0057b85d:; BB(0x0057b85d);
    /* 0057b85d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0057b860: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b865: je 0x57b910 */ if (fZ) goto L_0057b910;
L_0057b86b:; BB(0x0057b86b);
    /* 0057b86b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b86e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b86f: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x57b874u); f_00520fcc();
    /* 0057b874: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b877: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x57b87cu); f_005213d8();
    /* 0057b87c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b87f: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x57b884u); f_00521410();
    /* 0057b884: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b887: mov edx, dword ptr [eax + 0x4bc] */ r_edx = R32((u32)(r_eax+0x4bcu));
    /* 0057b88d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b890: jge 0x57b8b2 */ if ((fS==fO)) goto L_0057b8b2;
L_0057b892:; BB(0x0057b892);
    /* 0057b892: mov edx, eax */ r_edx = r_eax;
    /* 0057b894: mov dword ptr [edx + 0x4b8], 4 */ W32((u32)(r_edx+0x4b8u), 0x4u);
    /* 0057b89e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057b8a0: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0057b8a7: mov dword ptr [edx + 0x4c0], eax */ W32((u32)(r_edx+0x4c0u), r_eax);
    /* 0057b8ad: jmp 0x57b715 */ goto L_0057b715;
L_0057b8b2:; BB(0x0057b8b2);
    /* 0057b8b2: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b8b4: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0057b8ba: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0057b8c0: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057b8c2: fmul qword ptr [0x9275c0] */ ST(0) = ST(0) * R_F64((u32)(0x9275c0u));
    /* 0057b8c8: fdiv qword ptr [0x9275b8] */ ST(0) = ST(0) / R_F64((u32)(0x9275b8u));
    /* 0057b8ce: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b8d1: fnstcw word ptr [ebp - 0x58] */ W16((u32)(r_ebp+0xffffffa8u), fcw);
    /* 0057b8d4: movzx eax, word ptr [ebp - 0x58] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa8u));
    /* 0057b8d8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057b8dd: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0057b8e0: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 0057b8e3: fistp dword ptr [edx + 0x4c4] */ W32((u32)(r_edx+0x4c4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057b8e9: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 0057b8ec: mov dword ptr [edx + 0x4b8], 5 */ W32((u32)(r_edx+0x4b8u), 0x5u);
    /* 0057b8f6: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 0057b8f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057b8fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8fe: push 0x27d */ { u32 v = 0x27du; r_esp -= 4; W32(r_esp, v); }
    /* 0057b903: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57b908u); f_00814298();
    /* 0057b908: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057b90b: jmp 0x57b715 */ goto L_0057b715;
L_0057b910:; BB(0x0057b910);
    /* 0057b910: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b913: mov eax, dword ptr [ecx + 0x4c4] */ r_eax = R32((u32)(r_ecx+0x4c4u));
    /* 0057b919: mov dword ptr [ecx + 0x4b8], 5 */ W32((u32)(r_ecx+0x4b8u), 0x5u);
    /* 0057b923: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057b928: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0057b92b: mov dword ptr [ecx + 0x4c4], edx */ W32((u32)(r_ecx+0x4c4u), r_edx);
    /* 0057b931: jmp 0x57b715 */ goto L_0057b715;
L_0057b936:; BB(0x0057b936);
    /* 0057b936: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b93b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b93e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57b943u); f_007aaa30();
    /* 0057b943: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b945: je 0x57b715 */ if (fZ) goto L_0057b715;
L_0057b94b:; BB(0x0057b94b);
    /* 0057b94b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b94e: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 0057b951: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057b953: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b954: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b955: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b956: push 0x279 */ { u32 v = 0x279u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b95b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57b960u); f_00814298();
    /* 0057b960: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0057b967: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b96c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57b971u); f_005caba4();
    /* 0057b971: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057b974: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0057b977: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b979: je 0x57b9b2 */ if (fZ) goto L_0057b9b2;
L_0057b97b:; BB(0x0057b97b);
    /* 0057b97b: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0057b982: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057b989: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b98c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b98d: mov edx, dword ptr [esi + 0x4c4] */ r_edx = R32((u32)(r_esi+0x4c4u));
    /* 0057b993: lea ecx, [esi + 0x4a0] */ r_ecx = (u32)(r_esi+0x4a0u);
    /* 0057b999: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057b99f: movzx edi, dx */ r_edi = (u32)(u16)r_edx;
    /* 0057b9a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b9a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b9a4: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b9a6: call 0x57d0f4 */ r_esp -= 4; W32(r_esp, 0x57b9abu); f_0057d0f4();
    /* 0057b9ab: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0057b9b2:; BB(0x0057b9b2);
    /* 0057b9b2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057b9b9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b9bc: mov dword ptr [eax + 0x4b8], 3 */ W32((u32)(r_eax+0x4b8u), 0x3u);
    /* 0057b9c6: jmp 0x57b715 */ goto L_0057b715;
L_0057b9cb:; BB(0x0057b9cb);
    /* 0057b9cb: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b9d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b9d3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57b9d8u); f_007aaa30();
    /* 0057b9d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b9da: je 0x57b715 */ if (fZ) goto L_0057b715;
L_0057b9e0:; BB(0x0057b9e0);
    /* 0057b9e0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b9e3: mov dword ptr [eax + 0x4b8], 2 */ W32((u32)(r_eax+0x4b8u), 0x2u);
    /* 0057b9ed: jmp 0x57b715 */ goto L_0057b715;
L_0057b9f2:; BB(0x0057b9f2);
    /* 0057b9f2: mov eax, dword ptr [0xa7410c] */ r_eax = R32((u32)(0xa7410cu));
    /* 0057b9f7: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057b9fa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b9fd: push dword ptr [ecx + 0x4c4] */ { u32 v = R32((u32)(r_ecx+0x4c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057ba03: call 0x57bb14 */ r_esp -= 4; W32(r_esp, 0x57ba08u); f_0057bb14();
    /* 0057ba08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ba0a: je 0x57b715 */ if (fZ) goto L_0057b715;
L_0057ba10:; BB(0x0057ba10);
    /* 0057ba10: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ba13: mov dword ptr [edx + 0x4b8], 1 */ W32((u32)(r_edx+0x4b8u), 0x1u);
    /* 0057ba1d: mov eax, 2 */ r_eax = 0x2u;
    /* 0057ba22: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0057ba29: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ba2e: lea ecx, [edx + 0x4a0] */ r_ecx = (u32)(r_edx+0x4a0u);
    /* 0057ba34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ba35: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57ba3au); f_0050b510();
    /* 0057ba3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ba3d: jmp 0x57b715 */ goto L_0057b715;
L_0057ba42:; BB(0x0057ba42);
    /* 0057ba42: call 0x57b298 */ r_esp -= 4; W32(r_esp, 0x57ba47u); f_0057b298();
    /* 0057ba47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057ba49: jne 0x57b835 */ if (!fZ) goto L_0057b835;
L_0057ba4f:; BB(0x0057ba4f);
    /* 0057ba4f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ba52: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ba54: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57ba59u); f_0051f62c();
    /* 0057ba59: jmp 0x57b835 */ goto L_0057b835;
L_0057ba5e:; BB(0x0057ba5e);
    /* 0057ba5e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057ba60: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x57ba66u); call_ind(t); }
    /* 0057ba66: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ba69: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ba6b: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 0057ba71: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057ba74: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0057ba7a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57ba7fu); f_0051f664();
    /* 0057ba7f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ba82: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x57ba87u); f_00520f04();
    /* 0057ba87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057ba89: jne 0x57ba9d */ if (!fZ) goto L_0057ba9d;
L_0057ba8b:; BB(0x0057ba8b);
    /* 0057ba8b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ba8e: mov dword ptr [eax + 0x4b8], 6 */ W32((u32)(r_eax+0x4b8u), 0x6u);
    /* 0057ba98: jmp 0x57b835 */ goto L_0057b835;
L_0057ba9d:; BB(0x0057ba9d);
    /* 0057ba9d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057baa0: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 0057baa6: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 0057baac: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057baae: fmul qword ptr [0x9275c0] */ ST(0) = ST(0) * R_F64((u32)(0x9275c0u));
    /* 0057bab4: fdiv qword ptr [0x9275b8] */ ST(0) = ST(0) / R_F64((u32)(0x9275b8u));
    /* 0057baba: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057babd: fnstcw word ptr [ebp - 0x58] */ W16((u32)(r_ebp+0xffffffa8u), fcw);
    /* 0057bac0: movzx eax, word ptr [ebp - 0x58] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffa8u));
    /* 0057bac4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057bac9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0057bacc: fldcw word ptr [ebp - 0x50] */ fcw = R16((u32)(r_ebp+0xffffffb0u));
    /* 0057bacf: fistp dword ptr [ebp - 0x48] */ W32((u32)(r_ebp+0xffffffb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057bad2: fldcw word ptr [ebp - 0x58] */ fcw = R16((u32)(r_ebp+0xffffffa8u));
    /* 0057bad5: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057bad8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057bada: mov dword ptr [esi + 0x4b8], ecx */ W32((u32)(r_esi+0x4b8u), r_ecx);
    /* 0057bae0: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057bae5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bae6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bae7: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0057baea: mov dword ptr [esi + 0x4c4], edx */ W32((u32)(r_esi+0x4c4u), r_edx);
    /* 0057baf0: mov dword ptr [esi + 0x4bc], ecx */ W32((u32)(r_esi+0x4bcu), r_ecx);
    /* 0057baf6: mov word ptr [esi + 0xb8], cx */ W16((u32)(r_esi+0xb8u), (u16)r_ecx);
    /* 0057bafd: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057bb00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb01: push 0x27d */ { u32 v = 0x27du; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb06: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57bb0bu); f_00814298();
    /* 0057bb0b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057bb0e: jmp 0x57b835 */ goto L_0057b835;
}

void f_0057bb14(void) /* sub_57BB14 */
{
    FN_ENTER(0x0057bb14);
    /* 0057bb14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb18: mov edi, ecx */ r_edi = r_ecx;
    /* 0057bb1a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0057bb1c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0057bb20: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0057bb24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb25: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057bb28: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x57bb2du); f_007a900c();
    /* 0057bb2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057bb30: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057bb32: jle 0x57bb39 */ if ((fZ||fS!=fO)) goto L_0057bb39;
L_0057bb34:; BB(0x0057bb34);
    /* 0057bb34: add dword ptr [edi + 0x60], ebp */ { u32 ad = (u32)(r_edi+0x60u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057bb37: jmp 0x57bb53 */ goto L_0057bb53;
L_0057bb39:; BB(0x0057bb39);
    /* 0057bb39: mov edx, ebp */ r_edx = r_ebp;
    /* 0057bb3b: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057bb3d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057bb3f: jge 0x57bb4b */ if ((fS==fO)) goto L_0057bb4b;
L_0057bb41:; BB(0x0057bb41);
    /* 0057bb41: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0057bb44: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057bb46: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0057bb49: jmp 0x57bb53 */ goto L_0057bb53;
L_0057bb4b:; BB(0x0057bb4b);
    /* 0057bb4b: mov dword ptr [edi + 0x60], esi */ W32((u32)(r_edi+0x60u), r_esi);
    /* 0057bb4e: mov ebx, 1 */ r_ebx = 0x1u;
L_0057bb53:; BB(0x0057bb53);
    /* 0057bb53: mov eax, ebx */ r_eax = r_ebx;
    /* 0057bb55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057bb56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057bb57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057bb58: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057bb59: ret 8 */ FN_RET(0x0057bb14); r_esp += 12; return;
}

void f_0057bb5c(void) /* sub_57BB5C */
{
    FN_ENTER(0x0057bb5c);
    /* 0057bb5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb5d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057bb60: mov esi, ecx */ r_esi = r_ecx;
    /* 0057bb62: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0057bb66: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bb69: je 0x57bd74 */ if (fZ) goto L_0057bd74;
L_0057bb6f:; BB(0x0057bb6f);
    /* 0057bb6f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bb72: je 0x57bd2e */ if (fZ) goto L_0057bd2e;
L_0057bb78:; BB(0x0057bb78);
    /* 0057bb78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bb7a: jne 0x57bd5d */ if (!fZ) goto L_0057bd5d;
L_0057bb80:; BB(0x0057bb80);
    /* 0057bb80: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bb82: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57bb87u); f_007aa094();
    /* 0057bb87: mov eax, dword ptr [esi + 0x4b8] */ r_eax = R32((u32)(r_esi+0x4b8u));
    /* 0057bb8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bb8f: je 0x57bc57 */ if (fZ) goto L_0057bc57;
L_0057bb95:; BB(0x0057bb95);
    /* 0057bb95: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bb98: jne 0x57bc1e */ if (!fZ) goto L_0057bc1e;
L_0057bb9e:; BB(0x0057bb9e);
    /* 0057bb9e: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bba3: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bba5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57bbaau); f_007aaa30();
    /* 0057bbaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bbac: je 0x57bbf2 */ if (fZ) goto L_0057bbf2;
L_0057bbae:; BB(0x0057bbae);
    /* 0057bbae: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bbb0: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x57bbb5u); f_00521324();
    /* 0057bbb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bbb7: je 0x57bbf2 */ if (fZ) goto L_0057bbf2;
L_0057bbb9:; BB(0x0057bbb9);
    /* 0057bbb9: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bbbe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bbbf: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 0057bbc5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057bbc7: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x57bbcau); call_ind(t); }
    /* 0057bbca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bbcc: je 0x57bbf2 */ if (fZ) goto L_0057bbf2;
L_0057bbce:; BB(0x0057bbce);
    /* 0057bbce: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bbd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bbd4: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 0057bbda: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057bbdc: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x57bbdfu); call_ind(t); }
    /* 0057bbdf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057bbe1: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bbe6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bbe7: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 0057bbed: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057bbef: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x57bbf2u); call_ind(t); }
L_0057bbf2:; BB(0x0057bbf2);
    /* 0057bbf2: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0057bbf8: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057bbfa: je 0x57bd13 */ if (fZ) goto L_0057bd13;
L_0057bc00:; BB(0x0057bc00);
    /* 0057bc00: mov dword ptr [esi + 0x4b8], 2 */ W32((u32)(r_esi+0x4b8u), 0x2u);
    /* 0057bc0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057bc0c: mov dword ptr [esi + 0x4bc], eax */ W32((u32)(r_esi+0x4bcu), r_eax);
    /* 0057bc12: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0057bc19: jmp 0x57bd13 */ goto L_0057bd13;
L_0057bc1e:; BB(0x0057bc1e);
    /* 0057bc1e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bc21: jne 0x57bd13 */ if (!fZ) goto L_0057bd13;
L_0057bc27:; BB(0x0057bc27);
    /* 0057bc27: mov eax, dword ptr [esi + 0x4bc] */ r_eax = R32((u32)(r_esi+0x4bcu));
    /* 0057bc2d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057bc30: mov dword ptr [esi + 0x4bc], eax */ W32((u32)(r_esi+0x4bcu), r_eax);
    /* 0057bc36: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057bc39: jl 0x57bd13 */ if ((fS!=fO)) goto L_0057bd13;
L_0057bc3f:; BB(0x0057bc3f);
    /* 0057bc3f: mov dword ptr [esi + 0x4b8], 3 */ W32((u32)(r_esi+0x4b8u), 0x3u);
    /* 0057bc49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057bc4b: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0057bc52: jmp 0x57bd13 */ goto L_0057bd13;
L_0057bc57:; BB(0x0057bc57);
    /* 0057bc57: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bc59: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x57bc5eu); f_0052126c();
    /* 0057bc5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bc60: je 0x57bd13 */ if (fZ) goto L_0057bd13;
L_0057bc66:; BB(0x0057bc66);
    /* 0057bc66: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bc68: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x57bc6du); f_005213d8();
    /* 0057bc6d: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bc6f: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x57bc74u); f_00521410();
    /* 0057bc74: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 0057bc7a: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 0057bc80: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057bc82: fmul qword ptr [0x9275b0] */ ST(0) = ST(0) * R_F64((u32)(0x9275b0u));
    /* 0057bc88: fdiv qword ptr [0x9275a8] */ ST(0) = ST(0) / R_F64((u32)(0x9275a8u));
    /* 0057bc8e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0057bc91: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0057bc95: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057bc9a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057bc9e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0057bca2: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057bca6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0057bca9: mov eax, dword ptr [0xa7410c] */ r_eax = R32((u32)(0xa7410cu));
    /* 0057bcae: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bcb0: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0057bcb4: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057bcb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bcb8: call 0x57bb14 */ r_esp -= 4; W32(r_esp, 0x57bcbdu); f_0057bb14();
    /* 0057bcbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bcbf: jne 0x57bcde */ if (!fZ) goto L_0057bcde;
L_0057bcc1:; BB(0x0057bcc1);
    /* 0057bcc1: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 0057bcc7: fcomp dword ptr [0x92764c] */ fx_compare(ST(0), R_F32((u32)(0x92764cu))); FPOP();
    /* 0057bccd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057bccf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057bcd0: jb 0x57bd0c */ if (fC) goto L_0057bd0c;
L_0057bcd2:; BB(0x0057bcd2);
    /* 0057bcd2: mov dword ptr [esi + 0x4b8], 3 */ W32((u32)(r_esi+0x4b8u), 0x3u);
    /* 0057bcdc: jmp 0x57bd0c */ goto L_0057bd0c;
L_0057bcde:; BB(0x0057bcde);
    /* 0057bcde: mov eax, 1 */ r_eax = 0x1u;
    /* 0057bce3: mov dword ptr [esi + 0x4b8], eax */ W32((u32)(r_esi+0x4b8u), r_eax);
    /* 0057bce9: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0057bcf0: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0057bcf3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057bcf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bcf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bcf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057bcf8: push 0x27a */ { u32 v = 0x27au; r_esp -= 4; W32(r_esp, v); }
    /* 0057bcfd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57bd02u); f_00814298();
    /* 0057bd02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bd03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bd04: call 0x57cbc4 */ r_esp -= 4; W32(r_esp, 0x57bd09u); f_0057cbc4();
    /* 0057bd09: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057bd0c:; BB(0x0057bd0c);
    /* 0057bd0c: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bd0e: call 0x57bdb4 */ r_esp -= 4; W32(r_esp, 0x57bd13u); f_0057bdb4();
L_0057bd13:; BB(0x0057bd13);
    /* 0057bd13: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0057bd15: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bd17: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57bd1du); call_ind(t); }
    /* 0057bd1d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0057bd1f: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bd21: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x57bd27u); call_ind(t); }
    /* 0057bd27: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057bd2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057bd2b: ret 4 */ FN_RET(0x0057bb5c); r_esp += 8; return;
L_0057bd2e:; BB(0x0057bd2e);
    /* 0057bd2e: mov eax, dword ptr [esi + 0x4b8] */ r_eax = R32((u32)(r_esi+0x4b8u));
    /* 0057bd34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bd36: jne 0x57bd4f */ if (!fZ) goto L_0057bd4f;
L_0057bd38:; BB(0x0057bd38);
    /* 0057bd38: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bd3a: call 0x57b298 */ r_esp -= 4; W32(r_esp, 0x57bd3fu); f_0057b298();
    /* 0057bd3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bd41: jne 0x57bd5d */ if (!fZ) goto L_0057bd5d;
L_0057bd43:; BB(0x0057bd43);
    /* 0057bd43: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 0057bd49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bd4b: jne 0x57bd5d */ if (!fZ) goto L_0057bd5d;
L_0057bd4d:; BB(0x0057bd4d);
    /* 0057bd4d: jmp 0x57bd64 */ goto L_0057bd64;
L_0057bd4f:; BB(0x0057bd4f);
    /* 0057bd4f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bd52: jne 0x57bd5d */ if (!fZ) goto L_0057bd5d;
L_0057bd54:; BB(0x0057bd54);
    /* 0057bd54: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bd56: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bd58: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57bd5du); f_0051f62c();
L_0057bd5d:; BB(0x0057bd5d);
    /* 0057bd5d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057bd60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057bd61: ret 4 */ FN_RET(0x0057bb5c); r_esp += 8; return;
L_0057bd64:; BB(0x0057bd64);
    /* 0057bd64: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bd66: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bd68: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57bd6du); f_0051f62c();
    /* 0057bd6d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057bd70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057bd71: ret 4 */ FN_RET(0x0057bb5c); r_esp += 8; return;
L_0057bd74:; BB(0x0057bd74);
    /* 0057bd74: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0057bd76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057bd78: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0057bd7f: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bd81: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x57bd87u); call_ind(t); }
    /* 0057bd87: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bd89: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 0057bd8f: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057bd92: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
    /* 0057bd98: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bd9a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57bd9fu); f_0051f664();
    /* 0057bd9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057bda1: mov dword ptr [esi + 0x4b8], eax */ W32((u32)(r_esi+0x4b8u), r_eax);
    /* 0057bda7: mov dword ptr [esi + 0x4bc], eax */ W32((u32)(r_esi+0x4bcu), r_eax);
    /* 0057bdad: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057bdb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057bdb1: ret 4 */ FN_RET(0x0057bb5c); r_esp += 8; return;
}

void f_0057bdb4(void) /* sub_57BDB4 */
{
    FN_ENTER(0x0057bdb4);
    /* 0057bdb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bdb5: mov esi, ecx */ r_esi = r_ecx;
    /* 0057bdb7: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bdb9: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bdbe: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57bdc3u); f_007aaa30();
    /* 0057bdc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bdc5: jne 0x57bdd7 */ if (!fZ) goto L_0057bdd7;
L_0057bdc7:; BB(0x0057bdc7);
    /* 0057bdc7: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bdcc: mov ecx, esi */ r_ecx = r_esi;
    /* 0057bdce: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57bdd3u); f_007aaa30();
    /* 0057bdd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057bdd5: je 0x57bdec */ if (fZ) goto L_0057bdec;
L_0057bdd7:; BB(0x0057bdd7);
    /* 0057bdd7: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057bdda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057bddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057bddd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057bdde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bddf: push 0x278 */ { u32 v = 0x278u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bde4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57bde9u); f_00814298();
    /* 0057bde9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0057bdec:; BB(0x0057bdec);
    /* 0057bdec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057bded: ret  */ FN_RET(0x0057bdb4); r_esp += 4; return;
}

void f_0057bdf0(void) /* sub_57BDF0 */
{
    FN_ENTER(0x0057bdf0);
    /* 0057bdf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bdf1: mov ebx, esp */ r_ebx = r_esp;
    /* 0057bdf3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0057bdf6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bdf7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057bdf8: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057bdfb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057bdfd: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0057be00: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be03: je 0x57c354 */ if (fZ) goto L_0057c354;
L_0057be09:; BB(0x0057be09);
    /* 0057be09: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be0c: je 0x57c290 */ if (fZ) goto L_0057c290;
L_0057be12:; BB(0x0057be12);
    /* 0057be12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be14: jne 0x57c2f6 */ if (!fZ) goto L_0057c2f6;
L_0057be1a:; BB(0x0057be1a);
    /* 0057be1a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057be1c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57be21u); f_007aa094();
    /* 0057be21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057be23: call 0x57bdb4 */ r_esp -= 4; W32(r_esp, 0x57be28u); f_0057bdb4();
    /* 0057be28: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057be2d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057be2f: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x57be34u); f_00520ea0();
    /* 0057be34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be36: je 0x57be46 */ if (fZ) goto L_0057be46;
L_0057be38:; BB(0x0057be38);
    /* 0057be38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057be3a: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x57be3fu); f_005213d8();
    /* 0057be3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057be41: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x57be46u); f_00521410();
L_0057be46:; BB(0x0057be46);
    /* 0057be46: mov eax, dword ptr [ebp + 0x4bc] */ r_eax = R32((u32)(r_ebp+0x4bcu));
    /* 0057be4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be4e: je 0x57c1d6 */ if (fZ) goto L_0057c1d6;
L_0057be54:; BB(0x0057be54);
    /* 0057be54: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be57: je 0x57c239 */ if (fZ) goto L_0057c239;
L_0057be5d:; BB(0x0057be5d);
    /* 0057be5d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be60: jne 0x57c283 */ if (!fZ) goto L_0057c283;
L_0057be66:; BB(0x0057be66);
    /* 0057be66: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x57be6bu); f_00520e6c();
    /* 0057be6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be6d: jne 0x57c01e */ if (!fZ) goto L_0057c01e;
L_0057be73:; BB(0x0057be73);
    /* 0057be73: fld dword ptr [ebp + 0x3e0] */ FPUSH(R_F32((u32)(r_ebp+0x3e0u)));
    /* 0057be79: fadd dword ptr [ebp + 0x4cc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4ccu));
    /* 0057be7f: fcom dword ptr [ebp + 0x3e4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3e4u))); 
    /* 0057be85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057be87: fstp dword ptr [ebp + 0x4cc] */ W_F32((u32)(r_ebp+0x4ccu), ST(0)); FPOP();
    /* 0057be8d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057be8e: jb 0x57c00a */ if (fC) goto L_0057c00a;
L_0057be94:; BB(0x0057be94);
    /* 0057be94: fld dword ptr [0x92763c] */ FPUSH(R_F32((u32)(0x92763cu)));
    /* 0057be9a: mov eax, dword ptr [ebp + 0x4b8] */ r_eax = R32((u32)(r_ebp+0x4b8u));
    /* 0057bea0: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0057bea4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057bea7: mov dword ptr [ebp + 0x4cc], 0 */ W32((u32)(r_ebp+0x4ccu), 0x0u);
    /* 0057beb1: mov dword ptr [ebp + 0x4b8], eax */ W32((u32)(r_ebp+0x4b8u), r_eax);
    /* 0057beb7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057beba: jl 0x57c000 */ if ((fS!=fO)) goto L_0057c000;
L_0057bec0:; BB(0x0057bec0);
    /* 0057bec0: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0057bec5: mov ecx, 0xaaa */ r_ecx = 0xaaau;
    /* 0057beca: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x57becfu); f_0082ddd8();
    /* 0057becf: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0057bed3: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0057bed6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x57bedbu); f_0082dcbc();
    /* 0057bedb: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0057bedf: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0057bee2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x57bee7u); f_0082ddd8();
    /* 0057bee7: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057beed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057beef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057bef1: jle 0x57c3c1 */ if ((fZ||fS!=fO)) goto L_0057c3c1;
L_0057bef7:; BB(0x0057bef7);
    /* 0057bef7: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0057befb: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0057beff: mov edi, eax */ r_edi = r_eax;
    /* 0057bf01: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0057bf05: mov ebp, edx */ r_ebp = r_edx;
    /* 0057bf07: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
L_0057bf0b:; BB(0x0057bf0b);
    /* 0057bf0b: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0057bf12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bf13: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x57bf18u); f_00520f3c();
    /* 0057bf18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057bf19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bf1b: je 0x57bfb5 */ if (fZ) goto L_0057bfb5;
L_0057bf21:; BB(0x0057bf21);
    /* 0057bf21: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0057bf24: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0057bf27: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0057bf2a: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0057bf2e: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0057bf31: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0057bf35: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0057bf39: lea edx, [ecx + 0x300] */ r_edx = (u32)(r_ecx+0x300u);
    /* 0057bf3f: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0057bf43: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0057bf46: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x57bf4bu); f_0082f9c4();
    /* 0057bf4b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0057bf53: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0057bf56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bf57: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x57bf5cu); f_007828e4();
    /* 0057bf5c: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0057bf60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057bf63: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0057bf67: fcomp dword ptr [0x9276ac] */ fx_compare(ST(0), R_F32((u32)(0x9276acu))); FPOP();
    /* 0057bf6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057bf6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057bf70: jae 0x57bfb5 */ if (!fC) goto L_0057bfb5;
L_0057bf72:; BB(0x0057bf72);
    /* 0057bf72: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0057bf76: fcomp dword ptr [esp + 0x50] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x50u))); FPOP();
    /* 0057bf7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057bf7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057bf7d: jbe 0x57bfb5 */ if ((fC||fZ)) goto L_0057bfb5;
L_0057bf7f:; BB(0x0057bf7f);
    /* 0057bf7f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0057bf82: fmul dword ptr [esp + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4cu));
    /* 0057bf86: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0057bf8a: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 0057bf8e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0057bf90: fcomp dword ptr [esp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x48u))); FPOP();
    /* 0057bf94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057bf96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057bf97: jbe 0x57bfb5 */ if ((fC||fZ)) goto L_0057bfb5;
L_0057bf99:; BB(0x0057bf99);
    /* 0057bf99: lea ecx, [esi + 0x300] */ r_ecx = (u32)(r_esi+0x300u);
    /* 0057bf9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bfa0: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 0057bfa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bfa5: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x57bfaau); f_00780d3c();
    /* 0057bfaa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057bfad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bfaf: je 0x57c301 */ if (fZ) goto L_0057c301;
L_0057bfb5:; BB(0x0057bfb5);
    /* 0057bfb5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057bfb8: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057bfba: jl 0x57bf0b */ if ((fS!=fO)) goto L_0057bf0b;
L_0057bfc0:; BB(0x0057bfc0);
    /* 0057bfc0: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0057bfc4: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0057bfc8: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_0057bfcc:; BB(0x0057bfcc);
    /* 0057bfcc: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bfd2: je 0x57c000 */ if (fZ) goto L_0057c000;
L_0057bfd4:; BB(0x0057bfd4);
    /* 0057bfd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bfd5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057bfd7: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x57bfdcu); f_00520fcc();
    /* 0057bfdc: mov dword ptr [ebp + 0x4b8], 0 */ W32((u32)(r_ebp+0x4b8u), 0x0u);
    /* 0057bfe6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057bfe8: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x57bfedu); f_005213d8();
    /* 0057bfed: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057bfef: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x57bff4u); f_00521410();
    /* 0057bff4: mov dword ptr [ebp + 0x4bc], 3 */ W32((u32)(r_ebp+0x4bcu), 0x3u);
    /* 0057bffe: jmp 0x57c00a */ goto L_0057c00a;
L_0057c000:; BB(0x0057c000);
    /* 0057c000: mov dword ptr [ebp + 0x4bc], 0 */ W32((u32)(r_ebp+0x4bcu), 0x0u);
L_0057c00a:; BB(0x0057c00a);
    /* 0057c00a: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 0057c010: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c013: je 0x57c316 */ if (fZ) goto L_0057c316;
L_0057c019:; BB(0x0057c019);
    /* 0057c019: jmp 0x57c283 */ goto L_0057c283;
L_0057c01e:; BB(0x0057c01e);
    /* 0057c01e: fld dword ptr [0x92763c] */ FPUSH(R_F32((u32)(0x92763cu)));
    /* 0057c024: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0057c028: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0057c02d: mov ecx, 0xaaa */ r_ecx = 0xaaau;
    /* 0057c032: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x57c037u); f_0082ddd8();
    /* 0057c037: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0057c03b: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0057c03e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x57c043u); f_0082dcbc();
    /* 0057c043: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0057c047: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0057c04a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x57c04fu); f_0082ddd8();
    /* 0057c04f: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0057c055: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c057: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057c059: jle 0x57c3c8 */ if ((fZ||fS!=fO)) goto L_0057c3c8;
L_0057c05f:; BB(0x0057c05f);
    /* 0057c05f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0057c063: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0057c067: mov edi, eax */ r_edi = r_eax;
    /* 0057c069: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0057c06d: mov ebp, edx */ r_ebp = r_edx;
    /* 0057c06f: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
L_0057c073:; BB(0x0057c073);
    /* 0057c073: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0057c07a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c07b: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x57c080u); f_00520f3c();
    /* 0057c080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c081: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c083: je 0x57c121 */ if (fZ) goto L_0057c121;
L_0057c089:; BB(0x0057c089);
    /* 0057c089: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0057c08c: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0057c090: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0057c093: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0057c097: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0057c09a: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0057c09e: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0057c0a2: lea edx, [ecx + 0x300] */ r_edx = (u32)(r_ecx+0x300u);
    /* 0057c0a8: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0057c0ac: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0057c0b0: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x57c0b5u); f_0082f9c4();
    /* 0057c0b5: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0057c0bd: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0057c0c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c0c2: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x57c0c7u); f_007828e4();
    /* 0057c0c7: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0057c0cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c0ce: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0057c0d2: fcomp dword ptr [0x9276ac] */ fx_compare(ST(0), R_F32((u32)(0x9276acu))); FPOP();
    /* 0057c0d8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057c0da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057c0db: jae 0x57c121 */ if (!fC) goto L_0057c121;
L_0057c0dd:; BB(0x0057c0dd);
    /* 0057c0dd: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0057c0e1: fcomp dword ptr [esp + 0x50] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x50u))); FPOP();
    /* 0057c0e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057c0e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057c0e8: jbe 0x57c121 */ if ((fC||fZ)) goto L_0057c121;
L_0057c0ea:; BB(0x0057c0ea);
    /* 0057c0ea: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0057c0ee: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 0057c0f2: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0057c0f6: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 0057c0fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0057c0fc: fcomp dword ptr [esp + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4cu))); FPOP();
    /* 0057c100: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057c102: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057c103: jbe 0x57c121 */ if ((fC||fZ)) goto L_0057c121;
L_0057c105:; BB(0x0057c105);
    /* 0057c105: lea ecx, [esi + 0x300] */ r_ecx = (u32)(r_esi+0x300u);
    /* 0057c10b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c10c: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0057c110: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c111: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x57c116u); f_00780d3c();
    /* 0057c116: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c11b: je 0x57c334 */ if (fZ) goto L_0057c334;
L_0057c121:; BB(0x0057c121);
    /* 0057c121: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057c124: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057c126: jl 0x57c073 */ if ((fS!=fO)) goto L_0057c073;
L_0057c12c:; BB(0x0057c12c);
    /* 0057c12c: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0057c130: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 0057c134: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
L_0057c138:; BB(0x0057c138);
    /* 0057c138: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c13e: je 0x57c168 */ if (fZ) goto L_0057c168;
L_0057c140:; BB(0x0057c140);
    /* 0057c140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057c141: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c143: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x57c148u); f_00520fcc();
    /* 0057c148: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c14a: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x57c14fu); f_005213d8();
    /* 0057c14f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c151: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x57c156u); f_00521410();
    /* 0057c156: mov edx, dword ptr [ebp + 0x4c4] */ r_edx = R32((u32)(r_ebp+0x4c4u));
    /* 0057c15c: mov dword ptr [ebp + 0x4bc], 3 */ W32((u32)(r_ebp+0x4bcu), 0x3u);
    /* 0057c166: jmp 0x57c1c1 */ goto L_0057c1c1;
L_0057c168:; BB(0x0057c168);
    /* 0057c168: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c16a: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x57c16fu); f_00520f04();
    /* 0057c16f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c171: je 0x57c1b8 */ if (fZ) goto L_0057c1b8;
L_0057c173:; BB(0x0057c173);
    /* 0057c173: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0057c179: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 0057c17f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057c181: fmul qword ptr [0x9275a0] */ ST(0) = ST(0) * R_F64((u32)(0x9275a0u));
    /* 0057c187: fdiv qword ptr [0x927598] */ ST(0) = ST(0) / R_F64((u32)(0x927598u));
    /* 0057c18d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0057c191: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0057c196: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057c19b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0057c19f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0057c1a3: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057c1a7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0057c1ab: movzx edx, word ptr [esp + 0x28] */ r_edx = (u32)R16((u32)(r_esp+0x28u));
    /* 0057c1b0: mov dword ptr [ebp + 0x4c4], edx */ W32((u32)(r_ebp+0x4c4u), r_edx);
    /* 0057c1b6: jmp 0x57c1c1 */ goto L_0057c1c1;
L_0057c1b8:; BB(0x0057c1b8);
    /* 0057c1b8: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0057c1bb: mov dword ptr [ebp + 0x4c4], edx */ W32((u32)(r_ebp+0x4c4u), r_edx);
L_0057c1c1:; BB(0x0057c1c1);
    /* 0057c1c1: mov eax, dword ptr [0xa7410c] */ r_eax = R32((u32)(0xa7410cu));
    /* 0057c1c6: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c1c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c1ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c1cc: call 0x57bb14 */ r_esp -= 4; W32(r_esp, 0x57c1d1u); f_0057bb14();
    /* 0057c1d1: jmp 0x57c283 */ goto L_0057c283;
L_0057c1d6:; BB(0x0057c1d6);
    /* 0057c1d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c1d8: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x57c1ddu); f_00520f04();
    /* 0057c1dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c1df: je 0x57c226 */ if (fZ) goto L_0057c226;
L_0057c1e1:; BB(0x0057c1e1);
    /* 0057c1e1: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0057c1e7: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 0057c1ed: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057c1ef: fmul qword ptr [0x9275a0] */ ST(0) = ST(0) * R_F64((u32)(0x9275a0u));
    /* 0057c1f5: fdiv qword ptr [0x927598] */ ST(0) = ST(0) / R_F64((u32)(0x927598u));
    /* 0057c1fb: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0057c1ff: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0057c204: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057c209: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0057c20d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0057c211: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057c215: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0057c219: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0057c21e: mov dword ptr [ebp + 0x4c4], eax */ W32((u32)(r_ebp+0x4c4u), r_eax);
    /* 0057c224: jmp 0x57c22f */ goto L_0057c22f;
L_0057c226:; BB(0x0057c226);
    /* 0057c226: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 0057c229: mov dword ptr [ebp + 0x4c4], eax */ W32((u32)(r_ebp+0x4c4u), r_eax);
L_0057c22f:; BB(0x0057c22f);
    /* 0057c22f: mov dword ptr [ebp + 0x4bc], 1 */ W32((u32)(r_ebp+0x4bcu), 0x1u);
L_0057c239:; BB(0x0057c239);
    /* 0057c239: mov eax, dword ptr [0xa7410c] */ r_eax = R32((u32)(0xa7410cu));
    /* 0057c23e: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c241: push dword ptr [ebp + 0x4c4] */ { u32 v = R32((u32)(r_ebp+0x4c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c247: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c249: call 0x57bb14 */ r_esp -= 4; W32(r_esp, 0x57c24eu); f_0057bb14();
    /* 0057c24e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c250: je 0x57c278 */ if (fZ) goto L_0057c278;
L_0057c252:; BB(0x0057c252);
    /* 0057c252: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0057c255: mov dword ptr [ebp + 0x4bc], 2 */ W32((u32)(r_ebp+0x4bcu), 0x2u);
    /* 0057c25f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x57c264u); f_0082dcbc();
    /* 0057c264: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0057c267: fstp dword ptr [ebp + 0x4d4] */ W_F32((u32)(r_ebp+0x4d4u), ST(0)); FPOP();
    /* 0057c26d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x57c272u); f_0082ddd8();
    /* 0057c272: fstp dword ptr [ebp + 0x4dc] */ W_F32((u32)(r_ebp+0x4dcu), ST(0)); FPOP();
L_0057c278:; BB(0x0057c278);
    /* 0057c278: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057c27b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c27d: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57c283u); call_ind(t); }
L_0057c283:; BB(0x0057c283);
    /* 0057c283: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057c286: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c288: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x57c28eu); call_ind(t); }
    /* 0057c28e: jmp 0x57c2f6 */ goto L_0057c2f6;
L_0057c290:; BB(0x0057c290);
    /* 0057c290: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c292: call 0x57b298 */ r_esp -= 4; W32(r_esp, 0x57c297u); f_0057b298();
    /* 0057c297: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c299: jne 0x57c2f6 */ if (!fZ) goto L_0057c2f6;
L_0057c29b:; BB(0x0057c29b);
    /* 0057c29b: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0057c2a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c2a3: je 0x57c349 */ if (fZ) goto L_0057c349;
L_0057c2a9:; BB(0x0057c2a9);
    /* 0057c2a9: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0057c2af: fcomp dword ptr [0x927638] */ fx_compare(ST(0), R_F32((u32)(0x927638u))); FPOP();
    /* 0057c2b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057c2b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057c2b8: jbe 0x57c2d0 */ if ((fC||fZ)) goto L_0057c2d0;
L_0057c2ba:; BB(0x0057c2ba);
    /* 0057c2ba: mov eax, dword ptr [ebp + 0x4bc] */ r_eax = R32((u32)(r_ebp+0x4bcu));
    /* 0057c2c0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c2c3: jne 0x57c2f6 */ if (!fZ) goto L_0057c2f6;
L_0057c2c5:; BB(0x0057c2c5);
    /* 0057c2c5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c2c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c2c9: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57c2ceu); f_0051f62c();
    /* 0057c2ce: jmp 0x57c2f6 */ goto L_0057c2f6;
L_0057c2d0:; BB(0x0057c2d0);
    /* 0057c2d0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c2d2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x57c2d7u); f_007751b0();
    /* 0057c2d7: fcomp dword ptr [0x927634] */ fx_compare(ST(0), R_F32((u32)(0x927634u))); FPOP();
    /* 0057c2dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057c2df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057c2e0: jae 0x57c2ed */ if (!fC) goto L_0057c2ed;
L_0057c2e2:; BB(0x0057c2e2);
    /* 0057c2e2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c2e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c2e6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57c2ebu); f_0051f62c();
    /* 0057c2eb: jmp 0x57c2f6 */ goto L_0057c2f6;
L_0057c2ed:; BB(0x0057c2ed);
    /* 0057c2ed: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c2ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c2f1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57c2f6u); f_0051f62c();
L_0057c2f6:; BB(0x0057c2f6);
    /* 0057c2f6: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057c2f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c2fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057c2fb: mov esp, ebx */ r_esp = r_ebx;
    /* 0057c2fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057c2fe: ret 4 */ FN_RET(0x0057bdf0); r_esp += 8; return;
L_0057c301:; BB(0x0057c301);
    /* 0057c301: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0057c305: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0057c309: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0057c30d: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 0057c311: jmp 0x57bfb5 */ goto L_0057bfb5;
L_0057c316:; BB(0x0057c316);
    /* 0057c316: push dword ptr [ebp + 0x3e0] */ { u32 v = R32((u32)(r_ebp+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c31c: push dword ptr [ebp + 0x4dc] */ { u32 v = R32((u32)(r_ebp+0x4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c322: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c324: push dword ptr [ebp + 0x4d4] */ { u32 v = R32((u32)(r_ebp+0x4d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057c32a: call 0x5209d4 */ r_esp -= 4; W32(r_esp, 0x57c32fu); f_005209d4();
    /* 0057c32f: jmp 0x57c283 */ goto L_0057c283;
L_0057c334:; BB(0x0057c334);
    /* 0057c334: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0057c338: movzx ecx, word ptr [esi + 0x1c] */ r_ecx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0057c33c: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0057c340: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0057c344: jmp 0x57c121 */ goto L_0057c121;
L_0057c349:; BB(0x0057c349);
    /* 0057c349: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c34b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c34d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57c352u); f_0051f62c();
    /* 0057c352: jmp 0x57c2f6 */ goto L_0057c2f6;
L_0057c354:; BB(0x0057c354);
    /* 0057c354: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0057c357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c359: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0057c360: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c362: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x57c368u); call_ind(t); }
    /* 0057c368: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c36a: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0057c370: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057c373: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0057c379: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057c37b: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57c380u); f_0051f664();
    /* 0057c380: mov dword ptr [ebp + 0x4cc], 0 */ W32((u32)(r_ebp+0x4ccu), 0x0u);
    /* 0057c38a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c38c: mov dword ptr [ebp + 0x4b8], eax */ W32((u32)(r_ebp+0x4b8u), r_eax);
    /* 0057c392: mov dword ptr [ebp + 0x4c4], eax */ W32((u32)(r_ebp+0x4c4u), r_eax);
    /* 0057c398: mov dword ptr [ebp + 0x4d4], 0 */ W32((u32)(r_ebp+0x4d4u), 0x0u);
    /* 0057c3a2: mov dword ptr [ebp + 0x4bc], eax */ W32((u32)(r_ebp+0x4bcu), r_eax);
    /* 0057c3a8: mov dword ptr [ebp + 0x4d8], 0 */ W32((u32)(r_ebp+0x4d8u), 0x0u);
    /* 0057c3b2: mov dword ptr [ebp + 0x4dc], 0 */ W32((u32)(r_ebp+0x4dcu), 0x0u);
    /* 0057c3bc: jmp 0x57c2f6 */ goto L_0057c2f6;
L_0057c3c1:; BB(0x0057c3c1);
    /* 0057c3c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057c3c3: jmp 0x57bfcc */ goto L_0057bfcc;
L_0057c3c8:; BB(0x0057c3c8);
    /* 0057c3c8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057c3ca: jmp 0x57c138 */ goto L_0057c138;
}

