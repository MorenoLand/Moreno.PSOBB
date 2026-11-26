#include "protos.h"

void f_008ab099(void) /* sub_8AB099 */
{
    FN_ENTER(0x008ab099);
    /* 008ab099: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab09a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008ab09e: and dword ptr [esi + 0x68], 0 */ { u32 ad = (u32)(r_esi+0x68u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008ab0a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab0a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab0a4: call 0x8a5e12 */ r_esp -= 4; W32(r_esp, 0x8ab0a9u); f_008a5e12();
    /* 008ab0a9: cmp byte ptr [esi + 0x113], 0 */ {  u32 a = R8((u32)(r_esi+0x113u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008ab0b0: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 008ab0b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab0b7: je 0x8ab110 */ if (fZ) goto L_008ab110;
L_008ab0b9:; BB(0x008ab0b9);
    /* 008ab0b9: test byte ptr [esi + 0x60], 2 */ {  u32 a = R8((u32)(r_esi+0x60u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab0bd: jne 0x8ab0c5 */ if (!fZ) goto L_008ab0c5;
L_008ab0bf:; BB(0x008ab0bf);
    /* 008ab0bf: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab0c2: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_008ab0c5:; BB(0x008ab0c5);
    /* 008ab0c5: mov edi, dword ptr [esi + 0xb8] */ r_edi = R32((u32)(r_esi+0xb8u));
    /* 008ab0cb: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
    /* 008ab0d1: movzx eax, byte ptr [esi + 0x114] */ r_eax = (u32)R8((u32)(r_esi+0x114u));
    /* 008ab0d8: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ab0db: mov ecx, dword ptr [eax + 0x99e04c] */ r_ecx = R32((u32)(r_eax+0x99e04cu));
    /* 008ab0e1: mov edx, edi */ r_edx = r_edi;
    /* 008ab0e3: sub edx, dword ptr [eax + 0x99e030] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x99e030u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008ab0e9: lea eax, [edx + ecx - 1] */ r_eax = (u32)(r_edx+r_ecx+0xffffffffu);
    /* 008ab0ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008ab0ef: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008ab0ef, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008ab0ef, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008ab0f1: movzx ecx, byte ptr [esi + 0x119] */ r_ecx = (u32)R8((u32)(r_esi+0x119u));
    /* 008ab0f8: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008ab0fb: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab0fe: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008ab101: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab102: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
    /* 008ab108: mov dword ptr [esi + 0xcc], ecx */ W32((u32)(r_esi+0xccu), r_ecx);
    /* 008ab10e: jmp 0x8ab12f */ goto L_008ab12f;
L_008ab110:; BB(0x008ab110);
    /* 008ab110: mov edi, dword ptr [esi + 0xb8] */ r_edi = R32((u32)(r_esi+0xb8u));
    /* 008ab116: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
    /* 008ab11c: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 008ab122: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab123: mov dword ptr [esi + 0xd0], edi */ W32((u32)(r_esi+0xd0u), r_edi);
    /* 008ab129: mov dword ptr [esi + 0xcc], eax */ W32((u32)(r_esi+0xccu), r_eax);
L_008ab12f:; BB(0x008ab12f);
    /* 008ab12f: movzx eax, byte ptr [esi + 0x119] */ r_eax = (u32)R8((u32)(r_esi+0x119u));
    /* 008ab136: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab137: mov ebx, dword ptr [esi + 0x60] */ r_ebx = R32((u32)(r_esi+0x60u));
    /* 008ab13a: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab13d: je 0x8ab14b */ if (fZ) goto L_008ab14b;
L_008ab13f:; BB(0x008ab13f);
    /* 008ab13f: cmp byte ptr [esi + 0x117], 8 */ {  u32 a = R8((u32)(r_esi+0x117u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008ab146: jae 0x8ab14b */ if (!fC) goto L_008ab14b;
L_008ab148:; BB(0x008ab148);
    /* 008ab148: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab14a: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008ab14b:; BB(0x008ab14b);
    /* 008ab14b: test bh, 0x10 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab14e: je 0x8ab1a2 */ if (fZ) goto L_008ab1a2;
L_008ab150:; BB(0x008ab150);
    /* 008ab150: mov cl, byte ptr [esi + 0x116] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x116u))) & 0xffu);
    /* 008ab156: cmp cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008ab159: jne 0x8ab170 */ if (!fZ) goto L_008ab170;
L_008ab15b:; BB(0x008ab15b);
    /* 008ab15b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008ab15d: cmp word ptr [esi + 0x10a], ax */ {  u32 a = R16((u32)(r_esi+0x10au)); u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008ab164: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008ab167: lea eax, [eax*8 + 0x18] */ r_eax = (u32)(r_eax*8+0x18u);
    /* 008ab16e: jmp 0x8ab1a2 */ goto L_008ab1a2;
L_008ab170:; BB(0x008ab170);
    /* 008ab170: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab172: jne 0x8ab18a */ if (!fZ) goto L_008ab18a;
L_008ab174:; BB(0x008ab174);
    /* 008ab174: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab177: jge 0x8ab17c */ if ((fS==fO)) goto L_008ab17c;
L_008ab179:; BB(0x008ab179);
    /* 008ab179: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab17b: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008ab17c:; BB(0x008ab17c);
    /* 008ab17c: cmp word ptr [esi + 0x10a], 0 */ {  u32 a = R16((u32)(r_esi+0x10au)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008ab184: je 0x8ab1a2 */ if (fZ) goto L_008ab1a2;
L_008ab186:; BB(0x008ab186);
    /* 008ab186: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab188: jmp 0x8ab1a2 */ goto L_008ab1a2;
L_008ab18a:; BB(0x008ab18a);
    /* 008ab18a: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008ab18d: jne 0x8ab1a2 */ if (!fZ) goto L_008ab1a2;
L_008ab18f:; BB(0x008ab18f);
    /* 008ab18f: cmp word ptr [esi + 0x10a], 0 */ {  u32 a = R16((u32)(r_esi+0x10au)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008ab197: je 0x8ab1a2 */ if (fZ) goto L_008ab1a2;
L_008ab199:; BB(0x008ab199);
    /* 008ab199: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ab19c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab19e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008ab19f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab1a0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008ab1a0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008ab1a0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
L_008ab1a2:; BB(0x008ab1a2);
    /* 008ab1a2: test bh, bh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_ebx>>8); u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 008ab1a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ab1a5: jns 0x8ab1e2 */ if (!fS) goto L_008ab1e2;
L_008ab1a7:; BB(0x008ab1a7);
    /* 008ab1a7: mov cl, byte ptr [esi + 0x116] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x116u))) & 0xffu);
    /* 008ab1ad: cmp cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008ab1b0: jne 0x8ab1b7 */ if (!fZ) goto L_008ab1b7;
L_008ab1b2:; BB(0x008ab1b2);
    /* 008ab1b2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab1b4: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008ab1b5: jmp 0x8ab1e2 */ goto L_008ab1e2;
L_008ab1b7:; BB(0x008ab1b7);
    /* 008ab1b7: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab1b9: jne 0x8ab1cc */ if (!fZ) goto L_008ab1cc;
L_008ab1bb:; BB(0x008ab1bb);
    /* 008ab1bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab1bd: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab1c0: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 008ab1c3: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab1c4: and ecx, 0xfffffff0 */ {  u32 a = r_ecx; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab1c7: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab1ca: jmp 0x8ab1e0 */ goto L_008ab1e0;
L_008ab1cc:; BB(0x008ab1cc);
    /* 008ab1cc: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008ab1cf: jne 0x8ab1e2 */ if (!fZ) goto L_008ab1e2;
L_008ab1d1:; BB(0x008ab1d1);
    /* 008ab1d1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab1d3: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab1d6: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 008ab1d9: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab1da: and ecx, 0xffffffe0 */ {  u32 a = r_ecx; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab1dd: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008ab1e0:; BB(0x008ab1e0);
    /* 008ab1e0: mov eax, ecx */ r_eax = r_ecx;
L_008ab1e2:; BB(0x008ab1e2);
    /* 008ab1e2: add edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ab1e5: and edi, 0xfffffff8 */ {  u32 a = r_edi; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008ab1e8: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008ab1eb: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab1ee: add edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ab1f1: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008ab1f4: shr edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008ab1f7: lea eax, [edi + eax + 1] */ r_eax = (u32)(r_edi+r_eax+0x1u);
    /* 008ab1fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab1fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab1fd: call 0x8aa89f */ r_esp -= 4; W32(r_esp, 0x8ab202u); f_008aa89f();
    /* 008ab202: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 008ab208: lea edi, [esi + 0xc8] */ r_edi = (u32)(r_esi+0xc8u);
    /* 008ab20e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008ab210: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab212: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab213: call 0x8aa89f */ r_esp -= 4; W32(r_esp, 0x8ab218u); f_008aa89f();
    /* 008ab218: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008ab21a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008ab21b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab21c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab21e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab21f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab220: mov dword ptr [esi + 0xd8], eax */ W32((u32)(r_esi+0xd8u), r_eax);
    /* 008ab226: call 0x8aa911 */ r_esp -= 4; W32(r_esp, 0x8ab22bu); f_008aa911();
    /* 008ab22b: or dword ptr [esi + 0x5c], 0x40 */ { u32 ad = (u32)(r_esi+0x5cu);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ab22f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ab232: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ab233: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ab234: ret  */ FN_RET(0x008ab099); r_esp += 4; return;
}

void f_008ab235(void) /* sub_8AB235 */
{
    FN_ENTER(0x008ab235);
    /* 008ab235: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab236: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 008ab23a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab23b: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008ab23f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab240: mov edi, dword ptr [esi + 0xa0] */ r_edi = R32((u32)(r_esi+0xa0u));
    /* 008ab246: jmp 0x8ab25f */ goto L_008ab25f;
L_008ab248:; BB(0x008ab248);
    /* 008ab248: push dword ptr [esi + 0xa0] */ { u32 v = R32((u32)(r_esi+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab24e: push dword ptr [esi + 0x9c] */ { u32 v = R32((u32)(r_esi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab254: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab255: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8ab25au); f_008aa965();
    /* 008ab25a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab25d: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_008ab25f:; BB(0x008ab25f);
    /* 008ab25f: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ab261: ja 0x8ab248 */ if ((!fC&&!fZ)) goto L_008ab248;
L_008ab263:; BB(0x008ab263);
    /* 008ab263: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab265: je 0x8ab277 */ if (fZ) goto L_008ab277;
L_008ab267:; BB(0x008ab267);
    /* 008ab267: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab268: push dword ptr [esi + 0x9c] */ { u32 v = R32((u32)(r_esi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab26e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab26f: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8ab274u); f_008aa965();
    /* 008ab274: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008ab277:; BB(0x008ab277);
    /* 008ab277: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab278: call 0x8aa97f */ r_esp -= 4; W32(r_esp, 0x8ab27du); f_008aa97f();
    /* 008ab27d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab27f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab280: je 0x8ab2bb */ if (fZ) goto L_008ab2bb;
L_008ab282:; BB(0x008ab282);
    /* 008ab282: mov al, byte ptr [esi + 0x10c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x10cu))) & 0xffu);
    /* 008ab288: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 008ab28a: je 0x8ab292 */ if (fZ) goto L_008ab292;
L_008ab28c:; BB(0x008ab28c);
    /* 008ab28c: test byte ptr [esi + 0x5d], 2 */ {  u32 a = R8((u32)(r_esi+0x5du)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab290: je 0x8ab29c */ if (fZ) goto L_008ab29c;
L_008ab292:; BB(0x008ab292);
    /* 008ab292: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab294: jne 0x8ab2a9 */ if (!fZ) goto L_008ab2a9;
L_008ab296:; BB(0x008ab296);
    /* 008ab296: test byte ptr [esi + 0x5d], 4 */ {  u32 a = R8((u32)(r_esi+0x5du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab29a: je 0x8ab2a9 */ if (fZ) goto L_008ab2a9;
L_008ab29c:; BB(0x008ab29c);
    /* 008ab29c: push 0x99e0e0 */ { u32 v = 0x99e0e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2a2: call 0x8a3f48 */ r_esp -= 4; W32(r_esp, 0x8ab2a7u); f_008a3f48();
    /* 008ab2a7: jmp 0x8ab2b4 */ goto L_008ab2b4;
L_008ab2a9:; BB(0x008ab2a9);
    /* 008ab2a9: push 0x99e0e0 */ { u32 v = 0x99e0e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2af: call 0x8a3f23 */ r_esp -= 4; W32(r_esp, 0x8ab2b4u); f_008a3f23();
L_008ab2b4:; BB(0x008ab2b4);
    /* 008ab2b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab2b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008ab2b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab2b8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008ab2b9: jmp 0x8ab2bd */ goto L_008ab2bd;
L_008ab2bb:; BB(0x008ab2bb);
    /* 008ab2bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008ab2bd:; BB(0x008ab2bd);
    /* 008ab2bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ab2be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ab2bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ab2c0: ret  */ FN_RET(0x008ab235); r_esp += 4; return;
}

void f_008ab2c1(void) /* sub_8AB2C1 */
{
    FN_ENTER(0x008ab2c1);
    /* 008ab2c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2c2: mov ebp, esp */ r_ebp = r_esp;
    /* 008ab2c4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ab2c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2c9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008ab2cc: cmp dword ptr [esi + 0x58], 0 */ {  u32 a = R32((u32)(r_esi+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab2d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2d1: je 0x8ab2e0 */ if (fZ) goto L_008ab2e0;
L_008ab2d3:; BB(0x008ab2d3);
    /* 008ab2d3: push 0x99e1f0 */ { u32 v = 0x99e1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2d9: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab2deu); f_008a3ef0();
    /* 008ab2de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab2df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab2e0:; BB(0x008ab2e0);
    /* 008ab2e0: cmp dword ptr [ebp + 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab2e4: je 0x8ab2f3 */ if (fZ) goto L_008ab2f3;
L_008ab2e6:; BB(0x008ab2e6);
    /* 008ab2e6: push 0x99e1dc */ { u32 v = 0x99e1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2ec: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab2f1u); f_008a3ef0();
    /* 008ab2f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab2f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab2f3:; BB(0x008ab2f3);
    /* 008ab2f3: or dword ptr [esi + 0x58], 1 */ { u32 ad = (u32)(r_esi+0x58u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ab2f7: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2f9: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 008ab2fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab2fe: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8ab303u); f_008aa965();
    /* 008ab303: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab305: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab306: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab30bu); f_008ab235();
    /* 008ab30b: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 008ab30e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab30f: call 0x8aa942 */ r_esp -= 4; W32(r_esp, 0x8ab314u); f_008aa942();
    /* 008ab314: mov edi, eax */ r_edi = r_eax;
    /* 008ab316: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008ab319: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab31a: call 0x8aa942 */ r_esp -= 4; W32(r_esp, 0x8ab31fu); f_008aa942();
    /* 008ab31f: movzx ebx, byte ptr [ebp - 0x14] */ r_ebx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 008ab323: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008ab326: movzx eax, byte ptr [ebp - 0x13] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffedu));
    /* 008ab32a: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 008ab32d: movzx eax, byte ptr [ebp - 0x12] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffeeu));
    /* 008ab331: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008ab334: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 008ab338: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008ab33b: movzx eax, byte ptr [ebp - 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff0u));
    /* 008ab33f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab342: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab344: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008ab347: je 0x8ab35d */ if (fZ) goto L_008ab35d;
L_008ab349:; BB(0x008ab349);
    /* 008ab349: mov eax, 0x7fffffff */ r_eax = 0x7fffffffu;
    /* 008ab34e: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ab350: ja 0x8ab35d */ if ((!fC&&!fZ)) goto L_008ab35d;
L_008ab352:; BB(0x008ab352);
    /* 008ab352: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab356: je 0x8ab35d */ if (fZ) goto L_008ab35d;
L_008ab358:; BB(0x008ab358);
    /* 008ab358: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ab35b: jbe 0x8ab36a */ if ((fC||fZ)) goto L_008ab36a;
L_008ab35d:; BB(0x008ab35d);
    /* 008ab35d: push 0x99e1c0 */ { u32 v = 0x99e1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab362: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab363: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab368u); f_008a3ef0();
    /* 008ab368: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab369: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab36a:; BB(0x008ab36a);
    /* 008ab36a: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab36d: je 0x8ab390 */ if (fZ) goto L_008ab390;
L_008ab36f:; BB(0x008ab36f);
    /* 008ab36f: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab372: je 0x8ab390 */ if (fZ) goto L_008ab390;
L_008ab374:; BB(0x008ab374);
    /* 008ab374: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab377: je 0x8ab390 */ if (fZ) goto L_008ab390;
L_008ab379:; BB(0x008ab379);
    /* 008ab379: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab37c: je 0x8ab390 */ if (fZ) goto L_008ab390;
L_008ab37e:; BB(0x008ab37e);
    /* 008ab37e: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab381: je 0x8ab390 */ if (fZ) goto L_008ab390;
L_008ab383:; BB(0x008ab383);
    /* 008ab383: push 0x99e1a4 */ { u32 v = 0x99e1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab388: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab389: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab38eu); f_008a3ef0();
    /* 008ab38e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab38f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab390:; BB(0x008ab390);
    /* 008ab390: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008ab393: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008ab395: jl 0x8ab3a6 */ if ((fS!=fO)) goto L_008ab3a6;
L_008ab397:; BB(0x008ab397);
    /* 008ab397: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab39a: je 0x8ab3a6 */ if (fZ) goto L_008ab3a6;
L_008ab39c:; BB(0x008ab39c);
    /* 008ab39c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab39f: je 0x8ab3a6 */ if (fZ) goto L_008ab3a6;
L_008ab3a1:; BB(0x008ab3a1);
    /* 008ab3a1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab3a4: jle 0x8ab3b3 */ if ((fZ||fS!=fO)) goto L_008ab3b3;
L_008ab3a6:; BB(0x008ab3a6);
    /* 008ab3a6: push 0x99e188 */ { u32 v = 0x99e188u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab3ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab3ac: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab3b1u); f_008a3ef0();
    /* 008ab3b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab3b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab3b3:; BB(0x008ab3b3);
    /* 008ab3b3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008ab3b6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab3b9: jne 0x8ab3c0 */ if (!fZ) goto L_008ab3c0;
L_008ab3bb:; BB(0x008ab3bb);
    /* 008ab3bb: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab3be: jg 0x8ab3d4 */ if ((!fZ&&fS==fO)) goto L_008ab3d4;
L_008ab3c0:; BB(0x008ab3c0);
    /* 008ab3c0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab3c3: je 0x8ab3cf */ if (fZ) goto L_008ab3cf;
L_008ab3c5:; BB(0x008ab3c5);
    /* 008ab3c5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab3c8: je 0x8ab3cf */ if (fZ) goto L_008ab3cf;
L_008ab3ca:; BB(0x008ab3ca);
    /* 008ab3ca: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab3cd: jne 0x8ab3e1 */ if (!fZ) goto L_008ab3e1;
L_008ab3cf:; BB(0x008ab3cf);
    /* 008ab3cf: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab3d2: jge 0x8ab3e1 */ if ((fS==fO)) goto L_008ab3e1;
L_008ab3d4:; BB(0x008ab3d4);
    /* 008ab3d4: push 0x99e154 */ { u32 v = 0x99e154u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab3d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab3da: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab3dfu); f_008a3ef0();
    /* 008ab3df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab3e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab3e1:; BB(0x008ab3e1);
    /* 008ab3e1: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab3e5: jl 0x8ab3f4 */ if ((fS!=fO)) goto L_008ab3f4;
L_008ab3e7:; BB(0x008ab3e7);
    /* 008ab3e7: push 0x99e130 */ { u32 v = 0x99e130u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab3ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab3ed: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab3f2u); f_008a3ef0();
    /* 008ab3f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab3f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab3f4:; BB(0x008ab3f4);
    /* 008ab3f4: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab3f8: je 0x8ab407 */ if (fZ) goto L_008ab407;
L_008ab3fa:; BB(0x008ab3fa);
    /* 008ab3fa: push 0x99e10c */ { u32 v = 0x99e10cu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab3ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab400: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab405u); f_008a3ef0();
    /* 008ab405: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab406: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab407:; BB(0x008ab407);
    /* 008ab407: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab40b: je 0x8ab41a */ if (fZ) goto L_008ab41a;
L_008ab40d:; BB(0x008ab40d);
    /* 008ab40d: push 0x99e0ec */ { u32 v = 0x99e0ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab412: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab413: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab418u); f_008a3ef0();
    /* 008ab418: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab419: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab41a:; BB(0x008ab41a);
    /* 008ab41a: mov al, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 008ab41d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ab420: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008ab423: mov byte ptr [esi + 0x113], al */ W8((u32)(r_esi+0x113u), (u8)r_eax);
    /* 008ab429: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 008ab42c: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ab42f: mov dword ptr [esi + 0xb8], edi */ W32((u32)(r_esi+0xb8u), r_edi);
    /* 008ab435: mov dword ptr [esi + 0xbc], edx */ W32((u32)(r_esi+0xbcu), r_edx);
    /* 008ab43b: mov byte ptr [esi + 0x117], bl */ W8((u32)(r_esi+0x117u), (u8)r_ebx);
    /* 008ab441: mov byte ptr [esi + 0x116], cl */ W8((u32)(r_esi+0x116u), (u8)r_ecx);
    /* 008ab447: je 0x8ab472 */ if (fZ) goto L_008ab472;
L_008ab449:; BB(0x008ab449);
    /* 008ab449: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ab44a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ab44b: je 0x8ab469 */ if (fZ) goto L_008ab469;
L_008ab44d:; BB(0x008ab44d);
    /* 008ab44d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ab44e: je 0x8ab472 */ if (fZ) goto L_008ab472;
L_008ab450:; BB(0x008ab450);
    /* 008ab450: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ab451: je 0x8ab460 */ if (fZ) goto L_008ab460;
L_008ab453:; BB(0x008ab453);
    /* 008ab453: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008ab454: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008ab455: jne 0x8ab479 */ if (!fZ) goto L_008ab479;
L_008ab457:; BB(0x008ab457);
    /* 008ab457: mov byte ptr [esi + 0x11a], 4 */ W8((u32)(r_esi+0x11au), 0x4u);
    /* 008ab45e: jmp 0x8ab479 */ goto L_008ab479;
L_008ab460:; BB(0x008ab460);
    /* 008ab460: mov byte ptr [esi + 0x11a], 2 */ W8((u32)(r_esi+0x11au), 0x2u);
    /* 008ab467: jmp 0x8ab479 */ goto L_008ab479;
L_008ab469:; BB(0x008ab469);
    /* 008ab469: mov byte ptr [esi + 0x11a], 3 */ W8((u32)(r_esi+0x11au), 0x3u);
    /* 008ab470: jmp 0x8ab479 */ goto L_008ab479;
L_008ab472:; BB(0x008ab472);
    /* 008ab472: mov byte ptr [esi + 0x11a], 1 */ W8((u32)(r_esi+0x11au), 0x1u);
L_008ab479:; BB(0x008ab479);
    /* 008ab479: mov al, byte ptr [esi + 0x11a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x11au))) & 0xffu);
    /* 008ab47f: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab482: imul bl */ { i32 t = (i32)(i8)r_eax * (i32)(i8)(u8)r_ebx; r_eax = (r_eax & 0xffff0000u) | ((u32)t & 0xffffu); fC = fO = (t != (i32)(i8)t); }
    /* 008ab484: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab487: mov byte ptr [esi + 0x119], al */ W8((u32)(r_esi+0x119u), (u8)r_eax);
    /* 008ab48d: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab490: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008ab493: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008ab496: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab497: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab498: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab499: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab49a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab49d: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab4a0: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ab4a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4a4: mov dword ptr [esi + 0xc8], eax */ W32((u32)(r_esi+0xc8u), r_eax);
    /* 008ab4aa: call 0x8a60f8 */ r_esp -= 4; W32(r_esp, 0x8ab4afu); f_008a60f8();
    /* 008ab4af: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ab4b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ab4b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ab4b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ab4b5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008ab4b6: ret  */ FN_RET(0x008ab2c1); r_esp += 4; return;
}

void f_008ab4b7(void) /* sub_8AB4B7 */
{
    FN_ENTER(0x008ab4b7);
    /* 008ab4b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4b8: mov ebp, esp */ r_ebp = r_esp;
    /* 008ab4ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4bd: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008ab4c0: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 008ab4c3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab4c5: jne 0x8ab4ce */ if (!fZ) goto L_008ab4ce;
L_008ab4c7:; BB(0x008ab4c7);
    /* 008ab4c7: push 0x99e274 */ { u32 v = 0x99e274u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4cc: jmp 0x8ab4e3 */ goto L_008ab4e3;
L_008ab4ce:; BB(0x008ab4ce);
    /* 008ab4ce: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab4d0: je 0x8ab4da */ if (fZ) goto L_008ab4da;
L_008ab4d2:; BB(0x008ab4d2);
    /* 008ab4d2: push 0x99e25c */ { u32 v = 0x99e25cu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4d8: jmp 0x8ab50b */ goto L_008ab50b;
L_008ab4da:; BB(0x008ab4da);
    /* 008ab4da: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab4dc: je 0x8ab4eb */ if (fZ) goto L_008ab4eb;
L_008ab4de:; BB(0x008ab4de);
    /* 008ab4de: push 0x99e244 */ { u32 v = 0x99e244u; r_esp -= 4; W32(r_esp, v); }
L_008ab4e3:; BB(0x008ab4e3);
    /* 008ab4e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4e4: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab4e9u); f_008a3ef0();
    /* 008ab4e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab4ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab4eb:; BB(0x008ab4eb);
    /* 008ab4eb: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008ab4ee: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab4f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008ab4f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab4f3: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008ab4f3, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008ab4f3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008ab4f5: or dword ptr [esi + 0x58], 2 */ { u32 ad = (u32)(r_esi+0x58u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ab4f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab4fb: je 0x8ab528 */ if (fZ) goto L_008ab528;
L_008ab4fd:; BB(0x008ab4fd);
    /* 008ab4fd: cmp byte ptr [esi + 0x116], cl */ {  u32 a = R8((u32)(r_esi+0x116u)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008ab503: push 0x99e22c */ { u32 v = 0x99e22cu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab508: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab509: je 0x8ab521 */ if (fZ) goto L_008ab521;
L_008ab50b:; BB(0x008ab50b);
    /* 008ab50b: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab510u); f_008a3f0e();
    /* 008ab510: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab513: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab514: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab519u); f_008ab235();
    /* 008ab519: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ab51c: jmp 0x8ab5de */ goto L_008ab5de;
L_008ab521:; BB(0x008ab521);
    /* 008ab521: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab526u); f_008a3ef0();
    /* 008ab526: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab527: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab528:; BB(0x008ab528);
    /* 008ab528: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008ab52b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab52c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab52d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab52f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab530: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008ab531: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008ab531, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008ab531, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008ab533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab534: mov ebx, eax */ r_ebx = r_eax;
    /* 008ab536: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab537: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab538: call 0x8a6307 */ r_esp -= 4; W32(r_esp, 0x8ab53du); f_008a6307();
    /* 008ab53d: or byte ptr [esi + 0x5d], 0x10 */ { u32 ad = (u32)(r_esi+0x5du);  u32 a = R8(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008ab541: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab544: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008ab546: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008ab549: jle 0x8ab579 */ if ((fZ||fS!=fO)) goto L_008ab579;
L_008ab54b:; BB(0x008ab54b);
    /* 008ab54b: lea edi, [eax + 2] */ r_edi = (u32)(r_eax+0x2u);
    /* 008ab54e: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
L_008ab551:; BB(0x008ab551);
    /* 008ab551: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab553: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008ab556: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab557: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab558: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8ab55du); f_008aa965();
    /* 008ab55d: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 008ab560: mov byte ptr [edi - 2], al */ W8((u32)(r_edi+0xfffffffeu), (u8)r_eax);
    /* 008ab563: mov al, byte ptr [ebp + 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 008ab566: mov byte ptr [edi - 1], al */ W8((u32)(r_edi+0xffffffffu), (u8)r_eax);
    /* 008ab569: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 008ab56c: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 008ab56e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab571: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ab574: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008ab577: jne 0x8ab551 */ if (!fZ) goto L_008ab551;
L_008ab579:; BB(0x008ab579);
    /* 008ab579: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab57b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab57c: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab581u); f_008ab235();
    /* 008ab581: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008ab584: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008ab587: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab589: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab58a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab58b: mov dword ptr [esi + 0x104], eax */ W32((u32)(r_esi+0x104u), r_eax);
    /* 008ab591: mov word ptr [esi + 0x108], bx */ W16((u32)(r_esi+0x108u), (u16)r_ebx);
    /* 008ab598: call 0x8a6199 */ r_esp -= 4; W32(r_esp, 0x8ab59du); f_008a6199();
    /* 008ab59d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab5a0: cmp byte ptr [esi + 0x116], 3 */ {  u32 a = R8((u32)(r_esi+0x116u)); u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008ab5a7: jne 0x8ab5dc */ if (!fZ) goto L_008ab5dc;
L_008ab5a9:; BB(0x008ab5a9);
    /* 008ab5a9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ab5ab: je 0x8ab5dc */ if (fZ) goto L_008ab5dc;
L_008ab5ad:; BB(0x008ab5ad);
    /* 008ab5ad: test byte ptr [edi + 8], 0x10 */ {  u32 a = R8((u32)(r_edi+0x8u)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ab5b1: je 0x8ab5dc */ if (fZ) goto L_008ab5dc;
L_008ab5b3:; BB(0x008ab5b3);
    /* 008ab5b3: lea edi, [esi + 0x10a] */ r_edi = (u32)(r_esi+0x10au);
    /* 008ab5b9: mov ax, word ptr [edi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edi))) & 0xffffu);
    /* 008ab5bc: cmp ax, word ptr [esi + 0x108] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esi+0x108u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 008ab5c3: jbe 0x8ab5dc */ if ((fC||fZ)) goto L_008ab5dc;
L_008ab5c5:; BB(0x008ab5c5);
    /* 008ab5c5: push 0x99e204 */ { u32 v = 0x99e204u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab5ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab5cb: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab5d0u); f_008a3f0e();
    /* 008ab5d0: mov ax, word ptr [esi + 0x108] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x108u))) & 0xffffu);
    /* 008ab5d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab5d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab5d9: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
L_008ab5dc:; BB(0x008ab5dc);
    /* 008ab5dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ab5dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008ab5de:; BB(0x008ab5de);
    /* 008ab5de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ab5df: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008ab5e0: ret  */ FN_RET(0x008ab4b7); r_esp += 4; return;
}

void f_008ab5e1(void) /* sub_8AB5E1 */
{
    FN_ENTER(0x008ab5e1);
    /* 008ab5e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab5e2: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008ab5e6: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 008ab5e9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab5eb: je 0x8ab5f1 */ if (fZ) goto L_008ab5f1;
L_008ab5ed:; BB(0x008ab5ed);
    /* 008ab5ed: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab5ef: jne 0x8ab605 */ if (!fZ) goto L_008ab605;
L_008ab5f1:; BB(0x008ab5f1);
    /* 008ab5f1: push 0x99e2ac */ { u32 v = 0x99e2acu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab5f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab5f7: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab5fcu); f_008a3ef0();
    /* 008ab5fc: cmp dword ptr [esp + 0x14], 0 */ {  u32 a = R32((u32)(r_esp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ab601: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab602: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab603: je 0x8ab629 */ if (fZ) goto L_008ab629;
L_008ab605:; BB(0x008ab605);
    /* 008ab605: or dword ptr [esi + 0x58], 0x18 */ { u32 ad = (u32)(r_esi+0x58u);  u32 a = R32(ad); u32 b = 0x18u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008ab609: cmp dword ptr [esp + 0x10], 0 */ {  u32 a = R32((u32)(r_esp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab60e: je 0x8ab61d */ if (fZ) goto L_008ab61d;
L_008ab610:; BB(0x008ab610);
    /* 008ab610: push 0x99e290 */ { u32 v = 0x99e290u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab615: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab616: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab61bu); f_008a3f0e();
    /* 008ab61b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab61c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab61d:; BB(0x008ab61d);
    /* 008ab61d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab621: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab622: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab627u); f_008ab235();
    /* 008ab627: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab628: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab629:; BB(0x008ab629);
    /* 008ab629: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ab62a: ret  */ FN_RET(0x008ab5e1); r_esp += 4; return;
}

void f_008ab62b(void) /* sub_8AB62B */
{
    FN_ENTER(0x008ab62b);
    /* 008ab62b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ab62c: mov ebp, esp */ r_ebp = r_esp;
    /* 008ab62e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab62f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab630: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab631: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008ab634: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 008ab637: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab639: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab63a: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008ab63d: mov ebx, 0x800 */ r_ebx = 0x800u;
    /* 008ab642: jne 0x8ab670 */ if (!fZ) goto L_008ab670;
L_008ab644:; BB(0x008ab644);
    /* 008ab644: push 0x99e36c */ { u32 v = 0x99e36cu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab649: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab64a: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab64fu); f_008a3ef0();
L_008ab64f:; BB(0x008ab64f);
    /* 008ab64f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab650: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab651:; BB(0x008ab651);
    /* 008ab651: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab655: je 0x8ab6a2 */ if (fZ) goto L_008ab6a2;
L_008ab657:; BB(0x008ab657);
    /* 008ab657: push 0x99e350 */ { u32 v = 0x99e350u; r_esp -= 4; W32(r_esp, v); }
L_008ab65c:; BB(0x008ab65c);
    /* 008ab65c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab65d: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab662u); f_008a3f0e();
    /* 008ab662: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab665: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab666: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab66bu); f_008ab235();
    /* 008ab66b: jmp 0x8ab72e */ goto L_008ab72e;
L_008ab670:; BB(0x008ab670);
    /* 008ab670: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab672: je 0x8ab67b */ if (fZ) goto L_008ab67b;
L_008ab674:; BB(0x008ab674);
    /* 008ab674: push 0x99e338 */ { u32 v = 0x99e338u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab679: jmp 0x8ab65c */ goto L_008ab65c;
L_008ab67b:; BB(0x008ab67b);
    /* 008ab67b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab67d: je 0x8ab68c */ if (fZ) goto L_008ab68c;
L_008ab67f:; BB(0x008ab67f);
    /* 008ab67f: push 0x99e320 */ { u32 v = 0x99e320u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab684: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab685: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab68au); f_008a3f0e();
    /* 008ab68a: jmp 0x8ab64f */ goto L_008ab64f;
L_008ab68c:; BB(0x008ab68c);
    /* 008ab68c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab68e: je 0x8ab651 */ if (fZ) goto L_008ab651;
L_008ab690:; BB(0x008ab690);
    /* 008ab690: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 008ab693: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab695: je 0x8ab651 */ if (fZ) goto L_008ab651;
L_008ab697:; BB(0x008ab697);
    /* 008ab697: test ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab699: jne 0x8ab651 */ if (!fZ) goto L_008ab651;
L_008ab69b:; BB(0x008ab69b);
    /* 008ab69b: push 0x99e308 */ { u32 v = 0x99e308u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab6a0: jmp 0x8ab65c */ goto L_008ab65c;
L_008ab6a2:; BB(0x008ab6a2);
    /* 008ab6a2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab6a4: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008ab6a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab6a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab6a9: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8ab6aeu); f_008aa965();
    /* 008ab6ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab6b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab6b1: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab6b6u); f_008ab235();
    /* 008ab6b6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab6b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ab6bb: jne 0x8ab731 */ if (!fZ) goto L_008ab731;
L_008ab6bd:; BB(0x008ab6bd);
    /* 008ab6bd: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 008ab6c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab6c1: call 0x8aa942 */ r_esp -= 4; W32(r_esp, 0x8ab6c6u); f_008aa942();
    /* 008ab6c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab6c7: mov ecx, eax */ r_ecx = r_eax;
    /* 008ab6c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ab6cb: je 0x8ab731 */ if (fZ) goto L_008ab731;
L_008ab6cd:; BB(0x008ab6cd);
    /* 008ab6cd: test dword ptr [edi + 8], ebx */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab6d0: je 0x8ab706 */ if (fZ) goto L_008ab706;
L_008ab6d2:; BB(0x008ab6d2);
    /* 008ab6d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008ab6d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008ab6d7: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 008ab6da: jge 0x8ab6e2 */ if ((fS==fO)) goto L_008ab6e2;
L_008ab6dc:; BB(0x008ab6dc);
    /* 008ab6dc: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008ab6e2:; BB(0x008ab6e2);
    /* 008ab6e2: fsub qword ptr [0x99e300] */ ST(0) = ST(0) - R_F64((u32)(0x99e300u));
    /* 008ab6e8: fabs  */ ST(0) = fabsl(ST(0));
    /* 008ab6ea: fcomp qword ptr [0x99e2f8] */ fx_compare(ST(0), R_F64((u32)(0x99e2f8u))); FPOP();
    /* 008ab6f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008ab6f2: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab6f5: jne 0x8ab706 */ if (!fZ) goto L_008ab706;
L_008ab6f7:; BB(0x008ab6f7);
    /* 008ab6f7: push 0x99e2c0 */ { u32 v = 0x99e2c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab6fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab6fd: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab702u); f_008a3f0e();
    /* 008ab702: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab704: jmp 0x8ab731 */ goto L_008ab731;
L_008ab706:; BB(0x008ab706);
    /* 008ab706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008ab708: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008ab70b: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 008ab70e: jge 0x8ab716 */ if ((fS==fO)) goto L_008ab716;
L_008ab710:; BB(0x008ab710);
    /* 008ab710: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008ab716:; BB(0x008ab716);
    /* 008ab716: fmul dword ptr [0x99ba68] */ ST(0) = ST(0) * R_F32((u32)(0x99ba68u));
    /* 008ab71c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab71d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab71e: fst dword ptr [esi + 0x130] */ W_F32((u32)(r_esi+0x130u), ST(0));
    /* 008ab724: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008ab727: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab728: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab729: call 0x8a60dd */ r_esp -= 4; W32(r_esp, 0x8ab72eu); f_008a60dd();
L_008ab72e:; BB(0x008ab72e);
    /* 008ab72e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008ab731:; BB(0x008ab731);
    /* 008ab731: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ab732: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ab733: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ab734: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008ab735: ret  */ FN_RET(0x008ab62b); r_esp += 4; return;
}

void f_008ab736(void) /* sub_8AB736 */
{
    FN_ENTER(0x008ab736);
    /* 008ab736: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ab737: mov ebp, esp */ r_ebp = r_esp;
    /* 008ab739: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab73a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008ab73d: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 008ab740: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab742: jne 0x8ab773 */ if (!fZ) goto L_008ab773;
L_008ab744:; BB(0x008ab744);
    /* 008ab744: push 0x99e404 */ { u32 v = 0x99e404u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab749: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab74a: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab74fu); f_008a3ef0();
L_008ab74f:; BB(0x008ab74f);
    /* 008ab74f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab750: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab751:; BB(0x008ab751);
    /* 008ab751: cmp dword ptr [ebp + 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab755: je 0x8ab7a3 */ if (fZ) goto L_008ab7a3;
L_008ab757:; BB(0x008ab757);
    /* 008ab757: push 0x99e3e8 */ { u32 v = 0x99e3e8u; r_esp -= 4; W32(r_esp, v); }
L_008ab75c:; BB(0x008ab75c);
    /* 008ab75c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab75d: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab762u); f_008a3f0e();
    /* 008ab762: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab765: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab766: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab76bu); f_008ab235();
    /* 008ab76b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ab76e: jmp 0x8ab822 */ goto L_008ab822;
L_008ab773:; BB(0x008ab773);
    /* 008ab773: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab775: je 0x8ab77e */ if (fZ) goto L_008ab77e;
L_008ab777:; BB(0x008ab777);
    /* 008ab777: push 0x99e3d0 */ { u32 v = 0x99e3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab77c: jmp 0x8ab75c */ goto L_008ab75c;
L_008ab77e:; BB(0x008ab77e);
    /* 008ab77e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab780: je 0x8ab78f */ if (fZ) goto L_008ab78f;
L_008ab782:; BB(0x008ab782);
    /* 008ab782: push 0x99e3b8 */ { u32 v = 0x99e3b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab787: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab788: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab78du); f_008a3f0e();
    /* 008ab78d: jmp 0x8ab74f */ goto L_008ab74f;
L_008ab78f:; BB(0x008ab78f);
    /* 008ab78f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ab792: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab794: je 0x8ab751 */ if (fZ) goto L_008ab751;
L_008ab796:; BB(0x008ab796);
    /* 008ab796: test byte ptr [eax + 9], 8 */ {  u32 a = R8((u32)(r_eax+0x9u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab79a: je 0x8ab751 */ if (fZ) goto L_008ab751;
L_008ab79c:; BB(0x008ab79c);
    /* 008ab79c: push 0x99e3a0 */ { u32 v = 0x99e3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab7a1: jmp 0x8ab75c */ goto L_008ab75c;
L_008ab7a3:; BB(0x008ab7a3);
    /* 008ab7a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab7a5: lea eax, [ebp + 0xb] */ r_eax = (u32)(r_ebp+0xbu);
    /* 008ab7a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab7a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab7aa: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8ab7afu); f_008aa965();
    /* 008ab7af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab7b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab7b2: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab7b7u); f_008ab235();
    /* 008ab7b7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab7ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ab7bc: jne 0x8ab822 */ if (!fZ) goto L_008ab822;
L_008ab7be:; BB(0x008ab7be);
    /* 008ab7be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab7bf: movzx edi, byte ptr [ebp + 0xb] */ r_edi = (u32)R8((u32)(r_ebp+0xbu));
    /* 008ab7c3: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ab7c6: jl 0x8ab7d7 */ if ((fS!=fO)) goto L_008ab7d7;
L_008ab7c8:; BB(0x008ab7c8);
    /* 008ab7c8: push 0x99e38c */ { u32 v = 0x99e38cu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab7cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab7ce: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab7d3u); f_008a3f0e();
    /* 008ab7d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab7d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab7d5: jmp 0x8ab821 */ goto L_008ab821;
L_008ab7d7:; BB(0x008ab7d7);
    /* 008ab7d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ab7da: test byte ptr [eax + 8], 1 */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab7de: je 0x8ab814 */ if (fZ) goto L_008ab814;
L_008ab7e0:; BB(0x008ab7e0);
    /* 008ab7e0: fld dword ptr [esi + 0x130] */ FPUSH(R_F32((u32)(r_esi+0x130u)));
    /* 008ab7e6: fmul dword ptr [0x99e388] */ ST(0) = ST(0) * R_F32((u32)(0x99e388u));
    /* 008ab7ec: fadd qword ptr [0x99ba38] */ ST(0) = ST(0) + R_F64((u32)(0x99ba38u));
    /* 008ab7f2: fsub qword ptr [0x99e300] */ ST(0) = ST(0) - R_F64((u32)(0x99e300u));
    /* 008ab7f8: fabs  */ ST(0) = fabsl(ST(0));
    /* 008ab7fa: fcomp qword ptr [0x99e2f8] */ fx_compare(ST(0), R_F64((u32)(0x99e2f8u))); FPOP();
    /* 008ab800: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008ab802: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab805: jne 0x8ab814 */ if (!fZ) goto L_008ab814;
L_008ab807:; BB(0x008ab807);
    /* 008ab807: push 0x99e2c0 */ { u32 v = 0x99e2c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab80c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab80d: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab812u); f_008a3f0e();
    /* 008ab812: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab813: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab814:; BB(0x008ab814);
    /* 008ab814: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab815: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab818: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab819: call 0x8a61d8 */ r_esp -= 4; W32(r_esp, 0x8ab81eu); f_008a61d8();
    /* 008ab81e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008ab821:; BB(0x008ab821);
    /* 008ab821: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008ab822:; BB(0x008ab822);
    /* 008ab822: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ab823: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ab824: ret  */ FN_RET(0x008ab736); r_esp += 4; return;
}

void f_008ab825(void) /* sub_8AB825 */
{
    FN_ENTER(0x008ab825);
    /* 008ab825: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ab826: mov ebp, esp */ r_ebp = r_esp;
    /* 008ab828: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab829: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab82a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab82b: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008ab82e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab82f: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008ab832: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 008ab835: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab837: jne 0x8ab880 */ if (!fZ) goto L_008ab880;
L_008ab839:; BB(0x008ab839);
    /* 008ab839: push 0x99e4cc */ { u32 v = 0x99e4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab83e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab83f: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8ab844u); f_008a3ef0();
    /* 008ab844: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab845: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab846:; BB(0x008ab846);
    /* 008ab846: mov al, byte ptr [esi + 0x116] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x116u))) & 0xffu);
    /* 008ab84c: cmp al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008ab84e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab84f: jne 0x8ab8f5 */ if (!fZ) goto L_008ab8f5;
L_008ab855:; BB(0x008ab855);
    /* 008ab855: test byte ptr [esi + 0x58], 2 */ {  u32 a = R8((u32)(r_esi+0x58u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab859: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008ab85c: jne 0x8ab8b1 */ if (!fZ) goto L_008ab8b1;
L_008ab85e:; BB(0x008ab85e);
    /* 008ab85e: push 0x99e4b0 */ { u32 v = 0x99e4b0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab863: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab864: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab869u); f_008a3f0e();
    /* 008ab869: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab86a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ab86b:; BB(0x008ab86b);
    /* 008ab86b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab86d: jne 0x8ab8cd */ if (!fZ) goto L_008ab8cd;
L_008ab86f:; BB(0x008ab86f);
    /* 008ab86f: push 0x99e498 */ { u32 v = 0x99e498u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab874: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab875: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab87au); f_008a3f0e();
    /* 008ab87a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab87b: jmp 0x8ab9ce */ goto L_008ab9ce;
L_008ab880:; BB(0x008ab880);
    /* 008ab880: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab882: je 0x8ab88b */ if (fZ) goto L_008ab88b;
L_008ab884:; BB(0x008ab884);
    /* 008ab884: push 0x99e480 */ { u32 v = 0x99e480u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab889: jmp 0x8ab89a */ goto L_008ab89a;
L_008ab88b:; BB(0x008ab88b);
    /* 008ab88b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab88d: je 0x8ab846 */ if (fZ) goto L_008ab846;
L_008ab88f:; BB(0x008ab88f);
    /* 008ab88f: test byte ptr [ebx + 8], 0x10 */ {  u32 a = R8((u32)(r_ebx+0x8u)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab893: je 0x8ab846 */ if (fZ) goto L_008ab846;
L_008ab895:; BB(0x008ab895);
    /* 008ab895: push 0x99e468 */ { u32 v = 0x99e468u; r_esp -= 4; W32(r_esp, v); }
L_008ab89a:; BB(0x008ab89a);
    /* 008ab89a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab89b: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab8a0u); f_008a3f0e();
    /* 008ab8a0: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab8a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab8a4: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab8a9u); f_008ab235();
    /* 008ab8a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ab8ac: jmp 0x8ab9d8 */ goto L_008ab9d8;
L_008ab8b1:; BB(0x008ab8b1);
    /* 008ab8b1: movzx eax, word ptr [esi + 0x108] */ r_eax = (u32)R16((u32)(r_esi+0x108u));
    /* 008ab8b8: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008ab8ba: jbe 0x8ab86b */ if ((fC||fZ)) goto L_008ab86b;
L_008ab8bc:; BB(0x008ab8bc);
    /* 008ab8bc: push 0x99e44c */ { u32 v = 0x99e44cu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab8c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab8c2: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab8c7u); f_008a3f0e();
    /* 008ab8c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab8c8: jmp 0x8ab9ce */ goto L_008ab9ce;
L_008ab8cd:; BB(0x008ab8cd);
    /* 008ab8cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab8ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab8cf: call 0x8aa89f */ r_esp -= 4; W32(r_esp, 0x8ab8d4u); f_008aa89f();
    /* 008ab8d4: or byte ptr [esi + 0x5d], 0x20 */ { u32 ad = (u32)(r_esi+0x5du);  u32 a = R8(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008ab8d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab8d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab8da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab8db: mov dword ptr [esi + 0x15c], eax */ W32((u32)(r_esi+0x15cu), r_eax);
    /* 008ab8e1: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8ab8e6u); f_008aa965();
    /* 008ab8e6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab8e9: mov word ptr [esi + 0x10a], di */ W16((u32)(r_esi+0x10au), (u16)r_edi);
    /* 008ab8f0: jmp 0x8ab991 */ goto L_008ab991;
L_008ab8f5:; BB(0x008ab8f5);
    /* 008ab8f5: cmp al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008ab8f7: jne 0x8ab952 */ if (!fZ) goto L_008ab952;
L_008ab8f9:; BB(0x008ab8f9);
    /* 008ab8f9: cmp dword ptr [ebp + 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab8fd: jne 0x8ab95c */ if (!fZ) goto L_008ab95c;
L_008ab8ff:; BB(0x008ab8ff);
    /* 008ab8ff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab901: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008ab904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab905: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab906: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8ab90bu); f_008aa965();
    /* 008ab90b: movzx cx, byte ptr [ebp - 7] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff9u))) & 0xffffu);
    /* 008ab910: movzx ax, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 008ab915: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab918: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ab91b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab91d: movzx cx, byte ptr [ebp - 5] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffbu))) & 0xffffu);
    /* 008ab922: mov word ptr [esi + 0x162], ax */ W16((u32)(r_esi+0x162u), (u16)r_eax);
    /* 008ab929: movzx ax, byte ptr [ebp - 6] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffau))) & 0xffffu);
    /* 008ab92e: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ab931: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab933: movzx cx, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffdu))) & 0xffffu);
    /* 008ab938: mov word ptr [esi + 0x164], ax */ W16((u32)(r_esi+0x164u), (u16)r_eax);
    /* 008ab93f: movzx ax, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 008ab944: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ab947: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab949: mov word ptr [esi + 0x166], ax */ W16((u32)(r_esi+0x166u), (u16)r_eax);
    /* 008ab950: jmp 0x8ab988 */ goto L_008ab988;
L_008ab952:; BB(0x008ab952);
    /* 008ab952: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab954: jne 0x8ab9c0 */ if (!fZ) goto L_008ab9c0;
L_008ab956:; BB(0x008ab956);
    /* 008ab956: cmp dword ptr [ebp + 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ab95a: je 0x8ab963 */ if (fZ) goto L_008ab963;
L_008ab95c:; BB(0x008ab95c);
    /* 008ab95c: push 0x99e44c */ { u32 v = 0x99e44cu; r_esp -= 4; W32(r_esp, v); }
    /* 008ab961: jmp 0x8ab9c5 */ goto L_008ab9c5;
L_008ab963:; BB(0x008ab963);
    /* 008ab963: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab965: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008ab968: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab969: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab96a: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8ab96fu); f_008aa965();
    /* 008ab96f: movzx ax, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 008ab974: movzx cx, byte ptr [ebp - 7] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffff9u))) & 0xffffu);
    /* 008ab979: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ab97c: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008ab97f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008ab981: mov word ptr [esi + 0x168], ax */ W16((u32)(r_esi+0x168u), (u16)r_eax);
L_008ab988:; BB(0x008ab988);
    /* 008ab988: mov word ptr [esi + 0x10a], 1 */ W16((u32)(r_esi+0x10au), 0x1u);
L_008ab991:; BB(0x008ab991);
    /* 008ab991: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab993: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab994: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab999u); f_008ab235();
    /* 008ab999: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ab99b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab99c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab99d: jne 0x8ab9d7 */ if (!fZ) goto L_008ab9d7;
L_008ab99f:; BB(0x008ab99f);
    /* 008ab99f: lea eax, [esi + 0x160] */ r_eax = (u32)(r_esi+0x160u);
    /* 008ab9a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9a6: movzx eax, word ptr [esi + 0x10a] */ r_eax = (u32)R16((u32)(r_esi+0x10au));
    /* 008ab9ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9ae: push dword ptr [esi + 0x15c] */ { u32 v = R32((u32)(r_esi+0x15cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ab9b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9b6: call 0x8a6211 */ r_esp -= 4; W32(r_esp, 0x8ab9bbu); f_008a6211();
    /* 008ab9bb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ab9be: jmp 0x8ab9d7 */ goto L_008ab9d7;
L_008ab9c0:; BB(0x008ab9c0);
    /* 008ab9c0: push 0x99e420 */ { u32 v = 0x99e420u; r_esp -= 4; W32(r_esp, v); }
L_008ab9c5:; BB(0x008ab9c5);
    /* 008ab9c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9c6: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8ab9cbu); f_008a3f0e();
    /* 008ab9cb: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
L_008ab9ce:; BB(0x008ab9ce);
    /* 008ab9ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9cf: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8ab9d4u); f_008ab235();
    /* 008ab9d4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008ab9d7:; BB(0x008ab9d7);
    /* 008ab9d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008ab9d8:; BB(0x008ab9d8);
    /* 008ab9d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ab9d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ab9da: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008ab9db: ret  */ FN_RET(0x008ab825); r_esp += 4; return;
}

void f_008ab9dc(void) /* sub_8AB9DC */
{
    FN_ENTER(0x008ab9dc);
    /* 008ab9dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9dd: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008ab9e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9e2: lea edi, [esi + 0x10c] */ r_edi = (u32)(r_esi+0x10cu);
    /* 008ab9e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9ea: call 0x8aa9dd */ r_esp -= 4; W32(r_esp, 0x8ab9efu); f_008aa9dd();
    /* 008ab9ef: test byte ptr [edi], 0x20 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008ab9f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab9f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ab9f4: jne 0x8aba0a */ if (!fZ) goto L_008aba0a;
L_008ab9f6:; BB(0x008ab9f6);
    /* 008ab9f6: push 0x99e4e8 */ { u32 v = 0x99e4e8u; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ab9fc: call 0x8a3f23 */ r_esp -= 4; W32(r_esp, 0x8aba01u); f_008a3f23();
    /* 008aba01: cmp dword ptr [esp + 0x18], 0 */ {  u32 a = R32((u32)(r_esp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aba06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aba07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aba08: je 0x8aba23 */ if (fZ) goto L_008aba23;
L_008aba0a:; BB(0x008aba0a);
    /* 008aba0a: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 008aba0d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008aba0f: je 0x8aba17 */ if (fZ) goto L_008aba17;
L_008aba11:; BB(0x008aba11);
    /* 008aba11: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008aba14: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
L_008aba17:; BB(0x008aba17);
    /* 008aba17: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aba1b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aba1c: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8aba21u); f_008ab235();
    /* 008aba21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aba22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008aba23:; BB(0x008aba23);
    /* 008aba23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aba24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aba25: ret  */ FN_RET(0x008ab9dc); r_esp += 4; return;
}

void f_008aba26(void) /* sub_8ABA26 */
{
    FN_ENTER(0x008aba26);
    /* 008aba26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008aba27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aba28: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008aba2c: lea eax, [esi + 0xd4] */ r_eax = (u32)(r_esi+0xd4u);
    /* 008aba32: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008aba34: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008aba36: cmp ecx, dword ptr [esi + 0xc0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008aba3c: jb 0x8abc47 */ if (fC) goto L_008abc47;
L_008aba42:; BB(0x008aba42);
    /* 008aba42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aba43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aba44: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008aba46: cmp byte ptr [esi + 0x113], 0 */ {  u32 a = R8((u32)(r_esi+0x113u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008aba4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008aba4e: je 0x8abaf3 */ if (fZ) goto L_008abaf3;
L_008aba54:; BB(0x008aba54);
    /* 008aba54: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 008aba56: mov eax, dword ptr [esi + 0xc8] */ r_eax = R32((u32)(r_esi+0xc8u));
    /* 008aba5c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aba5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008aba5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aba5f: push dword ptr [esi + 0xd8] */ { u32 v = R32((u32)(r_esi+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008aba65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008aba66: call 0x8aa911 */ r_esp -= 4; W32(r_esp, 0x8aba6bu); f_008aa911();
    /* 008aba6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008aba6e:; BB(0x008aba6e);
    /* 008aba6e: inc byte ptr [esi + 0x114] */ { u32 ad = (u32)(r_esi+0x114u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008aba74: mov bl, byte ptr [esi + 0x114] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi+0x114u))) & 0xffu);
    /* 008aba7a: cmp bl, 7 */ {  u32 a = (u8)r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008aba7d: jae 0x8abaf3 */ if (!fC) goto L_008abaf3;
L_008aba7f:; BB(0x008aba7f);
    /* 008aba7f: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 008aba85: movzx ecx, bl */ r_ecx = (u32)(u8)r_ebx;
    /* 008aba88: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aba8b: sub eax, dword ptr [ecx + 0x99e030] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x99e030u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008aba91: mov edi, dword ptr [ecx + 0x99e04c] */ r_edi = R32((u32)(r_ecx+0x99e04cu));
    /* 008aba97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008aba99: lea eax, [eax + edi - 1] */ r_eax = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008aba9d: div edi */ { u32 d = r_edi; if (!d) UNSUP(0x008aba9d, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008aba9d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008aba9f: movzx edx, byte ptr [esi + 0x119] */ r_edx = (u32)R8((u32)(r_esi+0x119u));
    /* 008abaa6: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008abaa9: add edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abaac: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008abaaf: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abab0: test byte ptr [esi + 0x60], 2 */ {  u32 a = R8((u32)(r_esi+0x60u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008abab4: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
    /* 008ababa: mov dword ptr [esi + 0xcc], edx */ W32((u32)(r_esi+0xccu), r_edx);
    /* 008abac0: jne 0x8abaea */ if (!fZ) goto L_008abaea;
L_008abac2:; BB(0x008abac2);
    /* 008abac2: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 008abac8: sub eax, dword ptr [ecx + 0x99e068] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x99e068u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008abace: mov edi, dword ptr [ecx + 0x99e084] */ r_edi = R32((u32)(r_ecx+0x99e084u));
    /* 008abad4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008abad6: lea eax, [eax + edi - 1] */ r_eax = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008abada: div edi */ { u32 d = r_edi; if (!d) UNSUP(0x008abada, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008abada, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008abadc: cmp dword ptr [esi + 0xd0], ebp */ {  u32 a = R32((u32)(r_esi+0xd0u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abae2: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
    /* 008abae8: je 0x8aba6e */ if (fZ) goto L_008aba6e;
L_008abaea:; BB(0x008abaea);
    /* 008abaea: cmp bl, 7 */ {  u32 a = (u8)r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008abaed: jb 0x8abc44 */ if (fC) goto L_008abc44;
L_008abaf3:; BB(0x008abaf3);
    /* 008abaf3: test byte ptr [esi + 0x5c], 0x20 */ {  u32 a = R8((u32)(r_esi+0x5cu)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008abaf7: jne 0x8abc1c */ if (!fZ) goto L_008abc1c;
L_008abafd:; BB(0x008abafd);
    /* 008abafd: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 008abb01: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 008abb04: mov dword ptr [esi + 0x74], 1 */ W32((u32)(r_esi+0x74u), 0x1u);
    /* 008abb0b: lea ebx, [esi + 0x64] */ r_ebx = (u32)(r_esi+0x64u);
L_008abb0e:; BB(0x008abb0e);
    /* 008abb0e: cmp dword ptr [esi + 0x68], ebp */ {  u32 a = R32((u32)(r_esi+0x68u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abb11: jne 0x8abbaf */ if (!fZ) goto L_008abbaf;
L_008abb17:; BB(0x008abb17);
    /* 008abb17: cmp dword ptr [esi + 0xfc], ebp */ {  u32 a = R32((u32)(r_esi+0xfcu)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abb1d: jne 0x8abb7b */ if (!fZ) goto L_008abb7b;
L_008abb1f:; BB(0x008abb1f);
    /* 008abb1f: lea edi, [esi + 0x10c] */ r_edi = (u32)(r_esi+0x10cu);
L_008abb25:; BB(0x008abb25);
    /* 008abb25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008abb26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abb27: call 0x8ab235 */ r_esp -= 4; W32(r_esp, 0x8abb2cu); f_008ab235();
    /* 008abb2c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008abb2e: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008abb32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008abb33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abb34: call 0x8a6258 */ r_esp -= 4; W32(r_esp, 0x8abb39u); f_008a6258();
    /* 008abb39: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 008abb3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008abb3e: call 0x8aa942 */ r_esp -= 4; W32(r_esp, 0x8abb43u); f_008aa942();
    /* 008abb43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abb44: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 008abb4a: call 0x8a635f */ r_esp -= 4; W32(r_esp, 0x8abb4fu); f_008a635f();
    /* 008abb4f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008abb51: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008abb52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abb53: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8abb58u); f_008aa965();
    /* 008abb58: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008abb5a: mov eax, 0x99e0a0 */ r_eax = 0x99e0a0u;
    /* 008abb5f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008abb62: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abb64: je 0x8abb73 */ if (fZ) goto L_008abb73;
L_008abb66:; BB(0x008abb66);
    /* 008abb66: push 0x99d8e4 */ { u32 v = 0x99d8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008abb6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abb6c: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8abb71u); f_008a3ef0();
    /* 008abb71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008abb72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008abb73:; BB(0x008abb73);
    /* 008abb73: cmp dword ptr [esi + 0xfc], ebp */ {  u32 a = R32((u32)(r_esi+0xfcu)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abb79: je 0x8abb25 */ if (fZ) goto L_008abb25;
L_008abb7b:; BB(0x008abb7b);
    /* 008abb7b: mov eax, dword ptr [esi + 0xa0] */ r_eax = R32((u32)(r_esi+0xa0u));
    /* 008abb81: mov edx, dword ptr [esi + 0xfc] */ r_edx = R32((u32)(r_esi+0xfcu));
    /* 008abb87: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008abb89: mov ecx, dword ptr [esi + 0x9c] */ r_ecx = R32((u32)(r_esi+0x9cu));
    /* 008abb8f: mov dword ptr [esi + 0x68], eax */ W32((u32)(r_esi+0x68u), r_eax);
    /* 008abb92: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 008abb94: jbe 0x8abb99 */ if ((fC||fZ)) goto L_008abb99;
L_008abb96:; BB(0x008abb96);
    /* 008abb96: mov dword ptr [esi + 0x68], edx */ W32((u32)(r_esi+0x68u), r_edx);
L_008abb99:; BB(0x008abb99);
    /* 008abb99: push dword ptr [esi + 0x68] */ { u32 v = R32((u32)(r_esi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 008abb9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008abb9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abb9e: call 0x8aa965 */ r_esp -= 4; W32(r_esp, 0x8abba3u); f_008aa965();
    /* 008abba3: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 008abba6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008abba9: sub dword ptr [esi + 0xfc], eax */ { u32 ad = (u32)(r_esi+0xfcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008abbaf:; BB(0x008abbaf);
    /* 008abbaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008abbb1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008abbb2: call 0x8aa4e9 */ r_esp -= 4; W32(r_esp, 0x8abbb7u); f_008aa4e9();
    /* 008abbb7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abbba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008abbbb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008abbbc: je 0x8abbf2 */ if (fZ) goto L_008abbf2;
L_008abbbe:; BB(0x008abbbe);
    /* 008abbbe: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abbc0: je 0x8abbd7 */ if (fZ) goto L_008abbd7;
L_008abbc2:; BB(0x008abbc2);
    /* 008abbc2: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 008abbc5: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abbc7: jne 0x8abbce */ if (!fZ) goto L_008abbce;
L_008abbc9:; BB(0x008abbc9);
    /* 008abbc9: mov eax, 0x99e518 */ r_eax = 0x99e518u;
L_008abbce:; BB(0x008abbce);
    /* 008abbce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008abbcf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abbd0: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8abbd5u); f_008a3ef0();
    /* 008abbd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008abbd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008abbd7:; BB(0x008abbd7);
    /* 008abbd7: cmp dword ptr [esi + 0x74], ebp */ {  u32 a = R32((u32)(r_esi+0x74u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abbda: jne 0x8abb0e */ if (!fZ) goto L_008abb0e;
L_008abbe0:; BB(0x008abbe0);
    /* 008abbe0: push 0x99d8b8 */ { u32 v = 0x99d8b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008abbe5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abbe6: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8abbebu); f_008a3ef0();
    /* 008abbeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008abbec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008abbed: jmp 0x8abb0e */ goto L_008abb0e;
L_008abbf2:; BB(0x008abbf2);
    /* 008abbf2: cmp dword ptr [esi + 0x74], ebp */ {  u32 a = R32((u32)(r_esi+0x74u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abbf5: je 0x8abc04 */ if (fZ) goto L_008abc04;
L_008abbf7:; BB(0x008abbf7);
    /* 008abbf7: cmp dword ptr [esi + 0x68], ebp */ {  u32 a = R32((u32)(r_esi+0x68u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abbfa: jne 0x8abc04 */ if (!fZ) goto L_008abc04;
L_008abbfc:; BB(0x008abbfc);
    /* 008abbfc: cmp dword ptr [esi + 0xfc], ebp */ {  u32 a = R32((u32)(r_esi+0xfcu)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abc02: je 0x8abc11 */ if (fZ) goto L_008abc11;
L_008abc04:; BB(0x008abc04);
    /* 008abc04: push 0x99d8b8 */ { u32 v = 0x99d8b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008abc09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abc0a: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8abc0fu); f_008a3ef0();
    /* 008abc0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008abc10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008abc11:; BB(0x008abc11);
    /* 008abc11: or dword ptr [esi + 0x58], 8 */ { u32 ad = (u32)(r_esi+0x58u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008abc15: or dword ptr [esi + 0x5c], 0x20 */ { u32 ad = (u32)(r_esi+0x5cu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008abc19: mov dword ptr [esi + 0x74], ebp */ W32((u32)(r_esi+0x74u), r_ebp);
L_008abc1c:; BB(0x008abc1c);
    /* 008abc1c: cmp dword ptr [esi + 0xfc], ebp */ {  u32 a = R32((u32)(r_esi+0xfcu)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abc22: jne 0x8abc29 */ if (!fZ) goto L_008abc29;
L_008abc24:; BB(0x008abc24);
    /* 008abc24: cmp dword ptr [esi + 0x68], ebp */ {  u32 a = R32((u32)(r_esi+0x68u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abc27: je 0x8abc36 */ if (fZ) goto L_008abc36;
L_008abc29:; BB(0x008abc29);
    /* 008abc29: push 0x99e500 */ { u32 v = 0x99e500u; r_esp -= 4; W32(r_esp, v); }
    /* 008abc2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abc2f: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8abc34u); f_008a3ef0();
    /* 008abc34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008abc35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008abc36:; BB(0x008abc36);
    /* 008abc36: lea eax, [esi + 0x64] */ r_eax = (u32)(r_esi+0x64u);
    /* 008abc39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008abc3a: call 0x8aa370 */ r_esp -= 4; W32(r_esp, 0x8abc3fu); f_008aa370();
    /* 008abc3f: or dword ptr [esi + 0x58], 8 */ { u32 ad = (u32)(r_esi+0x58u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008abc43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008abc44:; BB(0x008abc44);
    /* 008abc44: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008abc45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008abc46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008abc47:; BB(0x008abc47);
    /* 008abc47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008abc48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008abc49: ret  */ FN_RET(0x008aba26); r_esp += 4; return;
}

void f_008abc4a(void) /* sub_8ABC4A */
{
    FN_ENTER(0x008abc4a);
    /* 008abc4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008abc4b: mov ebp, esp */ r_ebp = r_esp;
    /* 008abc4d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008abc50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008abc52: jne 0x8abc58 */ if (!fZ) goto L_008abc58;
L_008abc54:; BB(0x008abc54);
    /* 008abc54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008abc56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008abc57: ret  */ FN_RET(0x008abc4a); r_esp += 4; return;
L_008abc58:; BB(0x008abc58);
    /* 008abc58: cmp dword ptr [ebp + 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008abc5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008abc5d: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008abc60: not esi */ r_esi = ~r_esi;
    /* 008abc62: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 008abc67: jb 0x8abd2c */ if (fC) goto L_008abd2c;
L_008abc6d:; BB(0x008abc6d);
    /* 008abc6d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008abc70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008abc71: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008abc74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008abc75:; BB(0x008abc75);
    /* 008abc75: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abc77: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008abc79: mov edi, esi */ r_edi = r_esi;
    /* 008abc7b: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008abc7e: sub dword ptr [ebp + 0x10], 8 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008abc82: xor ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abc84: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008abc86: mov esi, dword ptr [ebx*4 + 0x99e530] */ r_esi = R32((u32)(r_ebx*4+0x99e530u));
    /* 008abc8d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abc8f: xor esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008abc91: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abc92: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008abc94: xor ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abc96: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008abc98: mov edi, dword ptr [ebx*4 + 0x99e530] */ r_edi = R32((u32)(r_ebx*4+0x99e530u));
    /* 008abc9f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abca1: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008abca4: xor edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008abca6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abca7: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008abca9: xor ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcab: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcad: mov esi, dword ptr [ebx*4 + 0x99e530] */ r_esi = R32((u32)(r_ebx*4+0x99e530u));
    /* 008abcb4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcb6: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008abcb9: xor esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008abcbb: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abcbc: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008abcbe: xor ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcc0: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcc2: mov edi, dword ptr [ebx*4 + 0x99e530] */ r_edi = R32((u32)(r_ebx*4+0x99e530u));
    /* 008abcc9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abccb: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008abcce: xor edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008abcd0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abcd1: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008abcd3: xor ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcd5: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcd7: mov esi, dword ptr [ebx*4 + 0x99e530] */ r_esi = R32((u32)(r_ebx*4+0x99e530u));
    /* 008abcde: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abce0: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008abce3: xor esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008abce5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abce6: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008abce8: xor ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcea: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcec: mov edi, dword ptr [ebx*4 + 0x99e530] */ r_edi = R32((u32)(r_ebx*4+0x99e530u));
    /* 008abcf3: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008abcf6: xor edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008abcf8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcfa: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abcfb: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008abcfd: xor ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abcff: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008abd01: mov esi, dword ptr [ebx*4 + 0x99e530] */ r_esi = R32((u32)(r_ebx*4+0x99e530u));
    /* 008abd08: shr edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008abd0b: xor esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008abd0d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abd0f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abd10: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008abd12: xor ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008abd14: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008abd16: mov edi, dword ptr [ebx*4 + 0x99e530] */ r_edi = R32((u32)(r_ebx*4+0x99e530u));
    /* 008abd1d: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008abd20: xor esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008abd22: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abd23: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008abd24: jne 0x8abc75 */ if (!fZ) goto L_008abc75;
L_008abd2a:; BB(0x008abd2a);
    /* 008abd2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008abd2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008abd2c:; BB(0x008abd2c);
    /* 008abd2c: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008abd30: je 0x8abd4c */ if (fZ) goto L_008abd4c;
L_008abd32:; BB(0x008abd32);
    /* 008abd32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008abd34: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008abd36: xor eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008abd38: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008abd3a: mov eax, dword ptr [eax*4 + 0x99e530] */ r_eax = R32((u32)(r_eax*4+0x99e530u));
    /* 008abd41: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008abd44: xor esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fC = 0; }
    /* 008abd46: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008abd47: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008abd4a: jne 0x8abd32 */ if (!fZ) goto L_008abd32;
L_008abd4c:; BB(0x008abd4c);
    /* 008abd4c: mov eax, esi */ r_eax = r_esi;
    /* 008abd4e: not eax */ r_eax = ~r_eax;
    /* 008abd50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008abd51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008abd52: ret  */ FN_RET(0x008abc4a); r_esp += 4; return;
}

