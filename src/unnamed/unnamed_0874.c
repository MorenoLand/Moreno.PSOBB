#include "protos.h"

void f_0087421c(void) /* sub_87421C */
{
    FN_ENTER(0x0087421c);
    /* 0087421c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00874220: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00874224: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00874225: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00874226: mov ebp, edx */ r_ebp = r_edx;
    /* 00874228: mov esi, eax */ r_esi = r_eax;
    /* 0087422a: add ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087422d: and ebp, 0xfffffff8 */ {  u32 a = r_ebp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00874230: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 00874233: lea ecx, [ebp + edx] */ r_ecx = (u32)(r_ebp+r_edx);
    /* 00874237: cmp ecx, dword ptr [esi + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087423a: jle 0x874271 */ if ((fZ||fS!=fO)) goto L_00874271;
L_0087423c:; BB(0x0087423c);
    /* 0087423c: cmp dword ptr [esi + 0x44], 0 */ {  u32 a = R32((u32)(r_esi+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874240: je 0x87425e */ if (fZ) goto L_0087425e;
L_00874242:; BB(0x00874242);
    /* 00874242: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00874244: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x874249u); f_00859c55();
    /* 00874249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087424a: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0087424d: add dword ptr [esi + 0x50], ecx */ { u32 ad = (u32)(r_esi+0x50u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00874250: mov ecx, dword ptr [esi + 0x54] */ r_ecx = R32((u32)(r_esi+0x54u));
    /* 00874253: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00874256: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 00874259: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0087425b: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
L_0087425e:; BB(0x0087425e);
    /* 0087425e: mov dword ptr [esi + 0x4c], ebp */ W32((u32)(r_esi+0x4cu), r_ebp);
    /* 00874261: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00874262: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x874267u); f_00859c55();
    /* 00874267: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00874268: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0087426b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087426d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0087426f: jmp 0x874274 */ goto L_00874274;
L_00874271:; BB(0x00874271);
    /* 00874271: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
L_00874274:; BB(0x00874274);
    /* 00874274: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00874276: mov eax, edx */ r_eax = r_edx;
    /* 00874278: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 0087427b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087427c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087427d: ret  */ FN_RET(0x0087421c); r_esp += 4; return;
}

void f_00874280(void) /* sub_874280 */
{
    FN_ENTER(0x00874280);
L_00874280:; BB(0x00874280);
    /* 00874280: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087428a: jne 0x8742a8 */ if (!fZ) goto L_008742a8;
L_00874290:; BB(0x00874290);
    /* 00874290: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087429a: jne 0x874f6c */ if (!fZ) goto L_00874f6c;
L_008742a0:; BB(0x008742a0);
    /* 008742a0: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8742a5u); f_0086b8a0();
    /* 008742a5: jmp 0x874280 */ goto L_00874280;
L_008742a8:; BB(0x008742a8);
    /* 008742a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008742a9: mov ebx, esp */ r_ebx = r_esp;
    /* 008742ab: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008742ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008742af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008742b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008742b1: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008742b4: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 008742b7: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 008742ba: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008742bd: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 008742c0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008742c3: mov edx, dword ptr [edi + 0x68] */ r_edx = R32((u32)(r_edi+0x68u));
    /* 008742c6: mov eax, dword ptr [ecx + 0xe78] */ r_eax = R32((u32)(r_ecx+0xe78u));
    /* 008742cc: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 008742d0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008742d2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008742d6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008742da: je 0x8742e9 */ if (fZ) goto L_008742e9;
L_008742dc:; BB(0x008742dc);
    /* 008742dc: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 008742df: cmp eax, dword ptr [edi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008742e2: jge 0x8742f8 */ if ((fS==fO)) goto L_008742f8;
L_008742e4:; BB(0x008742e4);
    /* 008742e4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008742e7: je 0x8742f8 */ if (fZ) goto L_008742f8;
L_008742e9:; BB(0x008742e9);
    /* 008742e9: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 008742ee: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008742f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008742f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008742f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008742f4: mov esp, ebx */ r_esp = r_ebx;
    /* 008742f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008742f7: ret  */ FN_RET(0x00874280); r_esp += 4; return;
L_008742f8:; BB(0x008742f8);
    /* 008742f8: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 008742fb: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 008742fe: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00874301: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 00874304: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 00874307: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 0087430a: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0087430d: lea ebp, [edx + 1] */ r_ebp = (u32)(r_edx+0x1u);
    /* 00874310: mov dword ptr [edi + 0x2c], 0xffffffff */ W32((u32)(r_edi+0x2cu), 0xffffffffu);
    /* 00874317: or ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00874319: je 0x87432f */ if (fZ) goto L_0087432f;
L_0087431b:; BB(0x0087431b);
    /* 0087431b: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0087431e: mov ebp, dword ptr [esi + 0x3c] */ r_ebp = R32((u32)(r_esi+0x3cu));
    /* 00874321: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00874324: adc eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00874327: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00874329: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087432b: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0087432d: je 0x874350 */ if (fZ) goto L_00874350;
L_0087432f:; BB(0x0087432f);
    /* 0087432f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00874334: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00874338: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0087433b: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 0087433e: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 00874344: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0087434a: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0087434d: mov ebp, dword ptr [esi + 0x3c] */ r_ebp = R32((u32)(r_esi+0x3cu));
L_00874350:; BB(0x00874350);
    /* 00874350: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 00874353: mov dword ptr [edi + 0x44], ebp */ W32((u32)(r_edi+0x44u), r_ebp);
    /* 00874356: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00874359: je 0x874d2f */ if (fZ) goto L_00874d2f;
L_0087435f:; BB(0x0087435f);
    /* 0087435f: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00874362: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00874366: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 00874369: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0087436d: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00874371: mov eax, dword ptr [ebp + edx*4] */ r_eax = R32((u32)(r_ebp+r_edx*4));
    /* 00874375: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00874377: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0087437b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0087437e: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00874380: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 00874383: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00874387: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 0087438a: sar ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0087438c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087438d: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 00874390: add eax, dword ptr [esi + 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x58u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00874393: adc edx, dword ptr [edi + 0x4c] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_edi+0x4cu)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00874396: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 00874399: mov dword ptr [edi + 0x4c], edx */ W32((u32)(r_edi+0x4cu), r_edx);
    /* 0087439c: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 0087439f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008743a0: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 008743a3: add eax, dword ptr [esi + 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008743a6: adc edx, dword ptr [edi + 0x54] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 008743a9: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 008743ac: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 008743af: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 008743b2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008743b3: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 008743b6: add eax, dword ptr [esi + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008743b9: adc edx, dword ptr [edi + 0x5c] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_edi+0x5cu)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 008743bc: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 008743bf: mov dword ptr [edi + 0x5c], edx */ W32((u32)(r_edi+0x5cu), r_edx);
    /* 008743c2: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 008743c5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008743c6: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 008743c9: add eax, dword ptr [esi + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x64u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008743cc: adc edx, dword ptr [edi + 0x64] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_edi+0x64u)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 008743cf: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 008743d2: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 008743d5: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008743d8: mov dword ptr [edi + 0x64], edx */ W32((u32)(r_edi+0x64u), r_edx);
    /* 008743db: mov edx, 0 */ r_edx = 0x0u;
    /* 008743e0: cmovne edx, ebp */ if (!fZ) { r_edx = r_ebp; }
    /* 008743e3: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 008743e7: mov edx, 0 */ r_edx = 0x0u;
    /* 008743ec: cmove edx, ebp */ if (fZ) { r_edx = r_ebp; }
    /* 008743ef: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 008743f3: mov edx, 0 */ r_edx = 0x0u;
    /* 008743f8: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 008743fc: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 008743ff: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874403: jle 0x874cd7 */ if ((fZ||fS!=fO)) goto L_00874cd7;
L_00874409:; BB(0x00874409);
    /* 00874409: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0087440d: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00874410: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874412: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00874416: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0087441a: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0087441d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087441f: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 00874423: lea edi, [ecx - 4] */ r_edi = (u32)(r_ecx+0xfffffffcu);
    /* 00874426: mov eax, ecx */ r_eax = r_ecx;
    /* 00874428: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0087442c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087442f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874431: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00874433: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00874436: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874438: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0087443b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087443d: mov edi, ebp */ r_edi = r_ebp;
    /* 0087443f: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00874442: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00874444: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00874446: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874448: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087444a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087444c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00874450: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874452: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00874454: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00874458: lea eax, [edx + edi] */ r_eax = (u32)(r_edx+r_edi);
    /* 0087445b: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0087445f: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 00874463: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00874466: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874468: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0087446c: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00874470: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00874473: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874475: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00874478: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0087447b: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0087447f: lea edx, [ecx - 6] */ r_edx = (u32)(r_ecx+0xfffffffau);
    /* 00874482: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00874486: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0087448a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087448c: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00874490: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 00874493: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00874497: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0087449b: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0087449f: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 008744a3: jmp 0x8744ab */ goto L_008744ab;
L_008744a5:; BB(0x008744a5);
    /* 008744a5: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008744a8: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
L_008744ab:; BB(0x008744ab);
    /* 008744ab: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008744ae: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008744b2: je 0x874752 */ if (fZ) goto L_00874752;
L_008744b8:; BB(0x008744b8);
    /* 008744b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008744ba: je 0x874609 */ if (fZ) goto L_00874609;
L_008744c0:; BB(0x008744c0);
    /* 008744c0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008744c4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008744c7: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008744cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008744cc: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x8744d1u); f_0088417c();
    /* 008744d1: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 008744d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008744d8: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 008744db: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008744de: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 008744e2: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008744e5: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 008744e8: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 008744ec: lea ecx, [ebp + eax] */ r_ecx = (u32)(r_ebp+r_eax);
    /* 008744f0: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008744f3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008744f5: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 008744f9: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008744fb: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 008744fe: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00874502: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00874504: jle 0x874b2f */ if ((fZ||fS!=fO)) goto L_00874b2f;
L_0087450a:; BB(0x0087450a);
    /* 0087450a: mov eax, ecx */ r_eax = r_ecx;
    /* 0087450c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087450f: jl 0x874c59 */ if ((fS!=fO)) goto L_00874c59;
L_00874515:; BB(0x00874515);
    /* 00874515: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00874519: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0087451d: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00874520: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00874524: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00874526: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00874528: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 0087452c: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
L_00874530:; BB(0x00874530);
    /* 00874530: movss xmm1, dword ptr [ecx + ebp*4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00874535: mulss xmm1, dword ptr [eax + edi - 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 0087453b: movss xmm0, dword ptr [edx + ebp*4] */ { u32 v = R32((u32)(r_edx+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00874540: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 00874544: mulss xmm0, dword ptr [esi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00874549: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 0087454d: movss dword ptr [ecx + ebp*4], xmm1 */ W32((u32)(r_ecx+r_ebp*4), xmm[1].d[0]);
    /* 00874552: movss xmm3, dword ptr [ecx + ebp*4 + 4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4+0x4u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00874558: mulss xmm3, dword ptr [eax + edi - 8] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi+0xfffffff8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 0087455e: movss xmm2, dword ptr [edx + ebp*4 + 4] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x4u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00874564: mulss xmm2, dword ptr [esi + ebp*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 0087456a: addss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 0087456e: movss dword ptr [ecx + ebp*4 + 4], xmm3 */ W32((u32)(r_ecx+r_ebp*4+0x4u), xmm[3].d[0]);
    /* 00874574: movss xmm6, dword ptr [ecx + ebp*4 + 8] */ { u32 v = R32((u32)(r_ecx+r_ebp*4+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 0087457a: mulss xmm6, dword ptr [eax + edi - 0xc] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi+0xfffffff4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 00874580: movss xmm5, dword ptr [edx + ebp*4 + 8] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 00874586: mulss xmm5, dword ptr [esi + ebp*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 0087458c: addss xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 00874590: movss dword ptr [ecx + ebp*4 + 8], xmm6 */ W32((u32)(r_ecx+r_ebp*4+0x8u), xmm[6].d[0]);
    /* 00874596: add edi, -0xc */ {  u32 a = r_edi; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00874599: add ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087459c: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
    /* 008745a0: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008745a2: jle 0x874530 */ if ((fZ||fS!=fO)) goto L_00874530;
L_008745a4:; BB(0x008745a4);
    /* 008745a4: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_008745a8:; BB(0x008745a8);
    /* 008745a8: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 008745ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008745ae: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008745b0: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 008745b4: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008745b8: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 008745bc: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
L_008745c0:; BB(0x008745c0);
    /* 008745c0: movss xmm1, dword ptr [edx + ebp*4] */ { u32 v = R32((u32)(r_edx+r_ebp*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008745c5: mulss xmm1, dword ptr [ecx + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008745cb: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 008745cf: movss xmm0, dword ptr [edi + ebp*4] */ { u32 v = R32((u32)(r_edi+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008745d4: mulss xmm0, dword ptr [esi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008745d9: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 008745dd: movss dword ptr [edx + ebp*4], xmm1 */ W32((u32)(r_edx+r_ebp*4), xmm[1].d[0]);
    /* 008745e2: add ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008745e5: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008745e6: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008745ea: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008745ec: jl 0x8745c0 */ if ((fS!=fO)) goto L_008745c0;
L_008745ee:; BB(0x008745ee);
    /* 008745ee: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 008745f2: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008745f5: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 008745f7: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008745fa: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 008745fd: mov eax, dword ptr [ecx + esi*2] */ r_eax = R32((u32)(r_ecx+r_esi*2));
    /* 00874600: mov edx, dword ptr [ebp + esi*2] */ r_edx = R32((u32)(r_ebp+r_esi*2));
    /* 00874604: jmp 0x874b2f */ goto L_00874b2f;
L_00874609:; BB(0x00874609);
    /* 00874609: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0087460d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00874610: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00874614: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00874615: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x87461au); f_0088417c();
    /* 0087461a: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0087461e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00874621: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00874624: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00874627: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0087462b: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0087462e: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00874631: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 00874635: lea ecx, [ebp + eax] */ r_ecx = (u32)(r_ebp+r_eax);
    /* 00874639: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0087463c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0087463e: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00874642: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00874644: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 00874647: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0087464b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087464d: jle 0x874b2f */ if ((fZ||fS!=fO)) goto L_00874b2f;
L_00874653:; BB(0x00874653);
    /* 00874653: mov eax, ecx */ r_eax = r_ecx;
    /* 00874655: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874658: jl 0x874c69 */ if ((fS!=fO)) goto L_00874c69;
L_0087465e:; BB(0x0087465e);
    /* 0087465e: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00874662: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00874666: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00874669: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0087466d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087466f: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00874671: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 00874675: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
L_00874679:; BB(0x00874679);
    /* 00874679: movss xmm1, dword ptr [ecx + ebp*4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087467e: mulss xmm1, dword ptr [eax + edi - 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00874684: movss xmm0, dword ptr [edx + ebp*4] */ { u32 v = R32((u32)(r_edx+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00874689: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 0087468d: mulss xmm0, dword ptr [esi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00874692: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00874696: movss dword ptr [ecx + ebp*4], xmm1 */ W32((u32)(r_ecx+r_ebp*4), xmm[1].d[0]);
    /* 0087469b: movss xmm3, dword ptr [ecx + ebp*4 + 4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4+0x4u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008746a1: mulss xmm3, dword ptr [eax + edi - 8] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi+0xfffffff8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008746a7: movss xmm2, dword ptr [edx + ebp*4 + 4] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x4u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008746ad: mulss xmm2, dword ptr [esi + ebp*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008746b3: addss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008746b7: movss dword ptr [ecx + ebp*4 + 4], xmm3 */ W32((u32)(r_ecx+r_ebp*4+0x4u), xmm[3].d[0]);
    /* 008746bd: movss xmm6, dword ptr [ecx + ebp*4 + 8] */ { u32 v = R32((u32)(r_ecx+r_ebp*4+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008746c3: mulss xmm6, dword ptr [eax + edi - 0xc] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi+0xfffffff4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 008746c9: movss xmm5, dword ptr [edx + ebp*4 + 8] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008746cf: mulss xmm5, dword ptr [esi + ebp*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008746d5: addss xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 008746d9: movss dword ptr [ecx + ebp*4 + 8], xmm6 */ W32((u32)(r_ecx+r_ebp*4+0x8u), xmm[6].d[0]);
    /* 008746df: add edi, -0xc */ {  u32 a = r_edi; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008746e2: add ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008746e5: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 008746e9: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008746eb: jle 0x874679 */ if ((fZ||fS!=fO)) goto L_00874679;
L_008746ed:; BB(0x008746ed);
    /* 008746ed: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
L_008746f1:; BB(0x008746f1);
    /* 008746f1: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 008746f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008746f7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008746f9: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 008746fd: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00874701: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 00874705: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_00874709:; BB(0x00874709);
    /* 00874709: movss xmm1, dword ptr [edx + ebp*4] */ { u32 v = R32((u32)(r_edx+r_ebp*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087470e: mulss xmm1, dword ptr [ecx + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00874714: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00874718: movss xmm0, dword ptr [edi + ebp*4] */ { u32 v = R32((u32)(r_edi+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087471d: mulss xmm0, dword ptr [esi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00874722: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00874726: movss dword ptr [edx + ebp*4], xmm1 */ W32((u32)(r_edx+r_ebp*4), xmm[1].d[0]);
    /* 0087472b: add ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087472e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087472f: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00874733: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874735: jl 0x874709 */ if ((fS!=fO)) goto L_00874709;
L_00874737:; BB(0x00874737);
    /* 00874737: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 0087473b: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0087473e: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00874740: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00874743: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00874746: mov eax, dword ptr [ecx + esi*2] */ r_eax = R32((u32)(r_ecx+r_esi*2));
    /* 00874749: mov edx, dword ptr [ebp + esi*2] */ r_edx = R32((u32)(r_ebp+r_esi*2));
    /* 0087474d: jmp 0x874b2f */ goto L_00874b2f;
L_00874752:; BB(0x00874752);
    /* 00874752: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874754: je 0x8749eb */ if (fZ) goto L_008749eb;
L_0087475a:; BB(0x0087475a);
    /* 0087475a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0087475e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00874761: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00874765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00874766: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x87476bu); f_0088417c();
    /* 0087476b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087476c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00874770: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00874773: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 00874776: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 0087477a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0087477d: mov edi, dword ptr [esi + edx*4] */ r_edi = R32((u32)(r_esi+r_edx*4));
    /* 00874780: add edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00874784: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00874787: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00874789: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0087478d: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00874790: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00874792: add ecx, dword ptr [esp + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874796: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0087479a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087479c: jle 0x874862 */ if ((fZ||fS!=fO)) goto L_00874862;
L_008747a2:; BB(0x008747a2);
    /* 008747a2: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008747a5: jl 0x874cbe */ if ((fS!=fO)) goto L_00874cbe;
L_008747ab:; BB(0x008747ab);
    /* 008747ab: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 008747af: lea esi, [eax + ebp] */ r_esi = (u32)(r_eax+r_ebp);
    /* 008747b2: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 008747b5: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008747b7: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_008747b9:; BB(0x008747b9);
    /* 008747b9: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008747bd: movss xmm1, dword ptr [edi + edx*4] */ { u32 v = R32((u32)(r_edi+r_edx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008747c2: mulss xmm1, dword ptr [esi + ebp - 4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008747c8: movss xmm0, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008747cd: mulss xmm0, dword ptr [eax + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008747d2: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 008747d6: movss dword ptr [edi + edx*4], xmm1 */ W32((u32)(r_edi+r_edx*4), xmm[1].d[0]);
    /* 008747db: movss xmm3, dword ptr [edi + edx*4 + 4] */ { u32 v = R32((u32)(r_edi+r_edx*4+0x4u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008747e1: mulss xmm3, dword ptr [esi + ebp - 8] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp+0xfffffff8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008747e7: movss xmm2, dword ptr [ecx + edx*4 + 4] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0x4u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008747ed: mulss xmm2, dword ptr [eax + edx*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edx*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008747f3: addss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008747f7: movss dword ptr [edi + edx*4 + 4], xmm3 */ W32((u32)(r_edi+r_edx*4+0x4u), xmm[3].d[0]);
    /* 008747fd: movss xmm6, dword ptr [edi + edx*4 + 8] */ { u32 v = R32((u32)(r_edi+r_edx*4+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 00874803: mulss xmm6, dword ptr [esi + ebp - 0xc] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp+0xfffffff4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 00874809: movss xmm4, dword ptr [ecx + edx*4 + 8] */ { u32 v = R32((u32)(r_ecx+r_edx*4+0x8u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087480f: mulss xmm4, dword ptr [eax + edx*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edx*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 00874815: addss xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 00874819: movss dword ptr [edi + edx*4 + 8], xmm6 */ W32((u32)(r_edi+r_edx*4+0x8u), xmm[6].d[0]);
    /* 0087481f: add ebp, -0xc */ {  u32 a = r_ebp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00874822: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874825: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00874829: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087482b: jle 0x8747b9 */ if ((fZ||fS!=fO)) goto L_008747b9;
L_0087482d:; BB(0x0087482d);
    /* 0087482d: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00874830: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00874832: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_00874834:; BB(0x00874834);
    /* 00874834: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00874838: movss xmm1, dword ptr [edi + edx*4] */ { u32 v = R32((u32)(r_edi+r_edx*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087483d: mulss xmm1, dword ptr [ebp + esi - 4] */ { XMM s; s.d[0] = R32((u32)(r_ebp+r_esi+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00874843: movss xmm0, dword ptr [ecx + edx*4] */ { u32 v = R32((u32)(r_ecx+r_edx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00874848: mulss xmm0, dword ptr [eax + edx*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0087484d: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00874851: movss dword ptr [edi + edx*4], xmm1 */ W32((u32)(r_edi+r_edx*4), xmm[1].d[0]);
    /* 00874856: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00874859: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087485a: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0087485e: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874860: jl 0x874834 */ if ((fS!=fO)) goto L_00874834;
L_00874862:; BB(0x00874862);
    /* 00874862: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00874866: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874868: jge 0x874ca3 */ if ((fS==fO)) goto L_00874ca3;
L_0087486e:; BB(0x0087486e);
    /* 0087486e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00874870: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00874874: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00874878: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0087487a: cmp ebp, 0xb */ {  u32 a = r_ebp; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087487d: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 00874881: jb 0x874c94 */ if (fC) goto L_00874c94;
L_00874887:; BB(0x00874887);
    /* 00874887: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0087488a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087488c: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00874890: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00874894: lea edi, [ebp + esi] */ r_edi = (u32)(r_ebp+r_esi);
    /* 00874898: lea ebp, [ecx + eax] */ r_ebp = (u32)(r_ecx+r_eax);
    /* 0087489b: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0087489d: ja 0x874f4b */ if ((!fC&&!fZ)) goto L_00874f4b;
L_008748a3:; BB(0x008748a3);
    /* 008748a3: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 008748a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008748a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008748ab: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 008748af: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008748b1: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 008748b5: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008748b8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008748ba: mov edx, ecx */ r_edx = r_ecx;
    /* 008748bc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008748be: je 0x8748f9 */ if (fZ) goto L_008748f9;
L_008748c0:; BB(0x008748c0);
    /* 008748c0: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008748c6: jne 0x87496b */ if (!fZ) goto L_0087496b;
L_008748cc:; BB(0x008748cc);
    /* 008748cc: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008748ce: lea eax, [esi + 0x10] */ r_eax = (u32)(r_esi+0x10u);
    /* 008748d1: lea edx, [ecx + esi + 0x10] */ r_edx = (u32)(r_ecx+r_esi+0x10u);
    /* 008748d5: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008748d8: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008748da: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 008748de: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 008748e2: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
L_008748e6:; BB(0x008748e6);
    /* 008748e6: mov edx, dword ptr [ecx + edi*4] */ r_edx = R32((u32)(r_ecx+r_edi*4));
    /* 008748e9: mov dword ptr [esi + edi*4], edx */ W32((u32)(r_esi+r_edi*4), r_edx);
    /* 008748ec: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008748ed: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008748ef: jb 0x8748e6 */ if (fC) goto L_008748e6;
L_008748f1:; BB(0x008748f1);
    /* 008748f1: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 008748f5: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
L_008748f9:; BB(0x008748f9);
    /* 008748f9: and ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008748fc: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008748fe: add ebp, dword ptr [esp + 0x60] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00874902: test dl, 0xf */ {  u32 a = (u8)r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00874905: jne 0x874933 */ if (!fZ) goto L_00874933;
L_00874907:; BB(0x00874907);
    /* 00874907: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 0087490b: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
L_0087490f:; BB(0x0087490f);
    /* 0087490f: prefetchnta byte ptr [ecx + edx*4 + 0x40] */ ;
    /* 00874914: movaps xmm0, xmmword ptr [ecx + edx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edx*4), 16); xmm[0] = s; }
    /* 00874918: movaps xmmword ptr [eax + edx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_edx*4), &xmm[0], 16);
    /* 0087491c: movaps xmm1, xmmword ptr [ecx + edx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edx*4+0x10u), 16); xmm[1] = s; }
    /* 00874921: movaps xmmword ptr [eax + edx*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_edx*4+0x10u), &xmm[1], 16);
    /* 00874926: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874929: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087492b: jb 0x87490f */ if (fC) goto L_0087490f;
L_0087492d:; BB(0x0087492d);
    /* 0087492d: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00874931: jmp 0x87495d */ goto L_0087495d;
L_00874933:; BB(0x00874933);
    /* 00874933: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00874937: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
L_0087493b:; BB(0x0087493b);
    /* 0087493b: movups xmm0, xmmword ptr [ecx + edx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edx*4), 16); xmm[0] = s; }
    /* 0087493f: prefetchnta byte ptr [ecx + edx*4 + 0x40] */ ;
    /* 00874944: movaps xmmword ptr [eax + edx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_edx*4), &xmm[0], 16);
    /* 00874948: movups xmm1, xmmword ptr [ecx + edx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edx*4+0x10u), 16); xmm[1] = s; }
    /* 0087494d: movaps xmmword ptr [eax + edx*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_edx*4+0x10u), &xmm[1], 16);
    /* 00874952: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874955: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874957: jb 0x87493b */ if (fC) goto L_0087493b;
L_00874959:; BB(0x00874959);
    /* 00874959: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
L_0087495d:; BB(0x0087495d);
    /* 0087495d: mov eax, edx */ r_eax = r_edx;
    /* 0087495f: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00874963: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874965: jae 0x874c79 */ if (!fC) goto L_00874c79;
L_0087496b:; BB(0x0087496b);
    /* 0087496b: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0087496f: sub eax, dword ptr [esp + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00874973: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874976: jb 0x8749b9 */ if (fC) goto L_008749b9;
L_00874978:; BB(0x00874978);
    /* 00874978: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 0087497c: lea eax, [eax - 6] */ r_eax = (u32)(r_eax+0xfffffffau);
    /* 0087497f: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00874983: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
L_00874987:; BB(0x00874987);
    /* 00874987: mov esi, dword ptr [ecx + edx*4] */ r_esi = R32((u32)(r_ecx+r_edx*4));
    /* 0087498a: mov dword ptr [ebp + edx*4], esi */ W32((u32)(r_ebp+r_edx*4), r_esi);
    /* 0087498e: mov edi, dword ptr [ecx + edx*4 + 4] */ r_edi = R32((u32)(r_ecx+r_edx*4+0x4u));
    /* 00874992: mov dword ptr [ebp + edx*4 + 4], edi */ W32((u32)(r_ebp+r_edx*4+0x4u), r_edi);
    /* 00874996: mov esi, dword ptr [ecx + edx*4 + 8] */ r_esi = R32((u32)(r_ecx+r_edx*4+0x8u));
    /* 0087499a: mov dword ptr [ebp + edx*4 + 8], esi */ W32((u32)(r_ebp+r_edx*4+0x8u), r_esi);
    /* 0087499e: mov esi, dword ptr [ecx + edx*4 + 0xc] */ r_esi = R32((u32)(r_ecx+r_edx*4+0xcu));
    /* 008749a2: mov dword ptr [ebp + edx*4 + 0xc], esi */ W32((u32)(r_ebp+r_edx*4+0xcu), r_esi);
    /* 008749a6: mov esi, dword ptr [ecx + edx*4 + 0x10] */ r_esi = R32((u32)(r_ecx+r_edx*4+0x10u));
    /* 008749aa: mov dword ptr [ebp + edx*4 + 0x10], esi */ W32((u32)(r_ebp+r_edx*4+0x10u), r_esi);
    /* 008749ae: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008749b1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008749b3: jbe 0x874987 */ if ((fC||fZ)) goto L_00874987;
L_008749b5:; BB(0x008749b5);
    /* 008749b5: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
L_008749b9:; BB(0x008749b9);
    /* 008749b9: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 008749bd: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 008749c1: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
L_008749c5:; BB(0x008749c5);
    /* 008749c5: mov eax, dword ptr [ecx + ebp*4] */ r_eax = R32((u32)(r_ecx+r_ebp*4));
    /* 008749c8: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 008749cb: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008749cc: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008749ce: jb 0x8749c5 */ if (fC) goto L_008749c5;
L_008749d0:; BB(0x008749d0);
    /* 008749d0: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008749d3: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 008749d5: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008749d8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 008749db: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 008749df: mov eax, dword ptr [ecx + esi*2] */ r_eax = R32((u32)(r_ecx+r_esi*2));
    /* 008749e2: mov edx, dword ptr [ebp + esi*2] */ r_edx = R32((u32)(r_ebp+r_esi*2));
    /* 008749e6: jmp 0x874b2f */ goto L_00874b2f;
L_008749eb:; BB(0x008749eb);
    /* 008749eb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008749ef: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008749f2: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008749f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008749f7: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x8749fcu); f_0088417c();
    /* 008749fc: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00874a00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00874a03: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00874a06: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00874a09: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00874a0d: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00874a10: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00874a13: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00874a17: lea ecx, [ebp + eax] */ r_ecx = (u32)(r_ebp+r_eax);
    /* 00874a1b: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00874a1e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00874a20: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00874a24: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00874a26: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 00874a29: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00874a2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00874a2f: jle 0x874b2f */ if ((fZ||fS!=fO)) goto L_00874b2f;
L_00874a35:; BB(0x00874a35);
    /* 00874a35: mov eax, ecx */ r_eax = r_ecx;
    /* 00874a37: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874a3a: jl 0x874f3b */ if ((fS!=fO)) goto L_00874f3b;
L_00874a40:; BB(0x00874a40);
    /* 00874a40: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00874a44: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00874a48: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00874a4b: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00874a4f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00874a51: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00874a53: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 00874a57: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
L_00874a5b:; BB(0x00874a5b);
    /* 00874a5b: movss xmm1, dword ptr [ecx + ebp*4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00874a60: mulss xmm1, dword ptr [edi + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00874a66: movss xmm0, dword ptr [edx + ebp*4] */ { u32 v = R32((u32)(r_edx+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00874a6b: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00874a6f: mulss xmm0, dword ptr [esi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00874a74: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00874a78: movss dword ptr [ecx + ebp*4], xmm1 */ W32((u32)(r_ecx+r_ebp*4), xmm[1].d[0]);
    /* 00874a7d: movss xmm3, dword ptr [ecx + ebp*4 + 4] */ { u32 v = R32((u32)(r_ecx+r_ebp*4+0x4u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00874a83: mulss xmm3, dword ptr [edi + eax - 8] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_eax+0xfffffff8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 00874a89: movss xmm2, dword ptr [edx + ebp*4 + 4] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x4u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00874a8f: mulss xmm2, dword ptr [esi + ebp*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 00874a95: addss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 00874a99: movss dword ptr [ecx + ebp*4 + 4], xmm3 */ W32((u32)(r_ecx+r_ebp*4+0x4u), xmm[3].d[0]);
    /* 00874a9f: movss xmm6, dword ptr [ecx + ebp*4 + 8] */ { u32 v = R32((u32)(r_ecx+r_ebp*4+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 00874aa5: mulss xmm6, dword ptr [edi + eax - 0xc] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_eax+0xfffffff4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 00874aab: movss xmm5, dword ptr [edx + ebp*4 + 8] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 00874ab1: mulss xmm5, dword ptr [esi + ebp*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 00874ab7: addss xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 00874abb: movss dword ptr [ecx + ebp*4 + 8], xmm6 */ W32((u32)(r_ecx+r_ebp*4+0x8u), xmm[6].d[0]);
    /* 00874ac1: add edi, -0xc */ {  u32 a = r_edi; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00874ac4: add ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00874ac7: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00874acb: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874acd: jle 0x874a5b */ if ((fZ||fS!=fO)) goto L_00874a5b;
L_00874acf:; BB(0x00874acf);
    /* 00874acf: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
L_00874ad3:; BB(0x00874ad3);
    /* 00874ad3: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 00874ad7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874ad9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00874adb: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00874adf: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00874ae3: mov dword ptr [esp + 0x5c], esi */ W32((u32)(r_esp+0x5cu), r_esi);
    /* 00874ae7: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_00874aeb:; BB(0x00874aeb);
    /* 00874aeb: movss xmm1, dword ptr [edx + ebp*4] */ { u32 v = R32((u32)(r_edx+r_ebp*4)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00874af0: mulss xmm1, dword ptr [ecx + eax - 4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_eax+0xfffffffcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 00874af6: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00874afa: movss xmm0, dword ptr [edi + ebp*4] */ { u32 v = R32((u32)(r_edi+r_ebp*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00874aff: mulss xmm0, dword ptr [esi + ebp*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ebp*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00874b04: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 00874b08: movss dword ptr [edx + ebp*4], xmm1 */ W32((u32)(r_edx+r_ebp*4), xmm[1].d[0]);
    /* 00874b0d: add ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874b10: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00874b11: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00874b15: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874b17: jl 0x874aeb */ if ((fS!=fO)) goto L_00874aeb;
L_00874b19:; BB(0x00874b19);
    /* 00874b19: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 00874b1d: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00874b20: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00874b22: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00874b25: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00874b28: mov eax, dword ptr [ecx + esi*2] */ r_eax = R32((u32)(r_ecx+r_esi*2));
    /* 00874b2b: mov edx, dword ptr [ebp + esi*2] */ r_edx = R32((u32)(r_ebp+r_esi*2));
L_00874b2f:; BB(0x00874b2f);
    /* 00874b2f: add eax, dword ptr [esp + 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874b33: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00874b37: add edx, dword ptr [esp + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874b3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00874b3d: jle 0x874c42 */ if ((fZ||fS!=fO)) goto L_00874c42;
L_00874b43:; BB(0x00874b43);
    /* 00874b43: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00874b45: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00874b49: cmp ebp, 0xb */ {  u32 a = r_ebp; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874b4c: jb 0x874bf7 */ if (fC) goto L_00874bf7;
L_00874b52:; BB(0x00874b52);
    /* 00874b52: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00874b56: lea esi, [ebp + eax] */ r_esi = (u32)(r_ebp+r_eax);
    /* 00874b5a: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874b5c: jb 0x874f2a */ if (fC) goto L_00874f2a;
L_00874b62:; BB(0x00874b62);
    /* 00874b62: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00874b66: mov ebp, eax */ r_ebp = r_eax;
    /* 00874b68: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00874b6b: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
    /* 00874b6f: mov ebp, edx */ r_ebp = r_edx;
    /* 00874b71: je 0x874ba0 */ if (fZ) goto L_00874ba0;
L_00874b73:; BB(0x00874b73);
    /* 00874b73: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 00874b77: test ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874b7d: jne 0x874bf7 */ if (!fZ) goto L_00874bf7;
L_00874b7f:; BB(0x00874b7f);
    /* 00874b7f: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00874b81: lea edi, [ebp + 0x10] */ r_edi = (u32)(r_ebp+0x10u);
    /* 00874b84: lea ebp, [edx + ebp + 0x10] */ r_ebp = (u32)(r_edx+r_ebp+0x10u);
    /* 00874b88: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00874b8b: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00874b8d: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
L_00874b91:; BB(0x00874b91);
    /* 00874b91: mov ebp, dword ptr [edx + ecx*4] */ r_ebp = R32((u32)(r_edx+r_ecx*4));
    /* 00874b94: mov dword ptr [eax + ecx*4], ebp */ W32((u32)(r_eax+r_ecx*4), r_ebp);
    /* 00874b97: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874b98: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874b9a: jb 0x874b91 */ if (fC) goto L_00874b91;
L_00874b9c:; BB(0x00874b9c);
    /* 00874b9c: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
L_00874ba0:; BB(0x00874ba0);
    /* 00874ba0: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00874ba3: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00874ba5: add esi, dword ptr [esp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00874ba9: test ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874baf: jne 0x874bd1 */ if (!fZ) goto L_00874bd1;
L_00874bb1:; BB(0x00874bb1);
    /* 00874bb1: prefetchnta byte ptr [edx + ecx*4 + 0x40] */ ;
    /* 00874bb6: movaps xmm0, xmmword ptr [edx + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_ecx*4), 16); xmm[0] = s; }
    /* 00874bba: movaps xmmword ptr [eax + ecx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4), &xmm[0], 16);
    /* 00874bbe: movaps xmm1, xmmword ptr [edx + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_ecx*4+0x10u), 16); xmm[1] = s; }
    /* 00874bc3: movaps xmmword ptr [eax + ecx*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), &xmm[1], 16);
    /* 00874bc8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874bcb: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874bcd: jb 0x874bb1 */ if (fC) goto L_00874bb1;
L_00874bcf:; BB(0x00874bcf);
    /* 00874bcf: jmp 0x874bef */ goto L_00874bef;
L_00874bd1:; BB(0x00874bd1);
    /* 00874bd1: movups xmm0, xmmword ptr [edx + ecx*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_ecx*4), 16); xmm[0] = s; }
    /* 00874bd5: prefetchnta byte ptr [edx + ecx*4 + 0x40] */ ;
    /* 00874bda: movaps xmmword ptr [eax + ecx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4), &xmm[0], 16);
    /* 00874bde: movups xmm1, xmmword ptr [edx + ecx*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_ecx*4+0x10u), 16); xmm[1] = s; }
    /* 00874be3: movaps xmmword ptr [eax + ecx*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), &xmm[1], 16);
    /* 00874be8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874beb: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874bed: jb 0x874bd1 */ if (fC) goto L_00874bd1;
L_00874bef:; BB(0x00874bef);
    /* 00874bef: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00874bf3: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874bf5: jae 0x874c42 */ if (!fC) goto L_00874c42;
L_00874bf7:; BB(0x00874bf7);
    /* 00874bf7: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00874bfb: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00874bfd: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874c00: jb 0x874c33 */ if (fC) goto L_00874c33;
L_00874c02:; BB(0x00874c02);
    /* 00874c02: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
L_00874c06:; BB(0x00874c06);
    /* 00874c06: mov esi, dword ptr [edx + ecx*4] */ r_esi = R32((u32)(r_edx+r_ecx*4));
    /* 00874c09: mov dword ptr [eax + ecx*4], esi */ W32((u32)(r_eax+r_ecx*4), r_esi);
    /* 00874c0c: mov edi, dword ptr [edx + ecx*4 + 4] */ r_edi = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00874c10: mov dword ptr [eax + ecx*4 + 4], edi */ W32((u32)(r_eax+r_ecx*4+0x4u), r_edi);
    /* 00874c14: mov esi, dword ptr [edx + ecx*4 + 8] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00874c18: mov dword ptr [eax + ecx*4 + 8], esi */ W32((u32)(r_eax+r_ecx*4+0x8u), r_esi);
    /* 00874c1c: mov esi, dword ptr [edx + ecx*4 + 0xc] */ r_esi = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 00874c20: mov dword ptr [eax + ecx*4 + 0xc], esi */ W32((u32)(r_eax+r_ecx*4+0xcu), r_esi);
    /* 00874c24: mov esi, dword ptr [edx + ecx*4 + 0x10] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00874c28: mov dword ptr [eax + ecx*4 + 0x10], esi */ W32((u32)(r_eax+r_ecx*4+0x10u), r_esi);
    /* 00874c2c: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874c2f: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00874c31: jbe 0x874c06 */ if ((fC||fZ)) goto L_00874c06;
L_00874c33:; BB(0x00874c33);
    /* 00874c33: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_00874c37:; BB(0x00874c37);
    /* 00874c37: mov ebp, dword ptr [edx + ecx*4] */ r_ebp = R32((u32)(r_edx+r_ecx*4));
    /* 00874c3a: mov dword ptr [eax + ecx*4], ebp */ W32((u32)(r_eax+r_ecx*4), r_ebp);
    /* 00874c3d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874c3e: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874c40: jb 0x874c37 */ if (fC) goto L_00874c37;
L_00874c42:; BB(0x00874c42);
    /* 00874c42: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00874c46: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874c47: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00874c4a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00874c4e: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874c51: jl 0x8744a5 */ if ((fS!=fO)) goto L_008744a5;
L_00874c57:; BB(0x00874c57);
    /* 00874c57: jmp 0x874cca */ goto L_00874cca;
L_00874c59:; BB(0x00874c59);
    /* 00874c59: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00874c5d: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00874c61: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00874c64: jmp 0x8745a8 */ goto L_008745a8;
L_00874c69:; BB(0x00874c69);
    /* 00874c69: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00874c6d: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00874c71: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00874c74: jmp 0x8746f1 */ goto L_008746f1;
L_00874c79:; BB(0x00874c79);
    /* 00874c79: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00874c7c: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00874c7e: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00874c81: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00874c84: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 00874c88: mov eax, dword ptr [ecx + esi*2] */ r_eax = R32((u32)(r_ecx+r_esi*2));
    /* 00874c8b: mov edx, dword ptr [ebp + esi*2] */ r_edx = R32((u32)(r_ebp+r_esi*2));
    /* 00874c8f: jmp 0x874b2f */ goto L_00874b2f;
L_00874c94:; BB(0x00874c94);
    /* 00874c94: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874c96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874c98: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874c9a: add dword ptr [esp + 0x54], edx */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00874c9e: jmp 0x87496b */ goto L_0087496b;
L_00874ca3:; BB(0x00874ca3);
    /* 00874ca3: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00874ca6: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00874ca8: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00874cab: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00874cae: mov esi, dword ptr [esp + 0x5c] */ r_esi = R32((u32)(r_esp+0x5cu));
    /* 00874cb2: mov eax, dword ptr [ecx + esi*2] */ r_eax = R32((u32)(r_ecx+r_esi*2));
    /* 00874cb5: mov edx, dword ptr [ebp + esi*2] */ r_edx = R32((u32)(r_ebp+r_esi*2));
    /* 00874cb9: jmp 0x874b2f */ goto L_00874b2f;
L_00874cbe:; BB(0x00874cbe);
    /* 00874cbe: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00874cc2: lea esi, [eax + ebp] */ r_esi = (u32)(r_eax+r_ebp);
    /* 00874cc5: jmp 0x87482d */ goto L_0087482d;
L_00874cca:; BB(0x00874cca);
    /* 00874cca: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00874cce: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00874cd1: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00874cd4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
L_00874cd7:; BB(0x00874cd7);
    /* 00874cd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874cd9: je 0x874ce4 */ if (fZ) goto L_00874ce4;
L_00874cdb:; BB(0x00874cdb);
    /* 00874cdb: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 00874ce2: jmp 0x874ce7 */ goto L_00874ce7;
L_00874ce4:; BB(0x00874ce4);
    /* 00874ce4: mov dword ptr [edi + 0x30], ebp */ W32((u32)(r_edi+0x30u), r_ebp);
L_00874ce7:; BB(0x00874ce7);
    /* 00874ce7: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00874cea: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874ced: je 0x874f1b */ if (fZ) goto L_00874f1b;
L_00874cf3:; BB(0x00874cf3);
    /* 00874cf3: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00874cf7: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00874cfa: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00874cfe: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 00874d01: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00874d04: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 00874d07: mov ecx, dword ptr [ecx + ebp*4] */ r_ecx = R32((u32)(r_ecx+r_ebp*4));
    /* 00874d0a: mov ebp, eax */ r_ebp = r_eax;
    /* 00874d0c: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00874d0e: shr ebp, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00874d11: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00874d13: sar ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00874d16: mov eax, ecx */ r_eax = r_ecx;
    /* 00874d18: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00874d1a: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00874d1d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874d1f: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00874d22: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00874d24: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00874d28: sar ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00874d2a: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874d2c: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
L_00874d2f:; BB(0x00874d2f);
    /* 00874d2f: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00874d33: mov ecx, dword ptr [ebp + 0xb8] */ r_ecx = R32((u32)(r_ebp+0xb8u));
    /* 00874d39: mov ebp, dword ptr [ebp + 0xbc] */ r_ebp = R32((u32)(r_ebp+0xbcu));
    /* 00874d3f: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00874d42: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 00874d45: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00874d47: je 0x874f04 */ if (fZ) goto L_00874f04;
L_00874d4d:; BB(0x00874d4d);
    /* 00874d4d: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00874d50: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00874d54: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 00874d57: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00874d5a: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00874d5d: mov eax, esi */ r_eax = r_esi;
    /* 00874d5f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00874d61: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00874d64: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874d66: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00874d69: mov esi, edx */ r_esi = r_edx;
    /* 00874d6b: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00874d6d: shr esi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00874d70: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00874d72: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00874d75: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874d77: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00874d78: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00874d7b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00874d7d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00874d81: adc ebp, edx */ { u32 c = fC; u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebp = r;  }
    /* 00874d83: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 00874d89: mov dword ptr [eax + 0xbc], ebp */ W32((u32)(r_eax+0xbcu), r_ebp);
L_00874d8f:; BB(0x00874d8f);
    /* 00874d8f: mov ebp, dword ptr [edi + 0x38] */ r_ebp = R32((u32)(r_edi+0x38u));
    /* 00874d92: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00874d95: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 00874d98: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00874d9b: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00874d9d: je 0x874e68 */ if (fZ) goto L_00874e68;
L_00874da3:; BB(0x00874da3);
    /* 00874da3: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00874da6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00874daa: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 00874dad: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00874db0: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00874db3: mov eax, esi */ r_eax = r_esi;
    /* 00874db5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00874db7: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00874dba: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874dbc: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00874dbf: mov esi, edx */ r_esi = r_edx;
    /* 00874dc1: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00874dc3: shr esi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00874dc6: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00874dc8: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00874dcb: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874dcd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00874dce: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00874dd1: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 00874dd3: adc ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00874dd5: mov dword ptr [edi + 0x38], ebp */ W32((u32)(r_edi+0x38u), r_ebp);
    /* 00874dd8: mov dword ptr [edi + 0x3c], ecx */ W32((u32)(r_edi+0x3cu), r_ecx);
    /* 00874ddb: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00874dde: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00874de1: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00874de5: lea eax, [eax + 1] */ r_eax = (u32)(r_eax+0x1u);
    /* 00874de8: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 00874dec: lea edx, [edx + 1] */ r_edx = (u32)(r_edx+0x1u);
    /* 00874def: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00874df1: je 0x874e4f */ if (fZ) goto L_00874e4f;
L_00874df3:; BB(0x00874df3);
    /* 00874df3: mov edx, ebp */ r_edx = r_ebp;
    /* 00874df5: mov eax, ecx */ r_eax = r_ecx;
    /* 00874df7: sub edx, dword ptr [esp + 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00874dfb: sub eax, dword ptr [esp + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00874dff: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00874e01: je 0x874e4f */ if (fZ) goto L_00874e4f;
L_00874e03:; BB(0x00874e03);
    /* 00874e03: mov eax, ebp */ r_eax = r_ebp;
    /* 00874e05: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00874e09: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00874e0b: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00874e0f: sbb ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874e11: jl 0x874e41 */ if ((fS!=fO)) goto L_00874e41;
L_00874e13:; BB(0x00874e13);
    /* 00874e13: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00874e15: je 0x874e41 */ if (fZ) goto L_00874e41;
L_00874e17:; BB(0x00874e17);
    /* 00874e17: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00874e1b: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00874e1d: je 0x874e41 */ if (fZ) goto L_00874e41;
L_00874e1f:; BB(0x00874e1f);
    /* 00874e1f: cmp dword ptr [esi + 0x2c], 0 */ {  u32 a = R32((u32)(r_esi+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00874e23: je 0x874e41 */ if (fZ) goto L_00874e41;
L_00874e25:; BB(0x00874e25);
    /* 00874e25: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00874e29: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00874e2c: sar ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00874e2e: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00874e30: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 00874e33: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00874e36: mov ebp, dword ptr [esi + 0x34] */ r_ebp = R32((u32)(r_esi+0x34u));
    /* 00874e39: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00874e3d: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
L_00874e41:; BB(0x00874e41);
    /* 00874e41: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00874e45: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00874e49: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00874e4c: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
L_00874e4f:; BB(0x00874e4f);
    /* 00874e4f: cmp dword ptr [esi + 0x2c], 0 */ {  u32 a = R32((u32)(r_esi+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874e53: je 0x874e5c */ if (fZ) goto L_00874e5c;
L_00874e55:; BB(0x00874e55);
    /* 00874e55: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
L_00874e5c:; BB(0x00874e5c);
    /* 00874e5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00874e5e: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00874e61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00874e62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00874e63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00874e64: mov esp, ebx */ r_esp = r_ebx;
    /* 00874e66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00874e67: ret  */ FN_RET(0x00874280); r_esp += 4; return;
L_00874e68:; BB(0x00874e68);
    /* 00874e68: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00874e6b: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00874e6e: lea ebp, [edx + 1] */ r_ebp = (u32)(r_edx+0x1u);
    /* 00874e71: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00874e74: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00874e76: je 0x874e4f */ if (fZ) goto L_00874e4f;
L_00874e78:; BB(0x00874e78);
    /* 00874e78: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00874e7b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00874e7f: mov dword ptr [edi + 0x3c], ecx */ W32((u32)(r_edi+0x3cu), r_ecx);
    /* 00874e82: mov ebp, dword ptr [eax + 0xb8] */ r_ebp = R32((u32)(r_eax+0xb8u));
    /* 00874e88: mov eax, dword ptr [eax + 0xbc] */ r_eax = R32((u32)(r_eax+0xbcu));
    /* 00874e8e: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00874e92: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00874e96: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fC = (a < b); }
    /* 00874e98: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 00874e9c: sbb eax, ecx */ { u32 c = fC; u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874e9e: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00874ea2: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00874ea6: jl 0x874e4f */ if ((fS!=fO)) goto L_00874e4f;
L_00874ea8:; BB(0x00874ea8);
    /* 00874ea8: or ebp, dword ptr [esp + 0x68] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x68u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00874eac: je 0x874e4f */ if (fZ) goto L_00874e4f;
L_00874eae:; BB(0x00874eae);
    /* 00874eae: cmp dword ptr [esi + 0x2c], 0 */ {  u32 a = R32((u32)(r_esi+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874eb2: je 0x874ed8 */ if (fZ) goto L_00874ed8;
L_00874eb4:; BB(0x00874eb4);
    /* 00874eb4: mov ebp, dword ptr [edi + 0x14] */ r_ebp = R32((u32)(r_edi+0x14u));
    /* 00874eb7: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
    /* 00874ebb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00874ebd: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00874ec1: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00874ec3: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00874ec7: call 0x8cac90 */ r_esp -= 4; W32(r_esp, 0x874eccu); f_008cac90();
    /* 00874ecc: mov edx, ebp */ r_edx = r_ebp;
    /* 00874ece: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00874ed0: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 00874ed3: jmp 0x874e4f */ goto L_00874e4f;
L_00874ed8:; BB(0x00874ed8);
    /* 00874ed8: mov ebp, dword ptr [edi + 0x18] */ r_ebp = R32((u32)(r_edi+0x18u));
    /* 00874edb: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
    /* 00874edf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00874ee1: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00874ee5: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00874ee7: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00874eeb: call 0x8cac90 */ r_esp -= 4; W32(r_esp, 0x874ef0u); f_008cac90();
    /* 00874ef0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00874ef2: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 00874ef5: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874ef7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874ef9: cmovl ecx, edx */ if ((fS!=fO)) { r_ecx = r_edx; }
    /* 00874efc: mov dword ptr [edi + 0x18], ecx */ W32((u32)(r_edi+0x18u), r_ecx);
    /* 00874eff: jmp 0x874e4f */ goto L_00874e4f;
L_00874f04:; BB(0x00874f04);
    /* 00874f04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00874f06: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00874f0a: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 00874f10: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 00874f16: jmp 0x874d8f */ goto L_00874d8f;
L_00874f1b:; BB(0x00874f1b);
    /* 00874f1b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00874f1f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 00874f22: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 00874f25: jmp 0x874d2f */ goto L_00874d2f;
L_00874f2a:; BB(0x00874f2a);
    /* 00874f2a: lea esi, [ebp + edx] */ r_esi = (u32)(r_ebp+r_edx);
    /* 00874f2e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874f30: jb 0x874bf7 */ if (fC) goto L_00874bf7;
L_00874f36:; BB(0x00874f36);
    /* 00874f36: jmp 0x874b62 */ goto L_00874b62;
L_00874f3b:; BB(0x00874f3b);
    /* 00874f3b: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00874f3f: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00874f43: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00874f46: jmp 0x874ad3 */ goto L_00874ad3;
L_00874f4b:; BB(0x00874f4b);
    /* 00874f4b: add eax, dword ptr [esp + 0x54] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x54u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00874f4f: mov ebp, esi */ r_ebp = r_esi;
    /* 00874f51: lea esi, [ecx + ebp] */ r_esi = (u32)(r_ecx+r_ebp);
    /* 00874f54: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00874f56: jae 0x8748a3 */ if (!fC) goto L_008748a3;
L_00874f5c:; BB(0x00874f5c);
    /* 00874f5c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874f5e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00874f60: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00874f62: add dword ptr [esp + 0x54], edx */ { u32 ad = (u32)(r_esp+0x54u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00874f66: jmp 0x87496b */ goto L_0087496b;
L_00874f6c:; BB(0x00874f6c);
    /* 00874f6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00874f6d: mov ebx, esp */ r_ebx = r_esp;
    /* 00874f6f: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00874f72: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00874f73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00874f74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00874f75: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00874f78: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00874f7b: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00874f7e: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00874f81: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00874f84: mov ebp, dword ptr [eax + 0x1c] */ r_ebp = R32((u32)(r_eax+0x1cu));
    /* 00874f87: mov edx, dword ptr [esi + 0x68] */ r_edx = R32((u32)(r_esi+0x68u));
    /* 00874f8a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00874f8e: mov ecx, dword ptr [ebp + 0xe78] */ r_ecx = R32((u32)(r_ebp+0xe78u));
    /* 00874f94: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00874f98: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874f9a: je 0x874fa9 */ if (fZ) goto L_00874fa9;
L_00874f9c:; BB(0x00874f9c);
    /* 00874f9c: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00874f9f: cmp eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00874fa2: jge 0x874fb8 */ if ((fS==fO)) goto L_00874fb8;
L_00874fa4:; BB(0x00874fa4);
    /* 00874fa4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00874fa7: je 0x874fb8 */ if (fZ) goto L_00874fb8;
L_00874fa9:; BB(0x00874fa9);
    /* 00874fa9: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00874fae: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00874fb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00874fb2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00874fb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00874fb4: mov esp, ebx */ r_esp = r_ebx;
    /* 00874fb6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00874fb7: ret  */ FN_RET(0x00874280); r_esp += 4; return;
L_00874fb8:; BB(0x00874fb8);
    /* 00874fb8: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00874fbb: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 00874fbe: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00874fc1: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00874fc4: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00874fc7: mov dword ptr [esi + 0x2c], 0xffffffff */ W32((u32)(r_esi+0x2cu), 0xffffffffu);
    /* 00874fce: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00874fd1: mov edx, dword ptr [esi + 0x44] */ r_edx = R32((u32)(r_esi+0x44u));
    /* 00874fd4: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00874fd7: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 00874fda: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00874fdc: je 0x874ff5 */ if (fZ) goto L_00874ff5;
L_00874fde:; BB(0x00874fde);
    /* 00874fde: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00874fe1: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00874fe4: mov edi, dword ptr [edi + 0x3c] */ r_edi = R32((u32)(r_edi+0x3cu));
    /* 00874fe7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00874fea: adc edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00874fed: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00874fef: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00874ff1: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00874ff3: je 0x875019 */ if (fZ) goto L_00875019;
L_00874ff5:; BB(0x00874ff5);
    /* 00874ff5: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00874ffa: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00874ffd: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00875000: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00875004: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 0087500a: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 00875010: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00875013: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00875016: mov edi, dword ptr [ecx + 0x3c] */ r_edi = R32((u32)(r_ecx+0x3cu));
L_00875019:; BB(0x00875019);
    /* 00875019: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0087501c: mov dword ptr [esi + 0x44], edi */ W32((u32)(r_esi+0x44u), r_edi);
    /* 0087501f: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00875022: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00875025: je 0x875823 */ if (fZ) goto L_00875823;
L_0087502b:; BB(0x0087502b);
    /* 0087502b: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0087502e: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00875032: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00875036: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 00875039: mov eax, dword ptr [ebp + eax*4] */ r_eax = R32((u32)(r_ebp+r_eax*4));
    /* 0087503d: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0087503f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00875043: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00875046: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00875048: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0087504c: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 0087504f: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00875051: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00875054: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00875057: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 0087505a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087505b: add ecx, dword ptr [esi + 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0087505e: adc edx, dword ptr [esi + 0x4c] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esi+0x4cu)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00875061: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 00875064: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 00875067: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0087506a: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 0087506d: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 00875070: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00875071: add ecx, dword ptr [esi + 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x50u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00875074: adc edx, dword ptr [esi + 0x54] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esi+0x54u)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00875077: mov dword ptr [esi + 0x50], ecx */ W32((u32)(r_esi+0x50u), r_ecx);
    /* 0087507a: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 0087507d: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00875080: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00875083: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 00875086: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00875087: add ecx, dword ptr [esi + 0x58] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x58u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0087508a: adc edx, dword ptr [esi + 0x5c] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esi+0x5cu)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 0087508d: mov dword ptr [esi + 0x58], ecx */ W32((u32)(r_esi+0x58u), r_ecx);
    /* 00875090: mov dword ptr [esi + 0x5c], edx */ W32((u32)(r_esi+0x5cu), r_edx);
    /* 00875093: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00875096: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00875099: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0087509c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087509d: add ecx, dword ptr [esi + 0x60] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 008750a0: adc edx, dword ptr [esi + 0x64] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esi+0x64u)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 008750a3: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 008750a6: mov dword ptr [esi + 0x64], edx */ W32((u32)(r_esi+0x64u), r_edx);
    /* 008750a9: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 008750ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008750ae: je 0x8750b8 */ if (fZ) goto L_008750b8;
L_008750b0:; BB(0x008750b0);
    /* 008750b0: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 008750b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008750b6: jmp 0x8750c0 */ goto L_008750c0;
L_008750b8:; BB(0x008750b8);
    /* 008750b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008750ba: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 008750be: mov eax, edi */ r_eax = r_edi;
L_008750c0:; BB(0x008750c0);
    /* 008750c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008750c2: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 008750c6: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 008750c9: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008750cd: jle 0x8757d1 */ if ((fZ||fS!=fO)) goto L_008757d1;
L_008750d3:; BB(0x008750d3);
    /* 008750d3: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008750d7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008750db: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008750de: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008750e0: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008750e4: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008750e7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008750e9: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 008750ed: lea eax, [ecx - 4] */ r_eax = (u32)(r_ecx+0xfffffffcu);
    /* 008750f0: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008750f4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008750f6: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008750f9: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008750fb: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 008750fd: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00875101: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875103: mov ecx, edi */ r_ecx = r_edi;
    /* 00875105: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00875108: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087510a: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0087510c: lea esi, [ebp + ecx] */ r_esi = (u32)(r_ebp+r_ecx);
    /* 00875110: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00875114: lea ebp, [ebp + ecx - 6] */ r_ebp = (u32)(r_ebp+r_ecx+0xfffffffau);
    /* 00875118: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 0087511c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087511e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875120: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00875122: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00875126: lea eax, [edx + ecx] */ r_eax = (u32)(r_edx+r_ecx);
    /* 00875129: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0087512d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00875131: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00875134: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875136: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0087513a: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0087513e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875140: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00875144: lea eax, [ebp - 6] */ r_eax = (u32)(r_ebp+0xfffffffau);
    /* 00875147: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0087514b: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0087514e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875150: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00875154: lea eax, [edi - 4] */ r_eax = (u32)(r_edi+0xfffffffcu);
    /* 00875157: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0087515b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0087515f: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00875163: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00875166: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0087516a: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0087516e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00875172: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00875176: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0087517a: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0087517e: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00875182: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00875185: jmp 0x87518a */ goto L_0087518a;
L_00875187:; BB(0x00875187);
    /* 00875187: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
L_0087518a:; BB(0x0087518a);
    /* 0087518a: cmp dword ptr [esi + 0x24], 0 */ {  u32 a = R32((u32)(r_esi+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087518e: je 0x87542a */ if (fZ) goto L_0087542a;
L_00875194:; BB(0x00875194);
    /* 00875194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875196: je 0x8752e3 */ if (fZ) goto L_008752e3;
L_0087519c:; BB(0x0087519c);
    /* 0087519c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008751a0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008751a3: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008751a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008751a8: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x8751adu); f_0088417c();
    /* 008751ad: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008751b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008751b4: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008751b7: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008751bb: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008751be: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 008751c2: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 008751c5: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 008751c9: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 008751cc: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 008751d0: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008751d2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 008751d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008751d7: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 008751db: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008751df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008751e1: jle 0x875717 */ if ((fZ||fS!=fO)) goto L_00875717;
L_008751e7:; BB(0x008751e7);
    /* 008751e7: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008751ea: jl 0x875786 */ if ((fS!=fO)) goto L_00875786;
L_008751f0:; BB(0x008751f0);
    /* 008751f0: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008751f4: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008751f8: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 008751fb: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 008751ff: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00875203: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00875206: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875208: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087520a: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 0087520e: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00875212: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 00875216: jmp 0x87521c */ goto L_0087521c;
L_00875218:; BB(0x00875218);
    /* 00875218: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_0087521c:; BB(0x0087521c);
    /* 0087521c: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 00875220: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00875224: fmul dword ptr [edi + edx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffffcu));
    /* 00875228: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 0087522b: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 0087522e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875230: fstp dword ptr [ebp + ecx*4] */ W_F32((u32)(r_ebp+r_ecx*4), ST(0)); FPOP();
    /* 00875234: fld dword ptr [ebp + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x4u)));
    /* 00875238: fmul dword ptr [edi + edx - 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffff8u));
    /* 0087523c: fld dword ptr [eax + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x4u)));
    /* 00875240: fmul dword ptr [esi + ecx*4 + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x4u));
    /* 00875244: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875246: fstp dword ptr [ebp + ecx*4 + 4] */ W_F32((u32)(r_ebp+r_ecx*4+0x4u), ST(0)); FPOP();
    /* 0087524a: fld dword ptr [ebp + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x8u)));
    /* 0087524e: fmul dword ptr [edi + edx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffff4u));
    /* 00875252: fld dword ptr [eax + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x8u)));
    /* 00875256: fmul dword ptr [esi + ecx*4 + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x8u));
    /* 0087525a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087525c: add edx, -0xc */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087525f: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875262: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00875266: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875268: jle 0x875218 */ if ((fZ||fS!=fO)) goto L_00875218;
L_0087526a:; BB(0x0087526a);
    /* 0087526a: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087526e: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 00875272: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00875276: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00875279: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_0087527c:; BB(0x0087527c);
    /* 0087527c: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00875280: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00875283: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875285: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875287: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0087528b: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0087528f: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00875293: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00875297: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0087529b: jmp 0x8752a1 */ goto L_008752a1;
L_0087529d:; BB(0x0087529d);
    /* 0087529d: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_008752a1:; BB(0x008752a1);
    /* 008752a1: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 008752a5: fmul dword ptr [edx + eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax+0xfffffffcu));
    /* 008752a9: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 008752ad: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 008752b0: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 008752b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008752b5: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008752b8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008752b9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008752bd: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008752bf: jl 0x87529d */ if ((fS!=fO)) goto L_0087529d;
L_008752c1:; BB(0x008752c1);
    /* 008752c1: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008752c5: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008752c9: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008752cc: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 008752cf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008752d1: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008752d4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 008752d8: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 008752db: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 008752de: jmp 0x875717 */ goto L_00875717;
L_008752e3:; BB(0x008752e3);
    /* 008752e3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008752e7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008752ea: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008752ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008752ef: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x8752f4u); f_0088417c();
    /* 008752f4: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008752f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008752fb: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008752fe: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00875302: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00875305: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 00875309: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0087530c: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00875310: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875313: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00875317: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00875319: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0087531c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087531e: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00875322: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00875326: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00875328: jle 0x875717 */ if ((fZ||fS!=fO)) goto L_00875717;
L_0087532e:; BB(0x0087532e);
    /* 0087532e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875331: jl 0x87579a */ if ((fS!=fO)) goto L_0087579a;
L_00875337:; BB(0x00875337);
    /* 00875337: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0087533b: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0087533f: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875342: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00875346: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0087534a: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0087534d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087534f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875351: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00875355: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00875359: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0087535d: jmp 0x875363 */ goto L_00875363;
L_0087535f:; BB(0x0087535f);
    /* 0087535f: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_00875363:; BB(0x00875363);
    /* 00875363: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 00875367: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0087536b: fmul dword ptr [edi + edx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffffcu));
    /* 0087536f: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 00875372: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 00875375: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875377: fstp dword ptr [ebp + ecx*4] */ W_F32((u32)(r_ebp+r_ecx*4), ST(0)); FPOP();
    /* 0087537b: fld dword ptr [ebp + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x4u)));
    /* 0087537f: fmul dword ptr [edi + edx - 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffff8u));
    /* 00875383: fld dword ptr [eax + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x4u)));
    /* 00875387: fmul dword ptr [esi + ecx*4 + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x4u));
    /* 0087538b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087538d: fstp dword ptr [ebp + ecx*4 + 4] */ W_F32((u32)(r_ebp+r_ecx*4+0x4u), ST(0)); FPOP();
    /* 00875391: fld dword ptr [ebp + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x8u)));
    /* 00875395: fmul dword ptr [edi + edx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffff4u));
    /* 00875399: fld dword ptr [eax + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x8u)));
    /* 0087539d: fmul dword ptr [esi + ecx*4 + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x8u));
    /* 008753a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008753a3: add edx, -0xc */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008753a6: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008753a9: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 008753ad: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008753af: jle 0x87535f */ if ((fZ||fS!=fO)) goto L_0087535f;
L_008753b1:; BB(0x008753b1);
    /* 008753b1: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008753b5: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 008753b9: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008753bd: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008753c0: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_008753c3:; BB(0x008753c3);
    /* 008753c3: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008753c7: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 008753ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008753cc: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008753ce: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 008753d2: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 008753d6: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 008753da: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 008753de: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 008753e2: jmp 0x8753e8 */ goto L_008753e8;
L_008753e4:; BB(0x008753e4);
    /* 008753e4: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_008753e8:; BB(0x008753e8);
    /* 008753e8: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 008753ec: fmul dword ptr [edx + eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax+0xfffffffcu));
    /* 008753f0: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 008753f4: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 008753f7: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 008753fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008753fc: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008753ff: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875400: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00875404: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875406: jl 0x8753e4 */ if ((fS!=fO)) goto L_008753e4;
L_00875408:; BB(0x00875408);
    /* 00875408: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087540c: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00875410: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00875413: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00875416: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00875418: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0087541b: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0087541f: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 00875422: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 00875425: jmp 0x875717 */ goto L_00875717;
L_0087542a:; BB(0x0087542a);
    /* 0087542a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087542c: je 0x8755d5 */ if (fZ) goto L_008755d5;
L_00875432:; BB(0x00875432);
    /* 00875432: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00875436: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00875439: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087543d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087543e: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x875443u); f_0088417c();
    /* 00875443: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00875447: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087544a: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0087544e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00875451: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00875455: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00875458: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0087545b: add eax, dword ptr [esp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087545f: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00875463: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00875465: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00875468: add eax, dword ptr [esp + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087546c: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00875470: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00875472: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00875476: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00875478: jle 0x875552 */ if ((fZ||fS!=fO)) goto L_00875552;
L_0087547e:; BB(0x0087547e);
    /* 0087547e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875481: jl 0x875a1a */ if ((fS!=fO)) goto L_00875a1a;
L_00875487:; BB(0x00875487);
    /* 00875487: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0087548b: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0087548f: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00875492: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00875496: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00875499: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087549b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087549d: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 008754a1: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 008754a5: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 008754a9: jmp 0x8754af */ goto L_008754af;
L_008754ab:; BB(0x008754ab);
    /* 008754ab: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_008754af:; BB(0x008754af);
    /* 008754af: fld dword ptr [ebp + edx*4] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4)));
    /* 008754b3: fmul dword ptr [ecx + eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_eax+0xfffffffcu));
    /* 008754b7: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008754bb: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 008754be: fmul dword ptr [esi + edx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_edx*4));
    /* 008754c1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008754c3: fstp dword ptr [ebp + edx*4] */ W_F32((u32)(r_ebp+r_edx*4), ST(0)); FPOP();
    /* 008754c7: fld dword ptr [ebp + edx*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4+0x4u)));
    /* 008754cb: fmul dword ptr [ecx + eax - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_eax+0xfffffff8u));
    /* 008754cf: fld dword ptr [edi + edx*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0x4u)));
    /* 008754d3: fmul dword ptr [esi + edx*4 + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_edx*4+0x4u));
    /* 008754d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008754d9: fstp dword ptr [ebp + edx*4 + 4] */ W_F32((u32)(r_ebp+r_edx*4+0x4u), ST(0)); FPOP();
    /* 008754dd: fld dword ptr [ebp + edx*4 + 8] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4+0x8u)));
    /* 008754e1: fmul dword ptr [ecx + eax - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_eax+0xfffffff4u));
    /* 008754e5: fld dword ptr [edi + edx*4 + 8] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0x8u)));
    /* 008754e9: fmul dword ptr [esi + edx*4 + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_edx*4+0x8u));
    /* 008754ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008754ef: add eax, -0xc */ {  u32 a = r_eax; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008754f2: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008754f5: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 008754f9: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008754fb: jle 0x8754ab */ if ((fZ||fS!=fO)) goto L_008754ab;
L_008754fd:; BB(0x008754fd);
    /* 008754fd: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00875501: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00875505: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00875508: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_0087550b:; BB(0x0087550b);
    /* 0087550b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0087550e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875510: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00875512: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 00875516: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 0087551a: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0087551e: jmp 0x875524 */ goto L_00875524;
L_00875520:; BB(0x00875520);
    /* 00875520: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_00875524:; BB(0x00875524);
    /* 00875524: fld dword ptr [ebp + edx*4] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4)));
    /* 00875528: fmul dword ptr [eax + ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_ecx+0xfffffffcu));
    /* 0087552c: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00875530: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00875533: fmul dword ptr [esi + edx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_edx*4));
    /* 00875536: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875538: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087553b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087553c: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00875540: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875542: jl 0x875520 */ if ((fS!=fO)) goto L_00875520;
L_00875544:; BB(0x00875544);
    /* 00875544: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00875548: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0087554c: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0087554f: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_00875552:; BB(0x00875552);
    /* 00875552: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00875556: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875558: jge 0x8757ae */ if ((fS==fO)) goto L_008757ae;
L_0087555e:; BB(0x0087555e);
    /* 0087555e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00875560: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875563: jl 0x8755a4 */ if ((fS!=fO)) goto L_008755a4;
L_00875565:; BB(0x00875565);
    /* 00875565: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00875569: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0087556d: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00875571:; BB(0x00875571);
    /* 00875571: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 00875574: mov dword ptr [ecx + edx*4], edi */ W32((u32)(r_ecx+r_edx*4), r_edi);
    /* 00875577: mov edi, dword ptr [eax + edx*4 + 4] */ r_edi = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0087557b: mov dword ptr [ecx + edx*4 + 4], edi */ W32((u32)(r_ecx+r_edx*4+0x4u), r_edi);
    /* 0087557f: mov edi, dword ptr [eax + edx*4 + 8] */ r_edi = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00875583: mov dword ptr [ecx + edx*4 + 8], edi */ W32((u32)(r_ecx+r_edx*4+0x8u), r_edi);
    /* 00875587: mov edi, dword ptr [eax + edx*4 + 0xc] */ r_edi = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0087558b: mov dword ptr [ecx + edx*4 + 0xc], edi */ W32((u32)(r_ecx+r_edx*4+0xcu), r_edi);
    /* 0087558f: mov edi, dword ptr [eax + edx*4 + 0x10] */ r_edi = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00875593: mov dword ptr [ecx + edx*4 + 0x10], edi */ W32((u32)(r_ecx+r_edx*4+0x10u), r_edi);
    /* 00875597: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087559a: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087559c: jle 0x875571 */ if ((fZ||fS!=fO)) goto L_00875571;
L_0087559e:; BB(0x0087559e);
    /* 0087559e: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008755a1: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_008755a4:; BB(0x008755a4);
    /* 008755a4: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 008755a8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 008755ac: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
L_008755b0:; BB(0x008755b0);
    /* 008755b0: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 008755b3: mov dword ptr [esi + edx*4], eax */ W32((u32)(r_esi+r_edx*4), r_eax);
    /* 008755b6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008755b7: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008755b9: jl 0x8755b0 */ if ((fS!=fO)) goto L_008755b0;
L_008755bb:; BB(0x008755bb);
    /* 008755bb: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008755be: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 008755c1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008755c3: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008755c6: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 008755ca: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 008755cd: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 008755d0: jmp 0x875717 */ goto L_00875717;
L_008755d5:; BB(0x008755d5);
    /* 008755d5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008755d9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008755dc: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008755e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008755e1: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x8755e6u); f_0088417c();
    /* 008755e6: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008755ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008755ed: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008755f0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008755f4: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008755f7: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 008755fb: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 008755fe: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00875602: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875605: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00875609: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0087560b: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0087560e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00875610: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00875614: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00875618: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087561a: jle 0x875717 */ if ((fZ||fS!=fO)) goto L_00875717;
L_00875620:; BB(0x00875620);
    /* 00875620: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875623: jl 0x875a06 */ if ((fS!=fO)) goto L_00875a06;
L_00875629:; BB(0x00875629);
    /* 00875629: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0087562d: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00875631: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875634: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00875638: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0087563c: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0087563f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875641: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875643: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00875647: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 0087564b: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0087564f: jmp 0x875655 */ goto L_00875655;
L_00875651:; BB(0x00875651);
    /* 00875651: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_00875655:; BB(0x00875655);
    /* 00875655: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 00875659: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0087565d: fmul dword ptr [edx + edi - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_edi+0xfffffffcu));
    /* 00875661: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 00875664: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 00875667: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875669: fstp dword ptr [ebp + ecx*4] */ W_F32((u32)(r_ebp+r_ecx*4), ST(0)); FPOP();
    /* 0087566d: fld dword ptr [ebp + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x4u)));
    /* 00875671: fmul dword ptr [edx + edi - 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_edi+0xfffffff8u));
    /* 00875675: fld dword ptr [eax + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x4u)));
    /* 00875679: fmul dword ptr [esi + ecx*4 + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x4u));
    /* 0087567d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087567f: fstp dword ptr [ebp + ecx*4 + 4] */ W_F32((u32)(r_ebp+r_ecx*4+0x4u), ST(0)); FPOP();
    /* 00875683: fld dword ptr [ebp + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x8u)));
    /* 00875687: fmul dword ptr [edx + edi - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_edi+0xfffffff4u));
    /* 0087568b: fld dword ptr [eax + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x8u)));
    /* 0087568f: fmul dword ptr [esi + ecx*4 + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x8u));
    /* 00875693: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875695: add edx, -0xc */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875698: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087569b: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0087569f: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008756a1: jle 0x875651 */ if ((fZ||fS!=fO)) goto L_00875651;
L_008756a3:; BB(0x008756a3);
    /* 008756a3: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008756a7: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 008756ab: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008756af: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008756b2: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_008756b5:; BB(0x008756b5);
    /* 008756b5: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008756b9: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 008756bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008756be: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008756c0: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 008756c4: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 008756c8: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 008756cc: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 008756d0: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 008756d4: jmp 0x8756da */ goto L_008756da;
L_008756d6:; BB(0x008756d6);
    /* 008756d6: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_008756da:; BB(0x008756da);
    /* 008756da: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 008756de: fmul dword ptr [edx + eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax+0xfffffffcu));
    /* 008756e2: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 008756e6: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 008756e9: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 008756ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008756ee: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008756f1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008756f2: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 008756f6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008756f8: jl 0x8756d6 */ if ((fS!=fO)) goto L_008756d6;
L_008756fa:; BB(0x008756fa);
    /* 008756fa: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008756fe: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00875702: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00875705: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00875708: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0087570a: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0087570d: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 00875711: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 00875714: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
L_00875717:; BB(0x00875717);
    /* 00875717: add ecx, dword ptr [esp + 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087571b: add eax, dword ptr [esp + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087571f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00875721: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00875723: jle 0x87576f */ if ((fZ||fS!=fO)) goto L_0087576f;
L_00875725:; BB(0x00875725);
    /* 00875725: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875728: jl 0x875761 */ if ((fS!=fO)) goto L_00875761;
L_0087572a:; BB(0x0087572a);
    /* 0087572a: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_0087572e:; BB(0x0087572e);
    /* 0087572e: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 00875731: mov dword ptr [ecx + edx*4], edi */ W32((u32)(r_ecx+r_edx*4), r_edi);
    /* 00875734: mov edi, dword ptr [eax + edx*4 + 4] */ r_edi = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00875738: mov dword ptr [ecx + edx*4 + 4], edi */ W32((u32)(r_ecx+r_edx*4+0x4u), r_edi);
    /* 0087573c: mov edi, dword ptr [eax + edx*4 + 8] */ r_edi = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00875740: mov dword ptr [ecx + edx*4 + 8], edi */ W32((u32)(r_ecx+r_edx*4+0x8u), r_edi);
    /* 00875744: mov edi, dword ptr [eax + edx*4 + 0xc] */ r_edi = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00875748: mov dword ptr [ecx + edx*4 + 0xc], edi */ W32((u32)(r_ecx+r_edx*4+0xcu), r_edi);
    /* 0087574c: mov edi, dword ptr [eax + edx*4 + 0x10] */ r_edi = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00875750: mov dword ptr [ecx + edx*4 + 0x10], edi */ W32((u32)(r_ecx+r_edx*4+0x10u), r_edi);
    /* 00875754: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875757: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875759: jle 0x87572e */ if ((fZ||fS!=fO)) goto L_0087572e;
L_0087575b:; BB(0x0087575b);
    /* 0087575b: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0087575e: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_00875761:; BB(0x00875761);
    /* 00875761: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 00875764: mov dword ptr [ecx + edx*4], esi */ W32((u32)(r_ecx+r_edx*4), r_esi);
    /* 00875767: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875768: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087576a: jl 0x875761 */ if ((fS!=fO)) goto L_00875761;
L_0087576c:; BB(0x0087576c);
    /* 0087576c: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_0087576f:; BB(0x0087576f);
    /* 0087576f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00875773: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875774: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00875778: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0087577b: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087577e: jl 0x875187 */ if ((fS!=fO)) goto L_00875187;
L_00875784:; BB(0x00875784);
    /* 00875784: jmp 0x8757c2 */ goto L_008757c2;
L_00875786:; BB(0x00875786);
    /* 00875786: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0087578a: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0087578e: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875791: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00875795: jmp 0x87527c */ goto L_0087527c;
L_0087579a:; BB(0x0087579a);
    /* 0087579a: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0087579e: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008757a2: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 008757a5: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 008757a9: jmp 0x8753c3 */ goto L_008753c3;
L_008757ae:; BB(0x008757ae);
    /* 008757ae: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008757b0: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008757b3: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 008757b7: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 008757ba: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 008757bd: jmp 0x875717 */ goto L_00875717;
L_008757c2:; BB(0x008757c2);
    /* 008757c2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 008757c6: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008757ca: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 008757ce: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
L_008757d1:; BB(0x008757d1);
    /* 008757d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008757d3: je 0x8757de */ if (fZ) goto L_008757de;
L_008757d5:; BB(0x008757d5);
    /* 008757d5: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
    /* 008757dc: jmp 0x8757e1 */ goto L_008757e1;
L_008757de:; BB(0x008757de);
    /* 008757de: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
L_008757e1:; BB(0x008757e1);
    /* 008757e1: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 008757e4: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008757e7: je 0x8759f7 */ if (fZ) goto L_008759f7;
L_008757ed:; BB(0x008757ed);
    /* 008757ed: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008757f0: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 008757f3: mov ecx, dword ptr [ebp + edx*4] */ r_ecx = R32((u32)(r_ebp+r_edx*4));
    /* 008757f7: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 008757fa: mov edi, dword ptr [ebp + edx*4] */ r_edi = R32((u32)(r_ebp+r_edx*4));
    /* 008757fe: mov edx, ecx */ r_edx = r_ecx;
    /* 00875800: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00875802: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00875805: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875807: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087580a: mov ecx, edi */ r_ecx = r_edi;
    /* 0087580c: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0087580e: shr ecx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00875811: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875813: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00875816: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00875818: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0087581c: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087581e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875820: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
L_00875823:; BB(0x00875823);
    /* 00875823: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00875827: mov ecx, dword ptr [edi + 0xb8] */ r_ecx = R32((u32)(r_edi+0xb8u));
    /* 0087582d: mov edi, dword ptr [edi + 0xbc] */ r_edi = R32((u32)(r_edi+0xbcu));
    /* 00875833: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00875836: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 00875839: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0087583b: je 0x8759e0 */ if (fZ) goto L_008759e0;
L_00875841:; BB(0x00875841);
    /* 00875841: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00875845: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00875848: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 0087584c: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0087584f: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 00875853: mov eax, edx */ r_eax = r_edx;
    /* 00875855: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00875857: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087585a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087585c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0087585f: mov edx, ebp */ r_edx = r_ebp;
    /* 00875861: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00875863: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00875866: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875868: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087586b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087586d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087586e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00875870: adc edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 00875872: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00875876: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 0087587c: mov dword ptr [eax + 0xbc], edi */ W32((u32)(r_eax+0xbcu), r_edi);
    /* 00875882: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_00875886:; BB(0x00875886);
    /* 00875886: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 00875889: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0087588c: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 0087588f: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00875892: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00875894: je 0x875950 */ if (fZ) goto L_00875950;
L_0087589a:; BB(0x0087589a);
    /* 0087589a: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0087589d: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 008758a1: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 008758a4: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 008758a8: mov eax, edx */ r_eax = r_edx;
    /* 008758aa: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008758ac: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008758af: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008758b1: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008758b4: mov edx, ebp */ r_edx = r_ebp;
    /* 008758b6: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008758b8: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008758bb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008758bd: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008758c0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008758c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008758c3: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008758c5: adc ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 008758c7: mov dword ptr [esi + 0x38], edi */ W32((u32)(r_esi+0x38u), r_edi);
    /* 008758ca: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 008758cd: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008758d0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 008758d3: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 008758d6: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 008758da: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 008758dd: lea edx, [edx + 1] */ r_edx = (u32)(r_edx+0x1u);
    /* 008758e0: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 008758e2: je 0x875934 */ if (fZ) goto L_00875934;
L_008758e4:; BB(0x008758e4);
    /* 008758e4: mov ebp, edi */ r_ebp = r_edi;
    /* 008758e6: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008758e8: mov edx, ecx */ r_edx = r_ecx;
    /* 008758ea: sub edx, dword ptr [esp + 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008758ee: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 008758f0: je 0x875934 */ if (fZ) goto L_00875934;
L_008758f2:; BB(0x008758f2);
    /* 008758f2: mov ebp, edi */ r_ebp = r_edi;
    /* 008758f4: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fC = (a < b); }
    /* 008758f6: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008758fa: sbb ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008758fc: jl 0x87592a */ if ((fS!=fO)) goto L_0087592a;
L_008758fe:; BB(0x008758fe);
    /* 008758fe: or ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00875900: je 0x87592a */ if (fZ) goto L_0087592a;
L_00875902:; BB(0x00875902);
    /* 00875902: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00875904: je 0x87592a */ if (fZ) goto L_0087592a;
L_00875906:; BB(0x00875906);
    /* 00875906: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00875909: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087590d: je 0x87592a */ if (fZ) goto L_0087592a;
L_0087590f:; BB(0x0087590f);
    /* 0087590f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00875913: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00875915: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00875918: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087591a: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 0087591d: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00875920: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00875923: mov ebp, dword ptr [edx + 0x34] */ r_ebp = R32((u32)(r_edx+0x34u));
    /* 00875926: mov dword ptr [esp + 0x6c], ebp */ W32((u32)(r_esp+0x6cu), r_ebp);
L_0087592a:; BB(0x0087592a);
    /* 0087592a: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0087592d: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00875931: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
L_00875934:; BB(0x00875934);
    /* 00875934: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00875937: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087593b: je 0x875944 */ if (fZ) goto L_00875944;
L_0087593d:; BB(0x0087593d);
    /* 0087593d: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
L_00875944:; BB(0x00875944);
    /* 00875944: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00875946: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00875949: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087594a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087594b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087594c: mov esp, ebx */ r_esp = r_ebx;
    /* 0087594e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087594f: ret  */ FN_RET(0x00874280); r_esp += 4; return;
L_00875950:; BB(0x00875950);
    /* 00875950: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00875953: mov ebp, dword ptr [ecx + 0x30] */ r_ebp = R32((u32)(r_ecx+0x30u));
    /* 00875956: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00875959: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 0087595c: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0087595f: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00875961: je 0x875934 */ if (fZ) goto L_00875934;
L_00875963:; BB(0x00875963);
    /* 00875963: mov dword ptr [esi + 0x38], ebp */ W32((u32)(r_esi+0x38u), r_ebp);
    /* 00875966: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 00875969: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0087596d: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00875973: mov edi, dword ptr [edx + 0xbc] */ r_edi = R32((u32)(r_edx+0xbcu));
    /* 00875979: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 0087597d: mov edx, eax */ r_edx = r_eax;
    /* 0087597f: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00875981: sbb edi, ecx */ { u32 c = fC; u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875983: jl 0x875934 */ if ((fS!=fO)) goto L_00875934;
L_00875985:; BB(0x00875985);
    /* 00875985: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00875987: je 0x875934 */ if (fZ) goto L_00875934;
L_00875989:; BB(0x00875989);
    /* 00875989: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0087598c: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875990: je 0x8759b3 */ if (fZ) goto L_008759b3;
L_00875992:; BB(0x00875992);
    /* 00875992: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00875995: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00875999: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 0087599b: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0087599f: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 008759a1: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008759a5: call 0x8cac90 */ r_esp -= 4; W32(r_esp, 0x8759aau); f_008cac90();
    /* 008759aa: mov edx, edi */ r_edx = r_edi;
    /* 008759ac: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008759ae: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 008759b1: jmp 0x875934 */ goto L_00875934;
L_008759b3:; BB(0x008759b3);
    /* 008759b3: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 008759b6: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 008759ba: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 008759bc: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008759c0: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 008759c2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008759c6: call 0x8cac90 */ r_esp -= 4; W32(r_esp, 0x8759cbu); f_008cac90();
    /* 008759cb: mov edx, edi */ r_edx = r_edi;
    /* 008759cd: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008759cf: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008759d2: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008759d4: jl 0x8759d8 */ if ((fS!=fO)) goto L_008759d8;
L_008759d6:; BB(0x008759d6);
    /* 008759d6: mov ecx, edx */ r_ecx = r_edx;
L_008759d8:; BB(0x008759d8);
    /* 008759d8: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 008759db: jmp 0x875934 */ goto L_00875934;
L_008759e0:; BB(0x008759e0);
    /* 008759e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008759e2: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008759e6: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 008759ec: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 008759f2: jmp 0x875886 */ goto L_00875886;
L_008759f7:; BB(0x008759f7);
    /* 008759f7: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008759fb: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008759fe: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00875a01: jmp 0x875823 */ goto L_00875823;
L_00875a06:; BB(0x00875a06);
    /* 00875a06: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00875a0a: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00875a0e: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875a11: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00875a15: jmp 0x8756b5 */ goto L_008756b5;
L_00875a1a:; BB(0x00875a1a);
    /* 00875a1a: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00875a1e: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00875a22: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00875a25: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00875a29: jmp 0x87550b */ goto L_0087550b;
}

