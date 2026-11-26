#include "protos.h"

void f_0078f200(void) /* sub_78F200 */
{
    FN_ENTER(0x0078f200);
    /* 0078f200: movzx eax, byte ptr [ecx + 2] */ r_eax = (u32)R8((u32)(r_ecx+0x2u));
    /* 0078f204: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078f207: jge 0x78f21b */ if ((fS==fO)) goto L_0078f21b;
L_0078f209:; BB(0x0078f209);
    /* 0078f209: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0078f20c: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 0078f20f: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 0078f214: mov byte ptr [eax + ecx + 0x85], dl */ W8((u32)(r_eax+r_ecx+0x85u), (u8)r_edx);
L_0078f21b:; BB(0x0078f21b);
    /* 0078f21b: ret 4 */ FN_RET(0x0078f200); r_esp += 8; return;
}

void f_0078f220(void) /* sub_78F220 */
{
    FN_ENTER(0x0078f220);
    /* 0078f220: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f221: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f222: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078f223: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f224: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078f227: mov esi, ecx */ r_esi = r_ecx;
    /* 0078f229: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 0078f22e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f230: je 0x78f314 */ if (fZ) goto L_0078f314;
L_0078f236:; BB(0x0078f236);
    /* 0078f236: mov edx, dword ptr [0x9ff1fc] */ r_edx = R32((u32)(0x9ff1fcu));
    /* 0078f23c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f23e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0078f240: jbe 0x78f25e */ if ((fC||fZ)) goto L_0078f25e;
L_0078f242:; BB(0x0078f242);
    /* 0078f242: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
L_0078f247:; BB(0x0078f247);
    /* 0078f247: movzx ebp, byte ptr [ebx*2 + 0x9ff1f4] */ r_ebp = (u32)R8((u32)(r_ebx*2+0x9ff1f4u));
    /* 0078f24f: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f251: je 0x78f364 */ if (fZ) goto L_0078f364;
L_0078f257:; BB(0x0078f257);
    /* 0078f257: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f25a: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0078f25c: jb 0x78f247 */ if (fC) goto L_0078f247;
L_0078f25e:; BB(0x0078f25e);
    /* 0078f25e: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 0078f263: mov ecx, eax */ r_ecx = r_eax;
    /* 0078f265: and ecx, 0x7f */ {  u32 a = r_ecx; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0078f268: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078f26a: sar ebp, 4 */ { u32 c = (4u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0078f26d: shr ebp, 0x1b */ { u32 c = (27u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0078f270: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078f272: sar ebp, 5 */ { u32 c = (5u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0078f275: mov edi, dword ptr [ebp*4 + 0x9ff1e4] */ r_edi = R32((u32)(r_ebp*4+0x9ff1e4u));
    /* 0078f27c: mov edx, dword ptr [ebp*4 + 0xa9cb50] */ r_edx = R32((u32)(r_ebp*4+0xa9cb50u));
    /* 0078f283: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0078f286: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0078f28b: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0078f28d: and edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0078f28f: and edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0078f291: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f296: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078f29a: jne 0x78f314 */ if (!fZ) goto L_0078f314;
L_0078f29c:; BB(0x0078f29c);
    /* 0078f29c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f29e: je 0x78f303 */ if (fZ) goto L_0078f303;
L_0078f2a0:; BB(0x0078f2a0);
    /* 0078f2a0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0078f2a4: mov edx, dword ptr [esi + ebp*4 + 0x90] */ r_edx = R32((u32)(r_esi+r_ebp*4+0x90u));
    /* 0078f2ab: or edx, dword ptr [eax + ebp*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ebp*4)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0078f2ae: test ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f2b0: jne 0x78f2bf */ if (!fZ) goto L_0078f2bf;
L_0078f2b2:; BB(0x0078f2b2);
    /* 0078f2b2: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 0078f2b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f2b8: mov ecx, esi */ r_ecx = r_esi;
    /* 0078f2ba: call 0x78f200 */ r_esp -= 4; W32(r_esp, 0x78f2bfu); f_0078f200();
L_0078f2bf:; BB(0x0078f2bf);
    /* 0078f2bf: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078f2c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f2c5: jne 0x78f303 */ if (!fZ) goto L_0078f303;
L_0078f2c7:; BB(0x0078f2c7);
    /* 0078f2c7: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 0078f2cc: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0078f2cf: lea edi, [esi + 0xa0] */ r_edi = (u32)(r_esi+0xa0u);
    /* 0078f2d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078f2d7: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0078f2db: mov esi, edi */ r_esi = r_edi;
L_0078f2dd:; BB(0x0078f2dd);
    /* 0078f2dd: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 0078f2e0: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f2e2: je 0x78f32b */ if (fZ) goto L_0078f32b;
L_0078f2e4:; BB(0x0078f2e4);
    /* 0078f2e4: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078f2e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078f2ea: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078f2ed: jl 0x78f2dd */ if ((fS!=fO)) goto L_0078f2dd;
L_0078f2ef:; BB(0x0078f2ef);
    /* 0078f2ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0078f2f1:; BB(0x0078f2f1);
    /* 0078f2f1: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 0078f2f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f2f6: je 0x78f31e */ if (fZ) goto L_0078f31e;
L_0078f2f8:; BB(0x0078f2f8);
    /* 0078f2f8: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078f2fb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f2fe: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078f301: jl 0x78f2f1 */ if ((fS!=fO)) goto L_0078f2f1;
L_0078f303:; BB(0x0078f303);
    /* 0078f303: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0078f307: or dword ptr [eax + ebp*4], ebx */ { u32 ad = (u32)(r_eax+r_ebp*4);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0078f30a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078f30d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f30e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f30f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078f310: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078f311: ret 8 */ FN_RET(0x0078f220); r_esp += 12; return;
L_0078f314:; BB(0x0078f314);
    /* 0078f314: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078f317: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f319: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078f31a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078f31b: ret 8 */ FN_RET(0x0078f220); r_esp += 12; return;
L_0078f31e:; BB(0x0078f31e);
    /* 0078f31e: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 0078f323: mov byte ptr [edi + 1], 0x23 */ W8((u32)(r_edi+0x1u), 0x23u);
    /* 0078f327: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0078f329: jmp 0x78f303 */ goto L_0078f303;
L_0078f32b:; BB(0x0078f32b);
    /* 0078f32b: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0078f32f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0078f332: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0078f336: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0078f33a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f33d: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 0078f340: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 0078f343: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078f345: jg 0x78f303 */ if ((!fZ&&fS==fO)) goto L_0078f303;
L_0078f347:; BB(0x0078f347);
    /* 0078f347: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 0078f34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f34d: mov ecx, esi */ r_ecx = r_esi;
    /* 0078f34f: call 0x78f200 */ r_esp -= 4; W32(r_esp, 0x78f354u); f_0078f200();
    /* 0078f354: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0078f358: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 0078f35c: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f35f: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 0078f362: jmp 0x78f303 */ goto L_0078f303;
L_0078f364:; BB(0x0078f364);
    /* 0078f364: movzx edx, byte ptr [ebx*2 + 0x9ff1f5] */ r_edx = (u32)R8((u32)(r_ebx*2+0x9ff1f5u));
    /* 0078f36c: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0078f370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f371: mov ecx, esi */ r_ecx = r_esi;
    /* 0078f373: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f374: call 0x78f220 */ r_esp -= 4; W32(r_esp, 0x78f379u); f_0078f220();
    /* 0078f379: jmp 0x78f25e */ goto L_0078f25e;
}

void f_0078f380(void) /* sub_78F380 */
{
    FN_ENTER(0x0078f380);
    /* 0078f380: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f381: mov eax, ecx */ r_eax = r_ecx;
    /* 0078f383: mov edi, 1 */ r_edi = 0x1u;
    /* 0078f388: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 0078f38d: mov edx, ecx */ r_edx = r_ecx;
    /* 0078f38f: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0078f392: shr edx, 0x1b */ { u32 c = (27u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0078f395: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078f397: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0078f39a: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0078f39d: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0078f39f: test dword ptr [eax + edx*4 + 0x90], edi */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x90u)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f3a6: je 0x78f3b1 */ if (fZ) goto L_0078f3b1;
L_0078f3a8:; BB(0x0078f3a8);
    /* 0078f3a8: mov eax, 1 */ r_eax = 0x1u;
    /* 0078f3ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078f3ae: ret 4 */ FN_RET(0x0078f380); r_esp += 8; return;
L_0078f3b1:; BB(0x0078f3b1);
    /* 0078f3b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f3b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078f3b4: ret 4 */ FN_RET(0x0078f380); r_esp += 8; return;
}

void f_0078f3b8(void) /* sub_78F3B8 */
{
    FN_ENTER(0x0078f3b8);
    /* 0078f3b8: movzx eax, byte ptr [ecx + 2] */ r_eax = (u32)R8((u32)(r_ecx+0x2u));
    /* 0078f3bc: ret  */ FN_RET(0x0078f3b8); r_esp += 4; return;
}

void f_0078f3c0(void) /* sub_78F3C0 */
{
    FN_ENTER(0x0078f3c0);
    /* 0078f3c0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 0078f3c5: movzx eax, byte ptr [ecx + 2] */ r_eax = (u32)R8((u32)(r_ecx+0x2u));
    /* 0078f3c9: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078f3cb: jl 0x78f3d2 */ if ((fS!=fO)) goto L_0078f3d2;
L_0078f3cd:; BB(0x0078f3cd);
    /* 0078f3cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f3cf: ret 4 */ FN_RET(0x0078f3c0); r_esp += 8; return;
L_0078f3d2:; BB(0x0078f3d2);
    /* 0078f3d2: movzx eax, byte ptr [edx + ecx + 0x85] */ r_eax = (u32)R8((u32)(r_edx+r_ecx+0x85u));
    /* 0078f3da: ret 4 */ FN_RET(0x0078f3c0); r_esp += 8; return;
}

void f_0078f3e0(void) /* sub_78F3E0 */
{
    FN_ENTER(0x0078f3e0);
    /* 0078f3e0: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 0078f3e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f3e8: jne 0x78f40b */ if (!fZ) goto L_0078f40b;
L_0078f3ea:; BB(0x0078f3ea);
    /* 0078f3ea: mov eax, dword ptr [ecx + 0x94] */ r_eax = R32((u32)(r_ecx+0x94u));
    /* 0078f3f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f3f2: jne 0x78f40b */ if (!fZ) goto L_0078f40b;
L_0078f3f4:; BB(0x0078f3f4);
    /* 0078f3f4: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 0078f3fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f3fc: jne 0x78f40b */ if (!fZ) goto L_0078f40b;
L_0078f3fe:; BB(0x0078f3fe);
    /* 0078f3fe: mov eax, dword ptr [ecx + 0x9c] */ r_eax = R32((u32)(r_ecx+0x9cu));
    /* 0078f404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f406: jne 0x78f40b */ if (!fZ) goto L_0078f40b;
L_0078f408:; BB(0x0078f408);
    /* 0078f408: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f40a: ret  */ FN_RET(0x0078f3e0); r_esp += 4; return;
L_0078f40b:; BB(0x0078f40b);
    /* 0078f40b: mov eax, 1 */ r_eax = 0x1u;
    /* 0078f410: ret  */ FN_RET(0x0078f3e0); r_esp += 4; return;
}

void f_0078f414(void) /* sub_78F414 */
{
    FN_ENTER(0x0078f414);
    /* 0078f414: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078f415: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078f417: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078f419: call 0x78f44c */ r_esp -= 4; W32(r_esp, 0x78f41eu); f_0078f44c();
    /* 0078f41e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f420: je 0x78f426 */ if (fZ) goto L_0078f426;
L_0078f422:; BB(0x0078f422);
    /* 0078f422: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f425: ret  */ FN_RET(0x0078f414); r_esp += 4; return;
L_0078f426:; BB(0x0078f426);
    /* 0078f426: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078f428: call 0x78f46c */ r_esp -= 4; W32(r_esp, 0x78f42du); f_0078f46c();
    /* 0078f42d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f42f: je 0x78f435 */ if (fZ) goto L_0078f435;
L_0078f431:; BB(0x0078f431);
    /* 0078f431: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f433: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f434: ret  */ FN_RET(0x0078f414); r_esp += 4; return;
L_0078f435:; BB(0x0078f435);
    /* 0078f435: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078f437: call 0x78f484 */ r_esp -= 4; W32(r_esp, 0x78f43cu); f_0078f484();
    /* 0078f43c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f43e: je 0x78f444 */ if (fZ) goto L_0078f444;
L_0078f440:; BB(0x0078f440);
    /* 0078f440: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f442: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f443: ret  */ FN_RET(0x0078f414); r_esp += 4; return;
L_0078f444:; BB(0x0078f444);
    /* 0078f444: mov eax, 1 */ r_eax = 0x1u;
    /* 0078f449: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f44a: ret  */ FN_RET(0x0078f414); r_esp += 4; return;
}

void f_0078f44c(void) /* sub_78F44C */
{
    FN_ENTER(0x0078f44c);
    /* 0078f44c: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 0078f452: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f457: jne 0x78f460 */ if (!fZ) goto L_0078f460;
L_0078f459:; BB(0x0078f459);
    /* 0078f459: test eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f45e: je 0x78f466 */ if (fZ) goto L_0078f466;
L_0078f460:; BB(0x0078f460);
    /* 0078f460: mov eax, 1 */ r_eax = 0x1u;
    /* 0078f465: ret  */ FN_RET(0x0078f44c); r_esp += 4; return;
L_0078f466:; BB(0x0078f466);
    /* 0078f466: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f468: ret  */ FN_RET(0x0078f44c); r_esp += 4; return;
}

void f_0078f46c(void) /* sub_78F46C */
{
    FN_ENTER(0x0078f46c);
    /* 0078f46c: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 0078f472: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f477: je 0x78f47f */ if (fZ) goto L_0078f47f;
L_0078f479:; BB(0x0078f479);
    /* 0078f479: mov eax, 1 */ r_eax = 0x1u;
    /* 0078f47e: ret  */ FN_RET(0x0078f46c); r_esp += 4; return;
L_0078f47f:; BB(0x0078f47f);
    /* 0078f47f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f481: ret  */ FN_RET(0x0078f46c); r_esp += 4; return;
}

void f_0078f484(void) /* sub_78F484 */
{
    FN_ENTER(0x0078f484);
    /* 0078f484: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0078f48a: test edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f490: je 0x78f498 */ if (fZ) goto L_0078f498;
L_0078f492:; BB(0x0078f492);
    /* 0078f492: mov eax, 1 */ r_eax = 0x1u;
    /* 0078f497: ret  */ FN_RET(0x0078f484); r_esp += 4; return;
L_0078f498:; BB(0x0078f498);
    /* 0078f498: movzx eax, byte ptr [0xa9caa1] */ r_eax = (u32)R8((u32)(0xa9caa1u));
    /* 0078f49f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f4a1: jne 0x78f4a6 */ if (!fZ) goto L_0078f4a6;
L_0078f4a3:; BB(0x0078f4a3);
    /* 0078f4a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f4a5: ret  */ FN_RET(0x0078f484); r_esp += 4; return;
L_0078f4a6:; BB(0x0078f4a6);
    /* 0078f4a6: test edx, 0x8000000 */ {  u32 a = r_edx; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f4ac: je 0x78f4a3 */ if (fZ) goto L_0078f4a3;
L_0078f4ae:; BB(0x0078f4ae);
    /* 0078f4ae: mov eax, 1 */ r_eax = 0x1u;
    /* 0078f4b3: ret  */ FN_RET(0x0078f484); r_esp += 4; return;
}

void f_0078f4b4(void) /* sub_78F4B4 */
{
    FN_ENTER(0x0078f4b4);
    /* 0078f4b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f4b5: mov esi, ecx */ r_esi = r_ecx;
    /* 0078f4b7: mov ecx, esi */ r_ecx = r_esi;
    /* 0078f4b9: call 0x78f44c */ r_esp -= 4; W32(r_esp, 0x78f4beu); f_0078f44c();
    /* 0078f4be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f4c0: je 0x78f4c6 */ if (fZ) goto L_0078f4c6;
L_0078f4c2:; BB(0x0078f4c2);
    /* 0078f4c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f4c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078f4c5: ret  */ FN_RET(0x0078f4b4); r_esp += 4; return;
L_0078f4c6:; BB(0x0078f4c6);
    /* 0078f4c6: mov ecx, esi */ r_ecx = r_esi;
    /* 0078f4c8: call 0x78f484 */ r_esp -= 4; W32(r_esp, 0x78f4cdu); f_0078f484();
    /* 0078f4cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f4cf: je 0x78f4d5 */ if (fZ) goto L_0078f4d5;
L_0078f4d1:; BB(0x0078f4d1);
    /* 0078f4d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f4d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078f4d4: ret  */ FN_RET(0x0078f4b4); r_esp += 4; return;
L_0078f4d5:; BB(0x0078f4d5);
    /* 0078f4d5: mov ecx, esi */ r_ecx = r_esi;
    /* 0078f4d7: call 0x78f46c */ r_esp -= 4; W32(r_esp, 0x78f4dcu); f_0078f46c();
    /* 0078f4dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f4de: je 0x78f4d1 */ if (fZ) goto L_0078f4d1;
L_0078f4e0:; BB(0x0078f4e0);
    /* 0078f4e0: mov eax, 1 */ r_eax = 0x1u;
    /* 0078f4e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078f4e6: ret  */ FN_RET(0x0078f4b4); r_esp += 4; return;
}

void f_0078f4e8(void) /* sub_78F4E8 */
{
    FN_ENTER(0x0078f4e8);
    /* 0078f4e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f4e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f4ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078f4ec: mov ebx, eax */ r_ebx = r_eax;
L_0078f4ee:; BB(0x0078f4ee);
    /* 0078f4ee: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0078f4f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f4f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f4f3: call 0x84382c */ r_esp -= 4; W32(r_esp, 0x78f4f8u); f_0084382c();
    /* 0078f4f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078f4fb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f4fe: je 0x78f505 */ if (fZ) goto L_0078f505;
L_0078f500:; BB(0x0078f500);
    /* 0078f500: cmp eax, -0x80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f503: jne 0x78f510 */ if (!fZ) goto L_0078f510;
L_0078f505:; BB(0x0078f505);
    /* 0078f505: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078f507: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f508: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x78f50du); f_006dc358();
    /* 0078f50d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0078f510:; BB(0x0078f510);
    /* 0078f510: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f513: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078f516: jl 0x78f4ee */ if ((fS!=fO)) goto L_0078f4ee;
L_0078f518:; BB(0x0078f518);
    /* 0078f518: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078f519: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f51a: ret  */ FN_RET(0x0078f4e8); r_esp += 4; return;
}

void f_0078f51c(void) /* sub_78F51C */
{
    FN_ENTER(0x0078f51c);
    /* 0078f51c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f51d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f51e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f520: add byte ptr [0xa9caa4], 1 */ { u32 ad = (u32)(0xa9caa4u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0078f527:; BB(0x0078f527);
    /* 0078f527: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 0078f52a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0078f52d: movzx eax, byte ptr [0xa9caa3] */ r_eax = (u32)R8((u32)(0xa9caa3u));
    /* 0078f534: cmp eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078f537: jge 0x78f592 */ if ((fS==fO)) goto L_0078f592;
L_0078f539:; BB(0x0078f539);
    /* 0078f539: lea eax, [eax + 0xa9caa5] */ r_eax = (u32)(r_eax+0xa9caa5u);
    /* 0078f53f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f540: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0078f544: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f545: call 0x84382c */ r_esp -= 4; W32(r_esp, 0x78f54au); f_0084382c();
    /* 0078f54a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078f54d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f550: je 0x78f595 */ if (fZ) goto L_0078f595;
L_0078f552:; BB(0x0078f552);
    /* 0078f552: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0078f555: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f557: jne 0x78f580 */ if (!fZ) goto L_0078f580;
L_0078f559:; BB(0x0078f559);
    /* 0078f559: mov eax, 0xa9caa5 */ r_eax = 0xa9caa5u;
    /* 0078f55e: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 0078f561: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f563: je 0x78f580 */ if (fZ) goto L_0078f580;
L_0078f565:; BB(0x0078f565);
    /* 0078f565: movzx edx, byte ptr [0xa9caa3] */ r_edx = (u32)R8((u32)(0xa9caa3u));
L_0078f56c:; BB(0x0078f56c);
    /* 0078f56c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078f56f: mov byte ptr [0xa9caa3], dl */ W8((u32)(0xa9caa3u), (u8)r_edx);
    /* 0078f575: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 0078f579: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f57c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f57e: jne 0x78f56c */ if (!fZ) goto L_0078f56c;
L_0078f580:; BB(0x0078f580);
    /* 0078f580: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f581: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x78f586u); f_006dc358();
    /* 0078f586: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078f587: mov byte ptr [0xa9caa1], al */ W8((u32)(0xa9caa1u), (u8)r_eax);
    /* 0078f58c: mov byte ptr [0xa9caa0], bl */ W8((u32)(0xa9caa0u), (u8)r_ebx);
L_0078f592:; BB(0x0078f592);
    /* 0078f592: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078f593: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f594: ret  */ FN_RET(0x0078f51c); r_esp += 4; return;
L_0078f595:; BB(0x0078f595);
    /* 0078f595: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f598: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078f59b: jl 0x78f527 */ if ((fS!=fO)) goto L_0078f527;
L_0078f59d:; BB(0x0078f59d);
    /* 0078f59d: mov byte ptr [0xa9caa0], 4 */ W8((u32)(0xa9caa0u), 0x4u);
    /* 0078f5a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078f5a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f5a6: ret  */ FN_RET(0x0078f51c); r_esp += 4; return;
}

void f_0078f5a8(void) /* sub_78F5A8 */
{
    FN_ENTER(0x0078f5a8);
    /* 0078f5a8: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 0078f5ad: and ecx, 0x7f */ {  u32 a = r_ecx; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0078f5b0: mov eax, ecx */ r_eax = r_ecx;
    /* 0078f5b2: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0078f5b5: shr eax, 0x1b */ { u32 c = (27u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078f5b8: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f5ba: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0078f5bd: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0078f5c0: mov edx, 1 */ r_edx = 0x1u;
    /* 0078f5c5: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0078f5c7: or dword ptr [eax*4 + 0xa9cb50], edx */ { u32 ad = (u32)(r_eax*4+0xa9cb50u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f5ce: ret  */ FN_RET(0x0078f5a8); r_esp += 4; return;
}

void f_0078f5d0(void) /* sub_78F5D0 */
{
    FN_ENTER(0x0078f5d0);
    /* 0078f5d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f5d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f5d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f5d3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078f5d5: call 0x8438f4 */ r_esp -= 4; W32(r_esp, 0x78f5dau); f_008438f4();
    /* 0078f5da: mov byte ptr [ebx], 4 */ W8((u32)(r_ebx), 0x4u);
    /* 0078f5dd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078f5df: mov byte ptr [ebx + 2], dl */ W8((u32)(r_ebx+0x2u), (u8)r_edx);
    /* 0078f5e2: mov byte ptr [ebx + 0x85], dl */ W8((u32)(r_ebx+0x85u), (u8)r_edx);
    /* 0078f5e8: mov byte ptr [ebx + 1], 1 */ W8((u32)(r_ebx+0x1u), 0x1u);
    /* 0078f5ec: mov byte ptr [ebx + 0x86], dl */ W8((u32)(r_ebx+0x86u), (u8)r_edx);
    /* 0078f5f2: mov byte ptr [ebx + 0x87], dl */ W8((u32)(r_ebx+0x87u), (u8)r_edx);
    /* 0078f5f8: mov byte ptr [ebx + 0x88], dl */ W8((u32)(r_ebx+0x88u), (u8)r_edx);
    /* 0078f5fe: mov byte ptr [ebx + 0x89], dl */ W8((u32)(r_ebx+0x89u), (u8)r_edx);
    /* 0078f604: mov byte ptr [ebx + 0x8a], dl */ W8((u32)(r_ebx+0x8au), (u8)r_edx);
    /* 0078f60a: mov byte ptr [ebx + 0x8b], dl */ W8((u32)(r_ebx+0x8bu), (u8)r_edx);
    /* 0078f610: mov byte ptr [ebx + 0x8c], dl */ W8((u32)(r_ebx+0x8cu), (u8)r_edx);
    /* 0078f616: mov byte ptr [ebx + 0xa0], dl */ W8((u32)(r_ebx+0xa0u), (u8)r_edx);
    /* 0078f61c: mov eax, 0x23 */ r_eax = 0x23u;
    /* 0078f621: mov byte ptr [ebx + 0xa1], al */ W8((u32)(r_ebx+0xa1u), (u8)r_eax);
    /* 0078f627: mov byte ptr [ebx + 0xa2], dl */ W8((u32)(r_ebx+0xa2u), (u8)r_edx);
    /* 0078f62d: mov byte ptr [ebx + 0xa3], al */ W8((u32)(r_ebx+0xa3u), (u8)r_eax);
    /* 0078f633: mov byte ptr [ebx + 0xa4], dl */ W8((u32)(r_ebx+0xa4u), (u8)r_edx);
    /* 0078f639: mov byte ptr [ebx + 0xa5], al */ W8((u32)(r_ebx+0xa5u), (u8)r_eax);
    /* 0078f63f: mov byte ptr [ebx + 0xa6], dl */ W8((u32)(r_ebx+0xa6u), (u8)r_edx);
    /* 0078f645: mov byte ptr [ebx + 0xa7], al */ W8((u32)(r_ebx+0xa7u), (u8)r_eax);
    /* 0078f64b: mov byte ptr [ebx + 0xa8], dl */ W8((u32)(r_ebx+0xa8u), (u8)r_edx);
    /* 0078f651: mov byte ptr [ebx + 0xa9], al */ W8((u32)(r_ebx+0xa9u), (u8)r_eax);
    /* 0078f657: mov byte ptr [ebx + 0xaa], dl */ W8((u32)(r_ebx+0xaau), (u8)r_edx);
    /* 0078f65d: mov byte ptr [ebx + 0xab], al */ W8((u32)(r_ebx+0xabu), (u8)r_eax);
    /* 0078f663: mov byte ptr [ebx + 0xac], dl */ W8((u32)(r_ebx+0xacu), (u8)r_edx);
    /* 0078f669: mov byte ptr [ebx + 0xad], al */ W8((u32)(r_ebx+0xadu), (u8)r_eax);
    /* 0078f66f: mov byte ptr [ebx + 0xae], dl */ W8((u32)(r_ebx+0xaeu), (u8)r_edx);
    /* 0078f675: mov byte ptr [ebx + 0xaf], al */ W8((u32)(r_ebx+0xafu), (u8)r_eax);
    /* 0078f67b: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 0078f681: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 0078f687: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 0078f68d: mov dword ptr [ebx + 0x9c], edx */ W32((u32)(r_ebx+0x9cu), r_edx);
    /* 0078f693: mov byte ptr [ebx + 4], dl */ W8((u32)(r_ebx+0x4u), (u8)r_edx);
    /* 0078f696: mov byte ptr [ebx + 3], dl */ W8((u32)(r_ebx+0x3u), (u8)r_edx);
    /* 0078f699: lea eax, [ebx + 5] */ r_eax = (u32)(r_ebx+0x5u);
    /* 0078f69c: add ebx, 0x85 */ {  u32 a = r_ebx; u32 b = 0x85u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0078f6a2:; BB(0x0078f6a2);
    /* 0078f6a2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078f6a4: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0078f6a6: mov byte ptr [eax + 1], dl */ W8((u32)(r_eax+0x1u), (u8)r_edx);
    /* 0078f6a9: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0078f6ac: mov byte ptr [eax + 3], dl */ W8((u32)(r_eax+0x3u), (u8)r_edx);
    /* 0078f6af: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f6b2: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078f6b4: ja 0x78f6a2 */ if ((!fC&&!fZ)) goto L_0078f6a2;
L_0078f6b6:; BB(0x0078f6b6);
    /* 0078f6b6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0078f6b8:; BB(0x0078f6b8);
    /* 0078f6b8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0078f6bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f6bc: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 0078f6bf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f6c0: call 0x84382c */ r_esp -= 4; W32(r_esp, 0x78f6c5u); f_0084382c();
    /* 0078f6c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078f6c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f6ca: jne 0x78f6d7 */ if (!fZ) goto L_0078f6d7;
L_0078f6cc:; BB(0x0078f6cc);
    /* 0078f6cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078f6ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078f6cf: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x78f6d4u); f_006dc358();
    /* 0078f6d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0078f6d7:; BB(0x0078f6d7);
    /* 0078f6d7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f6da: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078f6dd: jl 0x78f6b8 */ if ((fS!=fO)) goto L_0078f6b8;
L_0078f6df:; BB(0x0078f6df);
    /* 0078f6df: push 0x78f51c */ { u32 v = 0x78f51cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078f6e4: call 0x843858 */ r_esp -= 4; W32(r_esp, 0x78f6e9u); f_00843858();
    /* 0078f6e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078f6ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f6ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078f6ee: ret  */ FN_RET(0x0078f5d0); r_esp += 4; return;
}

void f_0078f6f0(void) /* sub_78F6F0 */
{
    FN_ENTER(0x0078f6f0);
    /* 0078f6f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078f6f2: mov byte ptr [0xa9caa2], dl */ W8((u32)(0xa9caa2u), (u8)r_edx);
    /* 0078f6f8: mov byte ptr [0xa9cb25], dl */ W8((u32)(0xa9cb25u), (u8)r_edx);
    /* 0078f6fe: mov eax, 0x23 */ r_eax = 0x23u;
    /* 0078f703: mov byte ptr [0xa9cb26], dl */ W8((u32)(0xa9cb26u), (u8)r_edx);
    /* 0078f709: mov byte ptr [0xa9cb27], dl */ W8((u32)(0xa9cb27u), (u8)r_edx);
    /* 0078f70f: mov byte ptr [0xa9cb28], dl */ W8((u32)(0xa9cb28u), (u8)r_edx);
    /* 0078f715: mov byte ptr [0xa9cb29], dl */ W8((u32)(0xa9cb29u), (u8)r_edx);
    /* 0078f71b: mov byte ptr [0xa9cb2a], dl */ W8((u32)(0xa9cb2au), (u8)r_edx);
    /* 0078f721: mov byte ptr [0xa9cb2b], dl */ W8((u32)(0xa9cb2bu), (u8)r_edx);
    /* 0078f727: mov byte ptr [0xa9cb2c], dl */ W8((u32)(0xa9cb2cu), (u8)r_edx);
    /* 0078f72d: mov byte ptr [0xa9cb40], dl */ W8((u32)(0xa9cb40u), (u8)r_edx);
    /* 0078f733: mov byte ptr [0xa9cb41], al */ W8((u32)(0xa9cb41u), (u8)r_eax);
    /* 0078f738: mov byte ptr [0xa9cb42], dl */ W8((u32)(0xa9cb42u), (u8)r_edx);
    /* 0078f73e: mov byte ptr [0xa9cb43], al */ W8((u32)(0xa9cb43u), (u8)r_eax);
    /* 0078f743: mov byte ptr [0xa9cb44], dl */ W8((u32)(0xa9cb44u), (u8)r_edx);
    /* 0078f749: mov byte ptr [0xa9cb45], al */ W8((u32)(0xa9cb45u), (u8)r_eax);
    /* 0078f74e: mov byte ptr [0xa9cb46], dl */ W8((u32)(0xa9cb46u), (u8)r_edx);
    /* 0078f754: mov byte ptr [0xa9cb47], al */ W8((u32)(0xa9cb47u), (u8)r_eax);
    /* 0078f759: mov byte ptr [0xa9cb48], dl */ W8((u32)(0xa9cb48u), (u8)r_edx);
    /* 0078f75f: mov byte ptr [0xa9cb49], al */ W8((u32)(0xa9cb49u), (u8)r_eax);
    /* 0078f764: mov byte ptr [0xa9cb4a], dl */ W8((u32)(0xa9cb4au), (u8)r_edx);
    /* 0078f76a: mov byte ptr [0xa9cb4b], al */ W8((u32)(0xa9cb4bu), (u8)r_eax);
    /* 0078f76f: mov byte ptr [0xa9cb4c], dl */ W8((u32)(0xa9cb4cu), (u8)r_edx);
    /* 0078f775: mov byte ptr [0xa9cb4d], al */ W8((u32)(0xa9cb4du), (u8)r_eax);
    /* 0078f77a: mov byte ptr [0xa9cb4e], dl */ W8((u32)(0xa9cb4eu), (u8)r_edx);
    /* 0078f780: mov byte ptr [0xa9cb4f], al */ W8((u32)(0xa9cb4fu), (u8)r_eax);
    /* 0078f785: mov dword ptr [0xa9cb30], edx */ W32((u32)(0xa9cb30u), r_edx);
    /* 0078f78b: mov dword ptr [0xa9cb34], edx */ W32((u32)(0xa9cb34u), r_edx);
    /* 0078f791: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078f793: mov dword ptr [0xa9cb38], edx */ W32((u32)(0xa9cb38u), r_edx);
    /* 0078f799: mov dword ptr [0xa9cb3c], edx */ W32((u32)(0xa9cb3cu), r_edx);
    /* 0078f79f: mov byte ptr [0xa9caa4], dl */ W8((u32)(0xa9caa4u), (u8)r_edx);
    /* 0078f7a5: mov byte ptr [0xa9caa3], dl */ W8((u32)(0xa9caa3u), (u8)r_edx);
L_0078f7ab:; BB(0x0078f7ab);
    /* 0078f7ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078f7ad: mov byte ptr [eax + 0xa9caa5], dl */ W8((u32)(r_eax+0xa9caa5u), (u8)r_edx);
    /* 0078f7b3: mov byte ptr [eax + 0xa9caa6], dl */ W8((u32)(r_eax+0xa9caa6u), (u8)r_edx);
    /* 0078f7b9: mov byte ptr [eax + 0xa9caa7], dl */ W8((u32)(r_eax+0xa9caa7u), (u8)r_edx);
    /* 0078f7bf: mov byte ptr [eax + 0xa9caa8], dl */ W8((u32)(r_eax+0xa9caa8u), (u8)r_edx);
    /* 0078f7c5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078f7c8: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078f7cd: jl 0x78f7ab */ if ((fS!=fO)) goto L_0078f7ab;
L_0078f7cf:; BB(0x0078f7cf);
    /* 0078f7cf: call 0x78eea8 */ r_esp -= 4; W32(r_esp, 0x78f7d4u); f_0078eea8();
    /* 0078f7d4: ret  */ FN_RET(0x0078f6f0); r_esp += 4; return;
}

void f_0078f7d8(void) /* sub_78F7D8 */
{
    FN_ENTER(0x0078f7d8);
    /* 0078f7d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f7d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078f7db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078f7dd: call 0x78f7fc */ r_esp -= 4; W32(r_esp, 0x78f7e2u); f_0078f7fc();
    /* 0078f7e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078f7e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f7e8: jne 0x78f7ee */ if (!fZ) goto L_0078f7ee;
L_0078f7ea:; BB(0x0078f7ea);
    /* 0078f7ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f7eb: ret 4 */ FN_RET(0x0078f7d8); r_esp += 8; return;
L_0078f7ee:; BB(0x0078f7ee);
    /* 0078f7ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f7ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78f7f4u); f_005c2f74();
    /* 0078f7f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078f7f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f7f6: ret 4 */ FN_RET(0x0078f7d8); r_esp += 8; return;
}

void f_0078f7fc(void) /* sub_78F7FC */
{
    FN_ENTER(0x0078f7fc);
    /* 0078f7fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078f7fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0078f7ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078f801: push 0x8f4ef4 */ { u32 v = 0x8f4ef4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078f806: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078f80c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f80d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078f814: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078f817: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078f81a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078f81d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078f820: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078f823: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078f826: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078f82d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078f830: mov edx, dword ptr [0xa9cccc] */ r_edx = R32((u32)(0xa9ccccu));
    /* 0078f836: mov dword ptr [eax], 0xb45608 */ W32((u32)(r_eax), 0xb45608u);
    /* 0078f83c: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078f841: push dword ptr [0xa9ccd0] */ { u32 v = R32((u32)(0xa9ccd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078f847: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0078f849: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x78f84eu); f_0086b6b8();
    /* 0078f84e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078f851: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078f854: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078f857: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f859: je 0x78f86a */ if (fZ) goto L_0078f86a;
L_0078f85b:; BB(0x0078f85b);
    /* 0078f85b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78f860u); f_007127b0();
    /* 0078f860: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078f863: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078f86a:; BB(0x0078f86a);
    /* 0078f86a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078f86d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f86f: je 0x78f880 */ if (fZ) goto L_0078f880;
L_0078f871:; BB(0x0078f871);
    /* 0078f871: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78f876u); f_007127b0();
    /* 0078f876: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078f879: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078f880:; BB(0x0078f880);
    /* 0078f880: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0078f883: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f885: je 0x78f896 */ if (fZ) goto L_0078f896;
L_0078f887:; BB(0x0078f887);
    /* 0078f887: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78f88cu); f_007127b0();
    /* 0078f88c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078f88f: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_0078f896:; BB(0x0078f896);
    /* 0078f896: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0078f899: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f89b: je 0x78f8ac */ if (fZ) goto L_0078f8ac;
L_0078f89d:; BB(0x0078f89d);
    /* 0078f89d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78f8a2u); f_007127b0();
    /* 0078f8a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078f8a5: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0078f8ac:; BB(0x0078f8ac);
    /* 0078f8ac: mov esi, dword ptr [0xa9cccc] */ r_esi = R32((u32)(0xa9ccccu));
    /* 0078f8b2: call 0x78eea8 */ r_esp -= 4; W32(r_esp, 0x78f8b7u); f_0078eea8();
    /* 0078f8b7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0078f8b9:; BB(0x0078f8b9);
    /* 0078f8b9: mov edx, dword ptr [ebx*4 + 0x97ba60] */ r_edx = R32((u32)(r_ebx*4+0x97ba60u));
    /* 0078f8c0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0078f8c2: movzx ecx, byte ptr [eax + edx*8 + 4] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*8+0x4u));
    /* 0078f8c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f8c8: call 0x78f5a8 */ r_esp -= 4; W32(r_esp, 0x78f8cdu); f_0078f5a8();
    /* 0078f8cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078f8ce: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f8d1: cmp ebx, 0x15 */ {  u32 a = r_ebx; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078f8d4: jl 0x78f8b9 */ if ((fS!=fO)) goto L_0078f8b9;
L_0078f8d6:; BB(0x0078f8d6);
    /* 0078f8d6: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078f8dc: call 0x7f28a0 */ r_esp -= 4; W32(r_esp, 0x78f8e1u); f_007f28a0();
    /* 0078f8e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078f8e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078f8eb: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78f8f0u); f_008171e8();
    /* 0078f8f0: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078f8f3: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078f8f6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078f8f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078f8fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078f903: mov esp, ebp */ r_esp = r_ebp;
    /* 0078f905: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078f906: ret  */ FN_RET(0x0078f7fc); r_esp += 4; return;
}

void f_0078f908(void) /* sub_78F908 */
{
    FN_ENTER(0x0078f908);
    /* 0078f908: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f909: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078f90b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078f90d: call 0x78f92c */ r_esp -= 4; W32(r_esp, 0x78f912u); f_0078f92c();
    /* 0078f912: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078f916: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078f918: jne 0x78f91e */ if (!fZ) goto L_0078f91e;
L_0078f91a:; BB(0x0078f91a);
    /* 0078f91a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f91b: ret 4 */ FN_RET(0x0078f908); r_esp += 8; return;
L_0078f91e:; BB(0x0078f91e);
    /* 0078f91e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078f91f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78f924u); f_005c2f74();
    /* 0078f924: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078f925: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078f926: ret 4 */ FN_RET(0x0078f908); r_esp += 8; return;
}

void f_0078f92c(void) /* sub_78F92C */
{
    FN_ENTER(0x0078f92c);
    /* 0078f92c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078f92d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078f92f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078f931: push 0x8f4f10 */ { u32 v = 0x8f4f10u; r_esp -= 4; W32(r_esp, v); }
    /* 0078f936: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078f93c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f93d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078f944: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078f947: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078f94a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078f94d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078f950: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078f953: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078f956: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078f95d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078f960: mov ebx, dword ptr [0xa9ccd8] */ r_ebx = R32((u32)(0xa9ccd8u));
    /* 0078f966: mov dword ptr [eax], 0xb45618 */ W32((u32)(r_eax), 0xb45618u);
    /* 0078f96c: mov edx, 0xa9ccd4 */ r_edx = 0xa9ccd4u;
    /* 0078f971: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0078f973: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0078f975: mov esi, dword ptr [0xa9ccd8] */ r_esi = R32((u32)(0xa9ccd8u));
    /* 0078f97b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0078f97d:; BB(0x0078f97d);
    /* 0078f97d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f97f: je 0x78fcb7 */ if (fZ) goto L_0078fcb7;
L_0078f985:; BB(0x0078f985);
    /* 0078f985: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f988: je 0x78f9c8 */ if (fZ) goto L_0078f9c8;
L_0078f98a:; BB(0x0078f98a);
    /* 0078f98a: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f98d: jne 0x78f9a9 */ if (!fZ) goto L_0078f9a9;
L_0078f98f:; BB(0x0078f98f);
    /* 0078f98f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0078f991: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 0078f994: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f996: je 0x78fca2 */ if (fZ) goto L_0078fca2;
L_0078f99c:; BB(0x0078f99c);
    /* 0078f99c: movsx eax, byte ptr [eax + edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx));
L_0078f9a0:; BB(0x0078f9a0);
    /* 0078f9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f9a1: call 0x84265c */ r_esp -= 4; W32(r_esp, 0x78f9a6u); f_0084265c();
    /* 0078f9a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078f9a7: jmp 0x78f9e0 */ goto L_0078f9e0;
L_0078f9a9:; BB(0x0078f9a9);
    /* 0078f9a9: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9ac: jne 0x78f9e0 */ if (!fZ) goto L_0078f9e0;
L_0078f9ae:; BB(0x0078f9ae);
    /* 0078f9ae: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0078f9b0: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 0078f9b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9b5: je 0x78fca9 */ if (fZ) goto L_0078fca9;
L_0078f9bb:; BB(0x0078f9bb);
    /* 0078f9bb: movsx eax, byte ptr [eax + edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx));
L_0078f9bf:; BB(0x0078f9bf);
    /* 0078f9bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f9c0: call 0x842668 */ r_esp -= 4; W32(r_esp, 0x78f9c5u); f_00842668();
    /* 0078f9c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078f9c6: jmp 0x78f9e0 */ goto L_0078f9e0;
L_0078f9c8:; BB(0x0078f9c8);
    /* 0078f9c8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0078f9ca: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 0078f9cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9cf: je 0x78fcb0 */ if (fZ) goto L_0078fcb0;
L_0078f9d5:; BB(0x0078f9d5);
    /* 0078f9d5: movsx eax, byte ptr [eax + edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx));
L_0078f9d9:; BB(0x0078f9d9);
    /* 0078f9d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078f9da: call 0x842650 */ r_esp -= 4; W32(r_esp, 0x78f9dfu); f_00842650();
    /* 0078f9df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0078f9e0:; BB(0x0078f9e0);
    /* 0078f9e0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078f9e3: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078f9e6: jl 0x78f97d */ if ((fS!=fO)) goto L_0078f97d;
L_0078f9e8:; BB(0x0078f9e8);
    /* 0078f9e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078f92c); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fca2:; BB(0x0078fca2);
    /* 0078fca2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078fca4: jmp 0x78f9a0 */ goto L_0078f9a0;
L_0078fca9:; BB(0x0078fca9);
    /* 0078fca9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078fcab: jmp 0x78f9bf */ goto L_0078f9bf;
L_0078fcb0:; BB(0x0078fcb0);
    /* 0078fcb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078fcb2: jmp 0x78f9d9 */ goto L_0078f9d9;
L_0078fcb7:; BB(0x0078fcb7);
    /* 0078fcb7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0078fcb9: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 0078fcbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fcbe: je 0x78fcd0 */ if (fZ) goto L_0078fcd0;
L_0078fcc0:; BB(0x0078fcc0);
    /* 0078fcc0: movsx eax, byte ptr [eax + edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx));
L_0078fcc4:; BB(0x0078fcc4);
    /* 0078fcc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078fcc5: call 0x842644 */ r_esp -= 4; W32(r_esp, 0x78fccau); f_00842644();
    /* 0078fcca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078fccb: jmp 0x78f9e0 */ goto L_0078f9e0;
L_0078fcd0:; BB(0x0078fcd0);
    /* 0078fcd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078fcd2: jmp 0x78fcc4 */ goto L_0078fcc4;
}

void f_0078fafd(void)
{
    FN_ENTER(0x0078fafd);
    goto L_0078fafd;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fafd); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fafd:; BB(0x0078fafd);
    /* 0078fafd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faff: je 0x78fc4e */ if (fZ) goto L_0078fc4e;
L_0078fb05:; BB(0x0078fb05);
    /* 0078fb05: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fb09:; BB(0x0078fb09);
    /* 0078fb09: mov dword ptr [0xa0f698], edx */ W32((u32)(0xa0f698u), r_edx);
    /* 0078fb0f: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc4e:; BB(0x0078fc4e);
    /* 0078fc4e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc50: jmp 0x78fb09 */ goto L_0078fb09;
}

void f_0078fb14(void)
{
    FN_ENTER(0x0078fb14);
    goto L_0078fb14;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fb14); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fb14:; BB(0x0078fb14);
    /* 0078fb14: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fb16: je 0x78fc55 */ if (fZ) goto L_0078fc55;
L_0078fb1c:; BB(0x0078fb1c);
    /* 0078fb1c: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fb20:; BB(0x0078fb20);
    /* 0078fb20: mov dword ptr [0xa0f688], edx */ W32((u32)(0xa0f688u), r_edx);
    /* 0078fb26: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc55:; BB(0x0078fc55);
    /* 0078fc55: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc57: jmp 0x78fb20 */ goto L_0078fb20;
}

void f_0078fb2b(void)
{
    FN_ENTER(0x0078fb2b);
    goto L_0078fb2b;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fb2b); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fb2b:; BB(0x0078fb2b);
    /* 0078fb2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fb2d: je 0x78fc5c */ if (fZ) goto L_0078fc5c;
L_0078fb33:; BB(0x0078fb33);
    /* 0078fb33: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fb37:; BB(0x0078fb37);
    /* 0078fb37: mov dword ptr [0xa0f684], edx */ W32((u32)(0xa0f684u), r_edx);
    /* 0078fb3d: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc5c:; BB(0x0078fc5c);
    /* 0078fc5c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc5e: jmp 0x78fb37 */ goto L_0078fb37;
}

void f_0078fb42(void)
{
    FN_ENTER(0x0078fb42);
    goto L_0078fb42;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fb42); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fb42:; BB(0x0078fb42);
    /* 0078fb42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fb44: je 0x78fc63 */ if (fZ) goto L_0078fc63;
L_0078fb4a:; BB(0x0078fb4a);
    /* 0078fb4a: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fb4e:; BB(0x0078fb4e);
    /* 0078fb4e: mov dword ptr [0xa0f68c], edx */ W32((u32)(0xa0f68cu), r_edx);
    /* 0078fb54: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc63:; BB(0x0078fc63);
    /* 0078fc63: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc65: jmp 0x78fb4e */ goto L_0078fb4e;
}

void f_0078fb59(void)
{
    FN_ENTER(0x0078fb59);
    goto L_0078fb59;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fb59); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fb59:; BB(0x0078fb59);
    /* 0078fb59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fb5b: je 0x78fc6a */ if (fZ) goto L_0078fc6a;
L_0078fb61:; BB(0x0078fb61);
    /* 0078fb61: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fb65:; BB(0x0078fb65);
    /* 0078fb65: mov dword ptr [0xa0f680], edx */ W32((u32)(0xa0f680u), r_edx);
    /* 0078fb6b: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc6a:; BB(0x0078fc6a);
    /* 0078fc6a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc6c: jmp 0x78fb65 */ goto L_0078fb65;
}

void f_0078fb70(void)
{
    FN_ENTER(0x0078fb70);
    goto L_0078fb70;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fb70); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fb70:; BB(0x0078fb70);
    /* 0078fb70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fb72: je 0x78fc71 */ if (fZ) goto L_0078fc71;
L_0078fb78:; BB(0x0078fb78);
    /* 0078fb78: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fb7c:; BB(0x0078fb7c);
    /* 0078fb7c: mov dword ptr [0xa0f67c], edx */ W32((u32)(0xa0f67cu), r_edx);
    /* 0078fb82: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc71:; BB(0x0078fc71);
    /* 0078fc71: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc73: jmp 0x78fb7c */ goto L_0078fb7c;
}

void f_0078fb84(void)
{
    FN_ENTER(0x0078fb84);
    goto L_0078fb84;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fb84); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fb84:; BB(0x0078fb84);
    /* 0078fb84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fb86: je 0x78fc78 */ if (fZ) goto L_0078fc78;
L_0078fb8c:; BB(0x0078fb8c);
    /* 0078fb8c: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fb90:; BB(0x0078fb90);
    /* 0078fb90: mov dword ptr [0xa0f678], edx */ W32((u32)(0xa0f678u), r_edx);
    /* 0078fb96: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc78:; BB(0x0078fc78);
    /* 0078fc78: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc7a: jmp 0x78fb90 */ goto L_0078fb90;
}

void f_0078fb98(void)
{
    FN_ENTER(0x0078fb98);
    goto L_0078fb98;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fb98); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fb98:; BB(0x0078fb98);
    /* 0078fb98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fb9a: je 0x78fc7f */ if (fZ) goto L_0078fc7f;
L_0078fba0:; BB(0x0078fba0);
    /* 0078fba0: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fba4:; BB(0x0078fba4);
    /* 0078fba4: mov dword ptr [0xa0f674], edx */ W32((u32)(0xa0f674u), r_edx);
    /* 0078fbaa: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc7f:; BB(0x0078fc7f);
    /* 0078fc7f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc81: jmp 0x78fba4 */ goto L_0078fba4;
}

void f_0078fbac(void)
{
    FN_ENTER(0x0078fbac);
    goto L_0078fbac;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fbac); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fbac:; BB(0x0078fbac);
    /* 0078fbac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fbae: je 0x78fc86 */ if (fZ) goto L_0078fc86;
L_0078fbb4:; BB(0x0078fbb4);
    /* 0078fbb4: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fbb8:; BB(0x0078fbb8);
    /* 0078fbb8: mov dword ptr [0xa0f670], edx */ W32((u32)(0xa0f670u), r_edx);
    /* 0078fbbe: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc86:; BB(0x0078fc86);
    /* 0078fc86: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc88: jmp 0x78fbb8 */ goto L_0078fbb8;
}

void f_0078fbc0(void)
{
    FN_ENTER(0x0078fbc0);
    goto L_0078fbc0;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fbc0); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fbc0:; BB(0x0078fbc0);
    /* 0078fbc0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fbc2: je 0x78fc8d */ if (fZ) goto L_0078fc8d;
L_0078fbc8:; BB(0x0078fbc8);
    /* 0078fbc8: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fbcc:; BB(0x0078fbcc);
    /* 0078fbcc: mov dword ptr [0xa0f66c], edx */ W32((u32)(0xa0f66cu), r_edx);
    /* 0078fbd2: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc8d:; BB(0x0078fc8d);
    /* 0078fc8d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc8f: jmp 0x78fbcc */ goto L_0078fbcc;
}

void f_0078fbd4(void)
{
    FN_ENTER(0x0078fbd4);
    goto L_0078fbd4;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fbd4); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fbd4:; BB(0x0078fbd4);
    /* 0078fbd4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fbd6: je 0x78fc94 */ if (fZ) goto L_0078fc94;
L_0078fbdc:; BB(0x0078fbdc);
    /* 0078fbdc: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fbe0:; BB(0x0078fbe0);
    /* 0078fbe0: mov dword ptr [0xa0f668], edx */ W32((u32)(0xa0f668u), r_edx);
    /* 0078fbe6: jmp 0x78fbfa */ goto L_0078fbfa;
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc94:; BB(0x0078fc94);
    /* 0078fc94: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc96: jmp 0x78fbe0 */ goto L_0078fbe0;
}

void f_0078fbe8(void)
{
    FN_ENTER(0x0078fbe8);
    goto L_0078fbe8;
L_0078f9ea:; BB(0x0078f9ea);
    /* 0078f9ea: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078f9ec: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 0078f9ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f1: je 0x78f9ff */ if (fZ) goto L_0078f9ff;
L_0078f9f3:; BB(0x0078f9f3);
    /* 0078f9f3: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
    /* 0078f9f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078f9f9: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078f9ff:; BB(0x0078f9ff);
    /* 0078f9ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa01: jne 0x78fa07 */ if (!fZ) goto L_0078fa07;
L_0078fa03:; BB(0x0078fa03);
    /* 0078fa03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa05: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa07:; BB(0x0078fa07);
    /* 0078fa07: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0a: jne 0x78fa10 */ if (!fZ) goto L_0078fa10;
L_0078fa0c:; BB(0x0078fa0c);
    /* 0078fa0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa0e: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa10:; BB(0x0078fa10);
    /* 0078fa10: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa13: jne 0x78fa19 */ if (!fZ) goto L_0078fa19;
L_0078fa15:; BB(0x0078fa15);
    /* 0078fa15: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa17: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa19:; BB(0x0078fa19);
    /* 0078fa19: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa1c: jne 0x78fa22 */ if (!fZ) goto L_0078fa22;
L_0078fa1e:; BB(0x0078fa1e);
    /* 0078fa1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa20: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa22:; BB(0x0078fa22);
    /* 0078fa22: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa25: jne 0x78fa2b */ if (!fZ) goto L_0078fa2b;
L_0078fa27:; BB(0x0078fa27);
    /* 0078fa27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa29: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa2b:; BB(0x0078fa2b);
    /* 0078fa2b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa2e: jne 0x78fa34 */ if (!fZ) goto L_0078fa34;
L_0078fa30:; BB(0x0078fa30);
    /* 0078fa30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa32: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa34:; BB(0x0078fa34);
    /* 0078fa34: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa37: jne 0x78fa3d */ if (!fZ) goto L_0078fa3d;
L_0078fa39:; BB(0x0078fa39);
    /* 0078fa39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa3b: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa3d:; BB(0x0078fa3d);
    /* 0078fa3d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa40: jne 0x78fa46 */ if (!fZ) goto L_0078fa46;
L_0078fa42:; BB(0x0078fa42);
    /* 0078fa42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa44: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa46:; BB(0x0078fa46);
    /* 0078fa46: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa49: jne 0x78fa4f */ if (!fZ) goto L_0078fa4f;
L_0078fa4b:; BB(0x0078fa4b);
    /* 0078fa4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa4d: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa4f:; BB(0x0078fa4f);
    /* 0078fa4f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa52: jne 0x78fa58 */ if (!fZ) goto L_0078fa58;
L_0078fa54:; BB(0x0078fa54);
    /* 0078fa54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa56: jne 0x78fa69 */ if (!fZ) goto L_0078fa69;
L_0078fa58:; BB(0x0078fa58);
    /* 0078fa58: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa5b: jne 0x78faeb */ if (!fZ) goto L_0078faeb;
L_0078fa61:; BB(0x0078fa61);
    /* 0078fa61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa63: je 0x78faeb */ if (fZ) goto L_0078faeb;
L_0078fa69:; BB(0x0078fa69);
    /* 0078fa69: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0078fa70:; BB(0x0078fa70);
    /* 0078fa70: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0078fa76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fa78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa7a: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa80:; BB(0x0078fa80);
    /* 0078fa80: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0078fa83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa85: je 0x78fc44 */ if (fZ) goto L_0078fc44;
L_0078fa8b:; BB(0x0078fa8b);
    /* 0078fa8b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa8e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078fa91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fa93: je 0x78faa4 */ if (fZ) goto L_0078faa4;
L_0078fa95:; BB(0x0078fa95);
    /* 0078fa95: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fa9au); f_007127b0();
    /* 0078fa9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fa9d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_0078faa4:; BB(0x0078faa4);
    /* 0078faa4: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078faa7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078faa9: je 0x78faba */ if (fZ) goto L_0078faba;
L_0078faab:; BB(0x0078faab);
    /* 0078faab: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78fab0u); f_007127b0();
    /* 0078fab0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078fab3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0078faba:; BB(0x0078faba);
    /* 0078faba: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078fac0: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x78fac5u); f_007f2900();
    /* 0078fac5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078facc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078facf: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78fad4u); f_008171e8();
    /* 0078fad4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078fad7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078fada: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078fadd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078fae0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078fae7: mov esp, ebp */ r_esp = r_ebp;
    /* 0078fae9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078faea: ret  */ FN_RET(0x0078fbe8); r_esp += 4; return;
L_0078faeb:; BB(0x0078faeb);
    /* 0078faeb: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078faee: ja 0x78fbfa */ if ((!fC&&!fZ)) goto L_0078fbfa;
L_0078faf4:; BB(0x0078faf4);
    /* 0078faf4: mov edx, dword ptr [eax*4 + 0x97ab80] */ r_edx = R32((u32)(r_eax*4+0x97ab80u));
    /* 0078fafb: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0078fbe8:; BB(0x0078fbe8);
    /* 0078fbe8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fbea: je 0x78fc9b */ if (fZ) goto L_0078fc9b;
L_0078fbf0:; BB(0x0078fbf0);
    /* 0078fbf0: mov edx, dword ptr [ecx + ebx*4 + 4] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x4u));
L_0078fbf4:; BB(0x0078fbf4);
    /* 0078fbf4: mov dword ptr [0xa0f664], edx */ W32((u32)(0xa0f664u), r_edx);
L_0078fbfa:; BB(0x0078fbfa);
    /* 0078fbfa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fbfd: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc00: jl 0x78f9ea */ if ((fS!=fO)) goto L_0078f9ea;
L_0078fc06:; BB(0x0078fc06);
    /* 0078fc06: mov ebx, dword ptr [0xa9cccc] */ r_ebx = R32((u32)(0xa9ccccu));
    /* 0078fc0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc0e: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc14:; BB(0x0078fc14);
    /* 0078fc14: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078fc16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fc18: je 0x78fa70 */ if (fZ) goto L_0078fa70;
L_0078fc1e:; BB(0x0078fc1e);
    /* 0078fc1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0078fc20:; BB(0x0078fc20);
    /* 0078fc20: movzx eax, byte ptr [edx + ecx*8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*8));
    /* 0078fc24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc27: jge 0x78fc36 */ if ((fS==fO)) goto L_0078fc36;
L_0078fc29:; BB(0x0078fc29);
    /* 0078fc29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078fc2c: cmp ecx, 0x2d */ {  u32 a = r_ecx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fc2f: jl 0x78fc20 */ if ((fS!=fO)) goto L_0078fc20;
L_0078fc31:; BB(0x0078fc31);
    /* 0078fc31: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc36:; BB(0x0078fc36);
    /* 0078fc36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fc38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078fc3a: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x78fc3fu); f_00792f98();
    /* 0078fc3f: jmp 0x78fa70 */ goto L_0078fa70;
L_0078fc44:; BB(0x0078fc44);
    /* 0078fc44: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x78fc49u); f_00792c64();
    /* 0078fc49: jmp 0x78fa8b */ goto L_0078fa8b;
L_0078fc9b:; BB(0x0078fc9b);
    /* 0078fc9b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078fc9d: jmp 0x78fbf4 */ goto L_0078fbf4;
}

void f_0078fcd4(void) /* sub_78FCD4 */
{
    FN_ENTER(0x0078fcd4);
    /* 0078fcd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078fcd5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078fcd7: call 0x70a604 */ r_esp -= 4; W32(r_esp, 0x78fcdcu); f_0070a604();
    /* 0078fcdc: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 0078fcdf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fce1: mov edx, 0 */ r_edx = 0x0u;
    /* 0078fce6: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0078fce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fceb: mov eax, 0 */ r_eax = 0x0u;
    /* 0078fcf0: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0078fcf3: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0078fcf5: jne 0x78fd61 */ if (!fZ) goto L_0078fd61;
L_0078fcf7:; BB(0x0078fcf7);
    /* 0078fcf7: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0078fcfc: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fcff: jge 0x78fd61 */ if ((fS==fO)) goto L_0078fd61;
L_0078fd01:; BB(0x0078fd01);
    /* 0078fd01: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fd06: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078fd0c: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x78fd11u); f_007be19c();
    /* 0078fd11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078fd14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fd16: je 0x78fd1d */ if (fZ) goto L_0078fd1d;
L_0078fd18:; BB(0x0078fd18);
    /* 0078fd18: mov ebp, 0x97b8e0 */ r_ebp = 0x97b8e0u;
L_0078fd1d:; BB(0x0078fd1d);
    /* 0078fd1d: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0078fd22: movzx eax, byte ptr [ebp + eax*8] */ r_eax = (u32)R8((u32)(r_ebp+r_eax*8));
    /* 0078fd27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fd29: jne 0x78fd49 */ if (!fZ) goto L_0078fd49;
L_0078fd2b:; BB(0x0078fd2b);
    /* 0078fd2b: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0078fd30: movzx edx, byte ptr [ebp + eax*8 + 4] */ r_edx = (u32)R8((u32)(r_ebp+r_eax*8+0x4u));
    /* 0078fd35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078fd36: call 0x7bfce4 */ r_esp -= 4; W32(r_esp, 0x78fd3bu); f_007bfce4();
    /* 0078fd3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078fd3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fd3e: je 0x78fd61 */ if (fZ) goto L_0078fd61;
L_0078fd40:; BB(0x0078fd40);
    /* 0078fd40: mov eax, 1 */ r_eax = 0x1u;
    /* 0078fd45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078fd46: ret 4 */ FN_RET(0x0078fcd4); r_esp += 8; return;
L_0078fd49:; BB(0x0078fd49);
    /* 0078fd49: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fd4c: jne 0x78fd61 */ if (!fZ) goto L_0078fd61;
L_0078fd4e:; BB(0x0078fd4e);
    /* 0078fd4e: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0078fd53: push dword ptr [ebp + eax*8 + 4] */ { u32 v = R32((u32)(r_ebp+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078fd57: call 0x7c00e8 */ r_esp -= 4; W32(r_esp, 0x78fd5cu); f_007c00e8();
    /* 0078fd5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078fd5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fd5f: jne 0x78fd40 */ if (!fZ) goto L_0078fd40;
L_0078fd61:; BB(0x0078fd61);
    /* 0078fd61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fd63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078fd64: ret 4 */ FN_RET(0x0078fcd4); r_esp += 8; return;
}

void f_0078fd68(void) /* sub_78FD68 */
{
    FN_ENTER(0x0078fd68);
    /* 0078fd68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078fd69: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078fd6b: call 0x70a604 */ r_esp -= 4; W32(r_esp, 0x78fd70u); f_0070a604();
    /* 0078fd70: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 0078fd73: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fd75: mov edx, 0 */ r_edx = 0x0u;
    /* 0078fd7a: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0078fd7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fd7f: mov eax, 0 */ r_eax = 0x0u;
    /* 0078fd84: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0078fd87: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0078fd89: jne 0x78fdf5 */ if (!fZ) goto L_0078fdf5;
L_0078fd8b:; BB(0x0078fd8b);
    /* 0078fd8b: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0078fd90: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fd93: jge 0x78fdf5 */ if ((fS==fO)) goto L_0078fdf5;
L_0078fd95:; BB(0x0078fd95);
    /* 0078fd95: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fd9a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078fda0: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x78fda5u); f_007be19c();
    /* 0078fda5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078fda8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fdaa: je 0x78fdb1 */ if (fZ) goto L_0078fdb1;
L_0078fdac:; BB(0x0078fdac);
    /* 0078fdac: mov ebp, 0x97b8e0 */ r_ebp = 0x97b8e0u;
L_0078fdb1:; BB(0x0078fdb1);
    /* 0078fdb1: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0078fdb6: movzx eax, byte ptr [ebp + eax*8] */ r_eax = (u32)R8((u32)(r_ebp+r_eax*8));
    /* 0078fdbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fdbd: jne 0x78fddd */ if (!fZ) goto L_0078fddd;
L_0078fdbf:; BB(0x0078fdbf);
    /* 0078fdbf: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0078fdc4: movzx edx, byte ptr [ebp + eax*8 + 4] */ r_edx = (u32)R8((u32)(r_ebp+r_eax*8+0x4u));
    /* 0078fdc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078fdca: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x78fdcfu); f_007bfff8();
    /* 0078fdcf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078fdd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fdd2: je 0x78fdf5 */ if (fZ) goto L_0078fdf5;
L_0078fdd4:; BB(0x0078fdd4);
    /* 0078fdd4: mov eax, 1 */ r_eax = 0x1u;
    /* 0078fdd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078fdda: ret 4 */ FN_RET(0x0078fd68); r_esp += 8; return;
L_0078fddd:; BB(0x0078fddd);
    /* 0078fddd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fde0: jne 0x78fdf5 */ if (!fZ) goto L_0078fdf5;
L_0078fde2:; BB(0x0078fde2);
    /* 0078fde2: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 0078fde7: push dword ptr [ebp + eax*8 + 4] */ { u32 v = R32((u32)(r_ebp+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078fdeb: call 0x7c0108 */ r_esp -= 4; W32(r_esp, 0x78fdf0u); f_007c0108();
    /* 0078fdf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078fdf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fdf3: jne 0x78fdd4 */ if (!fZ) goto L_0078fdd4;
L_0078fdf5:; BB(0x0078fdf5);
    /* 0078fdf5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fdf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078fdf8: ret 4 */ FN_RET(0x0078fd68); r_esp += 8; return;
}

void f_0078fdfc(void) /* sub_78FDFC */
{
    FN_ENTER(0x0078fdfc);
    /* 0078fdfc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078fdfd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078fdfe: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078fe00: movzx esi, byte ptr [esp + 0xc] */ r_esi = (u32)R8((u32)(r_esp+0xcu));
    /* 0078fe05: call 0x70a604 */ r_esp -= 4; W32(r_esp, 0x78fe0au); f_0070a604();
    /* 0078fe0a: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 0078fe0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe0e: mov edx, 0 */ r_edx = 0x0u;
    /* 0078fe13: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0078fe16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe18: mov eax, 0 */ r_eax = 0x0u;
    /* 0078fe1d: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0078fe20: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0078fe22: jne 0x78fed6 */ if (!fZ) goto L_0078fed6;
L_0078fe28:; BB(0x0078fe28);
    /* 0078fe28: cmp esi, 0x2d */ {  u32 a = r_esi; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078fe2b: jge 0x78fed6 */ if ((fS==fO)) goto L_0078fed6;
L_0078fe31:; BB(0x0078fe31);
    /* 0078fe31: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078fe36: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078fe3c: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x78fe41u); f_007be19c();
    /* 0078fe41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078fe44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe46: je 0x78fe4d */ if (fZ) goto L_0078fe4d;
L_0078fe48:; BB(0x0078fe48);
    /* 0078fe48: mov ebx, 0x97b8e0 */ r_ebx = 0x97b8e0u;
L_0078fe4d:; BB(0x0078fe4d);
    /* 0078fe4d: movzx eax, byte ptr [0x9ff3d4] */ r_eax = (u32)R8((u32)(0x9ff3d4u));
    /* 0078fe54: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe57: je 0x78fea1 */ if (fZ) goto L_0078fea1;
L_0078fe59:; BB(0x0078fe59);
    /* 0078fe59: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe5c: je 0x78fe71 */ if (fZ) goto L_0078fe71;
L_0078fe5e:; BB(0x0078fe5e);
    /* 0078fe5e: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0078fe61: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fe63: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fe65: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fe67: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0078fe6a: cmp edx, dword ptr [ebx + 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe6d: je 0x78fed6 */ if (fZ) goto L_0078fed6;
L_0078fe6f:; BB(0x0078fe6f);
    /* 0078fe6f: jmp 0x78fe7a */ goto L_0078fe7a;
L_0078fe71:; BB(0x0078fe71);
    /* 0078fe71: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0078fe74: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fe76: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078fe78: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0078fe7a:; BB(0x0078fe7a);
    /* 0078fe7a: cmp esi, 0xb */ {  u32 a = r_esi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe7d: je 0x78fe87 */ if (fZ) goto L_0078fe87;
L_0078fe7f:; BB(0x0078fe7f);
    /* 0078fe7f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0078fe82: cmp edx, dword ptr [ebx + 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe85: je 0x78fed6 */ if (fZ) goto L_0078fed6;
L_0078fe87:; BB(0x0078fe87);
    /* 0078fe87: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe8a: je 0x78fe94 */ if (fZ) goto L_0078fe94;
L_0078fe8c:; BB(0x0078fe8c);
    /* 0078fe8c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0078fe8f: cmp edx, dword ptr [ebx + 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe92: je 0x78fed6 */ if (fZ) goto L_0078fed6;
L_0078fe94:; BB(0x0078fe94);
    /* 0078fe94: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe97: je 0x78fea1 */ if (fZ) goto L_0078fea1;
L_0078fe99:; BB(0x0078fe99);
    /* 0078fe99: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0078fe9c: cmp eax, dword ptr [ebx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fe9f: je 0x78fed6 */ if (fZ) goto L_0078fed6;
L_0078fea1:; BB(0x0078fea1);
    /* 0078fea1: movzx eax, byte ptr [ebx + esi*8] */ r_eax = (u32)R8((u32)(r_ebx+r_esi*8));
    /* 0078fea5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fea7: jne 0x78fec3 */ if (!fZ) goto L_0078fec3;
L_0078fea9:; BB(0x0078fea9);
    /* 0078fea9: movzx eax, byte ptr [ebx + esi*8 + 4] */ r_eax = (u32)R8((u32)(r_ebx+r_esi*8+0x4u));
    /* 0078feae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078feaf: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x78feb4u); f_007bfff8();
    /* 0078feb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078feb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078feb7: je 0x78fed6 */ if (fZ) goto L_0078fed6;
L_0078feb9:; BB(0x0078feb9);
    /* 0078feb9: mov eax, 1 */ r_eax = 0x1u;
    /* 0078febe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078febf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078fec0: ret 4 */ FN_RET(0x0078fdfc); r_esp += 8; return;
L_0078fec3:; BB(0x0078fec3);
    /* 0078fec3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fec6: jne 0x78fed6 */ if (!fZ) goto L_0078fed6;
L_0078fec8:; BB(0x0078fec8);
    /* 0078fec8: push dword ptr [ebx + esi*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078fecc: call 0x7c0108 */ r_esp -= 4; W32(r_esp, 0x78fed1u); f_007c0108();
    /* 0078fed1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078fed2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fed4: jne 0x78feb9 */ if (!fZ) goto L_0078feb9;
L_0078fed6:; BB(0x0078fed6);
    /* 0078fed6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fed8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078fed9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078feda: ret 4 */ FN_RET(0x0078fdfc); r_esp += 8; return;
}

void f_0078fee0(void) /* sub_78FEE0 */
{
    FN_ENTER(0x0078fee0);
    /* 0078fee0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0078fee4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078fee6: movzx ecx, byte ptr [eax + 0x50] */ r_ecx = (u32)R8((u32)(r_eax+0x50u));
    /* 0078feea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078feec: jne 0x78fef7 */ if (!fZ) goto L_0078fef7;
L_0078feee:; BB(0x0078feee);
    /* 0078feee: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 0078fef2: cmp ecx, dword ptr [eax + 0x54] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078fef5: je 0x78ff2f */ if (fZ) goto L_0078ff2f;
L_0078fef7:; BB(0x0078fef7);
    /* 0078fef7: movzx ecx, byte ptr [eax + 0x58] */ r_ecx = (u32)R8((u32)(r_eax+0x58u));
    /* 0078fefb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fefd: jne 0x78ff08 */ if (!fZ) goto L_0078ff08;
L_0078feff:; BB(0x0078feff);
    /* 0078feff: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 0078ff03: cmp ecx, dword ptr [eax + 0x5c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x5cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078ff06: je 0x78ff2f */ if (fZ) goto L_0078ff2f;
L_0078ff08:; BB(0x0078ff08);
    /* 0078ff08: movzx ecx, byte ptr [eax + 0x60] */ r_ecx = (u32)R8((u32)(r_eax+0x60u));
    /* 0078ff0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ff0e: jne 0x78ff19 */ if (!fZ) goto L_0078ff19;
L_0078ff10:; BB(0x0078ff10);
    /* 0078ff10: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 0078ff14: cmp ecx, dword ptr [eax + 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078ff17: je 0x78ff2f */ if (fZ) goto L_0078ff2f;
L_0078ff19:; BB(0x0078ff19);
    /* 0078ff19: movzx ecx, byte ptr [eax + 0x68] */ r_ecx = (u32)R8((u32)(r_eax+0x68u));
    /* 0078ff1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ff1f: jne 0x78ff2a */ if (!fZ) goto L_0078ff2a;
L_0078ff21:; BB(0x0078ff21);
    /* 0078ff21: mov edx, dword ptr [eax + edx*8 + 4] */ r_edx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 0078ff25: cmp edx, dword ptr [eax + 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078ff28: je 0x78ff2f */ if (fZ) goto L_0078ff2f;
L_0078ff2a:; BB(0x0078ff2a);
    /* 0078ff2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ff2c: ret 4 */ FN_RET(0x0078fee0); r_esp += 8; return;
L_0078ff2f:; BB(0x0078ff2f);
    /* 0078ff2f: mov eax, 1 */ r_eax = 0x1u;
    /* 0078ff34: ret 4 */ FN_RET(0x0078fee0); r_esp += 8; return;
}

