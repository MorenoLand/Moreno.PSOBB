#include "protos.h"

void f_00863e41(void) /* __tzset_lk */
{
    FN_ENTER(0x00863e41);
    /* 00863e41: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00863e43: push 0x998e78 */ { u32 v = 0x998e78u; r_esp -= 4; W32(r_esp, v); }
    /* 00863e48: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x863e4du); f_0085e5ac();
    /* 00863e4d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00863e4f: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00863e52: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00863e54: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x863e59u); f_0085e57a();
    /* 00863e59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863e5a: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 00863e5d: mov ebx, dword ptr [0xae7eac] */ r_ebx = R32((u32)(0xae7eacu));
    /* 00863e63: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00863e66: mov dword ptr [0xae7ce4], edi */ W32((u32)(0xae7ce4u), r_edi);
    /* 00863e6c: or dword ptr [0xa24114], 0xffffffff */ { u32 ad = (u32)(0xa24114u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863e73: or dword ptr [0xa24108], 0xffffffff */ { u32 ad = (u32)(0xa24108u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863e7a: push 0x998e74 */ { u32 v = 0x998e74u; r_esp -= 4; W32(r_esp, v); }
    /* 00863e7f: call 0x8692ed */ r_esp -= 4; W32(r_esp, 0x863e84u); f_008692ed();
    /* 00863e84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863e85: mov esi, eax */ r_esi = r_eax;
    /* 00863e87: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00863e8a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863e8c: je 0x863f4a */ if (fZ) goto L_00863f4a;
L_00863e92:; BB(0x00863e92);
    /* 00863e92: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863e95: je 0x863f4a */ if (fZ) goto L_00863f4a;
L_00863e9b:; BB(0x00863e9b);
    /* 00863e9b: mov eax, dword ptr [0xae7ce8] */ r_eax = R32((u32)(0xae7ce8u));
    /* 00863ea0: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863ea2: je 0x863ec5 */ if (fZ) goto L_00863ec5;
L_00863ea4:; BB(0x00863ea4);
    /* 00863ea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863ea5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863ea6: call 0x864570 */ r_esp -= 4; W32(r_esp, 0x863eabu); f_00864570();
    /* 00863eab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863eac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863ead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863eaf: je 0x864045 */ if (fZ) goto L_00864045;
L_00863eb5:; BB(0x00863eb5);
    /* 00863eb5: mov eax, dword ptr [0xae7ce8] */ r_eax = R32((u32)(0xae7ce8u));
    /* 00863eba: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863ebc: je 0x863ec5 */ if (fZ) goto L_00863ec5;
L_00863ebe:; BB(0x00863ebe);
    /* 00863ebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863ebf: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x863ec4u); f_00858882();
    /* 00863ec4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00863ec5:; BB(0x00863ec5);
    /* 00863ec5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863ec6: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x863ecbu); f_0085d760();
    /* 00863ecb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00863ecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863ecd: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x863ed2u); f_00859c55();
    /* 00863ed2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863ed3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863ed4: mov dword ptr [0xae7ce8], eax */ W32((u32)(0xae7ce8u), r_eax);
    /* 00863ed9: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863edb: je 0x864045 */ if (fZ) goto L_00864045;
L_00863ee1:; BB(0x00863ee1);
    /* 00863ee1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863ee2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863ee3: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x863ee8u); f_0085e2f0();
    /* 00863ee8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863ee9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863eea: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863eee: call 0x86405c */ r_esp -= 4; W32(r_esp, 0x863ef3u); f_0086405c();
    /* 00863ef3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00863ef5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863ef6: push dword ptr [0xa24100] */ { u32 v = R32((u32)(0xa24100u)); r_esp -= 4; W32(r_esp, v); }
    /* 00863efc: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x863f01u); f_00858900();
    /* 00863f01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00863f04: mov eax, dword ptr [0xa24100] */ r_eax = R32((u32)(0xa24100u));
    /* 00863f09: mov byte ptr [eax + 3], 0 */ W8((u32)(r_eax+0x3u), 0x0u);
    /* 00863f0d: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863f10: cmp byte ptr [esi], 0x2d */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863f13: jne 0x863f1d */ if (!fZ) goto L_00863f1d;
L_00863f15:; BB(0x00863f15);
    /* 00863f15: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00863f1c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00863f1d:; BB(0x00863f1d);
    /* 00863f1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863f1e: call 0x85a072 */ r_esp -= 4; W32(r_esp, 0x863f23u); f_0085a072();
    /* 00863f23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863f24: imul eax, eax, 0xe10 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xe10u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00863f2a: mov dword ptr [0xa24070], eax */ W32((u32)(0xa24070u), r_eax);
    /* 00863f2f: mov bl, 0x30 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x30u) & 0xffu);
L_00863f31:; BB(0x00863f31);
    /* 00863f31: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00863f33: cmp al, 0x2b */ {  u32 a = (u8)r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00863f35: je 0x863f47 */ if (fZ) goto L_00863f47;
L_00863f37:; BB(0x00863f37);
    /* 00863f37: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00863f39: jl 0x864065 */ if ((fS!=fO)) goto L_00864065;
L_00863f3f:; BB(0x00863f3f);
    /* 00863f3f: cmp al, 0x39 */ {  u32 a = (u8)r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00863f41: jg 0x864065 */ if ((!fZ&&fS==fO)) goto L_00864065;
L_00863f47:; BB(0x00863f47);
    /* 00863f47: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863f48: jmp 0x863f31 */ goto L_00863f31;
L_00863f4a:; BB(0x00863f4a);
    /* 00863f4a: mov eax, dword ptr [0xae7ce8] */ r_eax = R32((u32)(0xae7ce8u));
    /* 00863f4f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863f51: je 0x863f60 */ if (fZ) goto L_00863f60;
L_00863f53:; BB(0x00863f53);
    /* 00863f53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863f54: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x863f59u); f_00858882();
    /* 00863f59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863f5a: mov dword ptr [0xae7ce8], edi */ W32((u32)(0xae7ce8u), r_edi);
L_00863f60:; BB(0x00863f60);
    /* 00863f60: push 0xae7c38 */ { u32 v = 0xae7c38u; r_esp -= 4; W32(r_esp, v); }
    /* 00863f65: call dword ptr [0x8f8264] */ { u32 t = R32((u32)(0x8f8264u)); r_esp -= 4; W32(r_esp, 0x863f6bu); call_ind(t); }
    /* 00863f6b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863f6e: je 0x864045 */ if (fZ) goto L_00864045;
L_00863f74:; BB(0x00863f74);
    /* 00863f74: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00863f76: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00863f77: mov dword ptr [0xae7ce4], ecx */ W32((u32)(0xae7ce4u), r_ecx);
    /* 00863f7d: mov eax, dword ptr [0xae7c38] */ r_eax = R32((u32)(0xae7c38u));
    /* 00863f82: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00863f85: mov dword ptr [0xa24070], eax */ W32((u32)(0xa24070u), r_eax);
    /* 00863f8a: cmp word ptr [0xae7c7e], di */ {  u32 a = R16((u32)(0xae7c7eu)); u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00863f91: je 0x863fa3 */ if (fZ) goto L_00863fa3;
L_00863f93:; BB(0x00863f93);
    /* 00863f93: mov edx, dword ptr [0xae7c8c] */ r_edx = R32((u32)(0xae7c8cu));
    /* 00863f99: imul edx, edx, 0x3c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00863f9c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00863f9e: mov dword ptr [0xa24070], eax */ W32((u32)(0xa24070u), r_eax);
L_00863fa3:; BB(0x00863fa3);
    /* 00863fa3: cmp word ptr [0xae7cd2], di */ {  u32 a = R16((u32)(0xae7cd2u)); u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00863faa: je 0x863fcb */ if (fZ) goto L_00863fcb;
L_00863fac:; BB(0x00863fac);
    /* 00863fac: mov eax, dword ptr [0xae7ce0] */ r_eax = R32((u32)(0xae7ce0u));
    /* 00863fb1: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863fb3: je 0x863fcb */ if (fZ) goto L_00863fcb;
L_00863fb5:; BB(0x00863fb5);
    /* 00863fb5: mov dword ptr [0xa24074], ecx */ W32((u32)(0xa24074u), r_ecx);
    /* 00863fbb: sub eax, dword ptr [0xae7c8c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae7c8cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00863fc1: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00863fc4: mov dword ptr [0xa24078], eax */ W32((u32)(0xa24078u), r_eax);
    /* 00863fc9: jmp 0x863fd7 */ goto L_00863fd7;
L_00863fcb:; BB(0x00863fcb);
    /* 00863fcb: mov dword ptr [0xa24074], edi */ W32((u32)(0xa24074u), r_edi);
    /* 00863fd1: mov dword ptr [0xa24078], edi */ W32((u32)(0xa24078u), r_edi);
L_00863fd7:; BB(0x00863fd7);
    /* 00863fd7: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00863fda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863fdb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00863fdc: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00863fde: push dword ptr [0xa24100] */ { u32 v = R32((u32)(0xa24100u)); r_esp -= 4; W32(r_esp, v); }
    /* 00863fe4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00863fe6: push 0xae7c3c */ { u32 v = 0xae7c3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00863feb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00863fec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863fed: mov esi, dword ptr [0x8f81d8] */ r_esi = R32((u32)(0x8f81d8u));
    /* 00863ff3: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x863ff5u); call_ind(t); }
    /* 00863ff5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863ff7: je 0x864009 */ if (fZ) goto L_00864009;
L_00863ff9:; BB(0x00863ff9);
    /* 00863ff9: cmp dword ptr [ebp - 0x1c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863ffc: jne 0x864009 */ if (!fZ) goto L_00864009;
L_00863ffe:; BB(0x00863ffe);
    /* 00863ffe: mov eax, dword ptr [0xa24100] */ r_eax = R32((u32)(0xa24100u));
    /* 00864003: mov byte ptr [eax + 0x3f], 0 */ W8((u32)(r_eax+0x3fu), 0x0u);
    /* 00864007: jmp 0x864011 */ goto L_00864011;
L_00864009:; BB(0x00864009);
    /* 00864009: mov eax, dword ptr [0xa24100] */ r_eax = R32((u32)(0xa24100u));
    /* 0086400e: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
L_00864011:; BB(0x00864011);
    /* 00864011: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00864014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864015: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864016: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00864018: push dword ptr [0xa24104] */ { u32 v = R32((u32)(0xa24104u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086401e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00864020: push 0xae7c90 */ { u32 v = 0xae7c90u; r_esp -= 4; W32(r_esp, v); }
    /* 00864025: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864026: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864027: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x864029u); call_ind(t); }
    /* 00864029: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086402b: je 0x86403d */ if (fZ) goto L_0086403d;
L_0086402d:; BB(0x0086402d);
    /* 0086402d: cmp dword ptr [ebp - 0x1c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864030: jne 0x86403d */ if (!fZ) goto L_0086403d;
L_00864032:; BB(0x00864032);
    /* 00864032: mov eax, dword ptr [0xa24104] */ r_eax = R32((u32)(0xa24104u));
    /* 00864037: mov byte ptr [eax + 0x3f], 0 */ W8((u32)(r_eax+0x3fu), 0x0u);
    /* 0086403b: jmp 0x864045 */ goto L_00864045;
L_0086403d:; BB(0x0086403d);
    /* 0086403d: mov eax, dword ptr [0xa24104] */ r_eax = R32((u32)(0xa24104u));
    /* 00864042: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
L_00864045:; BB(0x00864045);
    /* 00864045: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00864047: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086404a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086404b: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x864050u); f_0085790e();
    /* 00864050: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864051: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864052: jmp 0x8640e3 */ goto L_008640e3;
L_00864065:; BB(0x00864065);
    /* 00864065: cmp byte ptr [esi], 0x3a */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x3au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00864068: jne 0x8640a8 */ if (!fZ) goto L_008640a8;
L_0086406a:; BB(0x0086406a);
    /* 0086406a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086406b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086406c: call 0x85a072 */ r_esp -= 4; W32(r_esp, 0x864071u); f_0085a072();
    /* 00864071: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864072: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00864075: add dword ptr [0xa24070], eax */ { u32 ad = (u32)(0xa24070u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086407b: jmp 0x864082 */ goto L_00864082;
L_0086407d:; BB(0x0086407d);
    /* 0086407d: cmp al, 0x39 */ {  u32 a = (u8)r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0086407f: jg 0x864088 */ if ((!fZ&&fS==fO)) goto L_00864088;
L_00864081:; BB(0x00864081);
    /* 00864081: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00864082:; BB(0x00864082);
    /* 00864082: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00864084: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00864086: jge 0x86407d */ if ((fS==fO)) goto L_0086407d;
L_00864088:; BB(0x00864088);
    /* 00864088: cmp byte ptr [esi], 0x3a */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x3au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086408b: jne 0x8640a8 */ if (!fZ) goto L_008640a8;
L_0086408d:; BB(0x0086408d);
    /* 0086408d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086408e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086408f: call 0x85a072 */ r_esp -= 4; W32(r_esp, 0x864094u); f_0085a072();
    /* 00864094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864095: add dword ptr [0xa24070], eax */ { u32 ad = (u32)(0xa24070u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086409b: jmp 0x8640a2 */ goto L_008640a2;
L_0086409d:; BB(0x0086409d);
    /* 0086409d: cmp al, 0x39 */ {  u32 a = (u8)r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0086409f: jg 0x8640a8 */ if ((!fZ&&fS==fO)) goto L_008640a8;
L_008640a1:; BB(0x008640a1);
    /* 008640a1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008640a2:; BB(0x008640a2);
    /* 008640a2: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 008640a4: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 008640a6: jge 0x86409d */ if ((fS==fO)) goto L_0086409d;
L_008640a8:; BB(0x008640a8);
    /* 008640a8: cmp dword ptr [ebp - 0x20], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008640ab: je 0x8640b3 */ if (fZ) goto L_008640b3;
L_008640ad:; BB(0x008640ad);
    /* 008640ad: neg dword ptr [0xa24070] */ { u32 ad = (u32)(0xa24070u); u32 x = R32(ad); u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008640b3:; BB(0x008640b3);
    /* 008640b3: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 008640b6: mov dword ptr [0xa24074], eax */ W32((u32)(0xa24074u), r_eax);
    /* 008640bb: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008640bd: je 0x8640db */ if (fZ) goto L_008640db;
L_008640bf:; BB(0x008640bf);
    /* 008640bf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008640c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008640c2: push dword ptr [0xa24104] */ { u32 v = R32((u32)(0xa24104u)); r_esp -= 4; W32(r_esp, v); }
    /* 008640c8: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x8640cdu); f_00858900();
    /* 008640cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008640d0: mov eax, dword ptr [0xa24104] */ r_eax = R32((u32)(0xa24104u));
    /* 008640d5: mov byte ptr [eax + 3], 0 */ W8((u32)(r_eax+0x3u), 0x0u);
    /* 008640d9: jmp 0x8640e3 */ goto L_008640e3;
L_008640db:; BB(0x008640db);
    /* 008640db: mov eax, dword ptr [0xa24104] */ r_eax = R32((u32)(0xa24104u));
    /* 008640e0: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
L_008640e3:; BB(0x008640e3);
    /* 008640e3: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8640e8u); f_0085e5e7();
    /* 008640e8: ret  */ FN_RET(0x00863e41); r_esp += 4; return;
}

