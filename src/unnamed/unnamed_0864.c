#include "protos.h"

void f_00864057(void)
{
    FN_ENTER(0x00864057);
    /* 00864057: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086405a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086405c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0086405e: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x864063u); f_0085e4c5();
    /* 00864063: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864064: ret  */ FN_RET(0x00864057); r_esp += 4; return;
}

void f_0086405c(void)
{
    FN_ENTER(0x0086405c);
    /* 0086405c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0086405e: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x864063u); f_0085e4c5();
    /* 00864063: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864064: ret  */ FN_RET(0x0086405c); r_esp += 4; return;
}

void f_008640e9(void) /* _cvtdate */
{
    FN_ENTER(0x008640e9);
    /* 008640e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008640ea: mov ebp, esp */ r_ebp = r_esp;
    /* 008640ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008640ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008640ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008640ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008640f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008640f1: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008640f4: mov esi, eax */ r_esi = r_eax;
    /* 008640f6: mov eax, edi */ r_eax = r_edi;
    /* 008640f8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008640fa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008640fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008640fc: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008640fc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008640fc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008640fe: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864102: jne 0x8641f1 */ if (!fZ) goto L_008641f1;
L_00864108:; BB(0x00864108);
    /* 00864108: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086410a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0086410d: jne 0x86411b */ if (!fZ) goto L_0086411b;
L_0086410f:; BB(0x0086410f);
    /* 0086410f: mov eax, edi */ r_eax = r_edi;
    /* 00864111: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00864113: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00864114: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00864115: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00864115, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00864115, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00864117: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864119: jne 0x86413a */ if (!fZ) goto L_0086413a;
L_0086411b:; BB(0x0086411b);
    /* 0086411b: lea eax, [edi + 0x76c] */ r_eax = (u32)(r_edi+0x76cu);
    /* 00864121: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00864122: mov ebx, 0x190 */ r_ebx = 0x190u;
    /* 00864127: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00864127, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00864127, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00864129: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086412b: je 0x86413a */ if (fZ) goto L_0086413a;
L_0086412d:; BB(0x0086412d);
    /* 0086412d: mov eax, esi */ r_eax = r_esi;
    /* 0086412f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00864132: mov esi, dword ptr [eax + 0xa24298] */ r_esi = R32((u32)(r_eax+0xa24298u));
    /* 00864138: jmp 0x864145 */ goto L_00864145;
L_0086413a:; BB(0x0086413a);
    /* 0086413a: mov eax, esi */ r_eax = r_esi;
    /* 0086413c: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086413f: mov esi, dword ptr [eax + 0xa24264] */ r_esi = R32((u32)(r_eax+0xa24264u));
L_00864145:; BB(0x00864145);
    /* 00864145: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00864148: lea eax, [edi + 0x12b] */ r_eax = (u32)(r_edi+0x12bu);
    /* 0086414e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0086414f: lea ebx, [edi - 1] */ r_ebx = (u32)(r_edi+0xffffffffu);
    /* 00864152: mov edi, 0x190 */ r_edi = 0x190u;
    /* 00864157: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00864157, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00864157, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00864159: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0086415b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086415c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086415d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086415f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00864162: mov eax, ebx */ r_eax = r_ebx;
    /* 00864164: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00864165: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00864165, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00864165, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00864167: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086416a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086416b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0086416d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086416f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00864172: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00864173: mov ebx, edx */ r_ebx = r_edx;
    /* 00864175: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00864176: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00864176, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00864176, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00864178: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0086417b: mov edx, edi */ r_edx = r_edi;
    /* 0086417d: imul edx, edx, 0x16d */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16du; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00864183: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864185: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864187: lea eax, [edx + eax - 0x63db] */ r_eax = (u32)(r_edx+r_eax+0xffff9c25u);
    /* 0086418e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0086418f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00864190: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00864190, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00864190, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00864192: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00864195: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00864198: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086419a: add eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086419d: cmp edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008641a0: jg 0x8641a8 */ if ((!fZ&&fS==fO)) goto L_008641a8;
L_008641a2:; BB(0x008641a2);
    /* 008641a2: lea esi, [esi + eax - 7] */ r_esi = (u32)(r_esi+r_eax+0xfffffff9u);
    /* 008641a6: jmp 0x8641aa */ goto L_008641aa;
L_008641a8:; BB(0x008641a8);
    /* 008641a8: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008641aa:; BB(0x008641aa);
    /* 008641aa: cmp dword ptr [ebp + 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008641ae: jne 0x864226 */ if (!fZ) goto L_00864226;
L_008641b0:; BB(0x008641b0);
    /* 008641b0: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008641b4: jne 0x8641c2 */ if (!fZ) goto L_008641c2;
L_008641b6:; BB(0x008641b6);
    /* 008641b6: mov eax, edi */ r_eax = r_edi;
    /* 008641b8: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 008641ba: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008641bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008641bc: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008641bc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008641bc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008641be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008641c0: jne 0x8641df */ if (!fZ) goto L_008641df;
L_008641c2:; BB(0x008641c2);
    /* 008641c2: lea eax, [edi + 0x76c] */ r_eax = (u32)(r_edi+0x76cu);
    /* 008641c8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008641c9: mov ebx, 0x190 */ r_ebx = 0x190u;
    /* 008641ce: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008641ce, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008641ce, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008641d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008641d2: je 0x8641df */ if (fZ) goto L_008641df;
L_008641d4:; BB(0x008641d4);
    /* 008641d4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008641d7: mov eax, dword ptr [eax + 0xa2429c] */ r_eax = R32((u32)(r_eax+0xa2429cu));
    /* 008641dd: jmp 0x8641e8 */ goto L_008641e8;
L_008641df:; BB(0x008641df);
    /* 008641df: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008641e2: mov eax, dword ptr [eax + 0xa24268] */ r_eax = R32((u32)(r_eax+0xa24268u));
L_008641e8:; BB(0x008641e8);
    /* 008641e8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008641ea: jle 0x864226 */ if ((fZ||fS!=fO)) goto L_00864226;
L_008641ec:; BB(0x008641ec);
    /* 008641ec: sub esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008641ef: jmp 0x864226 */ goto L_00864226;
L_008641f1:; BB(0x008641f1);
    /* 008641f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008641f3: jne 0x864201 */ if (!fZ) goto L_00864201;
L_008641f5:; BB(0x008641f5);
    /* 008641f5: mov eax, edi */ r_eax = r_edi;
    /* 008641f7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 008641f9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008641fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008641fb: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008641fb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008641fb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008641fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008641ff: jne 0x86421c */ if (!fZ) goto L_0086421c;
L_00864201:; BB(0x00864201);
    /* 00864201: lea eax, [edi + 0x76c] */ r_eax = (u32)(r_edi+0x76cu);
    /* 00864207: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00864208: mov ebx, 0x190 */ r_ebx = 0x190u;
    /* 0086420d: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0086420d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0086420d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0086420f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864211: je 0x86421c */ if (fZ) goto L_0086421c;
L_00864213:; BB(0x00864213);
    /* 00864213: mov esi, dword ptr [esi*4 + 0xa24298] */ r_esi = R32((u32)(r_esi*4+0xa24298u));
    /* 0086421a: jmp 0x864223 */ goto L_00864223;
L_0086421c:; BB(0x0086421c);
    /* 0086421c: mov esi, dword ptr [esi*4 + 0xa24264] */ r_esi = R32((u32)(r_esi*4+0xa24264u));
L_00864223:; BB(0x00864223);
    /* 00864223: add esi, dword ptr [ebp + 0x1c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00864226:; BB(0x00864226);
    /* 00864226: imul ecx, ecx, 0x3c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00864229: add ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086422c: imul ecx, ecx, 0x3c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0086422f: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864233: jne 0x864255 */ if (!fZ) goto L_00864255;
L_00864235:; BB(0x00864235);
    /* 00864235: add ecx, dword ptr [ebp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00864238: mov dword ptr [0xa2410c], esi */ W32((u32)(0xa2410cu), r_esi);
    /* 0086423e: imul ecx, ecx, 0x3e8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3e8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00864244: add ecx, dword ptr [ebp + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00864247: mov dword ptr [0xa24108], edi */ W32((u32)(0xa24108u), r_edi);
    /* 0086424d: mov dword ptr [0xa24110], ecx */ W32((u32)(0xa24110u), r_ecx);
    /* 00864253: jmp 0x86429c */ goto L_0086429c;
L_00864255:; BB(0x00864255);
    /* 00864255: add ecx, dword ptr [0xa24078] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa24078u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086425b: mov dword ptr [0xa24118], esi */ W32((u32)(0xa24118u), r_esi);
    /* 00864261: add ecx, dword ptr [ebp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00864264: imul ecx, ecx, 0x3e8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3e8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0086426a: add ecx, dword ptr [ebp + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0086426d: mov dword ptr [0xa2411c], ecx */ W32((u32)(0xa2411cu), r_ecx);
    /* 00864273: jns 0x86427e */ if (!fS) goto L_0086427e;
L_00864275:; BB(0x00864275);
    /* 00864275: add ecx, 0x5265c00 */ {  u32 a = r_ecx; u32 b = 0x5265c00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0086427b: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086427c: jmp 0x86428a */ goto L_0086428a;
L_0086427e:; BB(0x0086427e);
    /* 0086427e: mov eax, 0x5265c00 */ r_eax = 0x5265c00u;
    /* 00864283: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00864285: jl 0x864296 */ if ((fS!=fO)) goto L_00864296;
L_00864287:; BB(0x00864287);
    /* 00864287: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00864289: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_0086428a:; BB(0x0086428a);
    /* 0086428a: mov dword ptr [0xa2411c], ecx */ W32((u32)(0xa2411cu), r_ecx);
    /* 00864290: mov dword ptr [0xa24118], esi */ W32((u32)(0xa24118u), r_esi);
L_00864296:; BB(0x00864296);
    /* 00864296: mov dword ptr [0xa24114], edi */ W32((u32)(0xa24114u), r_edi);
L_0086429c:; BB(0x0086429c);
    /* 0086429c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086429d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086429e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086429f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008642a0: ret  */ FN_RET(0x008640e9); r_esp += 4; return;
}

void f_00864428(void) /* ___tzset */
{
    FN_ENTER(0x00864428);
    /* 00864428: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0086442a: push 0x998e88 */ { u32 v = 0x998e88u; r_esp -= 4; W32(r_esp, v); }
    /* 0086442f: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x864434u); f_0085e5ac();
    /* 00864434: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00864436: cmp dword ptr [0xae7cec], esi */ {  u32 a = R32((u32)(0xae7cecu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086443c: jne 0x864465 */ if (!fZ) goto L_00864465;
L_0086443e:; BB(0x0086443e);
    /* 0086443e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00864440: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x864445u); f_0085e57a();
    /* 00864445: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864446: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00864449: cmp dword ptr [0xae7cec], esi */ {  u32 a = R32((u32)(0xae7cecu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086444f: jne 0x86445c */ if (!fZ) goto L_0086445c;
L_00864451:; BB(0x00864451);
    /* 00864451: call 0x863e41 */ r_esp -= 4; W32(r_esp, 0x864456u); f_00863e41();
    /* 00864456: inc dword ptr [0xae7cec] */ { u32 ad = (u32)(0xae7cecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086445c:; BB(0x0086445c);
    /* 0086445c: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00864460: call 0x86446b */ r_esp -= 4; W32(r_esp, 0x864465u); f_0086446b();
L_00864465:; BB(0x00864465);
    /* 00864465: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86446au); f_0085e5e7();
    /* 0086446a: ret  */ FN_RET(0x00864428); r_esp += 4; return;
}

void f_0086446b(void)
{
    FN_ENTER(0x0086446b);
    /* 0086446b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0086446d: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x864472u); f_0085e4c5();
    /* 00864472: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864473: ret  */ FN_RET(0x0086446b); r_esp += 4; return;
}

void f_00864474(void) /* __isindst */
{
    FN_ENTER(0x00864474);
    /* 00864474: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00864476: push 0x998e98 */ { u32 v = 0x998e98u; r_esp -= 4; W32(r_esp, v); }
    /* 0086447b: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x864480u); f_0085e5ac();
    /* 00864480: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00864482: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x864487u); f_0085e57a();
    /* 00864487: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864488: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086448c: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0086448f: call 0x8642a1 */ r_esp -= 4; W32(r_esp, 0x864494u); f_008642a1();
    /* 00864494: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00864497: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086449b: call 0x8644a9 */ r_esp -= 4; W32(r_esp, 0x8644a0u); f_008644a9();
    /* 008644a0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008644a3: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8644a8u); f_0085e5e7();
    /* 008644a8: ret  */ FN_RET(0x00864474); r_esp += 4; return;
}

void f_008644a9(void)
{
    FN_ENTER(0x008644a9);
    /* 008644a9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 008644ab: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8644b0u); f_0085e4c5();
    /* 008644b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008644b1: ret  */ FN_RET(0x008644a9); r_esp += 4; return;
}

void f_008644b2(void) /* __stbuf */
{
    FN_ENTER(0x008644b2);
    /* 008644b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008644b3: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008644b7: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008644ba: call 0x866e95 */ r_esp -= 4; W32(r_esp, 0x8644bfu); f_00866e95();
    /* 008644bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008644c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008644c2: je 0x864536 */ if (fZ) goto L_00864536;
L_008644c4:; BB(0x008644c4);
    /* 008644c4: cmp esi, 0xa23a00 */ {  u32 a = r_esi; u32 b = 0xa23a00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008644ca: jne 0x8644d0 */ if (!fZ) goto L_008644d0;
L_008644cc:; BB(0x008644cc);
    /* 008644cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008644ce: jmp 0x8644db */ goto L_008644db;
L_008644d0:; BB(0x008644d0);
    /* 008644d0: cmp esi, 0xa23a20 */ {  u32 a = r_esi; u32 b = 0xa23a20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008644d6: jne 0x864536 */ if (!fZ) goto L_00864536;
L_008644d8:; BB(0x008644d8);
    /* 008644d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008644da: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008644db:; BB(0x008644db);
    /* 008644db: inc dword ptr [0xae7a88] */ { u32 ad = (u32)(0xae7a88u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008644e1: test word ptr [esi + 0xc], 0x10c */ {  u32 a = R16((u32)(r_esi+0xcu)); u32 b = 0x10cu; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008644e7: jne 0x864536 */ if (!fZ) goto L_00864536;
L_008644e9:; BB(0x008644e9);
    /* 008644e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008644ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008644eb: lea edi, [eax*4 + 0xae7cf0] */ r_edi = (u32)(r_eax*4+0xae7cf0u);
    /* 008644f2: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008644f5: mov ebx, 0x1000 */ r_ebx = 0x1000u;
    /* 008644fa: jne 0x86451c */ if (!fZ) goto L_0086451c;
L_008644fc:; BB(0x008644fc);
    /* 008644fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008644fd: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x864502u); f_00859c55();
    /* 00864502: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864504: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864505: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00864507: jne 0x86451c */ if (!fZ) goto L_0086451c;
L_00864509:; BB(0x00864509);
    /* 00864509: lea eax, [esi + 0x14] */ r_eax = (u32)(r_esi+0x14u);
    /* 0086450c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086450e: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00864511: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00864513: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00864514: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00864517: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0086451a: jmp 0x864529 */ goto L_00864529;
L_0086451c:; BB(0x0086451c);
    /* 0086451c: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 0086451e: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 00864521: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 00864523: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 00864526: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
L_00864529:; BB(0x00864529);
    /* 00864529: or word ptr [esi + 0xc], 0x1102 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R16(ad); u32 b = 0x1102u; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 0086452f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00864530: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00864532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00864533: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00864534: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00864535: ret  */ FN_RET(0x008644b2); r_esp += 4; return;
L_00864536:; BB(0x00864536);
    /* 00864536: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00864538: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00864539: ret  */ FN_RET(0x008644b2); r_esp += 4; return;
}

void f_0086453a(void) /* __ftbuf */
{
    FN_ENTER(0x0086453a);
    /* 0086453a: cmp dword ptr [esp + 4], 0 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086453f: je 0x864563 */ if (fZ) goto L_00864563;
L_00864541:; BB(0x00864541);
    /* 00864541: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864542: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00864546: test byte ptr [esi + 0xd], 0x10 */ {  u32 a = R8((u32)(r_esi+0xdu)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086454a: je 0x864562 */ if (fZ) goto L_00864562;
L_0086454c:; BB(0x0086454c);
    /* 0086454c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086454d: call 0x85b986 */ r_esp -= 4; W32(r_esp, 0x864552u); f_0085b986();
    /* 00864552: and byte ptr [esi + 0xd], 0xee */ { u32 ad = (u32)(r_esi+0xdu);  u32 a = R8(ad); u32 b = 0xeeu; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 00864556: and dword ptr [esi + 0x18], 0 */ { u32 ad = (u32)(r_esi+0x18u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086455a: and dword ptr [esi], 0 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086455d: and dword ptr [esi + 8], 0 */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00864561: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00864562:; BB(0x00864562);
    /* 00864562: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00864563:; BB(0x00864563);
    /* 00864563: ret  */ FN_RET(0x0086453a); r_esp += 4; return;
}

void f_00864570(void) /* _strcmp */
{
    FN_ENTER(0x00864570);
    /* 00864570: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00864574: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00864578: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086457e: jne 0x8645bc */ if (!fZ) goto L_008645bc;
L_00864580:; BB(0x00864580);
    /* 00864580: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00864582: cmp al, byte ptr [ecx] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00864584: jne 0x8645b4 */ if (!fZ) goto L_008645b4;
L_00864586:; BB(0x00864586);
    /* 00864586: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00864588: je 0x8645b0 */ if (fZ) goto L_008645b0;
L_0086458a:; BB(0x0086458a);
    /* 0086458a: cmp ah, byte ptr [ecx + 1] */ {  u32 a = (u8)(r_eax>>8); u32 b = R8((u32)(r_ecx+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086458d: jne 0x8645b4 */ if (!fZ) goto L_008645b4;
L_0086458f:; BB(0x0086458f);
    /* 0086458f: or ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 00864591: je 0x8645b0 */ if (fZ) goto L_008645b0;
L_00864593:; BB(0x00864593);
    /* 00864593: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00864596: cmp al, byte ptr [ecx + 2] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx+0x2u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00864599: jne 0x8645b4 */ if (!fZ) goto L_008645b4;
L_0086459b:; BB(0x0086459b);
    /* 0086459b: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 0086459d: je 0x8645b0 */ if (fZ) goto L_008645b0;
L_0086459f:; BB(0x0086459f);
    /* 0086459f: cmp ah, byte ptr [ecx + 3] */ {  u32 a = (u8)(r_eax>>8); u32 b = R8((u32)(r_ecx+0x3u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008645a2: jne 0x8645b4 */ if (!fZ) goto L_008645b4;
L_008645a4:; BB(0x008645a4);
    /* 008645a4: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008645a7: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008645aa: or ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 008645ac: jne 0x864580 */ if (!fZ) goto L_00864580;
L_008645ae:; BB(0x008645ae);
    /* 008645ae: mov edi, edi */ r_edi = r_edi;
L_008645b0:; BB(0x008645b0);
    /* 008645b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008645b2: ret  */ FN_RET(0x00864570); r_esp += 4; return;
L_008645b4:; BB(0x008645b4);
    /* 008645b4: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008645b6: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008645b8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008645bb: ret  */ FN_RET(0x00864570); r_esp += 4; return;
L_008645bc:; BB(0x008645bc);
    /* 008645bc: test edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008645c2: je 0x8645dc */ if (fZ) goto L_008645dc;
L_008645c4:; BB(0x008645c4);
    /* 008645c4: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008645c6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008645c9: cmp al, byte ptr [ecx] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008645cb: jne 0x8645b4 */ if (!fZ) goto L_008645b4;
L_008645cd:; BB(0x008645cd);
    /* 008645cd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008645d0: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 008645d2: je 0x8645b0 */ if (fZ) goto L_008645b0;
L_008645d4:; BB(0x008645d4);
    /* 008645d4: test edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008645da: je 0x864580 */ if (fZ) goto L_00864580;
L_008645dc:; BB(0x008645dc);
    /* 008645dc: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 008645df: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008645e2: cmp al, byte ptr [ecx] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ecx)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008645e4: jne 0x8645b4 */ if (!fZ) goto L_008645b4;
L_008645e6:; BB(0x008645e6);
    /* 008645e6: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 008645e8: je 0x8645b0 */ if (fZ) goto L_008645b0;
L_008645ea:; BB(0x008645ea);
    /* 008645ea: cmp ah, byte ptr [ecx + 1] */ {  u32 a = (u8)(r_eax>>8); u32 b = R8((u32)(r_ecx+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008645ed: jne 0x8645b4 */ if (!fZ) goto L_008645b4;
L_008645ef:; BB(0x008645ef);
    /* 008645ef: or ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); }
    /* 008645f1: je 0x8645b0 */ if (fZ) goto L_008645b0;
L_008645f3:; BB(0x008645f3);
    /* 008645f3: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008645f6: jmp 0x864580 */ goto L_00864580;
}

void f_008645f8(void) /* __wopenfile */
{
    FN_ENTER(0x008645f8);
    /* 008645f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008645f9: mov ebp, esp */ r_ebp = r_esp;
    /* 008645fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008645fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008645fd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00864600: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 00864603: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864604: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00864606: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864609: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086460a: mov esi, dword ptr [0xae7ee4] */ r_esi = R32((u32)(0xae7ee4u));
    /* 00864610: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 00864613: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00864616: je 0x864634 */ if (fZ) goto L_00864634;
L_00864618:; BB(0x00864618);
    /* 00864618: cmp eax, 0x72 */ {  u32 a = r_eax; u32 b = 0x72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086461b: je 0x86462d */ if (fZ) goto L_0086462d;
L_0086461d:; BB(0x0086461d);
    /* 0086461d: cmp eax, 0x77 */ {  u32 a = r_eax; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864620: jne 0x864745 */ if (!fZ) goto L_00864745;
L_00864626:; BB(0x00864626);
    /* 00864626: mov ecx, 0x301 */ r_ecx = 0x301u;
    /* 0086462b: jmp 0x864639 */ goto L_00864639;
L_0086462d:; BB(0x0086462d);
    /* 0086462d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086462f: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00864632: jmp 0x86463c */ goto L_0086463c;
L_00864634:; BB(0x00864634);
    /* 00864634: mov ecx, 0x109 */ r_ecx = 0x109u;
L_00864639:; BB(0x00864639);
    /* 00864639: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_0086463c:; BB(0x0086463c);
    /* 0086463c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086463d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086463f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00864640: jmp 0x86471c */ goto L_0086471c;
L_00864645:; BB(0x00864645);
    /* 00864645: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864647: je 0x86472a */ if (fZ) goto L_0086472a;
L_0086464d:; BB(0x0086464d);
    /* 0086464d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00864650: cmp eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00864653: jg 0x8646c6 */ if ((!fZ&&fS==fO)) goto L_008646c6;
L_00864655:; BB(0x00864655);
    /* 00864655: je 0x8646b9 */ if (fZ) goto L_008646b9;
L_00864657:; BB(0x00864657);
    /* 00864657: sub eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086465a: je 0x8646a3 */ if (fZ) goto L_008646a3;
L_0086465c:; BB(0x0086465c);
    /* 0086465c: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086465f: je 0x864699 */ if (fZ) goto L_00864699;
L_00864661:; BB(0x00864661);
    /* 00864661: sub eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00864664: je 0x864685 */ if (fZ) goto L_00864685;
L_00864666:; BB(0x00864666);
    /* 00864666: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00864667: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_0086466d:; BB(0x0086466d);
    /* 0086466d: cmp dword ptr [ebp - 4], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864670: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_00864676:; BB(0x00864676);
    /* 00864676: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0086467d: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00864680: jmp 0x86471c */ goto L_0086471c;
L_00864685:; BB(0x00864685);
    /* 00864685: cmp dword ptr [ebp - 4], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864688: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_0086468a:; BB(0x0086468a);
    /* 0086468a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00864691: or ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00864694: jmp 0x86471c */ goto L_0086471c;
L_00864699:; BB(0x00864699);
    /* 00864699: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086469c: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_0086469e:; BB(0x0086469e);
    /* 0086469e: or ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008646a1: jmp 0x86471c */ goto L_0086471c;
L_008646a3:; BB(0x008646a3);
    /* 008646a3: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008646a6: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_008646a8:; BB(0x008646a8);
    /* 008646a8: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008646ab: and esi, 0xfffffffc */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008646ae: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008646b1: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008646b7: jmp 0x86471c */ goto L_0086471c;
L_008646b9:; BB(0x008646b9);
    /* 008646b9: mov eax, 0x1000 */ r_eax = 0x1000u;
    /* 008646be: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008646c0: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_008646c2:; BB(0x008646c2);
    /* 008646c2: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008646c4: jmp 0x86471c */ goto L_0086471c;
L_008646c6:; BB(0x008646c6);
    /* 008646c6: sub eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008646c9: je 0x864711 */ if (fZ) goto L_00864711;
L_008646cb:; BB(0x008646cb);
    /* 008646cb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008646cc: je 0x8646f9 */ if (fZ) goto L_008646f9;
L_008646ce:; BB(0x008646ce);
    /* 008646ce: sub eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008646d1: je 0x8646e5 */ if (fZ) goto L_008646e5;
L_008646d3:; BB(0x008646d3);
    /* 008646d3: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008646d6: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_008646d8:; BB(0x008646d8);
    /* 008646d8: test ch, 0xc0 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xc0u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008646db: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_008646dd:; BB(0x008646dd);
    /* 008646dd: or ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008646e3: jmp 0x86471c */ goto L_0086471c;
L_008646e5:; BB(0x008646e5);
    /* 008646e5: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008646e8: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_008646ea:; BB(0x008646ea);
    /* 008646ea: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 008646f1: and esi, 0xffffbfff */ {  u32 a = r_esi; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008646f7: jmp 0x86471c */ goto L_0086471c;
L_008646f9:; BB(0x008646f9);
    /* 008646f9: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008646fc: je 0x864702 */ if (fZ) goto L_00864702;
L_008646fe:; BB(0x008646fe);
    /* 008646fe: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00864700: jmp 0x86471c */ goto L_0086471c;
L_00864702:; BB(0x00864702);
    /* 00864702: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00864709: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0086470f: jmp 0x86471c */ goto L_0086471c;
L_00864711:; BB(0x00864711);
    /* 00864711: test ch, 0xc0 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xc0u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00864714: jne 0x8646fe */ if (!fZ) goto L_008646fe;
L_00864716:; BB(0x00864716);
    /* 00864716: or ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_0086471c:; BB(0x0086471c);
    /* 0086471c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086471d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086471e: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00864721: cmp ax, bx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00864724: jne 0x864645 */ if (!fZ) goto L_00864645;
L_0086472a:; BB(0x0086472a);
    /* 0086472a: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086472f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00864732: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00864733: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00864736: call 0x869656 */ r_esp -= 4; W32(r_esp, 0x86473bu); f_00869656();
    /* 0086473b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086473e: mov ecx, eax */ r_ecx = r_eax;
    /* 00864740: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00864742: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00864743: jge 0x864749 */ if ((fS==fO)) goto L_00864749;
L_00864745:; BB(0x00864745);
    /* 00864745: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00864747: jmp 0x864763 */ goto L_00864763;
L_00864749:; BB(0x00864749);
    /* 00864749: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0086474c: inc dword ptr [0xae7a88] */ { u32 ad = (u32)(0xae7a88u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00864752: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00864755: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 00864758: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0086475a: mov dword ptr [eax + 8], ebx */ W32((u32)(r_eax+0x8u), r_ebx);
    /* 0086475d: mov dword ptr [eax + 0x1c], ebx */ W32((u32)(r_eax+0x1cu), r_ebx);
    /* 00864760: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
L_00864763:; BB(0x00864763);
    /* 00864763: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00864764: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00864765: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00864766: ret  */ FN_RET(0x008645f8); r_esp += 4; return;
}

void f_008648cf(void) /* __lseek */
{
    FN_ENTER(0x008648cf);
    /* 008648cf: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008648d1: push 0x998ea8 */ { u32 v = 0x998ea8u; r_esp -= 4; W32(r_esp, v); }
    /* 008648d6: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8648dbu); f_0085e5ac();
    /* 008648db: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008648de: cmp ebx, dword ptr [0xaf0a60] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008648e4: jae 0x86495e */ if (!fC) goto L_0086495e;
L_008648e6:; BB(0x008648e6);
    /* 008648e6: mov eax, ebx */ r_eax = r_ebx;
    /* 008648e8: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008648eb: lea edi, [eax*4 + 0xaf0a80] */ r_edi = (u32)(r_eax*4+0xaf0a80u);
    /* 008648f2: mov eax, ebx */ r_eax = r_ebx;
    /* 008648f4: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008648f7: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 008648fa: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008648fd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008648ff: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00864904: je 0x86495e */ if (fZ) goto L_0086495e;
L_00864906:; BB(0x00864906);
    /* 00864906: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864907: call 0x863b11 */ r_esp -= 4; W32(r_esp, 0x86490cu); f_00863b11();
    /* 0086490c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086490d: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00864911: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00864913: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00864918: je 0x86492e */ if (fZ) goto L_0086492e;
L_0086491a:; BB(0x0086491a);
    /* 0086491a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086491d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00864920: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864921: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x864926u); f_0086485b();
    /* 00864926: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00864929: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086492c: jmp 0x864945 */ goto L_00864945;
L_0086492e:; BB(0x0086492e);
    /* 0086492e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x864933u); f_00859dd6();
    /* 00864933: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00864939: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x86493eu); f_00859ddf();
    /* 0086493e: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00864941: or dword ptr [ebp - 0x1c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00864945:; BB(0x00864945);
    /* 00864945: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00864949: call 0x864956 */ r_esp -= 4; W32(r_esp, 0x86494eu); f_00864956();
    /* 0086494e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00864951: jmp 0x864974 */ goto L_00864974;
L_0086495e:; BB(0x0086495e);
    /* 0086495e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x864963u); f_00859dd6();
    /* 00864963: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00864969: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x86496eu); f_00859ddf();
    /* 0086496e: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00864971: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00864974:; BB(0x00864974);
    /* 00864974: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x864979u); f_0085e5e7();
    /* 00864979: ret  */ FN_RET(0x008648cf); r_esp += 4; return;
}

void f_00864953(void)
{
    FN_ENTER(0x00864953);
    /* 00864953: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00864956: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864957: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x86495cu); f_00863bb1();
    /* 0086495c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086495d: ret  */ FN_RET(0x00864953); r_esp += 4; return;
}

void f_00864956(void)
{
    FN_ENTER(0x00864956);
    /* 00864956: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864957: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x86495cu); f_00863bb1();
    /* 0086495c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086495d: ret  */ FN_RET(0x00864956); r_esp += 4; return;
}

void f_0086497a(void) /* __ioinit */
{
    FN_ENTER(0x0086497a);
    /* 0086497a: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086497d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086497e: mov ebx, 0x480 */ r_ebx = 0x480u;
    /* 00864983: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864984: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x864989u); f_00859c55();
    /* 00864989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086498b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086498c: jne 0x864996 */ if (!fZ) goto L_00864996;
L_0086498e:; BB(0x0086498e);
    /* 0086498e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00864991: jmp 0x864b73 */ goto L_00864b73;
L_00864996:; BB(0x00864996);
    /* 00864996: mov dword ptr [0xaf0a80], eax */ W32((u32)(0xaf0a80u), r_eax);
    /* 0086499b: mov dword ptr [0xaf0a60], 0x20 */ W32((u32)(0xaf0a60u), 0x20u);
    /* 008649a5: lea ecx, [eax + 0x480] */ r_ecx = (u32)(r_eax+0x480u);
    /* 008649ab: jmp 0x8649cb */ goto L_008649cb;
L_008649ad:; BB(0x008649ad);
    /* 008649ad: or dword ptr [eax], 0xffffffff */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008649b0: and dword ptr [eax + 8], 0 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008649b4: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 008649b8: mov byte ptr [eax + 5], 0xa */ W8((u32)(r_eax+0x5u), 0xau);
    /* 008649bc: mov ecx, dword ptr [0xaf0a80] */ r_ecx = R32((u32)(0xaf0a80u));
    /* 008649c2: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008649c5: add ecx, 0x480 */ {  u32 a = r_ecx; u32 b = 0x480u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008649cb:; BB(0x008649cb);
    /* 008649cb: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008649cd: jb 0x8649ad */ if (fC) goto L_008649ad;
L_008649cf:; BB(0x008649cf);
    /* 008649cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008649d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008649d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008649d2: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008649d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008649d7: call dword ptr [0x8f8204] */ { u32 t = R32((u32)(0x8f8204u)); r_esp -= 4; W32(r_esp, 0x8649ddu); call_ind(t); }
    /* 008649dd: cmp word ptr [esp + 0x46], 0 */ {  u32 a = R16((u32)(r_esp+0x46u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008649e3: je 0x864ad2 */ if (fZ) goto L_00864ad2;
L_008649e9:; BB(0x008649e9);
    /* 008649e9: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 008649ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008649ef: je 0x864ad2 */ if (fZ) goto L_00864ad2;
L_008649f5:; BB(0x008649f5);
    /* 008649f5: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 008649f7: lea ebp, [eax + 4] */ r_ebp = (u32)(r_eax+0x4u);
    /* 008649fa: lea eax, [edi + ebp] */ r_eax = (u32)(r_edi+r_ebp);
    /* 008649fd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00864a01: mov eax, 0x800 */ r_eax = 0x800u;
    /* 00864a06: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00864a08: jl 0x864a0c */ if ((fS!=fO)) goto L_00864a0c;
L_00864a0a:; BB(0x00864a0a);
    /* 00864a0a: mov edi, eax */ r_edi = r_eax;
L_00864a0c:; BB(0x00864a0c);
    /* 00864a0c: cmp dword ptr [0xaf0a60], edi */ {  u32 a = R32((u32)(0xaf0a60u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00864a12: jge 0x864a62 */ if ((fS==fO)) goto L_00864a62;
L_00864a14:; BB(0x00864a14);
    /* 00864a14: mov esi, 0xaf0a84 */ r_esi = 0xaf0a84u;
L_00864a19:; BB(0x00864a19);
    /* 00864a19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864a1a: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x864a1fu); f_00859c55();
    /* 00864a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864a21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864a22: je 0x864a5c */ if (fZ) goto L_00864a5c;
L_00864a24:; BB(0x00864a24);
    /* 00864a24: add dword ptr [0xaf0a60], 0x20 */ { u32 ad = (u32)(0xaf0a60u);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00864a2b: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00864a2d: lea ecx, [eax + 0x480] */ r_ecx = (u32)(r_eax+0x480u);
    /* 00864a33: jmp 0x864a4b */ goto L_00864a4b;
L_00864a35:; BB(0x00864a35);
    /* 00864a35: or dword ptr [eax], 0xffffffff */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00864a38: and dword ptr [eax + 8], 0 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00864a3c: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 00864a40: mov byte ptr [eax + 5], 0xa */ W8((u32)(r_eax+0x5u), 0xau);
    /* 00864a44: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00864a46: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864a49: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00864a4b:; BB(0x00864a4b);
    /* 00864a4b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00864a4d: jb 0x864a35 */ if (fC) goto L_00864a35;
L_00864a4f:; BB(0x00864a4f);
    /* 00864a4f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00864a52: cmp dword ptr [0xaf0a60], edi */ {  u32 a = R32((u32)(0xaf0a60u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00864a58: jl 0x864a19 */ if ((fS!=fO)) goto L_00864a19;
L_00864a5a:; BB(0x00864a5a);
    /* 00864a5a: jmp 0x864a62 */ goto L_00864a62;
L_00864a5c:; BB(0x00864a5c);
    /* 00864a5c: mov edi, dword ptr [0xaf0a60] */ r_edi = R32((u32)(0xaf0a60u));
L_00864a62:; BB(0x00864a62);
    /* 00864a62: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00864a64: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00864a66: jle 0x864ad2 */ if ((fZ||fS!=fO)) goto L_00864ad2;
L_00864a68:; BB(0x00864a68);
    /* 00864a68: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00864a6c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00864a6e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864a71: je 0x864ac7 */ if (fZ) goto L_00864ac7;
L_00864a73:; BB(0x00864a73);
    /* 00864a73: mov cl, byte ptr [ebp] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00864a76: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00864a79: je 0x864ac7 */ if (fZ) goto L_00864ac7;
L_00864a7b:; BB(0x00864a7b);
    /* 00864a7b: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00864a7e: jne 0x864a8b */ if (!fZ) goto L_00864a8b;
L_00864a80:; BB(0x00864a80);
    /* 00864a80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864a81: call dword ptr [0x8f8260] */ { u32 t = R32((u32)(0x8f8260u)); r_esp -= 4; W32(r_esp, 0x864a87u); call_ind(t); }
    /* 00864a87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864a89: je 0x864ac7 */ if (fZ) goto L_00864ac7;
L_00864a8b:; BB(0x00864a8b);
    /* 00864a8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00864a8d: mov eax, ebx */ r_eax = r_ebx;
    /* 00864a8f: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00864a92: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00864a95: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00864a98: mov ecx, dword ptr [ecx*4 + 0xaf0a80] */ r_ecx = R32((u32)(r_ecx*4+0xaf0a80u));
    /* 00864a9f: lea esi, [ecx + eax*4] */ r_esi = (u32)(r_ecx+r_eax*4);
    /* 00864aa2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00864aa6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00864aa8: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00864aaa: mov al, byte ptr [ebp] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp))) & 0xffu);
    /* 00864aad: mov byte ptr [esi + 4], al */ W8((u32)(r_esi+0x4u), (u8)r_eax);
    /* 00864ab0: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 00864ab3: push 0xfa0 */ { u32 v = 0xfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00864ab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864ab9: call 0x868a8e */ r_esp -= 4; W32(r_esp, 0x864abeu); f_00868a8e();
    /* 00864abe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864ac0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864ac1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864ac2: je 0x864af2 */ if (fZ) goto L_00864af2;
L_00864ac4:; BB(0x00864ac4);
    /* 00864ac4: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00864ac7:; BB(0x00864ac7);
    /* 00864ac7: add dword ptr [esp + 0x10], 4 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00864acc: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00864acd: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00864ace: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00864ad0: jl 0x864a68 */ if ((fS!=fO)) goto L_00864a68;
L_00864ad2:; BB(0x00864ad2);
    /* 00864ad2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00864ad4:; BB(0x00864ad4);
    /* 00864ad4: mov ecx, dword ptr [0xaf0a80] */ r_ecx = R32((u32)(0xaf0a80u));
    /* 00864ada: lea eax, [ebx + ebx*8] */ r_eax = (u32)(r_ebx+r_ebx*8);
    /* 00864add: lea esi, [ecx + eax*4] */ r_esi = (u32)(r_ecx+r_eax*4);
    /* 00864ae0: cmp dword ptr [esi], -1 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864ae3: jne 0x864b54 */ if (!fZ) goto L_00864b54;
L_00864ae5:; BB(0x00864ae5);
    /* 00864ae5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864ae7: mov byte ptr [esi + 4], 0x81 */ W8((u32)(r_esi+0x4u), 0x81u);
    /* 00864aeb: jne 0x864af7 */ if (!fZ) goto L_00864af7;
L_00864aed:; BB(0x00864aed);
    /* 00864aed: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 00864aef: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00864af0: jmp 0x864b01 */ goto L_00864b01;
L_00864af2:; BB(0x00864af2);
    /* 00864af2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00864af5: jmp 0x864b70 */ goto L_00864b70;
L_00864af7:; BB(0x00864af7);
    /* 00864af7: mov eax, ebx */ r_eax = r_ebx;
    /* 00864af9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00864afa: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00864afc: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00864afe: add eax, -0xb */ {  u32 a = r_eax; u32 b = 0xfffffff5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00864b01:; BB(0x00864b01);
    /* 00864b01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864b02: call dword ptr [0x8f826c] */ { u32 t = R32((u32)(0x8f826cu)); r_esp -= 4; W32(r_esp, 0x864b08u); call_ind(t); }
    /* 00864b08: mov edi, eax */ r_edi = r_eax;
    /* 00864b0a: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864b0d: je 0x864b4e */ if (fZ) goto L_00864b4e;
L_00864b0f:; BB(0x00864b0f);
    /* 00864b0f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864b10: call dword ptr [0x8f8260] */ { u32 t = R32((u32)(0x8f8260u)); r_esp -= 4; W32(r_esp, 0x864b16u); call_ind(t); }
    /* 00864b16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864b18: je 0x864b4e */ if (fZ) goto L_00864b4e;
L_00864b1a:; BB(0x00864b1a);
    /* 00864b1a: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00864b1f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864b22: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 00864b24: jne 0x864b2c */ if (!fZ) goto L_00864b2c;
L_00864b26:; BB(0x00864b26);
    /* 00864b26: or byte ptr [esi + 4], 0x40 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R8(ad); u32 b = 0x40u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00864b2a: jmp 0x864b35 */ goto L_00864b35;
L_00864b2c:; BB(0x00864b2c);
    /* 00864b2c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864b2f: jne 0x864b35 */ if (!fZ) goto L_00864b35;
L_00864b31:; BB(0x00864b31);
    /* 00864b31: or byte ptr [esi + 4], 8 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R8(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00864b35:; BB(0x00864b35);
    /* 00864b35: lea eax, [esi + 0xc] */ r_eax = (u32)(r_esi+0xcu);
    /* 00864b38: push 0xfa0 */ { u32 v = 0xfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00864b3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864b3e: call 0x868a8e */ r_esp -= 4; W32(r_esp, 0x864b43u); f_00868a8e();
    /* 00864b43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864b45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864b46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864b47: je 0x864af2 */ if (fZ) goto L_00864af2;
L_00864b49:; BB(0x00864b49);
    /* 00864b49: inc dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00864b4c: jmp 0x864b58 */ goto L_00864b58;
L_00864b4e:; BB(0x00864b4e);
    /* 00864b4e: or byte ptr [esi + 4], 0x40 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R8(ad); u32 b = 0x40u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00864b52: jmp 0x864b58 */ goto L_00864b58;
L_00864b54:; BB(0x00864b54);
    /* 00864b54: or byte ptr [esi + 4], 0x80 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00864b58:; BB(0x00864b58);
    /* 00864b58: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00864b59: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00864b5c: jl 0x864ad4 */ if ((fS!=fO)) goto L_00864ad4;
L_00864b62:; BB(0x00864b62);
    /* 00864b62: push dword ptr [0xaf0a60] */ { u32 v = R32((u32)(0xaf0a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00864b68: call dword ptr [0x8f8268] */ { u32 t = R32((u32)(0x8f8268u)); r_esp -= 4; W32(r_esp, 0x864b6eu); call_ind(t); }
    /* 00864b6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00864b70:; BB(0x00864b70);
    /* 00864b70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00864b71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00864b72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_00864b73:; BB(0x00864b73);
    /* 00864b73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00864b74: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00864b77: ret  */ FN_RET(0x0086497a); r_esp += 4; return;
}

void f_00864d28(void) /* __XcptFilter */
{
    FN_ENTER(0x00864d28);
    /* 00864d28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864d29: mov ebp, esp */ r_ebp = r_esp;
    /* 00864d2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00864d2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864d2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864d2e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864d2f: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x864d34u); f_0085c583();
    /* 00864d34: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00864d37: mov esi, eax */ r_esi = r_eax;
    /* 00864d39: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 00864d3c: mov eax, dword ptr [0xa24264] */ r_eax = R32((u32)(0xa24264u));
    /* 00864d41: mov ecx, edx */ r_ecx = r_edx;
L_00864d43:; BB(0x00864d43);
    /* 00864d43: cmp dword ptr [ecx], edi */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864d45: je 0x864d54 */ if (fZ) goto L_00864d54;
L_00864d47:; BB(0x00864d47);
    /* 00864d47: lea ebx, [eax + eax*2] */ r_ebx = (u32)(r_eax+r_eax*2);
    /* 00864d4a: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00864d4d: lea ebx, [edx + ebx*4] */ r_ebx = (u32)(r_edx+r_ebx*4);
    /* 00864d50: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00864d52: jb 0x864d43 */ if (fC) goto L_00864d43;
L_00864d54:; BB(0x00864d54);
    /* 00864d54: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00864d57: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 00864d5a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00864d5c: jae 0x864d62 */ if (!fC) goto L_00864d62;
L_00864d5e:; BB(0x00864d5e);
    /* 00864d5e: cmp dword ptr [ecx], edi */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864d60: je 0x864d64 */ if (fZ) goto L_00864d64;
L_00864d62:; BB(0x00864d62);
    /* 00864d62: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00864d64:; BB(0x00864d64);
    /* 00864d64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864d66: je 0x864e7e */ if (fZ) goto L_00864e7e;
L_00864d6c:; BB(0x00864d6c);
    /* 00864d6c: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 00864d6f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864d71: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 00864d74: je 0x864e7e */ if (fZ) goto L_00864e7e;
L_00864d7a:; BB(0x00864d7a);
    /* 00864d7a: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864d7d: jne 0x864d8b */ if (!fZ) goto L_00864d8b;
L_00864d7f:; BB(0x00864d7f);
    /* 00864d7f: and dword ptr [ecx + 8], 0 */ { u32 ad = (u32)(r_ecx+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00864d83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00864d85: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00864d86: jmp 0x864e87 */ goto L_00864e87;
L_00864d8b:; BB(0x00864d8b);
    /* 00864d8b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864d8e: je 0x864e79 */ if (fZ) goto L_00864e79;
L_00864d94:; BB(0x00864d94);
    /* 00864d94: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00864d97: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00864d9a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00864d9d: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 00864da0: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00864da3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864da6: jne 0x864e6b */ if (!fZ) goto L_00864e6b;
L_00864dac:; BB(0x00864dac);
    /* 00864dac: mov edx, dword ptr [0xa24258] */ r_edx = R32((u32)(0xa24258u));
    /* 00864db2: mov eax, dword ptr [0xa2425c] */ r_eax = R32((u32)(0xa2425cu));
    /* 00864db7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864db9: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00864dbb: jge 0x864de4 */ if ((fS==fO)) goto L_00864de4;
L_00864dbd:; BB(0x00864dbd);
    /* 00864dbd: lea eax, [edx + edx*2] */ r_eax = (u32)(r_edx+r_edx*2);
    /* 00864dc0: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
L_00864dc3:; BB(0x00864dc3);
    /* 00864dc3: mov edi, dword ptr [esi + 0x54] */ r_edi = R32((u32)(r_esi+0x54u));
    /* 00864dc6: and dword ptr [eax + edi + 8], 0 */ { u32 ad = (u32)(r_eax+r_edi+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00864dcb: mov edi, dword ptr [0xa24258] */ r_edi = R32((u32)(0xa24258u));
    /* 00864dd1: mov ebx, dword ptr [0xa2425c] */ r_ebx = R32((u32)(0xa2425cu));
    /* 00864dd7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00864dd8: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00864dda: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00864ddd: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00864ddf: jl 0x864dc3 */ if ((fS!=fO)) goto L_00864dc3;
L_00864de1:; BB(0x00864de1);
    /* 00864de1: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_00864de4:; BB(0x00864de4);
    /* 00864de4: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00864de6: cmp ecx, 0xc000008e */ {  u32 a = r_ecx; u32 b = 0xc000008eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864dec: mov edi, dword ptr [esi + 0x5c] */ r_edi = R32((u32)(r_esi+0x5cu));
    /* 00864def: jne 0x864dfa */ if (!fZ) goto L_00864dfa;
L_00864df1:; BB(0x00864df1);
    /* 00864df1: mov dword ptr [esi + 0x5c], 0x83 */ W32((u32)(r_esi+0x5cu), 0x83u);
    /* 00864df8: jmp 0x864e5e */ goto L_00864e5e;
L_00864dfa:; BB(0x00864dfa);
    /* 00864dfa: cmp ecx, 0xc0000090 */ {  u32 a = r_ecx; u32 b = 0xc0000090u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864e00: jne 0x864e0b */ if (!fZ) goto L_00864e0b;
L_00864e02:; BB(0x00864e02);
    /* 00864e02: mov dword ptr [esi + 0x5c], 0x81 */ W32((u32)(r_esi+0x5cu), 0x81u);
    /* 00864e09: jmp 0x864e5e */ goto L_00864e5e;
L_00864e0b:; BB(0x00864e0b);
    /* 00864e0b: cmp ecx, 0xc0000091 */ {  u32 a = r_ecx; u32 b = 0xc0000091u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864e11: jne 0x864e1c */ if (!fZ) goto L_00864e1c;
L_00864e13:; BB(0x00864e13);
    /* 00864e13: mov dword ptr [esi + 0x5c], 0x84 */ W32((u32)(r_esi+0x5cu), 0x84u);
    /* 00864e1a: jmp 0x864e5e */ goto L_00864e5e;
L_00864e1c:; BB(0x00864e1c);
    /* 00864e1c: cmp ecx, 0xc0000093 */ {  u32 a = r_ecx; u32 b = 0xc0000093u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864e22: jne 0x864e2d */ if (!fZ) goto L_00864e2d;
L_00864e24:; BB(0x00864e24);
    /* 00864e24: mov dword ptr [esi + 0x5c], 0x85 */ W32((u32)(r_esi+0x5cu), 0x85u);
    /* 00864e2b: jmp 0x864e5e */ goto L_00864e5e;
L_00864e2d:; BB(0x00864e2d);
    /* 00864e2d: cmp ecx, 0xc000008d */ {  u32 a = r_ecx; u32 b = 0xc000008du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864e33: jne 0x864e3e */ if (!fZ) goto L_00864e3e;
L_00864e35:; BB(0x00864e35);
    /* 00864e35: mov dword ptr [esi + 0x5c], 0x82 */ W32((u32)(r_esi+0x5cu), 0x82u);
    /* 00864e3c: jmp 0x864e5e */ goto L_00864e5e;
L_00864e3e:; BB(0x00864e3e);
    /* 00864e3e: cmp ecx, 0xc000008f */ {  u32 a = r_ecx; u32 b = 0xc000008fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864e44: jne 0x864e4f */ if (!fZ) goto L_00864e4f;
L_00864e46:; BB(0x00864e46);
    /* 00864e46: mov dword ptr [esi + 0x5c], 0x86 */ W32((u32)(r_esi+0x5cu), 0x86u);
    /* 00864e4d: jmp 0x864e5e */ goto L_00864e5e;
L_00864e4f:; BB(0x00864e4f);
    /* 00864e4f: cmp ecx, 0xc0000092 */ {  u32 a = r_ecx; u32 b = 0xc0000092u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864e55: jne 0x864e5e */ if (!fZ) goto L_00864e5e;
L_00864e57:; BB(0x00864e57);
    /* 00864e57: mov dword ptr [esi + 0x5c], 0x8a */ W32((u32)(r_esi+0x5cu), 0x8au);
L_00864e5e:; BB(0x00864e5e);
    /* 00864e5e: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00864e61: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00864e63: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x864e65u); call_ind(t); }
    /* 00864e65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864e66: mov dword ptr [esi + 0x5c], edi */ W32((u32)(r_esi+0x5cu), r_edi);
    /* 00864e69: jmp 0x864e72 */ goto L_00864e72;
L_00864e6b:; BB(0x00864e6b);
    /* 00864e6b: and dword ptr [ecx + 8], 0 */ { u32 ad = (u32)(r_ecx+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00864e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864e70: call ebx */ { u32 t = r_ebx; r_esp -= 4; W32(r_esp, 0x864e72u); call_ind(t); }
L_00864e72:; BB(0x00864e72);
    /* 00864e72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00864e75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864e76: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
L_00864e79:; BB(0x00864e79);
    /* 00864e79: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00864e7c: jmp 0x864e87 */ goto L_00864e87;
L_00864e7e:; BB(0x00864e7e);
    /* 00864e7e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00864e81: call dword ptr [0x8f8270] */ { u32 t = R32((u32)(0x8f8270u)); r_esp -= 4; W32(r_esp, 0x864e87u); call_ind(t); }
L_00864e87:; BB(0x00864e87);
    /* 00864e87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00864e88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00864e89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00864e8a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00864e8b: ret  */ FN_RET(0x00864d28); r_esp += 4; return;
}

void f_00864e8c(void) /* __wincmdln */
{
    FN_ENTER(0x00864e8c);
    /* 00864e8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864e8d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864e8e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00864e90: cmp dword ptr [0xaf1bd4], edi */ {  u32 a = R32((u32)(0xaf1bd4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864e96: jne 0x864e9d */ if (!fZ) goto L_00864e9d;
L_00864e98:; BB(0x00864e98);
    /* 00864e98: call 0x866787 */ r_esp -= 4; W32(r_esp, 0x864e9du); f_00866787();
L_00864e9d:; BB(0x00864e9d);
    /* 00864e9d: mov esi, dword ptr [0xaf1bc4] */ r_esi = R32((u32)(0xaf1bc4u));
    /* 00864ea3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864ea5: jne 0x864eac */ if (!fZ) goto L_00864eac;
L_00864ea7:; BB(0x00864ea7);
    /* 00864ea7: mov esi, 0x99839a */ r_esi = 0x99839au;
L_00864eac:; BB(0x00864eac);
    /* 00864eac: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00864eae: cmp al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00864eb0: ja 0x864eba */ if ((!fC&&!fZ)) goto L_00864eba;
L_00864eb2:; BB(0x00864eb2);
    /* 00864eb2: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00864eb4: je 0x864ee4 */ if (fZ) goto L_00864ee4;
L_00864eb6:; BB(0x00864eb6);
    /* 00864eb6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864eb8: je 0x864ede */ if (fZ) goto L_00864ede;
L_00864eba:; BB(0x00864eba);
    /* 00864eba: cmp al, 0x22 */ {  u32 a = (u8)r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00864ebc: jne 0x864ec7 */ if (!fZ) goto L_00864ec7;
L_00864ebe:; BB(0x00864ebe);
    /* 00864ebe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00864ec0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864ec2: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00864ec5: mov edi, ecx */ r_edi = r_ecx;
L_00864ec7:; BB(0x00864ec7);
    /* 00864ec7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00864eca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864ecb: call 0x8697ca */ r_esp -= 4; W32(r_esp, 0x864ed0u); f_008697ca();
    /* 00864ed0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864ed2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864ed3: je 0x864ed6 */ if (fZ) goto L_00864ed6;
L_00864ed5:; BB(0x00864ed5);
    /* 00864ed5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00864ed6:; BB(0x00864ed6);
    /* 00864ed6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00864ed7: jmp 0x864eac */ goto L_00864eac;
L_00864ed9:; BB(0x00864ed9);
    /* 00864ed9: cmp al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00864edb: ja 0x864ee4 */ if ((!fC&&!fZ)) goto L_00864ee4;
L_00864edd:; BB(0x00864edd);
    /* 00864edd: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00864ede:; BB(0x00864ede);
    /* 00864ede: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00864ee0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00864ee2: jne 0x864ed9 */ if (!fZ) goto L_00864ed9;
L_00864ee4:; BB(0x00864ee4);
    /* 00864ee4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00864ee5: mov eax, esi */ r_eax = r_esi;
    /* 00864ee7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00864ee8: ret  */ FN_RET(0x00864e8c); r_esp += 4; return;
}

void f_00864ee9(void) /* __setenvp */
{
    FN_ENTER(0x00864ee9);
    /* 00864ee9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00864eea: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00864eec: cmp dword ptr [0xaf1bd4], ebx */ {  u32 a = R32((u32)(0xaf1bd4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864ef2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864ef3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00864ef4: jne 0x864efb */ if (!fZ) goto L_00864efb;
L_00864ef6:; BB(0x00864ef6);
    /* 00864ef6: call 0x866787 */ r_esp -= 4; W32(r_esp, 0x864efbu); f_00866787();
L_00864efb:; BB(0x00864efb);
    /* 00864efb: mov esi, dword ptr [0xae7a54] */ r_esi = R32((u32)(0xae7a54u));
    /* 00864f01: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00864f03: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864f05: jne 0x864f19 */ if (!fZ) goto L_00864f19;
L_00864f07:; BB(0x00864f07);
    /* 00864f07: jmp 0x864f39 */ goto L_00864f39;
L_00864f09:; BB(0x00864f09);
    /* 00864f09: cmp al, 0x3d */ {  u32 a = (u8)r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00864f0b: je 0x864f0e */ if (fZ) goto L_00864f0e;
L_00864f0d:; BB(0x00864f0d);
    /* 00864f0d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00864f0e:; BB(0x00864f0e);
    /* 00864f0e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864f0f: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x864f14u); f_0085d760();
    /* 00864f14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864f15: lea esi, [esi + eax + 1] */ r_esi = (u32)(r_esi+r_eax+0x1u);
L_00864f19:; BB(0x00864f19);
    /* 00864f19: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00864f1b: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00864f1d: jne 0x864f09 */ if (!fZ) goto L_00864f09;
L_00864f1f:; BB(0x00864f1f);
    /* 00864f1f: lea eax, [edi*4 + 4] */ r_eax = (u32)(r_edi*4+0x4u);
    /* 00864f26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864f27: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x864f2cu); f_00859c55();
    /* 00864f2c: mov edi, eax */ r_edi = r_eax;
    /* 00864f2e: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864f30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864f31: mov dword ptr [0xae7a30], edi */ W32((u32)(0xae7a30u), r_edi);
    /* 00864f37: jne 0x864f3e */ if (!fZ) goto L_00864f3e;
L_00864f39:; BB(0x00864f39);
    /* 00864f39: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00864f3c: jmp 0x864f96 */ goto L_00864f96;
L_00864f3e:; BB(0x00864f3e);
    /* 00864f3e: mov esi, dword ptr [0xae7a54] */ r_esi = R32((u32)(0xae7a54u));
    /* 00864f44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864f45: jmp 0x864f71 */ goto L_00864f71;
L_00864f47:; BB(0x00864f47);
    /* 00864f47: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864f48: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x864f4du); f_0085d760();
    /* 00864f4d: mov ebp, eax */ r_ebp = r_eax;
    /* 00864f4f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00864f50: cmp byte ptr [esi], 0x3d */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x3du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00864f53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864f54: je 0x864f6f */ if (fZ) goto L_00864f6f;
L_00864f56:; BB(0x00864f56);
    /* 00864f56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00864f57: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x864f5cu); f_00859c55();
    /* 00864f5c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864f5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864f5f: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00864f61: je 0x864f9a */ if (fZ) goto L_00864f9a;
L_00864f63:; BB(0x00864f63);
    /* 00864f63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00864f64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00864f65: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x864f6au); f_0085e2f0();
    /* 00864f6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864f6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864f6c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00864f6f:; BB(0x00864f6f);
    /* 00864f6f: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00864f71:; BB(0x00864f71);
    /* 00864f71: cmp byte ptr [esi], bl */ {  u32 a = R8((u32)(r_esi)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00864f73: jne 0x864f47 */ if (!fZ) goto L_00864f47;
L_00864f75:; BB(0x00864f75);
    /* 00864f75: push dword ptr [0xae7a54] */ { u32 v = R32((u32)(0xae7a54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00864f7b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x864f80u); f_00858882();
    /* 00864f80: mov dword ptr [0xae7a54], ebx */ W32((u32)(0xae7a54u), r_ebx);
    /* 00864f86: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00864f88: mov dword ptr [0xaf1bc8], 1 */ W32((u32)(0xaf1bc8u), 0x1u);
    /* 00864f92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00864f94:; BB(0x00864f94);
    /* 00864f94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864f95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_00864f96:; BB(0x00864f96);
    /* 00864f96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00864f97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00864f98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00864f99: ret  */ FN_RET(0x00864ee9); r_esp += 4; return;
L_00864f9a:; BB(0x00864f9a);
    /* 00864f9a: push dword ptr [0xae7a30] */ { u32 v = R32((u32)(0xae7a30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00864fa0: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x864fa5u); f_00858882();
    /* 00864fa5: mov dword ptr [0xae7a30], ebx */ W32((u32)(0xae7a30u), r_ebx);
    /* 00864fab: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00864fae: jmp 0x864f94 */ goto L_00864f94;
}

