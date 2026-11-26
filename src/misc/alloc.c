#include "protos.h"

void f_00863bd3(void) /* __alloc_osfhnd */
{
    FN_ENTER(0x00863bd3);
    /* 00863bd3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00863bd5: push 0x998ac8 */ { u32 v = 0x998ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 00863bda: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x863bdfu); f_0085e5ac();
    /* 00863bdf: or dword ptr [ebp - 0x1c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863be3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00863be5: call 0x85e4da */ r_esp -= 4; W32(r_esp, 0x863beau); f_0085e4da();
    /* 00863bea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863bed: je 0x863c74 */ if (fZ) goto L_00863c74;
L_00863bf3:; BB(0x00863bf3);
    /* 00863bf3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00863bf5: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x863bfau); f_0085e57a();
    /* 00863bfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863bfb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00863bfd: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
L_00863c00:; BB(0x00863c00);
    /* 00863c00: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00863c03: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00863c06: jge 0x863d34 */ if ((fS==fO)) goto L_00863d34;
L_00863c0c:; BB(0x00863c0c);
    /* 00863c0c: mov esi, dword ptr [edi*4 + 0xaf0a80] */ r_esi = R32((u32)(r_edi*4+0xaf0a80u));
    /* 00863c13: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863c15: je 0x863cdd */ if (fZ) goto L_00863cdd;
L_00863c1b:; BB(0x00863c1b);
    /* 00863c1b: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00863c1e: mov eax, dword ptr [edi*4 + 0xaf0a80] */ r_eax = R32((u32)(r_edi*4+0xaf0a80u));
    /* 00863c25: add eax, 0x480 */ {  u32 a = r_eax; u32 b = 0x480u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00863c2a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00863c2c: jae 0x863cd1 */ if (!fC) goto L_00863cd1;
L_00863c32:; BB(0x00863c32);
    /* 00863c32: test byte ptr [esi + 4], 1 */ {  u32 a = R8((u32)(r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00863c36: jne 0x863c9e */ if (!fZ) goto L_00863c9e;
L_00863c38:; BB(0x00863c38);
    /* 00863c38: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00863c3a: cmp dword ptr [esi + 8], ebx */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863c3d: jne 0x863c87 */ if (!fZ) goto L_00863c87;
L_00863c3f:; BB(0x00863c3f);
    /* 00863c3f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00863c41: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x863c46u); f_0085e57a();
    /* 00863c46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863c47: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00863c4e: cmp dword ptr [esi + 8], ebx */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863c51: jne 0x863c7f */ if (!fZ) goto L_00863c7f;
L_00863c53:; BB(0x00863c53);
    /* 00863c53: push 0xfa0 */ { u32 v = 0xfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00863c58: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 00863c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863c5c: call 0x868a8e */ r_esp -= 4; W32(r_esp, 0x863c61u); f_00868a8e();
    /* 00863c61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863c62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863c63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863c65: jne 0x863c7c */ if (!fZ) goto L_00863c7c;
L_00863c67:; BB(0x00863c67);
    /* 00863c67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00863c69: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00863c6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00863c6d: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x863c72u); f_0085790e();
    /* 00863c72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863c73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00863c74:; BB(0x00863c74);
    /* 00863c74: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00863c77: jmp 0x863d40 */ goto L_00863d40;
L_00863c7c:; BB(0x00863c7c);
    /* 00863c7c: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00863c7f:; BB(0x00863c7f);
    /* 00863c7f: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00863c82: call 0x863cac */ r_esp -= 4; W32(r_esp, 0x863c87u); f_00863cac();
L_00863c87:; BB(0x00863c87);
    /* 00863c87: lea ebx, [esi + 0xc] */ r_ebx = (u32)(r_esi+0xcu);
    /* 00863c8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863c8b: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x863c91u); call_ind(t); }
    /* 00863c91: test byte ptr [esi + 4], 1 */ {  u32 a = R8((u32)(r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00863c95: je 0x863cb5 */ if (fZ) goto L_00863cb5;
L_00863c97:; BB(0x00863c97);
    /* 00863c97: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863c98: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x863c9eu); call_ind(t); }
L_00863c9e:; BB(0x00863c9e);
    /* 00863c9e: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863ca1: jmp 0x863c1b */ goto L_00863c1b;
L_00863cb5:; BB(0x00863cb5);
    /* 00863cb5: or dword ptr [esi], 0xffffffff */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863cb8: mov eax, esi */ r_eax = r_esi;
    /* 00863cba: sub eax, dword ptr [edi*4 + 0xaf0a80] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi*4+0xaf0a80u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00863cc1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00863cc2: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00863cc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863cc5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00863cc5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00863cc5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00863cc7: mov ecx, edi */ r_ecx = r_edi;
    /* 00863cc9: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00863ccc: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00863cce: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00863cd1:; BB(0x00863cd1);
    /* 00863cd1: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863cd5: jne 0x863d34 */ if (!fZ) goto L_00863d34;
L_00863cd7:; BB(0x00863cd7);
    /* 00863cd7: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00863cd8: jmp 0x863c00 */ goto L_00863c00;
L_00863cdd:; BB(0x00863cdd);
    /* 00863cdd: mov esi, 0x480 */ r_esi = 0x480u;
    /* 00863ce2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863ce3: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x863ce8u); f_00859c55();
    /* 00863ce8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863ce9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00863cec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863cee: je 0x863d34 */ if (fZ) goto L_00863d34;
L_00863cf0:; BB(0x00863cf0);
    /* 00863cf0: lea ecx, [edi*4 + 0xaf0a80] */ r_ecx = (u32)(r_edi*4+0xaf0a80u);
    /* 00863cf7: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00863cf9: add dword ptr [0xaf0a60], 0x20 */ { u32 ad = (u32)(0xaf0a60u);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00863d00:; BB(0x00863d00);
    /* 00863d00: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00863d02: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00863d04: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00863d06: jae 0x863d1f */ if (!fC) goto L_00863d1f;
L_00863d08:; BB(0x00863d08);
    /* 00863d08: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 00863d0c: or dword ptr [eax], 0xffffffff */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863d0f: mov byte ptr [eax + 5], 0xa */ W8((u32)(r_eax+0x5u), 0xau);
    /* 00863d13: and dword ptr [eax + 8], 0 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00863d17: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00863d1a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00863d1d: jmp 0x863d00 */ goto L_00863d00;
L_00863d1f:; BB(0x00863d1f);
    /* 00863d1f: shl edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00863d22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00863d25: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00863d26: call 0x863b11 */ r_esp -= 4; W32(r_esp, 0x863d2bu); f_00863b11();
    /* 00863d2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863d2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863d2e: jne 0x863d34 */ if (!fZ) goto L_00863d34;
L_00863d30:; BB(0x00863d30);
    /* 00863d30: or dword ptr [ebp - 0x1c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00863d34:; BB(0x00863d34);
    /* 00863d34: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863d38: call 0x863d46 */ r_esp -= 4; W32(r_esp, 0x863d3du); f_00863d46();
    /* 00863d3d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_00863d40:; BB(0x00863d40);
    /* 00863d40: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863d45u); f_0085e5e7();
    /* 00863d45: ret  */ FN_RET(0x00863bd3); r_esp += 4; return;
}

