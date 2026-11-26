#include "protos.h"

void f_00590000(void)
{
    FN_ENTER(0x00590000);
    /* 00590000: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00590002: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00590004: add byte ptr [ebx - 0x3da4f33c], al */ { u32 ad = (u32)(r_ebx+0xc25b0cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059000a: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059000c: mov eax, dword ptr [ebx + 0x40c] */ r_eax = R32((u32)(r_ebx+0x40cu));
    /* 00590012: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590015: je 0x590042 */ if (fZ) goto L_00590042;
L_00590017:; BB(0x00590017);
    /* 00590017: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059001a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059001b: ret 4 */ FN_RET(0x00590000); r_esp += 8; return;
L_00590042:; BB(0x00590042);
    /* 00590042: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590044: call 0x58f7b8 */ r_esp -= 4; W32(r_esp, 0x590049u); f_0058f7b8();
    /* 00590049: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059004b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059004d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x590052u); f_0051f62c();
    /* 00590052: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00590055: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590056: ret 4 */ FN_RET(0x00590000); r_esp += 8; return;
}

void f_0059001c(void)
{
    FN_ENTER(0x0059001c);
    goto L_0059001c;
L_0058ffc4:; BB(0x0058ffc4);
    /* 0058ffc4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058ffc6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058ffc8: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58ffceu); call_ind(t); }
    /* 0058ffce: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058ffd0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058ffd2: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58ffd8u); call_ind(t); }
    /* 0058ffd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058ffdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058ffdc: ret 4 */ FN_RET(0x0059001c); r_esp += 8; return;
L_0059001c:; BB(0x0059001c);
    /* 0059001c: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059001e: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 00590023: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00590026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590027: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x59002cu); f_00509590();
    /* 0059002c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059002f: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
    /* 00590035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590037: je 0x58ffc4 */ if (fZ) goto L_0058ffc4;
L_00590039:; BB(0x00590039);
    /* 00590039: mov ecx, eax */ r_ecx = r_eax;
    /* 0059003b: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x590040u); f_00508f48();
    /* 00590040: jmp 0x58ffc4 */ goto L_0058ffc4;
}

void f_00590025(void)
{
    FN_ENTER(0x00590025);
    goto L_00590025;
L_0058ffc4:; BB(0x0058ffc4);
    /* 0058ffc4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058ffc6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058ffc8: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58ffceu); call_ind(t); }
    /* 0058ffce: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0058ffd0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058ffd2: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x58ffd8u); call_ind(t); }
    /* 0058ffd8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058ffdb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058ffdc: ret 4 */ FN_RET(0x00590025); r_esp += 8; return;
L_00590025:; BB(0x00590025);
    /* 00590025: cmp byte ptr [eax - 0x18], dl */ {  u32 a = R8((u32)(r_eax+0xffffffe8u)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;   }
    /* 00590028: xchg ebp, eax */ { u32 x = r_ebp; u32 y = r_eax; r_ebp = y; r_eax = x; }
    /* 0059002a: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0059002a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059002a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059002c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059002f: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
    /* 00590035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590037: je 0x58ffc4 */ if (fZ) goto L_0058ffc4;
L_00590039:; BB(0x00590039);
    /* 00590039: mov ecx, eax */ r_ecx = r_eax;
    /* 0059003b: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x590040u); f_00508f48();
    /* 00590040: jmp 0x58ffc4 */ goto L_0058ffc4;
}

void f_00590045(void)
{
    FN_ENTER(0x00590045);
    /* 00590045: outsd dx, dword ptr [esi] */ UNSUP(0x00590045, "outsd dx, dword ptr [esi]");
    /* 00590046: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00590046, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00590046, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00590048: jmp ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); jmp_ind(t); return; }
}

void f_00590058(void)
{
    FN_ENTER(0x00590058);
    /* 00590058: add byte ptr [edx + 0x10], ch */ { u32 ad = (u32)(r_edx+0x10u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059005b: mov eax, 7 */ r_eax = 0x7u;
    /* 00590060: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00590067: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590069: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x59006eu); f_0051f664();
    /* 0059006e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590070: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590072: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x590078u); call_ind(t); }
    /* 00590078: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 0059007e: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00590081: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00590084: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0059008a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059008c: mov dword ptr [ebx + 0x40c], edx */ W32((u32)(r_ebx+0x40cu), r_edx);
    /* 00590092: mov dword ptr [ebx + 0x42c], edx */ W32((u32)(r_ebx+0x42cu), r_edx);
    /* 00590098: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059009b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059009c: ret 4 */ FN_RET(0x00590058); r_esp += 8; return;
}

void f_00590075(void)
{
    FN_ENTER(0x00590075);
    /* 00590075: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00590077: add byte ptr [ebx + 0x3cc83], cl */ { u32 ad = (u32)(r_ebx+0x3cc83u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059007d: add byte ptr [ebx - 0x377c0220], al */ { u32 ad = (u32)(r_ebx+0xc883fde0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00590083: add dword ptr [ecx + 0x3cc83], ecx */ { u32 ad = (u32)(r_ecx+0x3cc83u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00590089: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0059008b: ror byte ptr [ecx + 0x40c93], cl */ { u32 ad = (u32)(r_ecx+0x40c93u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00590091: add byte ptr [ecx + 0x42c93], cl */ { u32 ad = (u32)(r_ecx+0x42c93u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00590097: add byte ptr [ebx - 0x3da4f33c], al */ { u32 ad = (u32)(r_ebx+0xc25b0cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0059009d: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0059009f: nop  */ ;
    /* 005900a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005900a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005900a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005900a5: call 0x58f7b8 */ r_esp -= 4; W32(r_esp, 0x5900aau); f_0058f7b8();
    /* 005900aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005900ac: call 0x55f15c */ r_esp -= 4; W32(r_esp, 0x5900b1u); f_0055f15c();
    /* 005900b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005900b2: ret  */ FN_RET(0x00590075); r_esp += 4; return;
}

void f_00590090(void)
{
    FN_ENTER(0x00590090);
    /* 00590090: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00590092: mov dword ptr [ebx + 0x42c], edx */ W32((u32)(r_ebx+0x42cu), r_edx);
    /* 00590098: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059009b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059009c: ret 4 */ FN_RET(0x00590090); r_esp += 8; return;
}

void f_005900a0(void) /* sub_5900A0 */
{
    FN_ENTER(0x005900a0);
    /* 005900a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005900a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005900a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005900a5: call 0x58f7b8 */ r_esp -= 4; W32(r_esp, 0x5900aau); f_0058f7b8();
    /* 005900aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005900ac: call 0x55f15c */ r_esp -= 4; W32(r_esp, 0x5900b1u); f_0055f15c();
    /* 005900b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005900b2: ret  */ FN_RET(0x005900a0); r_esp += 4; return;
}

void f_005900a8(void)
{
    FN_ENTER(0x005900a8);
}

void f_005900b0(void)
{
    FN_ENTER(0x005900b0);
    /* 005900b0: call ptr [ebx - 0x3d] */ { u32 t = R32((u32)(r_ebx+0xffffffc3u)); r_esp -= 4; W32(r_esp, 0x5900b3u); call_ind(t); }
    /* 005900b3: nop  */ ;
    /* 005900b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005900b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005900b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005900b9: call 0x58f7b8 */ r_esp -= 4; W32(r_esp, 0x5900beu); f_0058f7b8();
    /* 005900be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005900c0: call 0x5900c8 */ r_esp -= 4; W32(r_esp, 0x5900c5u); f_005900c8();
    /* 005900c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005900c6: ret  */ FN_RET(0x005900b0); r_esp += 4; return;
}

void f_005900b4(void) /* sub_5900B4 */
{
    FN_ENTER(0x005900b4);
    /* 005900b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005900b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005900b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005900b9: call 0x58f7b8 */ r_esp -= 4; W32(r_esp, 0x5900beu); f_0058f7b8();
    /* 005900be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005900c0: call 0x5900c8 */ r_esp -= 4; W32(r_esp, 0x5900c5u); f_005900c8();
    /* 005900c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005900c6: ret  */ FN_RET(0x005900b4); r_esp += 4; return;
}

void f_005900c8(void) /* sub_5900C8 */
{
    FN_ENTER(0x005900c8);
    /* 005900c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005900c9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005900cb: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5900d0u); f_00520e6c();
    /* 005900d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005900d2: jne 0x5900fe */ if (!fZ) goto L_005900fe;
L_005900d4:; BB(0x005900d4);
    /* 005900d4: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 005900da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005900dc: jne 0x5900f5 */ if (!fZ) goto L_005900f5;
L_005900de:; BB(0x005900de);
    /* 005900de: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005900e5: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005900e8: je 0x5900fc */ if (fZ) goto L_005900fc;
L_005900ea:; BB(0x005900ea);
    /* 005900ea: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005900ec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005900ee: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5900f3u); f_0051f62c();
    /* 005900f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005900f4: ret  */ FN_RET(0x005900c8); r_esp += 4; return;
L_005900f5:; BB(0x005900f5);
    /* 005900f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005900f7: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5900fcu); f_0051f81c();
L_005900fc:; BB(0x005900fc);
    /* 005900fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005900fd: ret  */ FN_RET(0x005900c8); r_esp += 4; return;
L_005900fe:; BB(0x005900fe);
    /* 005900fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00590100: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x590105u); f_0051f81c();
    /* 00590105: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590106: ret  */ FN_RET(0x005900c8); r_esp += 4; return;
}

void f_005900d9(void)
{
    FN_ENTER(0x005900d9);
    /* 005900d9: add byte ptr [eax + 0xf177501], ch */ { u32 ad = (u32)(r_eax+0xf177501u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005900df: mov edi, 0x32e85 */ r_edi = 0x32e85u;
    /* 005900e4: add byte ptr [ebx + 0x12740cf8], al */ { u32 ad = (u32)(r_ebx+0x12740cf8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005900ea: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005900ec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005900ee: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5900f3u); f_0051f62c();
    /* 005900f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005900f4: ret  */ FN_RET(0x005900d9); r_esp += 4; return;
}

void f_00590108(void) /* sub_590108 */
{
    FN_ENTER(0x00590108);
    /* 00590108: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590109: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059010b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0059010f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590112: je 0x590196 */ if (fZ) goto L_00590196;
L_00590118:; BB(0x00590118);
    /* 00590118: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059011b: je 0x590142 */ if (fZ) goto L_00590142;
L_0059011d:; BB(0x0059011d);
    /* 0059011d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059011f: jne 0x590192 */ if (!fZ) goto L_00590192;
L_00590121:; BB(0x00590121);
    /* 00590121: fld dword ptr [ebp + 0x438] */ FPUSH(R_F32((u32)(r_ebp+0x438u)));
    /* 00590127: fsub dword ptr [0x928c04] */ ST(0) = ST(0) - R_F32((u32)(0x928c04u));
    /* 0059012d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00590130: fstp dword ptr [ebp + 0x438] */ W_F32((u32)(r_ebp+0x438u), ST(0)); FPOP();
    /* 00590136: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00590138: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x59013eu); call_ind(t); }
    /* 0059013e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059013f: ret 4 */ FN_RET(0x00590108); r_esp += 8; return;
L_00590142:; BB(0x00590142);
    /* 00590142: fld dword ptr [ebp + 0x438] */ FPUSH(R_F32((u32)(r_ebp+0x438u)));
    /* 00590148: fcomp dword ptr [0x928c10] */ fx_compare(ST(0), R_F32((u32)(0x928c10u))); FPOP();
    /* 0059014e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00590150: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00590151: ja 0x590192 */ if ((!fC&&!fZ)) goto L_00590192;
L_00590153:; BB(0x00590153);
    /* 00590153: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 00590159: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0059015e: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 00590164: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00590166: call 0x58fa28 */ r_esp -= 4; W32(r_esp, 0x59016bu); f_0058fa28();
    /* 0059016b: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00590171: mov dword ptr [ebp + 0x3c], 0xc3fa0000 */ W32((u32)(r_ebp+0x3cu), 0xc3fa0000u);
    /* 00590178: mov dword ptr [ebp + 0x48], 0xc3fa0000 */ W32((u32)(r_ebp+0x48u), 0xc3fa0000u);
    /* 0059017f: mov dword ptr [eax + 0x20], 0xc3fa0000 */ W32((u32)(r_eax+0x20u), 0xc3fa0000u);
    /* 00590186: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00590189: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059018f: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
L_00590192:; BB(0x00590192);
    /* 00590192: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590193: ret 4 */ FN_RET(0x00590108); r_esp += 8; return;
L_00590196:; BB(0x00590196);
    /* 00590196: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 0059019c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0059019f: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005901a2: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005901a7: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 005901ad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005901af: call dword ptr [edx + 0x180] */ { u32 t = R32((u32)(r_edx+0x180u)); r_esp -= 4; W32(r_esp, 0x5901b5u); call_ind(t); }
    /* 005901b5: mov dword ptr [ebp + 0x438], 0 */ W32((u32)(r_ebp+0x438u), 0x0u);
    /* 005901bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005901c0: ret 4 */ FN_RET(0x00590108); r_esp += 8; return;
}

void f_005901c4(void) /* sub_5901C4 */
{
    FN_ENTER(0x005901c4);
    /* 005901c4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005901c6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5901cbu); f_0051f62c();
    /* 005901cb: ret  */ FN_RET(0x005901c4); r_esp += 4; return;
}

void f_005901cc(void) /* sub_5901CC */
{
    FN_ENTER(0x005901cc);
    /* 005901cc: mov eax, ecx */ r_eax = r_ecx;
    /* 005901ce: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 005901d5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005901d8: je 0x5901ed */ if (fZ) goto L_005901ed;
L_005901da:; BB(0x005901da);
    /* 005901da: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005901dd: je 0x5901ed */ if (fZ) goto L_005901ed;
L_005901df:; BB(0x005901df);
    /* 005901df: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 005901e5: test edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005901eb: je 0x5901fc */ if (fZ) goto L_005901fc;
L_005901ed:; BB(0x005901ed);
    /* 005901ed: lea ecx, [eax + 0x3f0] */ r_ecx = (u32)(r_eax+0x3f0u);
    /* 005901f3: mov eax, dword ptr [eax + 0x3f0] */ r_eax = R32((u32)(r_eax+0x3f0u));
    /* 005901f9: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x5901fcu); call_ind(t); }
L_005901fc:; BB(0x005901fc);
    /* 005901fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005901fe: ret  */ FN_RET(0x005901cc); r_esp += 4; return;
}

void f_00590200(void) /* sub_590200 */
{
    FN_ENTER(0x00590200);
    /* 00590200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590201: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00590203: movzx eax, word ptr [ebp + 0x434] */ r_eax = (u32)R16((u32)(r_ebp+0x434u));
    /* 0059020a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059020b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x590210u); f_007b4d18();
    /* 00590210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590211: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590213: je 0x590238 */ if (fZ) goto L_00590238;
L_00590215:; BB(0x00590215);
    /* 00590215: mov ecx, eax */ r_ecx = r_eax;
    /* 00590217: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x59021cu); f_008173b4();
    /* 0059021c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059021e: je 0x590238 */ if (fZ) goto L_00590238;
L_00590220:; BB(0x00590220);
    /* 00590220: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 00590226: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059022b: je 0x59022f */ if (fZ) goto L_0059022f;
L_0059022d:; BB(0x0059022d);
    /* 0059022d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059022e: ret  */ FN_RET(0x00590200); r_esp += 4; return;
L_0059022f:; BB(0x0059022f);
    /* 0059022f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00590231: call 0x590248 */ r_esp -= 4; W32(r_esp, 0x590236u); f_00590248();
    /* 00590236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590237: ret  */ FN_RET(0x00590200); r_esp += 4; return;
L_00590238:; BB(0x00590238);
    /* 00590238: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0059023c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00590241: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00590245: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590246: ret  */ FN_RET(0x00590200); r_esp += 4; return;
}

void f_00590248(void) /* sub_590248 */
{
    FN_ENTER(0x00590248);
    /* 00590248: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590249: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0059024b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x590250u); f_004f7c84();
    /* 00590250: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590252: je 0x590260 */ if (fZ) goto L_00590260;
L_00590254:; BB(0x00590254);
    /* 00590254: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590256: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590258: call dword ptr [eax + 0x1dc] */ { u32 t = R32((u32)(r_eax+0x1dcu)); r_esp -= 4; W32(r_esp, 0x59025eu); call_ind(t); }
    /* 0059025e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0059025f: ret  */ FN_RET(0x00590248); r_esp += 4; return;
L_00590260:; BB(0x00590260);
    /* 00590260: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590262: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590264: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x59026au); call_ind(t); }
    /* 0059026a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059026d: je 0x590279 */ if (fZ) goto L_00590279;
L_0059026f:; BB(0x0059026f);
    /* 0059026f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590271: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590273: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x590279u); call_ind(t); }
L_00590279:; BB(0x00590279);
    /* 00590279: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059027b: call 0x590294 */ r_esp -= 4; W32(r_esp, 0x590280u); f_00590294();
    /* 00590280: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590282: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x590287u); f_006401f0();
    /* 00590287: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590289: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0059028b: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x590291u); call_ind(t); }
    /* 00590291: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590292: ret  */ FN_RET(0x00590248); r_esp += 4; return;
}

void f_00590294(void) /* sub_590294 */
{
    FN_ENTER(0x00590294);
    /* 00590294: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 0059029a: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 005902a0: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 005902a3: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 005902a9: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 005902ac: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 005902af: ret  */ FN_RET(0x00590294); r_esp += 4; return;
}

void f_005902b0(void) /* sub_5902B0 */
{
    FN_ENTER(0x005902b0);
    /* 005902b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005902b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005902b2: mov esi, ecx */ r_esi = r_ecx;
    /* 005902b4: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 005902ba: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005902bf: je 0x5902c4 */ if (fZ) goto L_005902c4;
L_005902c1:; BB(0x005902c1);
    /* 005902c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005902c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005902c3: ret  */ FN_RET(0x005902b0); r_esp += 4; return;
L_005902c4:; BB(0x005902c4);
    /* 005902c4: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5902c9u); f_004f7c84();
    /* 005902c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005902cb: je 0x5902da */ if (fZ) goto L_005902da;
L_005902cd:; BB(0x005902cd);
    /* 005902cd: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005902cf: mov ecx, esi */ r_ecx = r_esi;
    /* 005902d1: call dword ptr [eax + 0x1e0] */ { u32 t = R32((u32)(r_eax+0x1e0u)); r_esp -= 4; W32(r_esp, 0x5902d7u); call_ind(t); }
    /* 005902d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005902d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005902d9: ret  */ FN_RET(0x005902b0); r_esp += 4; return;
L_005902da:; BB(0x005902da);
    /* 005902da: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 005902e0: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005902e2: jne 0x590441 */ if (!fZ) goto L_00590441;
L_005902e8:; BB(0x005902e8);
    /* 005902e8: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x5902edu); f_00694cc8();
    /* 005902ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005902ef: je 0x590314 */ if (fZ) goto L_00590314;
L_005902f1:; BB(0x005902f1);
    /* 005902f1: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005902f6: mov ecx, esi */ r_ecx = r_esi;
    /* 005902f8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005902fa: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590300: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590306: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x590309u); call_ind(t); }
    /* 00590309: mov ebx, eax */ r_ebx = r_eax;
    /* 0059030b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059030d: jne 0x590332 */ if (!fZ) goto L_00590332;
L_0059030f:; BB(0x0059030f);
    /* 0059030f: jmp 0x590441 */ goto L_00590441;
L_00590314:; BB(0x00590314);
    /* 00590314: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590319: mov ecx, esi */ r_ecx = r_esi;
    /* 0059031b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0059031d: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590322: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x590325u); call_ind(t); }
    /* 00590325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590327: je 0x590441 */ if (fZ) goto L_00590441;
L_0059032d:; BB(0x0059032d);
    /* 0059032d: mov ebx, 1 */ r_ebx = 0x1u;
L_00590332:; BB(0x00590332);
    /* 00590332: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00590334: mov ecx, esi */ r_ecx = r_esi;
    /* 00590336: call dword ptr [edx + 0x1b8] */ { u32 t = R32((u32)(r_edx+0x1b8u)); r_esp -= 4; W32(r_esp, 0x59033cu); call_ind(t); }
    /* 0059033c: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0059033f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x590344u); f_00829cc8();
    /* 00590344: mov ecx, esi */ r_ecx = r_esi;
    /* 00590346: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x59034bu); f_00520608();
    /* 0059034b: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00590351: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00590357: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x59035cu); f_00520d08();
    /* 0059035c: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x590361u); f_00578b38();
    /* 00590361: mov eax, dword ptr [0xa74488] */ r_eax = R32((u32)(0xa74488u));
    /* 00590366: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590368: je 0x590372 */ if (fZ) goto L_00590372;
L_0059036a:; BB(0x0059036a);
    /* 0059036a: mov edx, dword ptr [esi + 0x3d8] */ r_edx = R32((u32)(r_esi+0x3d8u));
    /* 00590370: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00590372:; BB(0x00590372);
    /* 00590372: mov eax, dword ptr [0xa7448c] */ r_eax = R32((u32)(0xa7448cu));
    /* 00590377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590379: je 0x590383 */ if (fZ) goto L_00590383;
L_0059037b:; BB(0x0059037b);
    /* 0059037b: mov edx, dword ptr [esi + 0x3d8] */ r_edx = R32((u32)(r_esi+0x3d8u));
    /* 00590381: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00590383:; BB(0x00590383);
    /* 00590383: mov eax, dword ptr [0xa74490] */ r_eax = R32((u32)(0xa74490u));
    /* 00590388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059038a: je 0x590394 */ if (fZ) goto L_00590394;
L_0059038c:; BB(0x0059038c);
    /* 0059038c: mov edx, dword ptr [esi + 0x3d8] */ r_edx = R32((u32)(r_esi+0x3d8u));
    /* 00590392: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00590394:; BB(0x00590394);
    /* 00590394: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00590396: mov ecx, esi */ r_ecx = r_esi;
    /* 00590398: call dword ptr [edx + 0x1bc] */ { u32 t = R32((u32)(r_edx+0x1bcu)); r_esp -= 4; W32(r_esp, 0x59039eu); call_ind(t); }
    /* 0059039e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005903a0: je 0x5903ad */ if (fZ) goto L_005903ad;
L_005903a2:; BB(0x005903a2);
    /* 005903a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005903a4: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x5903a9u); f_008173d0();
    /* 005903a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005903ab: jne 0x590401 */ if (!fZ) goto L_00590401;
L_005903ad:; BB(0x005903ad);
    /* 005903ad: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5903b2u); f_0082d7b0();
    /* 005903b2: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 005903b5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5903bau); f_0082d838();
    /* 005903ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005903bc: push dword ptr [esi + 0x3d4] */ { u32 v = R32((u32)(r_esi+0x3d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005903c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005903c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005903c6: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5903cbu); f_00830b74();
    /* 005903cb: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005903ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005903d0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5903d5u); f_0082d8bc();
    /* 005903d5: mov dword ptr [0xa744a0], 0 */ W32((u32)(0xa744a0u), 0x0u);
    /* 005903df: mov ecx, 0x58cfa0 */ r_ecx = 0x58cfa0u;
    /* 005903e4: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5903e9u); f_0082fac4();
    /* 005903e9: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005903ec: je 0x590469 */ if (fZ) goto L_00590469;
L_005903ee:; BB(0x005903ee);
    /* 005903ee: mov ecx, esi */ r_ecx = r_esi;
    /* 005903f0: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5903f5u); f_007aa7b8();
L_005903f5:; BB(0x005903f5);
    /* 005903f5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005903f7: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5903fcu); f_0082fac4();
    /* 005903fc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x590401u); f_0082da80();
L_00590401:; BB(0x00590401);
    /* 00590401: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00590403: mov ecx, esi */ r_ecx = r_esi;
    /* 00590405: call dword ptr [eax + 0x1c0] */ { u32 t = R32((u32)(r_eax+0x1c0u)); r_esp -= 4; W32(r_esp, 0x59040bu); call_ind(t); }
    /* 0059040b: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00590410: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00590415: mov ecx, esi */ r_ecx = r_esi;
    /* 00590417: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x59041cu); f_00520610();
    /* 0059041c: mov eax, dword ptr [0xa74494] */ r_eax = R32((u32)(0xa74494u));
    /* 00590421: mov edx, dword ptr [0xa74498] */ r_edx = R32((u32)(0xa74498u));
    /* 00590427: mov ebx, dword ptr [0xa7449c] */ r_ebx = R32((u32)(0xa7449cu));
    /* 0059042d: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 00590433: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 00590439: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 0059043f: jmp 0x590461 */ goto L_00590461;
L_00590441:; BB(0x00590441);
    /* 00590441: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x590446u); f_007a61a4();
    /* 00590446: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00590449: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0059044c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0059044f: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 00590455: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 0059045b: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
L_00590461:; BB(0x00590461);
    /* 00590461: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x590466u); f_0082dab0();
    /* 00590466: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590467: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00590468: ret  */ FN_RET(0x005902b0); r_esp += 4; return;
L_00590469:; BB(0x00590469);
    /* 00590469: mov ecx, esi */ r_ecx = r_esi;
    /* 0059046b: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x590470u); f_007aa668();
    /* 00590470: jmp 0x5903f5 */ goto L_005903f5;
}

void f_00590474(void) /* sub_590474 */
{
    FN_ENTER(0x00590474);
    /* 00590474: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00590475: mov edi, ecx */ r_edi = r_ecx;
    /* 00590477: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0059047e: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590481: je 0x59048c */ if (fZ) goto L_0059048c;
L_00590483:; BB(0x00590483);
    /* 00590483: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00590485: mov ecx, edi */ r_ecx = r_edi;
    /* 00590487: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x59048cu); f_0051f62c();
L_0059048c:; BB(0x0059048c);
    /* 0059048c: mov ecx, edi */ r_ecx = r_edi;
    /* 0059048e: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x590493u); f_0051f81c();
    /* 00590493: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00590494: ret  */ FN_RET(0x00590474); r_esp += 4; return;
}

void f_00590516(void)
{
    FN_ENTER(0x00590516);
    /* 00590516: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00590518: cmp byte ptr [edi], 0xc3 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc3u; u32 r = (a - b) & 0xffu;   }
    /* 0059051b: nop  */ ;
    /* 0059051c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059051d: mov ebp, esp */ r_ebp = r_esp;
    /* 0059051f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00590521: push 0x8d81c0 */ { u32 v = 0x8d81c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590526: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059052c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059052d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00590534: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590537: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059053a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0059053d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00590540: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00590543: mov dword ptr [0xa74420], 0 */ W32((u32)(0xa74420u), 0x0u);
    /* 0059054d: mov dword ptr [0xa74424], 0 */ W32((u32)(0xa74424u), 0x0u);
    /* 00590557: mov dword ptr [0xa74428], 0 */ W32((u32)(0xa74428u), 0x0u);
    /* 00590561: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x590566u); f_00520e6c();
    /* 00590566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590568: je 0x590583 */ if (fZ) goto L_00590583;
L_0059056a:; BB(0x0059056a);
    /* 0059056a: push 0x928e84 */ { u32 v = 0x928e84u; r_esp -= 4; W32(r_esp, v); }
    /* 0059056f: push 0x9bf984 */ { u32 v = 0x9bf984u; r_esp -= 4; W32(r_esp, v); }
    /* 00590574: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x590579u); f_0051f674();
    /* 00590579: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059057c: mov dword ptr [0xa74454], eax */ W32((u32)(0xa74454u), r_eax);
    /* 00590581: jmp 0x590593 */ goto L_00590593;
L_00590583:; BB(0x00590583);
    /* 00590583: push 0x9bf984 */ { u32 v = 0x9bf984u; r_esp -= 4; W32(r_esp, v); }
    /* 00590588: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x59058du); f_0051f6b0();
    /* 0059058d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059058e: mov dword ptr [0xa74454], eax */ W32((u32)(0xa74454u), r_eax);
L_00590593:; BB(0x00590593);
    /* 00590593: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 00590599: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 0059059c: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0059059f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005905a2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005905a5: mov dword ptr [0xa74450], eax */ W32((u32)(0xa74450u), r_eax);
    /* 005905aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005905ac: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005905af: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005905b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005905b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5905b7u); f_008581c5();
    /* 005905b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005905b8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005905bb: mov dword ptr [0xa7444c], eax */ W32((u32)(0xa7444cu), r_eax);
    /* 005905c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005905c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005905c4: jle 0x5906ab */ if ((fZ||fS!=fO)) goto L_005906ab;
L_005905ca:; BB(0x005905ca);
    /* 005905ca: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005905cd: jl 0x590673 */ if ((fS!=fO)) goto L_00590673;
L_005905d3:; BB(0x005905d3);
    /* 005905d3: lea esi, [edx - 5] */ r_esi = (u32)(r_edx+0xfffffffbu);
    /* 005905d6: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005905d9: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 005905dc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005905de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 005905e1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005905e3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005905e5: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 005905e8: mov dword ptr [edx + eax], edi */ W32((u32)(r_edx+r_eax), r_edi);
    /* 005905eb: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 005905ef: mov dword ptr [edx + eax + 4], edi */ W32((u32)(r_edx+r_eax+0x4u), r_edi);
    /* 005905f3: mov esi, dword ptr [edx + esi + 8] */ r_esi = R32((u32)(r_edx+r_esi+0x8u));
    /* 005905f7: mov dword ptr [edx + eax + 8], esi */ W32((u32)(r_edx+r_eax+0x8u), r_esi);
    /* 005905fb: mov esi, dword ptr [0xa7444c] */ r_esi = R32((u32)(0xa7444cu));
    /* 00590601: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590603: mov edi, dword ptr [edx + eax + 0xc] */ r_edi = R32((u32)(r_edx+r_eax+0xcu));
    /* 00590607: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059060a: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 0059060e: mov edi, dword ptr [edx + eax + 0x10] */ r_edi = R32((u32)(r_edx+r_eax+0x10u));
    /* 00590612: mov dword ptr [edx + esi + 0x10], edi */ W32((u32)(r_edx+r_esi+0x10u), r_edi);
    /* 00590616: mov eax, dword ptr [edx + eax + 0x14] */ r_eax = R32((u32)(r_edx+r_eax+0x14u));
    /* 0059061a: mov dword ptr [edx + esi + 0x14], eax */ W32((u32)(r_edx+r_esi+0x14u), r_eax);
    /* 0059061e: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 00590623: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00590625: mov esi, dword ptr [edx + edi + 0x18] */ r_esi = R32((u32)(r_edx+r_edi+0x18u));
    /* 00590629: mov dword ptr [edx + eax + 0x18], esi */ W32((u32)(r_edx+r_eax+0x18u), r_esi);
    /* 0059062d: mov esi, dword ptr [edx + edi + 0x1c] */ r_esi = R32((u32)(r_edx+r_edi+0x1cu));
    /* 00590631: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 00590635: mov esi, dword ptr [edx + edi + 0x20] */ r_esi = R32((u32)(r_edx+r_edi+0x20u));
    /* 00590639: mov dword ptr [edx + eax + 0x20], esi */ W32((u32)(r_edx+r_eax+0x20u), r_esi);
    /* 0059063d: mov esi, dword ptr [0xa7444c] */ r_esi = R32((u32)(0xa7444cu));
    /* 00590643: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590645: mov edi, dword ptr [edx + eax + 0x24] */ r_edi = R32((u32)(r_edx+r_eax+0x24u));
    /* 00590649: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 0059064d: mov edi, dword ptr [edx + eax + 0x28] */ r_edi = R32((u32)(r_edx+r_eax+0x28u));
    /* 00590651: mov dword ptr [edx + esi + 0x28], edi */ W32((u32)(r_edx+r_esi+0x28u), r_edi);
    /* 00590655: mov eax, dword ptr [edx + eax + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax+0x2cu));
    /* 00590659: mov dword ptr [edx + esi + 0x2c], eax */ W32((u32)(r_edx+r_esi+0x2cu), r_eax);
    /* 0059065d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590660: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590662: jg 0x59066e */ if ((!fZ&&fS==fO)) goto L_0059066e;
L_00590664:; BB(0x00590664);
    /* 00590664: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 00590669: jmp 0x5905d9 */ f_005905d9(); return;
L_0059066e:; BB(0x0059066e);
    /* 0059066e: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
L_00590673:; BB(0x00590673);
    /* 00590673: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00590675: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00590678: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059067a: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0059067d: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059067f: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 00590682: mov dword ptr [esi + eax], edi */ W32((u32)(r_esi+r_eax), r_edi);
    /* 00590685: mov edi, dword ptr [esi + edx + 4] */ r_edi = R32((u32)(r_esi+r_edx+0x4u));
    /* 00590689: mov dword ptr [esi + eax + 4], edi */ W32((u32)(r_esi+r_eax+0x4u), r_edi);
    /* 0059068d: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 00590691: mov dword ptr [esi + eax + 8], edx */ W32((u32)(r_esi+r_eax+0x8u), r_edx);
    /* 00590695: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00590698: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059069b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059069d: jge 0x5906a6 */ if ((fS==fO)) goto L_005906a6;
L_0059069f:; BB(0x0059069f);
    /* 0059069f: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 005906a4: jmp 0x590673 */ goto L_00590673;
L_005906a6:; BB(0x005906a6);
    /* 005906a6: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
L_005906ab:; BB(0x005906ab);
    /* 005906ab: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005906ae: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005906b1: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 005906b4: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005906b7: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005906ba: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 005906bd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005906bf:; BB(0x005906bf);
    /* 005906bf: push dword ptr [ebx*4 + 0x928b90] */ { u32 v = R32((u32)(r_ebx*4+0x928b90u)); r_esp -= 4; W32(r_esp, v); }
    /* 005906c6: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5906cbu); f_0077a684();
    /* 005906cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005906cc: mov dword ptr [ebx*4 + 0xa74470], eax */ W32((u32)(r_ebx*4+0xa74470u), r_eax);
    /* 005906d3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005906d6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005906d9: jl 0x5906bf */ if ((fS!=fO)) goto L_005906bf;
L_005906db:; BB(0x005906db);
    /* 005906db: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005906dd:; BB(0x005906dd);
    /* 005906dd: push dword ptr [ebx*4 + 0x928b88] */ { u32 v = R32((u32)(r_ebx*4+0x928b88u)); r_esp -= 4; W32(r_esp, v); }
    /* 005906e4: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5906e9u); f_0077a698();
    /* 005906e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005906ea: mov dword ptr [ebx*4 + 0xa74468], eax */ W32((u32)(r_ebx*4+0xa74468u), r_eax);
    /* 005906f1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005906f4: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005906f7: jl 0x5906dd */ if ((fS!=fO)) goto L_005906dd;
L_005906f9:; BB(0x005906f9);
    /* 005906f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005906fb:; BB(0x005906fb);
    /* 005906fb: push dword ptr [ebx*4 + 0x928b80] */ { u32 v = R32((u32)(r_ebx*4+0x928b80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590702: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x590707u); f_0077a6b4();
    /* 00590707: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590708: mov dword ptr [ebx*4 + 0xa74460], eax */ W32((u32)(r_ebx*4+0xa74460u), r_eax);
    /* 0059070f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00590712: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590715: jl 0x5906fb */ if ((fS!=fO)) goto L_005906fb;
L_00590717:; BB(0x00590717);
    /* 00590717: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00590719:; BB(0x00590719);
    /* 00590719: push dword ptr [ebx*4 + 0x928b78] */ { u32 v = R32((u32)(r_ebx*4+0x928b78u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590720: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x590725u); f_0077a6cc();
    /* 00590725: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590726: mov dword ptr [ebx*4 + 0xa74458], eax */ W32((u32)(r_ebx*4+0xa74458u), r_eax);
    /* 0059072d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00590730: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590733: jl 0x590719 */ if ((fS!=fO)) goto L_00590719;
L_00590735:; BB(0x00590735);
    /* 00590735: mov edx, dword ptr [0xa74458] */ r_edx = R32((u32)(0xa74458u));
    /* 0059073b: fld dword ptr [0x928bc0] */ FPUSH(R_F32((u32)(0x928bc0u)));
    /* 00590741: mov ecx, dword ptr [0xa74454] */ r_ecx = R32((u32)(0xa74454u));
    /* 00590747: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00590749: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0059074c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059074e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00590750: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 00590756: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00590757: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00590759: jae 0x59075d */ if (!fC) goto L_0059075d;
L_0059075b:; BB(0x0059075b);
    /* 0059075b: fst st(1) */ ST(1) = ST(0);
L_0059075d:; BB(0x0059075d);
    /* 0059075d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059075f: fstp dword ptr [0x9bf908] */ W_F32((u32)(0x9bf908u), ST(0)); FPOP();
    /* 00590765: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00590768: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059076a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059076c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059076d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059076f: jae 0x590773 */ if (!fC) goto L_00590773;
L_00590771:; BB(0x00590771);
    /* 00590771: fst st(1) */ ST(1) = ST(0);
L_00590773:; BB(0x00590773);
    /* 00590773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00590775: fstp dword ptr [0x9bf8d8] */ W_F32((u32)(0x9bf8d8u), ST(0)); FPOP();
    /* 0059077b: mov dword ptr [0xa744a0], 0 */ W32((u32)(0xa744a0u), 0x0u);
    /* 00590785: mov dword ptr [0xa74494], 0 */ W32((u32)(0xa74494u), 0x0u);
    /* 0059078f: mov dword ptr [0xa74498], 0 */ W32((u32)(0xa74498u), 0x0u);
    /* 00590799: mov dword ptr [0xa7449c], 0 */ W32((u32)(0xa7449cu), 0x0u);
    /* 005907a3: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005907a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005907a7: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5907acu); f_0078e934();
    /* 005907ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907af: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907b4: je 0x590baa */ if (fZ) goto L_00590baa;
L_005907ba:; BB(0x005907ba);
    /* 005907ba: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907bd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005907c0: mov dword ptr [0xa74488], eax */ W32((u32)(0xa74488u), r_eax);
L_005907c5:; BB(0x005907c5);
    /* 005907c5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005907c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005907c8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5907cdu); f_0078e934();
    /* 005907cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907d0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907d5: je 0x590b9b */ if (fZ) goto L_00590b9b;
L_005907db:; BB(0x005907db);
    /* 005907db: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907de: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005907e1: mov dword ptr [0xa7448c], eax */ W32((u32)(0xa7448cu), r_eax);
L_005907e6:; BB(0x005907e6);
    /* 005907e6: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005907e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005907e9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5907eeu); f_0078e934();
    /* 005907ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907f1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907f6: je 0x590b8c */ if (fZ) goto L_00590b8c;
L_005907fc:; BB(0x005907fc);
    /* 005907fc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907ff: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590802: mov dword ptr [0xa74490], eax */ W32((u32)(0xa74490u), r_eax);
L_00590807:; BB(0x00590807);
    /* 00590807: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 0059080c: mov ecx, dword ptr [0x9bf8e4] */ r_ecx = R32((u32)(0x9bf8e4u));
    /* 00590812: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00590818: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 0059081c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0059081f: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00590826: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00590828: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x59082du); f_008581c5();
    /* 0059082d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00590830: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590833: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00590836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590838: je 0x590b82 */ if (fZ) goto L_00590b82;
L_0059083e:; BB(0x0059083e);
    /* 0059083e: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 00590845: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059084c: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 00590851: mov esi, ebx */ r_esi = r_ebx;
    /* 00590853: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590856: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0059085c: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 0059085f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00590862: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590865: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00590868: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0059086c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059086f: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00590872: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00590875: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00590878: fadd dword ptr [edi*4 + 0x928af8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x928af8u));
    /* 0059087f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00590883: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x590888u); f_00511bb4();
    /* 00590888: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0059088f:; BB(0x0059088f);
    /* 0059088f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590892: mov dword ptr [0xa74484], eax */ W32((u32)(0xa74484u), r_eax);
    /* 00590897: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059089e: mov ecx, dword ptr [0xa74454] */ r_ecx = R32((u32)(0xa74454u));
    /* 005908a4: mov esi, dword ptr [0x9bf8f4] */ r_esi = R32((u32)(0x9bf8f4u));
    /* 005908aa: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005908b0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005908b3: mov ebx, dword ptr [ecx + 0x430] */ r_ebx = R32((u32)(r_ecx+0x430u));
    /* 005908b9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005908bc: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005908c3: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005908ca: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005908cc: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005908d3: mov dword ptr [ebp - 0x5c], 0xc1200000 */ W32((u32)(r_ebp+0xffffffa4u), 0xc1200000u);
    /* 005908da: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005908e1: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005908e8: mov edi, dword ptr [ebx + esi*8 + 4] */ r_edi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005908ec: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005908f3: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 005908f6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5908fbu); f_008581c5();
    /* 005908fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005908fc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005908ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590901: je 0x590b7b */ if (fZ) goto L_00590b7b;
L_00590907:; BB(0x00590907);
    /* 00590907: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0059090e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00590915: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590918: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059091a: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 0059091f: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590924: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590929: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x59092eu); f_005795a0();
    /* 0059092e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590931: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00590938:; BB(0x00590938);
    /* 00590938: mov dword ptr [0xa74478], eax */ W32((u32)(0xa74478u), r_eax);
    /* 0059093d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590944: mov ebx, edi */ r_ebx = r_edi;
    /* 00590946: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590949: mov ecx, dword ptr [0xa74478] */ r_ecx = R32((u32)(0xa74478u));
    /* 0059094f: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00590952: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00590955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590956: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590957: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00590959: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059095a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059095b: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x590960u); f_00579be8();
    /* 00590960: mov edx, dword ptr [0xa74454] */ r_edx = R32((u32)(0xa74454u));
    /* 00590966: mov ebx, dword ptr [0x9bf904] */ r_ebx = R32((u32)(0x9bf904u));
    /* 0059096c: mov edi, dword ptr [0xa74458] */ r_edi = R32((u32)(0xa74458u));
    /* 00590972: fld dword ptr [0x928bc0] */ FPUSH(R_F32((u32)(0x928bc0u)));
    /* 00590978: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 0059097e: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00590985: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00590987: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0059098e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00590995: mov esi, dword ptr [ecx + ebx*8 + 4] */ r_esi = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 00590999: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0059099c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059099e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005909a0: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005909a3: mov dword ptr [ebp - 0x5c], 0xc1200000 */ W32((u32)(r_ebp+0xffffffa4u), 0xc1200000u);
    /* 005909aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005909ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005909ad: jae 0x5909b1 */ if (!fC) goto L_005909b1;
L_005909af:; BB(0x005909af);
    /* 005909af: fst st(1) */ ST(1) = ST(0);
L_005909b1:; BB(0x005909b1);
    /* 005909b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005909b3: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005909b6: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005909bd: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005909c4: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005909cb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5909d0u); f_008581c5();
    /* 005909d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005909d1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005909d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005909d6: je 0x590b74 */ if (fZ) goto L_00590b74;
L_005909dc:; BB(0x005909dc);
    /* 005909dc: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005909e3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005909ea: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 005909ed: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005909f0: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005909f3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005909f7: mov dword ptr [esp], 0x40c00000 */ W32((u32)(r_esp), 0x40c00000u);
    /* 005909fe: mov dword ptr [esp + 4], 0x41600000 */ W32((u32)(r_esp+0x4u), 0x41600000u);
    /* 00590a06: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 00590a0e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x590a13u); f_005795a0();
    /* 00590a13: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590a16: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00590a1d:; BB(0x00590a1d);
    /* 00590a1d: mov dword ptr [0xa74480], eax */ W32((u32)(0xa74480u), r_eax);
    /* 00590a22: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590a29: mov ebx, esi */ r_ebx = r_esi;
    /* 00590a2b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590a2e: mov ecx, dword ptr [0xa74480] */ r_ecx = R32((u32)(0xa74480u));
    /* 00590a34: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00590a37: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00590a3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3c: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00590a40: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x590a45u); f_00579be8();
    /* 00590a45: mov dword ptr [ebp - 0x5c], 0x41200000 */ W32((u32)(r_ebp+0xffffffa4u), 0x41200000u);
    /* 00590a4c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00590a4e: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00590a55: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00590a5c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00590a63: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x590a68u); f_008581c5();
    /* 00590a68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590a69: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00590a6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590a6e: je 0x590b6d */ if (fZ) goto L_00590b6d;
L_00590a74:; BB(0x00590a74);
    /* 00590a74: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00590a7b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00590a82: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00590a85: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590a88: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590a8b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00590a8f: mov dword ptr [esp], 0x41880000 */ W32((u32)(r_esp), 0x41880000u);
    /* 00590a96: mov dword ptr [esp + 4], 0x41b80000 */ W32((u32)(r_esp+0x4u), 0x41b80000u);
    /* 00590a9e: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 00590aa6: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x590aabu); f_005795a0();
    /* 00590aab: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590aae: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00590ab5:; BB(0x00590ab5);
    /* 00590ab5: mov dword ptr [0xa7447c], eax */ W32((u32)(0xa7447cu), r_eax);
    /* 00590aba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590ac1: mov ecx, dword ptr [0xa7447c] */ r_ecx = R32((u32)(0xa7447cu));
    /* 00590ac7: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00590aca: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00590acd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590ace: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590acf: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad3: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x590ad8u); f_00579be8();
    /* 00590ad8: mov eax, dword ptr [0x928ae8] */ r_eax = R32((u32)(0x928ae8u));
    /* 00590add: movzx edx, word ptr [0x928aec] */ r_edx = (u32)R16((u32)(0x928aecu));
    /* 00590ae4: movzx ecx, word ptr [0x928aee] */ r_ecx = (u32)R16((u32)(0x928aeeu));
    /* 00590aeb: movzx ebx, word ptr [0x928af0] */ r_ebx = (u32)R16((u32)(0x928af0u));
    /* 00590af2: mov edi, dword ptr [0xa74454] */ r_edi = R32((u32)(0xa74454u));
    /* 00590af8: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00590afe: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00590b01: mov word ptr [ebp - 0x38], dx */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_edx);
    /* 00590b05: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00590b0b: mov word ptr [ebp - 0x36], cx */ W16((u32)(r_ebp+0xffffffcau), (u16)r_ecx);
    /* 00590b0f: mov word ptr [ebp - 0x34], bx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_ebx);
    /* 00590b13: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00590b16: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00590b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590b1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b1c: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b21: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00590b24: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590b27: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b29: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x590b2eu); f_00608470();
    /* 00590b2e: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 00590b33: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00590b36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590b37: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00590b3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b3f: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b44: push 0xa7444c */ { u32 v = 0xa7444cu; r_esp -= 4; W32(r_esp, v); }
    /* 00590b49: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590b4c: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b4e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x590b53u); f_00608470();
    /* 00590b53: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00590b56: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00590b59: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00590b5c: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590b5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590b62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00590b69: mov esp, ebp */ r_esp = r_ebp;
    /* 00590b6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590b6c: ret  */ FN_RET(0x00590516); r_esp += 4; return;
L_00590b6d:; BB(0x00590b6d);
    /* 00590b6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b6f: jmp 0x590ab5 */ goto L_00590ab5;
L_00590b74:; BB(0x00590b74);
    /* 00590b74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b76: jmp 0x590a1d */ goto L_00590a1d;
L_00590b7b:; BB(0x00590b7b);
    /* 00590b7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b7d: jmp 0x590938 */ goto L_00590938;
L_00590b82:; BB(0x00590b82);
    /* 00590b82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b84: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00590b87: jmp 0x59088f */ goto L_0059088f;
L_00590b8c:; BB(0x00590b8c);
    /* 00590b8c: mov dword ptr [0xa74490], 0 */ W32((u32)(0xa74490u), 0x0u);
    /* 00590b96: jmp 0x590807 */ goto L_00590807;
L_00590b9b:; BB(0x00590b9b);
    /* 00590b9b: mov dword ptr [0xa7448c], 0 */ W32((u32)(0xa7448cu), 0x0u);
    /* 00590ba5: jmp 0x5907e6 */ goto L_005907e6;
L_00590baa:; BB(0x00590baa);
    /* 00590baa: mov dword ptr [0xa74488], 0 */ W32((u32)(0xa74488u), 0x0u);
    /* 00590bb4: jmp 0x5907c5 */ goto L_005907c5;
}

void f_0059051c(void)
{
    FN_ENTER(0x0059051c);
    /* 0059051c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059051d: mov ebp, esp */ r_ebp = r_esp;
    /* 0059051f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00590521: push 0x8d81c0 */ { u32 v = 0x8d81c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590526: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059052c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059052d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00590534: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590537: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0059053a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0059053d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00590540: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00590543: mov dword ptr [0xa74420], 0 */ W32((u32)(0xa74420u), 0x0u);
    /* 0059054d: mov dword ptr [0xa74424], 0 */ W32((u32)(0xa74424u), 0x0u);
    /* 00590557: mov dword ptr [0xa74428], 0 */ W32((u32)(0xa74428u), 0x0u);
    /* 00590561: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x590566u); f_00520e6c();
    /* 00590566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590568: je 0x590583 */ if (fZ) goto L_00590583;
L_0059056a:; BB(0x0059056a);
    /* 0059056a: push 0x928e84 */ { u32 v = 0x928e84u; r_esp -= 4; W32(r_esp, v); }
    /* 0059056f: push 0x9bf984 */ { u32 v = 0x9bf984u; r_esp -= 4; W32(r_esp, v); }
    /* 00590574: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x590579u); f_0051f674();
    /* 00590579: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059057c: mov dword ptr [0xa74454], eax */ W32((u32)(0xa74454u), r_eax);
    /* 00590581: jmp 0x590593 */ goto L_00590593;
L_00590583:; BB(0x00590583);
    /* 00590583: push 0x9bf984 */ { u32 v = 0x9bf984u; r_esp -= 4; W32(r_esp, v); }
    /* 00590588: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x59058du); f_0051f6b0();
    /* 0059058d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059058e: mov dword ptr [0xa74454], eax */ W32((u32)(0xa74454u), r_eax);
L_00590593:; BB(0x00590593);
    /* 00590593: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 00590599: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 0059059c: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0059059f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005905a2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005905a5: mov dword ptr [0xa74450], eax */ W32((u32)(0xa74450u), r_eax);
    /* 005905aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005905ac: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005905af: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005905b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005905b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5905b7u); f_008581c5();
    /* 005905b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005905b8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005905bb: mov dword ptr [0xa7444c], eax */ W32((u32)(0xa7444cu), r_eax);
    /* 005905c0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005905c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005905c4: jle 0x5906ab */ if ((fZ||fS!=fO)) goto L_005906ab;
L_005905ca:; BB(0x005905ca);
    /* 005905ca: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005905cd: jl 0x590673 */ if ((fS!=fO)) goto L_00590673;
L_005905d3:; BB(0x005905d3);
    /* 005905d3: lea esi, [edx - 5] */ r_esi = (u32)(r_edx+0xfffffffbu);
    /* 005905d6: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005905d9: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 005905dc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005905de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 005905e1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005905e3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005905e5: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 005905e8: mov dword ptr [edx + eax], edi */ W32((u32)(r_edx+r_eax), r_edi);
    /* 005905eb: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 005905ef: mov dword ptr [edx + eax + 4], edi */ W32((u32)(r_edx+r_eax+0x4u), r_edi);
    /* 005905f3: mov esi, dword ptr [edx + esi + 8] */ r_esi = R32((u32)(r_edx+r_esi+0x8u));
    /* 005905f7: mov dword ptr [edx + eax + 8], esi */ W32((u32)(r_edx+r_eax+0x8u), r_esi);
    /* 005905fb: mov esi, dword ptr [0xa7444c] */ r_esi = R32((u32)(0xa7444cu));
    /* 00590601: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590603: mov edi, dword ptr [edx + eax + 0xc] */ r_edi = R32((u32)(r_edx+r_eax+0xcu));
    /* 00590607: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059060a: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 0059060e: mov edi, dword ptr [edx + eax + 0x10] */ r_edi = R32((u32)(r_edx+r_eax+0x10u));
    /* 00590612: mov dword ptr [edx + esi + 0x10], edi */ W32((u32)(r_edx+r_esi+0x10u), r_edi);
    /* 00590616: mov eax, dword ptr [edx + eax + 0x14] */ r_eax = R32((u32)(r_edx+r_eax+0x14u));
    /* 0059061a: mov dword ptr [edx + esi + 0x14], eax */ W32((u32)(r_edx+r_esi+0x14u), r_eax);
    /* 0059061e: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 00590623: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00590625: mov esi, dword ptr [edx + edi + 0x18] */ r_esi = R32((u32)(r_edx+r_edi+0x18u));
    /* 00590629: mov dword ptr [edx + eax + 0x18], esi */ W32((u32)(r_edx+r_eax+0x18u), r_esi);
    /* 0059062d: mov esi, dword ptr [edx + edi + 0x1c] */ r_esi = R32((u32)(r_edx+r_edi+0x1cu));
    /* 00590631: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 00590635: mov esi, dword ptr [edx + edi + 0x20] */ r_esi = R32((u32)(r_edx+r_edi+0x20u));
    /* 00590639: mov dword ptr [edx + eax + 0x20], esi */ W32((u32)(r_edx+r_eax+0x20u), r_esi);
    /* 0059063d: mov esi, dword ptr [0xa7444c] */ r_esi = R32((u32)(0xa7444cu));
    /* 00590643: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590645: mov edi, dword ptr [edx + eax + 0x24] */ r_edi = R32((u32)(r_edx+r_eax+0x24u));
    /* 00590649: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 0059064d: mov edi, dword ptr [edx + eax + 0x28] */ r_edi = R32((u32)(r_edx+r_eax+0x28u));
    /* 00590651: mov dword ptr [edx + esi + 0x28], edi */ W32((u32)(r_edx+r_esi+0x28u), r_edi);
    /* 00590655: mov eax, dword ptr [edx + eax + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax+0x2cu));
    /* 00590659: mov dword ptr [edx + esi + 0x2c], eax */ W32((u32)(r_edx+r_esi+0x2cu), r_eax);
    /* 0059065d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590660: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590662: jg 0x59066e */ if ((!fZ&&fS==fO)) goto L_0059066e;
L_00590664:; BB(0x00590664);
    /* 00590664: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 00590669: jmp 0x5905d9 */ f_005905d9(); return;
L_0059066e:; BB(0x0059066e);
    /* 0059066e: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
L_00590673:; BB(0x00590673);
    /* 00590673: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00590675: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00590678: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059067a: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0059067d: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059067f: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 00590682: mov dword ptr [esi + eax], edi */ W32((u32)(r_esi+r_eax), r_edi);
    /* 00590685: mov edi, dword ptr [esi + edx + 4] */ r_edi = R32((u32)(r_esi+r_edx+0x4u));
    /* 00590689: mov dword ptr [esi + eax + 4], edi */ W32((u32)(r_esi+r_eax+0x4u), r_edi);
    /* 0059068d: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 00590691: mov dword ptr [esi + eax + 8], edx */ W32((u32)(r_esi+r_eax+0x8u), r_edx);
    /* 00590695: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00590698: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059069b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059069d: jge 0x5906a6 */ if ((fS==fO)) goto L_005906a6;
L_0059069f:; BB(0x0059069f);
    /* 0059069f: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 005906a4: jmp 0x590673 */ goto L_00590673;
L_005906a6:; BB(0x005906a6);
    /* 005906a6: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
L_005906ab:; BB(0x005906ab);
    /* 005906ab: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005906ae: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005906b1: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 005906b4: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005906b7: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005906ba: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 005906bd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005906bf:; BB(0x005906bf);
    /* 005906bf: push dword ptr [ebx*4 + 0x928b90] */ { u32 v = R32((u32)(r_ebx*4+0x928b90u)); r_esp -= 4; W32(r_esp, v); }
    /* 005906c6: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5906cbu); f_0077a684();
    /* 005906cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005906cc: mov dword ptr [ebx*4 + 0xa74470], eax */ W32((u32)(r_ebx*4+0xa74470u), r_eax);
    /* 005906d3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005906d6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005906d9: jl 0x5906bf */ if ((fS!=fO)) goto L_005906bf;
L_005906db:; BB(0x005906db);
    /* 005906db: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005906dd:; BB(0x005906dd);
    /* 005906dd: push dword ptr [ebx*4 + 0x928b88] */ { u32 v = R32((u32)(r_ebx*4+0x928b88u)); r_esp -= 4; W32(r_esp, v); }
    /* 005906e4: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5906e9u); f_0077a698();
    /* 005906e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005906ea: mov dword ptr [ebx*4 + 0xa74468], eax */ W32((u32)(r_ebx*4+0xa74468u), r_eax);
    /* 005906f1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005906f4: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005906f7: jl 0x5906dd */ if ((fS!=fO)) goto L_005906dd;
L_005906f9:; BB(0x005906f9);
    /* 005906f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005906fb:; BB(0x005906fb);
    /* 005906fb: push dword ptr [ebx*4 + 0x928b80] */ { u32 v = R32((u32)(r_ebx*4+0x928b80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590702: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x590707u); f_0077a6b4();
    /* 00590707: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590708: mov dword ptr [ebx*4 + 0xa74460], eax */ W32((u32)(r_ebx*4+0xa74460u), r_eax);
    /* 0059070f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00590712: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590715: jl 0x5906fb */ if ((fS!=fO)) goto L_005906fb;
L_00590717:; BB(0x00590717);
    /* 00590717: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00590719:; BB(0x00590719);
    /* 00590719: push dword ptr [ebx*4 + 0x928b78] */ { u32 v = R32((u32)(r_ebx*4+0x928b78u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590720: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x590725u); f_0077a6cc();
    /* 00590725: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590726: mov dword ptr [ebx*4 + 0xa74458], eax */ W32((u32)(r_ebx*4+0xa74458u), r_eax);
    /* 0059072d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00590730: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590733: jl 0x590719 */ if ((fS!=fO)) goto L_00590719;
L_00590735:; BB(0x00590735);
    /* 00590735: mov edx, dword ptr [0xa74458] */ r_edx = R32((u32)(0xa74458u));
    /* 0059073b: fld dword ptr [0x928bc0] */ FPUSH(R_F32((u32)(0x928bc0u)));
    /* 00590741: mov ecx, dword ptr [0xa74454] */ r_ecx = R32((u32)(0xa74454u));
    /* 00590747: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00590749: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0059074c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059074e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00590750: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 00590756: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00590757: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00590759: jae 0x59075d */ if (!fC) goto L_0059075d;
L_0059075b:; BB(0x0059075b);
    /* 0059075b: fst st(1) */ ST(1) = ST(0);
L_0059075d:; BB(0x0059075d);
    /* 0059075d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059075f: fstp dword ptr [0x9bf908] */ W_F32((u32)(0x9bf908u), ST(0)); FPOP();
    /* 00590765: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00590768: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059076a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059076c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059076d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059076f: jae 0x590773 */ if (!fC) goto L_00590773;
L_00590771:; BB(0x00590771);
    /* 00590771: fst st(1) */ ST(1) = ST(0);
L_00590773:; BB(0x00590773);
    /* 00590773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00590775: fstp dword ptr [0x9bf8d8] */ W_F32((u32)(0x9bf8d8u), ST(0)); FPOP();
    /* 0059077b: mov dword ptr [0xa744a0], 0 */ W32((u32)(0xa744a0u), 0x0u);
    /* 00590785: mov dword ptr [0xa74494], 0 */ W32((u32)(0xa74494u), 0x0u);
    /* 0059078f: mov dword ptr [0xa74498], 0 */ W32((u32)(0xa74498u), 0x0u);
    /* 00590799: mov dword ptr [0xa7449c], 0 */ W32((u32)(0xa7449cu), 0x0u);
    /* 005907a3: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005907a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005907a7: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5907acu); f_0078e934();
    /* 005907ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907af: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907b4: je 0x590baa */ if (fZ) goto L_00590baa;
L_005907ba:; BB(0x005907ba);
    /* 005907ba: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907bd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005907c0: mov dword ptr [0xa74488], eax */ W32((u32)(0xa74488u), r_eax);
L_005907c5:; BB(0x005907c5);
    /* 005907c5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005907c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005907c8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5907cdu); f_0078e934();
    /* 005907cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907d0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907d5: je 0x590b9b */ if (fZ) goto L_00590b9b;
L_005907db:; BB(0x005907db);
    /* 005907db: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907de: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005907e1: mov dword ptr [0xa7448c], eax */ W32((u32)(0xa7448cu), r_eax);
L_005907e6:; BB(0x005907e6);
    /* 005907e6: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005907e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005907e9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5907eeu); f_0078e934();
    /* 005907ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907f1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907f6: je 0x590b8c */ if (fZ) goto L_00590b8c;
L_005907fc:; BB(0x005907fc);
    /* 005907fc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907ff: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590802: mov dword ptr [0xa74490], eax */ W32((u32)(0xa74490u), r_eax);
L_00590807:; BB(0x00590807);
    /* 00590807: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 0059080c: mov ecx, dword ptr [0x9bf8e4] */ r_ecx = R32((u32)(0x9bf8e4u));
    /* 00590812: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00590818: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 0059081c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0059081f: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00590826: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00590828: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x59082du); f_008581c5();
    /* 0059082d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00590830: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590833: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00590836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590838: je 0x590b82 */ if (fZ) goto L_00590b82;
L_0059083e:; BB(0x0059083e);
    /* 0059083e: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 00590845: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059084c: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 00590851: mov esi, ebx */ r_esi = r_ebx;
    /* 00590853: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590856: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0059085c: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 0059085f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00590862: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590865: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00590868: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0059086c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059086f: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00590872: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00590875: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00590878: fadd dword ptr [edi*4 + 0x928af8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x928af8u));
    /* 0059087f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00590883: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x590888u); f_00511bb4();
    /* 00590888: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0059088f:; BB(0x0059088f);
    /* 0059088f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590892: mov dword ptr [0xa74484], eax */ W32((u32)(0xa74484u), r_eax);
    /* 00590897: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059089e: mov ecx, dword ptr [0xa74454] */ r_ecx = R32((u32)(0xa74454u));
    /* 005908a4: mov esi, dword ptr [0x9bf8f4] */ r_esi = R32((u32)(0x9bf8f4u));
    /* 005908aa: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005908b0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005908b3: mov ebx, dword ptr [ecx + 0x430] */ r_ebx = R32((u32)(r_ecx+0x430u));
    /* 005908b9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005908bc: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005908c3: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005908ca: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005908cc: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005908d3: mov dword ptr [ebp - 0x5c], 0xc1200000 */ W32((u32)(r_ebp+0xffffffa4u), 0xc1200000u);
    /* 005908da: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005908e1: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005908e8: mov edi, dword ptr [ebx + esi*8 + 4] */ r_edi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005908ec: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005908f3: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 005908f6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5908fbu); f_008581c5();
    /* 005908fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005908fc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005908ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590901: je 0x590b7b */ if (fZ) goto L_00590b7b;
L_00590907:; BB(0x00590907);
    /* 00590907: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0059090e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00590915: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590918: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059091a: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 0059091f: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590924: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590929: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x59092eu); f_005795a0();
    /* 0059092e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590931: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00590938:; BB(0x00590938);
    /* 00590938: mov dword ptr [0xa74478], eax */ W32((u32)(0xa74478u), r_eax);
    /* 0059093d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590944: mov ebx, edi */ r_ebx = r_edi;
    /* 00590946: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590949: mov ecx, dword ptr [0xa74478] */ r_ecx = R32((u32)(0xa74478u));
    /* 0059094f: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00590952: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00590955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590956: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590957: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00590959: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059095a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059095b: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x590960u); f_00579be8();
    /* 00590960: mov edx, dword ptr [0xa74454] */ r_edx = R32((u32)(0xa74454u));
    /* 00590966: mov ebx, dword ptr [0x9bf904] */ r_ebx = R32((u32)(0x9bf904u));
    /* 0059096c: mov edi, dword ptr [0xa74458] */ r_edi = R32((u32)(0xa74458u));
    /* 00590972: fld dword ptr [0x928bc0] */ FPUSH(R_F32((u32)(0x928bc0u)));
    /* 00590978: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 0059097e: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00590985: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00590987: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0059098e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00590995: mov esi, dword ptr [ecx + ebx*8 + 4] */ r_esi = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 00590999: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0059099c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059099e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005909a0: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005909a3: mov dword ptr [ebp - 0x5c], 0xc1200000 */ W32((u32)(r_ebp+0xffffffa4u), 0xc1200000u);
    /* 005909aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005909ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005909ad: jae 0x5909b1 */ if (!fC) goto L_005909b1;
L_005909af:; BB(0x005909af);
    /* 005909af: fst st(1) */ ST(1) = ST(0);
L_005909b1:; BB(0x005909b1);
    /* 005909b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005909b3: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005909b6: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005909bd: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005909c4: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005909cb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5909d0u); f_008581c5();
    /* 005909d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005909d1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005909d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005909d6: je 0x590b74 */ if (fZ) goto L_00590b74;
L_005909dc:; BB(0x005909dc);
    /* 005909dc: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005909e3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005909ea: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 005909ed: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005909f0: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005909f3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005909f7: mov dword ptr [esp], 0x40c00000 */ W32((u32)(r_esp), 0x40c00000u);
    /* 005909fe: mov dword ptr [esp + 4], 0x41600000 */ W32((u32)(r_esp+0x4u), 0x41600000u);
    /* 00590a06: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 00590a0e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x590a13u); f_005795a0();
    /* 00590a13: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590a16: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00590a1d:; BB(0x00590a1d);
    /* 00590a1d: mov dword ptr [0xa74480], eax */ W32((u32)(0xa74480u), r_eax);
    /* 00590a22: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590a29: mov ebx, esi */ r_ebx = r_esi;
    /* 00590a2b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590a2e: mov ecx, dword ptr [0xa74480] */ r_ecx = R32((u32)(0xa74480u));
    /* 00590a34: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00590a37: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00590a3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3c: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00590a40: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x590a45u); f_00579be8();
    /* 00590a45: mov dword ptr [ebp - 0x5c], 0x41200000 */ W32((u32)(r_ebp+0xffffffa4u), 0x41200000u);
    /* 00590a4c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00590a4e: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00590a55: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00590a5c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00590a63: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x590a68u); f_008581c5();
    /* 00590a68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590a69: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00590a6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590a6e: je 0x590b6d */ if (fZ) goto L_00590b6d;
L_00590a74:; BB(0x00590a74);
    /* 00590a74: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00590a7b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00590a82: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00590a85: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590a88: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590a8b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00590a8f: mov dword ptr [esp], 0x41880000 */ W32((u32)(r_esp), 0x41880000u);
    /* 00590a96: mov dword ptr [esp + 4], 0x41b80000 */ W32((u32)(r_esp+0x4u), 0x41b80000u);
    /* 00590a9e: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 00590aa6: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x590aabu); f_005795a0();
    /* 00590aab: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590aae: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00590ab5:; BB(0x00590ab5);
    /* 00590ab5: mov dword ptr [0xa7447c], eax */ W32((u32)(0xa7447cu), r_eax);
    /* 00590aba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590ac1: mov ecx, dword ptr [0xa7447c] */ r_ecx = R32((u32)(0xa7447cu));
    /* 00590ac7: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00590aca: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00590acd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590ace: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590acf: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad3: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x590ad8u); f_00579be8();
    /* 00590ad8: mov eax, dword ptr [0x928ae8] */ r_eax = R32((u32)(0x928ae8u));
    /* 00590add: movzx edx, word ptr [0x928aec] */ r_edx = (u32)R16((u32)(0x928aecu));
    /* 00590ae4: movzx ecx, word ptr [0x928aee] */ r_ecx = (u32)R16((u32)(0x928aeeu));
    /* 00590aeb: movzx ebx, word ptr [0x928af0] */ r_ebx = (u32)R16((u32)(0x928af0u));
    /* 00590af2: mov edi, dword ptr [0xa74454] */ r_edi = R32((u32)(0xa74454u));
    /* 00590af8: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00590afe: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00590b01: mov word ptr [ebp - 0x38], dx */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_edx);
    /* 00590b05: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00590b0b: mov word ptr [ebp - 0x36], cx */ W16((u32)(r_ebp+0xffffffcau), (u16)r_ecx);
    /* 00590b0f: mov word ptr [ebp - 0x34], bx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_ebx);
    /* 00590b13: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00590b16: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00590b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590b1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b1c: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b21: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00590b24: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590b27: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b29: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x590b2eu); f_00608470();
    /* 00590b2e: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 00590b33: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00590b36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590b37: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00590b3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b3f: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b44: push 0xa7444c */ { u32 v = 0xa7444cu; r_esp -= 4; W32(r_esp, v); }
    /* 00590b49: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590b4c: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b4e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x590b53u); f_00608470();
    /* 00590b53: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00590b56: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00590b59: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00590b5c: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590b5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590b62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00590b69: mov esp, ebp */ r_esp = r_ebp;
    /* 00590b6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590b6c: ret  */ FN_RET(0x0059051c); r_esp += 4; return;
L_00590b6d:; BB(0x00590b6d);
    /* 00590b6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b6f: jmp 0x590ab5 */ goto L_00590ab5;
L_00590b74:; BB(0x00590b74);
    /* 00590b74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b76: jmp 0x590a1d */ goto L_00590a1d;
L_00590b7b:; BB(0x00590b7b);
    /* 00590b7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b7d: jmp 0x590938 */ goto L_00590938;
L_00590b82:; BB(0x00590b82);
    /* 00590b82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b84: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00590b87: jmp 0x59088f */ goto L_0059088f;
L_00590b8c:; BB(0x00590b8c);
    /* 00590b8c: mov dword ptr [0xa74490], 0 */ W32((u32)(0xa74490u), 0x0u);
    /* 00590b96: jmp 0x590807 */ goto L_00590807;
L_00590b9b:; BB(0x00590b9b);
    /* 00590b9b: mov dword ptr [0xa7448c], 0 */ W32((u32)(0xa7448cu), 0x0u);
    /* 00590ba5: jmp 0x5907e6 */ goto L_005907e6;
L_00590baa:; BB(0x00590baa);
    /* 00590baa: mov dword ptr [0xa74488], 0 */ W32((u32)(0xa74488u), 0x0u);
    /* 00590bb4: jmp 0x5907c5 */ goto L_005907c5;
}

void f_00590bbc(void) /* sub_590BBC */
{
    FN_ENTER(0x00590bbc);
    /* 00590bbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590bbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00590bbf: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00590bc3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590bc6: je 0x590c25 */ if (fZ) goto L_00590c25;
L_00590bc8:; BB(0x00590bc8);
    /* 00590bc8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590bcb: je 0x590be7 */ if (fZ) goto L_00590be7;
L_00590bcd:; BB(0x00590bcd);
    /* 00590bcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00590bcf: jne 0x590bfb */ if (!fZ) goto L_00590bfb;
L_00590bd1:; BB(0x00590bd1);
    /* 00590bd1: mov eax, dword ptr [ebx + 0x40c] */ r_eax = R32((u32)(r_ebx+0x40cu));
    /* 00590bd7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590bda: mov dword ptr [ebx + 0x40c], eax */ W32((u32)(r_ebx+0x40cu), r_eax);
    /* 00590be0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00590be3: jne 0x590bfb */ if (!fZ) goto L_00590bfb;
L_00590be5:; BB(0x00590be5);
    /* 00590be5: jmp 0x590bff */ goto L_00590bff;
L_00590be7:; BB(0x00590be7);
    /* 00590be7: mov eax, dword ptr [ebx + 0x40c] */ r_eax = R32((u32)(r_ebx+0x40cu));
    /* 00590bed: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00590bf0: jle 0x590bfb */ if ((fZ||fS!=fO)) goto L_00590bfb;
L_00590bf2:; BB(0x00590bf2);
    /* 00590bf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590bf4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590bf6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x590bfbu); f_0051f62c();
L_00590bfb:; BB(0x00590bfb);
    /* 00590bfb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590bfc: ret 4 */ FN_RET(0x00590bbc); r_esp += 8; return;
L_00590bff:; BB(0x00590bff);
    /* 00590bff: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00590c02: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00590c04: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 00590c0a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590c0c: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x590c12u); call_ind(t); }
    /* 00590c12: fld dword ptr [ebx + 0x3d0] */ FPUSH(R_F32((u32)(r_ebx+0x3d0u)));
    /* 00590c18: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 00590c1b: fstp dword ptr [ebx + 0x3d4] */ W_F32((u32)(r_ebx+0x3d4u), ST(0)); FPOP();
    /* 00590c21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590c22: ret 4 */ FN_RET(0x00590bbc); r_esp += 8; return;
L_00590c25:; BB(0x00590c25);
    /* 00590c25: mov eax, 1 */ r_eax = 0x1u;
    /* 00590c2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590c2b: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00590c32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590c34: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x590c39u); f_0051f664();
    /* 00590c39: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590c3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590c3d: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x590c43u); call_ind(t); }
    /* 00590c43: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00590c49: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00590c4c: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00590c4f: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 00590c55: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x590c5au); f_00520e6c();
    /* 00590c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590c5c: je 0x590c6f */ if (fZ) goto L_00590c6f;
L_00590c5e:; BB(0x00590c5e);
    /* 00590c5e: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00590c64: and eax, 0xfffcffff */ {  u32 a = r_eax; u32 b = 0xfffcffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00590c69: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
L_00590c6f:; BB(0x00590c6f);
    /* 00590c6f: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00590c72: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 00590c75: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 00590c78: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00590c7b: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 00590c7e: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 00590c81: mov dword ptr [ebx + 0x40c], 0 */ W32((u32)(r_ebx+0x40cu), 0x0u);
    /* 00590c8b: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00590c8e: mov dword ptr [ebx + 0x48], ecx */ W32((u32)(r_ebx+0x48u), r_ecx);
    /* 00590c91: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 00590c94: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 00590c9a: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 00590ca0: mov dword ptr [ebx + 0x304], ecx */ W32((u32)(r_ebx+0x304u), r_ecx);
    /* 00590ca6: mov dword ptr [ebx + 0x308], edx */ W32((u32)(r_ebx+0x308u), r_edx);
    /* 00590cac: mov dword ptr [ebx + 0x3d0], ecx */ W32((u32)(r_ebx+0x3d0u), r_ecx);
    /* 00590cb2: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00590cb7: jne 0x590cc3 */ if (!fZ) goto L_00590cc3;
L_00590cb9:; BB(0x00590cb9);
    /* 00590cb9: mov dword ptr [ebx + 0x3d8], 0 */ W32((u32)(r_ebx+0x3d8u), 0x0u);
L_00590cc3:; BB(0x00590cc3);
    /* 00590cc3: mov dword ptr [ebx + 0x3e0], 0 */ W32((u32)(r_ebx+0x3e0u), 0x0u);
    /* 00590ccd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590cce: ret 4 */ FN_RET(0x00590bbc); r_esp += 8; return;
}

void f_00590cd4(void) /* sub_590CD4 */
{
    FN_ENTER(0x00590cd4);
    /* 00590cd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00590cd5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590cd8: mov edi, ecx */ r_edi = r_ecx;
    /* 00590cda: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x590cdfu); f_0082d7b0();
    /* 00590cdf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00590ce1: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x590ce6u); f_00830cd8();
    /* 00590ce6: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00590ce9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x590ceeu); f_0082d838();
    /* 00590cee: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00590cf1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00590cf3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x590cf8u); f_0082d8bc();
    /* 00590cf8: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590cfe: mov ecx, dword ptr [0xa74480] */ r_ecx = R32((u32)(0xa74480u));
    /* 00590d04: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x590d09u); f_00579de0();
    /* 00590d09: mov edx, eax */ r_edx = r_eax;
    /* 00590d0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590d0d: je 0x590d31 */ if (fZ) goto L_00590d31;
L_00590d0f:; BB(0x00590d0f);
    /* 00590d0f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00590d12: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00590d14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590d15: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00590d17: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x590d1cu); f_0082f940();
    /* 00590d1c: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00590d20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590d21: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00590d25: mov ecx, dword ptr [edi + 0x3e8] */ r_ecx = R32((u32)(r_edi+0x3e8u));
    /* 00590d2b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00590d2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590d2e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x590d31u); call_ind(t); }
L_00590d31:; BB(0x00590d31);
    /* 00590d31: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590d37: mov ecx, dword ptr [0xa7447c] */ r_ecx = R32((u32)(0xa7447cu));
    /* 00590d3d: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x590d42u); f_00579de0();
    /* 00590d42: mov edx, eax */ r_edx = r_eax;
    /* 00590d44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590d46: je 0x590d69 */ if (fZ) goto L_00590d69;
L_00590d48:; BB(0x00590d48);
    /* 00590d48: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00590d4b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00590d4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590d4e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00590d50: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x590d55u); f_0082f940();
    /* 00590d55: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00590d59: mov ecx, dword ptr [edi + 0x3ec] */ r_ecx = R32((u32)(r_edi+0x3ecu));
    /* 00590d5f: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00590d62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590d63: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00590d65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00590d66: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x590d69u); call_ind(t); }
L_00590d69:; BB(0x00590d69);
    /* 00590d69: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x590d6eu); f_0082da80();
    /* 00590d6e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00590d71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00590d72: ret  */ FN_RET(0x00590cd4); r_esp += 4; return;
}

void f_00590d74(void) /* sub_590D74 */
{
    FN_ENTER(0x00590d74);
    /* 00590d74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00590d75: mov edi, ecx */ r_edi = r_ecx;
    /* 00590d77: mov ecx, edi */ r_ecx = r_edi;
    /* 00590d79: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x590d7eu); f_00521840();
    /* 00590d7e: mov ecx, edi */ r_ecx = r_edi;
    /* 00590d80: call 0x58d660 */ r_esp -= 4; W32(r_esp, 0x590d85u); f_0058d660();
    /* 00590d85: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 00590d8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590d8c: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00590d92: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00590d95: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00590d98: push 0x9bf9bc */ { u32 v = 0x9bf9bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00590d9d: mov ecx, edi */ r_ecx = r_edi;
    /* 00590d9f: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x590da4u); f_0051ff3c();
    /* 00590da4: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 00590da9: mov dword ptr [edi + 0xd8], 0x9bf8a0 */ W32((u32)(r_edi+0xd8u), 0x9bf8a0u);
    /* 00590db3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00590db5: mov dword ptr [edi + 0xb0], ecx */ W32((u32)(r_edi+0xb0u), r_ecx);
    /* 00590dbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590dbc: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00590dc2: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 00590dc8: mov word ptr [edi + 0xb8], cx */ W16((u32)(r_edi+0xb8u), (u16)r_ecx);
    /* 00590dcf: mov ecx, edi */ r_ecx = r_edi;
    /* 00590dd1: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x590dd6u); f_007aa4c8();
    /* 00590dd6: movzx eax, word ptr [edi + 0xb8] */ r_eax = (u32)R16((u32)(r_edi+0xb8u));
    /* 00590ddd: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 00590de3: push dword ptr [edx*4 + 0xa74460] */ { u32 v = R32((u32)(r_edx*4+0xa74460u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590dea: push dword ptr [edx*4 + 0xa74468] */ { u32 v = R32((u32)(r_edx*4+0xa74468u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590df1: push dword ptr [edx*4 + 0xa74470] */ { u32 v = R32((u32)(r_edx*4+0xa74470u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590df8: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00590dff: mov ecx, edi */ r_ecx = r_edi;
    /* 00590e01: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x590e06u); f_00520c70();
    /* 00590e06: mov ecx, edi */ r_ecx = r_edi;
    /* 00590e08: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x590e0du); f_00520370();
    /* 00590e0d: mov dword ptr [edi + 0x358], 0x9bf9a0 */ W32((u32)(r_edi+0x358u), 0x9bf9a0u);
    /* 00590e17: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00590e19: mov ecx, edi */ r_ecx = r_edi;
    /* 00590e1b: mov dword ptr [edi + 0x384], 0x41200000 */ W32((u32)(r_edi+0x384u), 0x41200000u);
    /* 00590e25: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x590e2au); f_00521820();
    /* 00590e2a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00590e2c: mov ecx, edi */ r_ecx = r_edi;
    /* 00590e2e: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x590e33u); f_005217fc();
    /* 00590e33: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00590e36: mov dword ptr [edi + 0x3d4], 0 */ W32((u32)(r_edi+0x3d4u), 0x0u);
    /* 00590e40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00590e42: mov dword ptr [edi + 0x3cc], edx */ W32((u32)(r_edi+0x3ccu), r_edx);
    /* 00590e48: push 0xa08000a0 */ { u32 v = 0xa08000a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590e4d: push 0xff0000ff */ { u32 v = 0xff0000ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00590e52: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 00590e58: movzx eax, word ptr [edi + 0x2d0] */ r_eax = (u32)R16((u32)(r_edi+0x2d0u));
    /* 00590e5f: mov dword ptr [edi + 0x3d8], edx */ W32((u32)(r_edi+0x3d8u), r_edx);
    /* 00590e65: mov dword ptr [edi + 0x3e0], edx */ W32((u32)(r_edi+0x3e0u), r_edx);
    /* 00590e6b: mov dword ptr [edi + 0x3dc], edx */ W32((u32)(r_edi+0x3dcu), r_edx);
    /* 00590e71: mov word ptr [edi + 0x3e4], ax */ W16((u32)(r_edi+0x3e4u), (u16)r_eax);
    /* 00590e78: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x590e7du); f_00578cc4();
    /* 00590e7d: push 0xa08000a0 */ { u32 v = 0xa08000a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590e82: push 0xff0000ff */ { u32 v = 0xff0000ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00590e87: mov dword ptr [edi + 0x3e8], eax */ W32((u32)(r_edi+0x3e8u), r_eax);
    /* 00590e8d: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x590e92u); f_00578cc4();
    /* 00590e92: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590e95: mov dword ptr [edi + 0x3ec], eax */ W32((u32)(r_edi+0x3ecu), r_eax);
    /* 00590e9b: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00590ea1: lea ecx, [edi + 0x3f0] */ r_ecx = (u32)(r_edi+0x3f0u);
    /* 00590ea7: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x590eaau); call_ind(t); }
    /* 00590eaa: mov dword ptr [edi + 0x418], 0 */ W32((u32)(r_edi+0x418u), 0x0u);
    /* 00590eb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00590eb6: mov dword ptr [edi + 0x40c], eax */ W32((u32)(r_edi+0x40cu), r_eax);
    /* 00590ebc: mov dword ptr [edi + 0x410], eax */ W32((u32)(r_edi+0x410u), r_eax);
    /* 00590ec2: mov dword ptr [edi + 0x41c], 0 */ W32((u32)(r_edi+0x41cu), 0x0u);
    /* 00590ecc: mov dword ptr [edi + 0x414], eax */ W32((u32)(r_edi+0x414u), r_eax);
    /* 00590ed2: mov dword ptr [edi + 0x42c], eax */ W32((u32)(r_edi+0x42cu), r_eax);
    /* 00590ed8: mov dword ptr [edi + 0x430], eax */ W32((u32)(r_edi+0x430u), r_eax);
    /* 00590ede: mov dword ptr [edi + 0x420], 0 */ W32((u32)(r_edi+0x420u), 0x0u);
    /* 00590ee8: mov dword ptr [edi + 0x424], 0 */ W32((u32)(r_edi+0x424u), 0x0u);
    /* 00590ef2: mov dword ptr [edi + 0x428], 0 */ W32((u32)(r_edi+0x428u), 0x0u);
    /* 00590efc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00590efd: ret  */ FN_RET(0x00590d74); r_esp += 4; return;
}

void f_00590f00(void) /* sub_590F00 */
{
    FN_ENTER(0x00590f00);
    /* 00590f00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590f01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00590f03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590f05: call 0x590f98 */ r_esp -= 4; W32(r_esp, 0x590f0au); f_00590f98();
    /* 00590f0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00590f0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00590f10: jne 0x590f16 */ if (!fZ) goto L_00590f16;
L_00590f12:; BB(0x00590f12);
    /* 00590f12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590f13: ret 4 */ FN_RET(0x00590f00); r_esp += 8; return;
L_00590f16:; BB(0x00590f16);
    /* 00590f16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590f17: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x590f1cu); f_005c2f74();
    /* 00590f1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590f1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590f1e: ret 4 */ FN_RET(0x00590f00); r_esp += 8; return;
}

void f_00590f24(void) /* sub_590F24 */
{
    FN_ENTER(0x00590f24);
    /* 00590f24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590f25: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00590f27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00590f29: call 0x590f48 */ r_esp -= 4; W32(r_esp, 0x590f2eu); f_00590f48();
    /* 00590f2e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00590f32: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00590f34: jne 0x590f3a */ if (!fZ) goto L_00590f3a;
L_00590f36:; BB(0x00590f36);
    /* 00590f36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590f37: ret 4 */ FN_RET(0x00590f24); r_esp += 8; return;
L_00590f3a:; BB(0x00590f3a);
    /* 00590f3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590f3b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x590f40u); f_005c2f74();
    /* 00590f40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590f41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00590f42: ret 4 */ FN_RET(0x00590f24); r_esp += 8; return;
}

void f_00590f48(void) /* sub_590F48 */
{
    FN_ENTER(0x00590f48);
    /* 00590f48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590f49: mov ebp, esp */ r_ebp = r_esp;
    /* 00590f4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00590f4d: push 0x8d81dc */ { u32 v = 0x8d81dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00590f52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00590f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590f59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00590f60: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590f63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00590f66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00590f69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00590f6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00590f6f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00590f72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590f75: mov dword ptr [ecx], 0xb08f00 */ W32((u32)(r_ecx), 0xb08f00u);
    /* 00590f7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590f82: call 0x590f98 */ r_esp -= 4; W32(r_esp, 0x590f87u); f_00590f98();
    /* 00590f87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590f8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00590f91: mov esp, ebp */ r_esp = r_ebp;
    /* 00590f93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590f94: ret  */ FN_RET(0x00590f48); r_esp += 4; return;
}

void f_00590f98(void) /* sub_590F98 */
{
    FN_ENTER(0x00590f98);
    /* 00590f98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590f99: mov ebp, esp */ r_ebp = r_esp;
    /* 00590f9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00590f9d: push 0x8d821c */ { u32 v = 0x8d821cu; r_esp -= 4; W32(r_esp, v); }
    /* 00590fa2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00590fa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590fa9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00590fb0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590fb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00590fb6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00590fb9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00590fbc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00590fbf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00590fc2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00590fc9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590fcc: mov edx, dword ptr [ecx + 0x45c] */ r_edx = R32((u32)(r_ecx+0x45cu));
    /* 00590fd2: mov dword ptr [ecx], 0xb08d20 */ W32((u32)(r_ecx), 0xb08d20u);
    /* 00590fd8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590fda: je 0x590ff6 */ if (fZ) goto L_00590ff6;
L_00590fdc:; BB(0x00590fdc);
    /* 00590fdc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590fdf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00590fe3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00590fe8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00590fec: mov dword ptr [ecx + 0x45c], 0 */ W32((u32)(r_ecx+0x45cu), 0x0u);
L_00590ff6:; BB(0x00590ff6);
    /* 00590ff6: mov edx, dword ptr [ecx + 0x460] */ r_edx = R32((u32)(r_ecx+0x460u));
    /* 00590ffc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590ffe: je 0x59101a */ if (fZ) goto L_0059101a;
L_00591000:; BB(0x00591000);
    /* 00591000: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00591003: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00591007: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0059100c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00591010: mov dword ptr [ecx + 0x460], 0 */ W32((u32)(r_ecx+0x460u), 0x0u);
L_0059101a:; BB(0x0059101a);
    /* 0059101a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x59101fu); f_007b9c8c();
    /* 0059101f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00591026: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00591029: add ecx, 0x41c */ {  u32 a = r_ecx; u32 b = 0x41cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059102f: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x591034u); f_005769f8();
    /* 00591034: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059103b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059103e: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x591043u); f_0051f4fc();
    /* 00591043: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00591046: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059104d: mov esp, ebp */ r_esp = r_ebp;
    /* 0059104f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00591050: ret  */ FN_RET(0x00590f98); r_esp += 4; return;
}

