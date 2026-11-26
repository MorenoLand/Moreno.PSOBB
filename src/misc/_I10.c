#include "protos.h"

void f_00869eef(void) /* _$I10_OUTPUT */
{
    FN_ENTER(0x00869eef);
    /* 00869eef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00869ef0: mov ebp, esp */ r_ebp = r_esp;
    /* 00869ef2: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00869ef5: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00869efa: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00869efd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00869f00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869f01: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 00869f04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869f05: mov ecx, eax */ r_ecx = r_eax;
    /* 00869f07: mov esi, 0x7fff */ r_esi = 0x7fffu;
    /* 00869f0c: and ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00869f12: and eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00869f14: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00869f17: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00869f18: mov byte ptr [ebp - 0x1c], 0xcc */ W8((u32)(r_ebp+0xffffffe4u), 0xccu);
    /* 00869f1c: mov byte ptr [ebp - 0x1b], 0xcc */ W8((u32)(r_ebp+0xffffffe5u), 0xccu);
    /* 00869f20: mov byte ptr [ebp - 0x1a], 0xcc */ W8((u32)(r_ebp+0xffffffe6u), 0xccu);
    /* 00869f24: mov byte ptr [ebp - 0x19], 0xcc */ W8((u32)(r_ebp+0xffffffe7u), 0xccu);
    /* 00869f28: mov byte ptr [ebp - 0x18], 0xcc */ W8((u32)(r_ebp+0xffffffe8u), 0xccu);
    /* 00869f2c: mov byte ptr [ebp - 0x17], 0xcc */ W8((u32)(r_ebp+0xffffffe9u), 0xccu);
    /* 00869f30: mov byte ptr [ebp - 0x16], 0xcc */ W8((u32)(r_ebp+0xffffffeau), 0xccu);
    /* 00869f34: mov byte ptr [ebp - 0x15], 0xcc */ W8((u32)(r_ebp+0xffffffebu), 0xccu);
    /* 00869f38: mov byte ptr [ebp - 0x14], 0xcc */ W8((u32)(r_ebp+0xffffffecu), 0xccu);
    /* 00869f3c: mov byte ptr [ebp - 0x13], 0xcc */ W8((u32)(r_ebp+0xffffffedu), 0xccu);
    /* 00869f40: mov byte ptr [ebp - 0x12], 0xfb */ W8((u32)(r_ebp+0xffffffeeu), 0xfbu);
    /* 00869f44: mov byte ptr [ebp - 0x11], 0x3f */ W8((u32)(r_ebp+0xffffffefu), 0x3fu);
    /* 00869f48: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00869f4f: mov edx, eax */ r_edx = r_eax;
    /* 00869f51: je 0x869f59 */ if (fZ) goto L_00869f59;
L_00869f53:; BB(0x00869f53);
    /* 00869f53: mov byte ptr [ebx + 2], 0x2d */ W8((u32)(r_ebx+0x2u), 0x2du);
    /* 00869f57: jmp 0x869f5d */ goto L_00869f5d;
L_00869f59:; BB(0x00869f59);
    /* 00869f59: mov byte ptr [ebx + 2], 0x20 */ W8((u32)(r_ebx+0x2u), 0x20u);
L_00869f5d:; BB(0x00869f5d);
    /* 00869f5d: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00869f60: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00869f63: jne 0x869f72 */ if (!fZ) goto L_00869f72;
L_00869f65:; BB(0x00869f65);
    /* 00869f65: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869f67: jne 0x869f72 */ if (!fZ) goto L_00869f72;
L_00869f69:; BB(0x00869f69);
    /* 00869f69: cmp dword ptr [ebp + 8], edi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869f6c: je 0x86a065 */ if (fZ) goto L_0086a065;
L_00869f72:; BB(0x00869f72);
    /* 00869f72: cmp dx, si */ {  u32 a = (u16)r_edx; u32 b = (u16)r_esi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00869f75: jne 0x869fef */ if (!fZ) goto L_00869fef;
L_00869f77:; BB(0x00869f77);
    /* 00869f77: mov eax, 0x80000000 */ r_eax = 0x80000000u;
    /* 00869f7c: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869f7e: mov word ptr [ebx], 1 */ W16((u32)(r_ebx), 0x1u);
    /* 00869f83: jne 0x869f8b */ if (!fZ) goto L_00869f8b;
L_00869f85:; BB(0x00869f85);
    /* 00869f85: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869f89: je 0x869f9a */ if (fZ) goto L_00869f9a;
L_00869f8b:; BB(0x00869f8b);
    /* 00869f8b: test edi, 0x40000000 */ {  u32 a = r_edi; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869f91: jne 0x869f9a */ if (!fZ) goto L_00869f9a;
L_00869f93:; BB(0x00869f93);
    /* 00869f93: push 0x99a46c */ { u32 v = 0x99a46cu; r_esp -= 4; W32(r_esp, v); }
    /* 00869f98: jmp 0x869fe0 */ goto L_00869fe0;
L_00869f9a:; BB(0x00869f9a);
    /* 00869f9a: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00869f9d: je 0x869fb4 */ if (fZ) goto L_00869fb4;
L_00869f9f:; BB(0x00869f9f);
    /* 00869f9f: cmp edi, 0xc0000000 */ {  u32 a = r_edi; u32 b = 0xc0000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869fa5: jne 0x869fb4 */ if (!fZ) goto L_00869fb4;
L_00869fa7:; BB(0x00869fa7);
    /* 00869fa7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869fab: jne 0x869fdb */ if (!fZ) goto L_00869fdb;
L_00869fad:; BB(0x00869fad);
    /* 00869fad: push 0x99a464 */ { u32 v = 0x99a464u; r_esp -= 4; W32(r_esp, v); }
    /* 00869fb2: jmp 0x869fc3 */ goto L_00869fc3;
L_00869fb4:; BB(0x00869fb4);
    /* 00869fb4: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869fb6: jne 0x869fdb */ if (!fZ) goto L_00869fdb;
L_00869fb8:; BB(0x00869fb8);
    /* 00869fb8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869fbc: jne 0x869fdb */ if (!fZ) goto L_00869fdb;
L_00869fbe:; BB(0x00869fbe);
    /* 00869fbe: push 0x99a45c */ { u32 v = 0x99a45cu; r_esp -= 4; W32(r_esp, v); }
L_00869fc3:; BB(0x00869fc3);
    /* 00869fc3: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 00869fc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869fc7: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x869fccu); f_0085e2f0();
    /* 00869fcc: mov byte ptr [ebx + 3], 5 */ W8((u32)(r_ebx+0x3u), 0x5u);
L_00869fd0:; BB(0x00869fd0);
    /* 00869fd0: and dword ptr [ebp - 0x2c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00869fd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869fd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869fd6: jmp 0x86a147 */ goto L_0086a147;
L_00869fdb:; BB(0x00869fdb);
    /* 00869fdb: push 0x99a454 */ { u32 v = 0x99a454u; r_esp -= 4; W32(r_esp, v); }
L_00869fe0:; BB(0x00869fe0);
    /* 00869fe0: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 00869fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869fe4: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x869fe9u); f_0085e2f0();
    /* 00869fe9: mov byte ptr [ebx + 3], 6 */ W8((u32)(r_ebx+0x3u), 0x6u);
    /* 00869fed: jmp 0x869fd0 */ goto L_00869fd0;
L_00869fef:; BB(0x00869fef);
    /* 00869fef: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00869ff2: mov esi, eax */ r_esi = r_eax;
    /* 00869ff4: imul eax, eax, 0x4d10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x4d10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00869ffa: and word ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 00869fff: mov ecx, edi */ r_ecx = r_edi;
    /* 0086a001: shr ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086a004: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0086a007: lea ecx, [esi + ecx*2] */ r_ecx = (u32)(r_esi+r_ecx*2);
    /* 0086a00a: imul ecx, ecx, 0x4d */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x4du; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0086a00d: lea esi, [ecx + eax - 0x134312f4] */ r_esi = (u32)(r_ecx+r_eax+0xecbced0cu);
    /* 0086a014: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086a017: mov dword ptr [ebp - 0xe], eax */ W32((u32)(r_ebp+0xfffffff2u), r_eax);
    /* 0086a01a: sar esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0086a01d: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 0086a020: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086a022: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a025: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a029: mov word ptr [ebp - 6], dx */ W16((u32)(r_ebp+0xfffffffau), (u16)r_edx);
    /* 0086a02d: mov dword ptr [ebp - 0xa], edi */ W32((u32)(r_ebp+0xfffffff6u), r_edi);
    /* 0086a030: call 0x86a6f5 */ r_esp -= 4; W32(r_esp, 0x86a035u); f_0086a6f5();
    /* 0086a035: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a038: cmp word ptr [ebp - 6], 0x3fff */ {  u32 a = R16((u32)(r_ebp+0xfffffffau)); u32 b = 0x3fffu; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0086a03e: jb 0x86a050 */ if (fC) goto L_0086a050;
L_0086a040:; BB(0x0086a040);
    /* 0086a040: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0086a043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a044: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a048: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086a049: call 0x86a4c3 */ r_esp -= 4; W32(r_esp, 0x86a04eu); f_0086a4c3();
    /* 0086a04e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a04f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086a050:; BB(0x0086a050);
    /* 0086a050: test byte ptr [ebp + 0x18], 1 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086a054: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 0086a057: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 0086a05a: je 0x86a06e */ if (fZ) goto L_0086a06e;
L_0086a05c:; BB(0x0086a05c);
    /* 0086a05c: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 0086a05f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086a061: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0086a063: jg 0x86a06e */ if ((!fZ&&fS==fO)) goto L_0086a06e;
L_0086a065:; BB(0x0086a065);
    /* 0086a065: mov byte ptr [ebx + 4], 0x30 */ W8((u32)(r_ebx+0x4u), 0x30u);
    /* 0086a069: jmp 0x86a168 */ goto L_0086a168;
L_0086a06e:; BB(0x0086a06e);
    /* 0086a06e: cmp edi, 0x15 */ {  u32 a = r_edi; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086a071: jle 0x86a076 */ if ((fZ||fS!=fO)) goto L_0086a076;
L_0086a073:; BB(0x0086a073);
    /* 0086a073: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0086a076:; BB(0x0086a076);
    /* 0086a076: movzx esi, word ptr [ebp - 6] */ r_esi = (u32)R16((u32)(r_ebp+0xfffffffau));
    /* 0086a07a: sub esi, 0x3ffe */ {  u32 a = r_esi; u32 b = 0x3ffeu; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086a080: and word ptr [ebp - 6], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffau);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 0086a085: mov dword ptr [ebp + 0x10], 8 */ W32((u32)(r_ebp+0x10u), 0x8u);
L_0086a08c:; BB(0x0086a08c);
    /* 0086a08c: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a08f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a090: call 0x869982 */ r_esp -= 4; W32(r_esp, 0x86a095u); f_00869982();
    /* 0086a095: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0086a098: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a099: jne 0x86a08c */ if (!fZ) goto L_0086a08c;
L_0086a09b:; BB(0x0086a09b);
    /* 0086a09b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086a09d: jge 0x86a0b6 */ if ((fS==fO)) goto L_0086a0b6;
L_0086a09f:; BB(0x0086a09f);
    /* 0086a09f: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086a0a1: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0086a0a7: jle 0x86a0b6 */ if ((fZ||fS!=fO)) goto L_0086a0b6;
L_0086a0a9:; BB(0x0086a0a9);
    /* 0086a0a9: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a0ad: call 0x8699b0 */ r_esp -= 4; W32(r_esp, 0x86a0b2u); f_008699b0();
    /* 0086a0b2: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0086a0b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a0b4: jne 0x86a0a9 */ if (!fZ) goto L_0086a0a9;
L_0086a0b6:; BB(0x0086a0b6);
    /* 0086a0b6: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 0086a0b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0086a0bb: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 0086a0be: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0086a0c1: jle 0x86a113 */ if ((fZ||fS!=fO)) goto L_0086a113;
L_0086a0c3:; BB(0x0086a0c3);
    /* 0086a0c3: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
L_0086a0c6:; BB(0x0086a0c6);
    /* 0086a0c6: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
    /* 0086a0c9: lea edi, [ebp - 0x28] */ r_edi = (u32)(r_ebp+0xffffffd8u);
    /* 0086a0cc: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0086a0cd: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0086a0ce: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a0d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a0d2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0086a0d3: call 0x869982 */ r_esp -= 4; W32(r_esp, 0x86a0d8u); f_00869982();
    /* 0086a0d8: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a0db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a0dc: call 0x869982 */ r_esp -= 4; W32(r_esp, 0x86a0e1u); f_00869982();
    /* 0086a0e1: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0086a0e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a0e5: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a0e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a0e9: call 0x869924 */ r_esp -= 4; W32(r_esp, 0x86a0eeu); f_00869924();
    /* 0086a0ee: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a0f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a0f2: call 0x869982 */ r_esp -= 4; W32(r_esp, 0x86a0f7u); f_00869982();
    /* 0086a0f7: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 0086a0fa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0086a0fd: add al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086a0ff: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a102: inc dword ptr [ebp - 0x30] */ { u32 ad = (u32)(r_ebp+0xffffffd0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a105: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0086a108: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0086a10a: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0086a10e: jne 0x86a0c6 */ if (!fZ) goto L_0086a0c6;
L_0086a110:; BB(0x0086a110);
    /* 0086a110: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_0086a113:; BB(0x0086a113);
    /* 0086a113: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086a114: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0086a116: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086a117: cmp cl, 0x35 */ {  u32 a = (u8)r_ecx; u32 b = 0x35u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0086a11a: lea ecx, [ebx + 4] */ r_ecx = (u32)(r_ebx+0x4u);
    /* 0086a11d: jl 0x86a15d */ if ((fS!=fO)) goto L_0086a15d;
L_0086a11f:; BB(0x0086a11f);
    /* 0086a11f: jmp 0x86a12a */ goto L_0086a12a;
L_0086a121:; BB(0x0086a121);
    /* 0086a121: cmp byte ptr [eax], 0x39 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086a124: jne 0x86a12e */ if (!fZ) goto L_0086a12e;
L_0086a126:; BB(0x0086a126);
    /* 0086a126: mov byte ptr [eax], 0x30 */ W8((u32)(r_eax), 0x30u);
    /* 0086a129: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0086a12a:; BB(0x0086a12a);
    /* 0086a12a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086a12c: jae 0x86a121 */ if (!fC) goto L_0086a121;
L_0086a12e:; BB(0x0086a12e);
    /* 0086a12e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086a130: jae 0x86a136 */ if (!fC) goto L_0086a136;
L_0086a132:; BB(0x0086a132);
    /* 0086a132: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086a133: inc word ptr [ebx] */ { u32 ad = (u32)(r_ebx); u32 x = R16(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0086a136:; BB(0x0086a136);
    /* 0086a136: inc byte ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0086a138:; BB(0x0086a138);
    /* 0086a138: sub al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086a13a: sub al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086a13c: mov byte ptr [ebx + 3], al */ W8((u32)(r_ebx+0x3u), (u8)r_eax);
    /* 0086a13f: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0086a142: mov byte ptr [eax + ebx + 4], 0 */ W8((u32)(r_eax+r_ebx+0x4u), 0x0u);
L_0086a147:; BB(0x0086a147);
    /* 0086a147: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_0086a14a:; BB(0x0086a14a);
    /* 0086a14a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086a14d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086a14e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086a14f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086a150: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86a155u); f_0085e419();
    /* 0086a155: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086a156: ret  */ FN_RET(0x00869eef); r_esp += 4; return;
L_0086a157:; BB(0x0086a157);
    /* 0086a157: cmp byte ptr [eax], 0x30 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086a15a: jne 0x86a161 */ if (!fZ) goto L_0086a161;
L_0086a15c:; BB(0x0086a15c);
    /* 0086a15c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0086a15d:; BB(0x0086a15d);
    /* 0086a15d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086a15f: jae 0x86a157 */ if (!fC) goto L_0086a157;
L_0086a161:; BB(0x0086a161);
    /* 0086a161: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086a163: jae 0x86a138 */ if (!fC) goto L_0086a138;
L_0086a165:; BB(0x0086a165);
    /* 0086a165: mov byte ptr [ecx], 0x30 */ W8((u32)(r_ecx), 0x30u);
L_0086a168:; BB(0x0086a168);
    /* 0086a168: and word ptr [ebx], 0 */ { u32 ad = (u32)(r_ebx);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 0086a16c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086a16e: mov byte ptr [ebx + 2], 0x20 */ W8((u32)(r_ebx+0x2u), 0x20u);
    /* 0086a172: mov byte ptr [ebx + 3], 1 */ W8((u32)(r_ebx+0x3u), 0x1u);
    /* 0086a176: mov byte ptr [ebx + 5], 0 */ W8((u32)(r_ebx+0x5u), 0x0u);
    /* 0086a17a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086a17b: jmp 0x86a14a */ goto L_0086a14a;
}

