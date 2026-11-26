#include "protos.h"

void f_008950d8(void) /* sub_8950D8 */
{
    FN_ENTER(0x008950d8);
    /* 008950d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008950d9: mov ebp, esp */ r_ebp = r_esp;
    /* 008950db: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008950de: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008950e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008950e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008950e4: mov esi, ecx */ r_esi = r_ecx;
    /* 008950e6: jae 0x8950f2 */ if (!fC) goto L_008950f2;
L_008950e8:; BB(0x008950e8);
    /* 008950e8: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 008950ed: jmp 0x8952bf */ goto L_008952bf;
L_008950f2:; BB(0x008950f2);
    /* 008950f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008950f3: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008950f6: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008950f8: cmp al, 0x50 */ {  u32 a = (u8)r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008950fa: jne 0x8952b9 */ if (!fZ) goto L_008952b9;
L_00895100:; BB(0x00895100);
    /* 00895100: cmp byte ptr [edi + 1], 0x33 */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = 0x33u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00895104: jne 0x89510f */ if (!fZ) goto L_0089510f;
L_00895106:; BB(0x00895106);
    /* 00895106: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0089510d: jmp 0x895125 */ goto L_00895125;
L_0089510f:; BB(0x0089510f);
    /* 0089510f: cmp al, 0x50 */ {  u32 a = (u8)r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00895111: jne 0x8952b9 */ if (!fZ) goto L_008952b9;
L_00895117:; BB(0x00895117);
    /* 00895117: cmp byte ptr [edi + 1], 0x36 */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = 0x36u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0089511b: jne 0x8952b9 */ if (!fZ) goto L_008952b9;
L_00895121:; BB(0x00895121);
    /* 00895121: and dword ptr [ebp - 0x18], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00895125:; BB(0x00895125);
    /* 00895125: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00895127: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089512a: sub dword ptr [ebp + 0xc], 2 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089512e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089512f: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00895132: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00895135: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00895138: mov dword ptr [ebp - 8], 0xff */ W32((u32)(r_ebp+0xfffffff8u), 0xffu);
    /* 0089513f: je 0x8952b9 */ if (fZ) goto L_008952b9;
L_00895145:; BB(0x00895145);
    /* 00895145: cmp dword ptr [ebp - 0x18], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895148: jne 0x895154 */ if (!fZ) goto L_00895154;
L_0089514a:; BB(0x0089514a);
    /* 0089514a: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089514e: je 0x8952c5 */ if (fZ) goto L_008952c5;
L_00895154:; BB(0x00895154);
    /* 00895154: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 00895157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895158: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x89515du); f_008582ff();
    /* 0089515d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089515f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895160: je 0x89516e */ if (fZ) goto L_0089516e;
L_00895162:; BB(0x00895162);
    /* 00895162: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00895163: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00895166: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00895169: jmp 0x8952ae */ goto L_008952ae;
L_0089516e:; BB(0x0089516e);
    /* 0089516e: cmp byte ptr [edi], 0x23 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0x23u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00895171: jne 0x895185 */ if (!fZ) goto L_00895185;
L_00895173:; BB(0x00895173);
    /* 00895173: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895176: je 0x895162 */ if (fZ) goto L_00895162;
L_00895178:; BB(0x00895178);
    /* 00895178: cmp byte ptr [edi], 0xa */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0089517b: je 0x895162 */ if (fZ) goto L_00895162;
L_0089517d:; BB(0x0089517d);
    /* 0089517d: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089517e: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00895181: jne 0x895178 */ if (!fZ) goto L_00895178;
L_00895183:; BB(0x00895183);
    /* 00895183: jmp 0x895162 */ goto L_00895162;
L_00895185:; BB(0x00895185);
    /* 00895185: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895189: je 0x8951be */ if (fZ) goto L_008951be;
L_0089518b:; BB(0x0089518b);
    /* 0089518b: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 0089518e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089518f: call 0x8582ff */ r_esp -= 4; W32(r_esp, 0x895194u); f_008582ff();
    /* 00895194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895196: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895197: jne 0x8951be */ if (!fZ) goto L_008951be;
L_00895199:; BB(0x00895199);
    /* 00895199: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 0089519c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089519d: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x8951a2u); f_00858286();
    /* 008951a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008951a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008951a5: je 0x8952b9 */ if (fZ) goto L_008952b9;
L_008951ab:; BB(0x008951ab);
    /* 008951ab: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008951ae: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008951af: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008951b2: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 008951b5: lea ebx, [ecx + eax*2 - 0x30] */ r_ebx = (u32)(r_ecx+r_eax*2+0xffffffd0u);
    /* 008951b9: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 008951bc: jne 0x89518b */ if (!fZ) goto L_0089518b;
L_008951be:; BB(0x008951be);
    /* 008951be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008951c1: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008951c4: je 0x8952a4 */ if (fZ) goto L_008952a4;
L_008951ca:; BB(0x008951ca);
    /* 008951ca: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008951cb: je 0x895254 */ if (fZ) goto L_00895254;
L_008951d1:; BB(0x008951d1);
    /* 008951d1: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008951d2: je 0x89524f */ if (fZ) goto L_0089524f;
L_008951d4:; BB(0x008951d4);
    /* 008951d4: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008951d5: je 0x89522a */ if (fZ) goto L_0089522a;
L_008951d7:; BB(0x008951d7);
    /* 008951d7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008951d8: je 0x89520e */ if (fZ) goto L_0089520e;
L_008951da:; BB(0x008951da);
    /* 008951da: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008951db: jne 0x8952ab */ if (!fZ) goto L_008952ab;
L_008951e1:; BB(0x008951e1);
    /* 008951e1: mov eax, ebx */ r_eax = r_ebx;
    /* 008951e3: imul eax, eax, 0xff */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008951e9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008951eb: div dword ptr [ebp - 8] */ { u32 d = R32((u32)(r_ebp+0xfffffff8u)); if (!d) UNSUP(0x008951eb, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008951eb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008951ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008951f1: or dword ptr [ecx], eax */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008951f3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008951f6: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008951f9: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008951fc: je 0x89534d */ if (fZ) goto L_0089534d;
L_00895202:; BB(0x00895202);
    /* 00895202: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00895209: jmp 0x8952ab */ goto L_008952ab;
L_0089520e:; BB(0x0089520e);
    /* 0089520e: mov eax, ebx */ r_eax = r_ebx;
    /* 00895210: imul eax, eax, 0xff */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00895216: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00895218: div dword ptr [ebp - 8] */ { u32 d = R32((u32)(r_ebp+0xfffffff8u)); if (!d) UNSUP(0x00895218, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00895218, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0089521b: mov ecx, eax */ r_ecx = r_eax;
    /* 0089521d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00895220: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00895223: or dword ptr [eax], ecx */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00895225: jmp 0x8952ab */ goto L_008952ab;
L_0089522a:; BB(0x0089522a);
    /* 0089522a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0089522d: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00895230: jae 0x8952b9 */ if (!fC) goto L_008952b9;
L_00895236:; BB(0x00895236);
    /* 00895236: mov eax, ebx */ r_eax = r_ebx;
    /* 00895238: imul eax, eax, 0xff */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089523e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00895240: div dword ptr [ebp - 8] */ { u32 d = R32((u32)(r_ebp+0xfffffff8u)); if (!d) UNSUP(0x00895240, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00895240, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00895243: or eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00895248: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089524b: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0089524d: jmp 0x8952ab */ goto L_008952ab;
L_0089524f:; BB(0x0089524f);
    /* 0089524f: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 00895252: jmp 0x8952a7 */ goto L_008952a7;
L_00895254:; BB(0x00895254);
    /* 00895254: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895256: je 0x8952b9 */ if (fZ) goto L_008952b9;
L_00895258:; BB(0x00895258);
    /* 00895258: mov edi, ebx */ r_edi = r_ebx;
    /* 0089525a: imul edi, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089525e: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00895261: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00895262: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x895267u); f_008581c5();
    /* 00895267: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895269: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089526a: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0089526d: je 0x895354 */ if (fZ) goto L_00895354;
L_00895273:; BB(0x00895273);
    /* 00895273: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00895275: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00895278: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089527b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089527d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089527e: mov edx, eax */ r_edx = r_eax;
    /* 00895280: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00895283: and dword ptr [esi + 0x34], 0 */ { u32 ad = (u32)(r_esi+0x34u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00895287: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0089528a: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089528d: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 00895290: mov dword ptr [esi], 0x16 */ W32((u32)(r_esi), 0x16u);
    /* 00895296: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00895299: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0089529c: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 0089529f: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 008952a2: jmp 0x8952ab */ goto L_008952ab;
L_008952a4:; BB(0x008952a4);
    /* 008952a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
L_008952a7:; BB(0x008952a7);
    /* 008952a7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008952a9: je 0x8952b9 */ if (fZ) goto L_008952b9;
L_008952ab:; BB(0x008952ab);
    /* 008952ab: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008952ae:; BB(0x008952ae);
    /* 008952ae: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008952b0: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008952b3: jne 0x895145 */ if (!fZ) goto L_00895145;
L_008952b9:; BB(0x008952b9);
    /* 008952b9: mov eax, 0x80004005 */ r_eax = 0x80004005u;
L_008952be:; BB(0x008952be);
    /* 008952be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008952bf:; BB(0x008952bf);
    /* 008952bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008952c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008952c1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008952c2: ret 8 */ FN_RET(0x008950d8); r_esp += 12; return;
L_008952c5:; BB(0x008952c5);
    /* 008952c5: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008952c8: cmp esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008952ce: ja 0x8952b9 */ if ((!fC&&!fZ)) goto L_008952b9;
L_008952d0:; BB(0x008952d0);
    /* 008952d0: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008952d4: jbe 0x8952df */ if ((fC||fZ)) goto L_008952df;
L_008952d6:; BB(0x008952d6);
    /* 008952d6: cmp byte ptr [edi], 0xd */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xdu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008952d9: jne 0x8952df */ if (!fZ) goto L_008952df;
L_008952db:; BB(0x008952db);
    /* 008952db: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008952dc: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008952df:; BB(0x008952df);
    /* 008952df: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008952e0: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008952e3: je 0x895339 */ if (fZ) goto L_00895339;
L_008952e5:; BB(0x008952e5);
    /* 008952e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008952e8: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008952eb: jae 0x895339 */ if (!fC) goto L_00895339;
L_008952ed:; BB(0x008952ed);
    /* 008952ed: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008952f0: imul eax, eax, 0xff */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008952f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008952f8: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x008952f8, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008952f8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008952fa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008952fc: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008952ff: mov ebx, eax */ r_ebx = r_eax;
    /* 00895301: movzx eax, byte ptr [edi - 2] */ r_eax = (u32)R8((u32)(r_edi+0xfffffffeu));
    /* 00895305: imul eax, eax, 0xff */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089530b: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x0089530b, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0089530b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0089530d: or ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00895313: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00895316: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00895318: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0089531a: movzx eax, byte ptr [edi - 1] */ r_eax = (u32)R8((u32)(r_edi+0xffffffffu));
    /* 0089531e: imul eax, eax, 0xff */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00895324: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x00895324, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00895324, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00895326: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00895329: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0089532b: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 0089532d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00895330: sub dword ptr [ebp + 0xc], 3 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00895334: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00895337: jne 0x8952e5 */ if (!fZ) goto L_008952e5;
L_00895339:; BB(0x00895339);
    /* 00895339: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089533c: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089533f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00895341: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00895343: and eax, 0x80004005 */ {  u32 a = r_eax; u32 b = 0x80004005u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895348: jmp 0x8952be */ goto L_008952be;
L_0089534d:; BB(0x0089534d);
    /* 0089534d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089534f: jmp 0x8952be */ goto L_008952be;
L_00895354:; BB(0x00895354);
    /* 00895354: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 00895359: jmp 0x8952be */ goto L_008952be;
}

void f_0089535e(void) /* sub_89535E */
{
    FN_ENTER(0x0089535e);
    /* 0089535e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00895362: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00895363: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
    /* 00895366: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00895367: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0089536b: cmp esi, dword ptr [ebx + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089536e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089536f: jbe 0x89537e */ if ((fC||fZ)) goto L_0089537e;
L_00895371:; BB(0x00895371);
    /* 00895371: push 0x99ba2c */ { u32 v = 0x99ba2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00895376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895377: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x89537cu); f_008a3ef0();
    /* 0089537c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089537d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089537e:; BB(0x0089537e);
    /* 0089537e: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00895382: mov ecx, esi */ r_ecx = r_esi;
    /* 00895384: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00895386: mov eax, ecx */ r_eax = r_ecx;
    /* 00895388: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089538b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089538d: mov ecx, eax */ r_ecx = r_eax;
    /* 0089538f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00895393: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00895396: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00895398: add dword ptr [ebx], eax */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089539a: sub dword ptr [ebx + 4], eax */ { u32 ad = (u32)(r_ebx+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089539d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089539e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089539f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008953a0: ret  */ FN_RET(0x0089535e); r_esp += 4; return;
}

void f_008953a1(void) /* sub_8953A1 */
{
    FN_ENTER(0x008953a1);
    /* 008953a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008953a3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008953a7: call 0x8cb0f0 */ r_esp -= 4; W32(r_esp, 0x8953acu); f_008cb0f0();
    /* 008953ac: int3  */ UNSUP(0x008953ac, "int3");
}

void f_008953ad(void) /* sub_8953AD */
{
    FN_ENTER(0x008953ad);
    /* 008953ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008953ae: mov ebp, esp */ r_ebp = r_esp;
    /* 008953b0: sub esp, 0x154 */ {  u32 a = r_esp; u32 b = 0x154u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008953b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008953b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008953b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008953b9: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008953bc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008953be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008953bf: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008953c2: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 008953c5: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 008953c8: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 008953cb: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 008953ce: call 0x8a62bf */ r_esp -= 4; W32(r_esp, 0x8953d3u); f_008a62bf();
    /* 008953d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008953d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008953d8: jne 0x8954d8 */ if (!fZ) goto L_008954d8;
L_008953de:; BB(0x008953de);
    /* 008953de: push 0x857d95 */ { u32 v = 0x857d95u; r_esp -= 4; W32(r_esp, v); }
    /* 008953e3: push 0x8953a1 */ { u32 v = 0x8953a1u; r_esp -= 4; W32(r_esp, v); }
    /* 008953e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008953e9: push 0x99ba60 */ { u32 v = 0x99ba60u; r_esp -= 4; W32(r_esp, v); }
    /* 008953ee: call 0x8a3f6d */ r_esp -= 4; W32(r_esp, 0x8953f3u); f_008a3f6d();
    /* 008953f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008953f6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008953f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008953fb: je 0x895810 */ if (fZ) goto L_00895810;
L_00895401:; BB(0x00895401);
    /* 00895401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895402: call 0x8a63c4 */ r_esp -= 4; W32(r_esp, 0x895407u); f_008a63c4();
    /* 00895407: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895409: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089540a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0089540d: je 0x895810 */ if (fZ) goto L_00895810;
L_00895413:; BB(0x00895413);
    /* 00895413: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00895414: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895417: call 0x8cb16c */ r_esp -= 4; W32(r_esp, 0x89541cu); f_008cb16c();
    /* 0089541c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089541e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089541f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895420: jne 0x895654 */ if (!fZ) goto L_00895654;
L_00895426:; BB(0x00895426);
    /* 00895426: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00895429: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0089542c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0089542f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00895432: push 0x89535e */ { u32 v = 0x89535eu; r_esp -= 4; W32(r_esp, v); }
    /* 00895437: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0089543a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089543b: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089543e: call 0x8a6280 */ r_esp -= 4; W32(r_esp, 0x895443u); f_008a6280();
    /* 00895443: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895446: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895449: call 0x8a4070 */ r_esp -= 4; W32(r_esp, 0x89544eu); f_008a4070();
    /* 0089544e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089544f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00895450: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00895451: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00895454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895455: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00895458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895459: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0089545c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089545d: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00895460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895461: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895464: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895467: call 0x8a4835 */ r_esp -= 4; W32(r_esp, 0x89546cu); f_008a4835();
    /* 0089546c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0089546f: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00895472: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895474: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00895477: je 0x8954a7 */ if (fZ) goto L_008954a7;
L_00895479:; BB(0x00895479);
    /* 00895479: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089547a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089547b: je 0x89549f */ if (fZ) goto L_0089549f;
L_0089547d:; BB(0x0089547d);
    /* 0089547d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089547e: je 0x895497 */ if (fZ) goto L_00895497;
L_00895480:; BB(0x00895480);
    /* 00895480: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895481: je 0x89548f */ if (fZ) goto L_0089548f;
L_00895483:; BB(0x00895483);
    /* 00895483: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00895484: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895485: jne 0x8954ad */ if (!fZ) goto L_008954ad;
L_00895487:; BB(0x00895487);
    /* 00895487: mov dword ptr [esi], 0x15 */ W32((u32)(r_esi), 0x15u);
    /* 0089548d: jmp 0x8954ad */ goto L_008954ad;
L_0089548f:; BB(0x0089548f);
    /* 0089548f: mov dword ptr [esi], 0x33 */ W32((u32)(r_esi), 0x33u);
    /* 00895495: jmp 0x8954ad */ goto L_008954ad;
L_00895497:; BB(0x00895497);
    /* 00895497: mov dword ptr [esi], 0x29 */ W32((u32)(r_esi), 0x29u);
    /* 0089549d: jmp 0x8954ad */ goto L_008954ad;
L_0089549f:; BB(0x0089549f);
    /* 0089549f: mov dword ptr [esi], 0x14 */ W32((u32)(r_esi), 0x14u);
    /* 008954a5: jmp 0x8954ad */ goto L_008954ad;
L_008954a7:; BB(0x008954a7);
    /* 008954a7: mov dword ptr [esi], 0x32 */ W32((u32)(r_esi), 0x32u);
L_008954ad:; BB(0x008954ad);
    /* 008954ad: cmp dword ptr [ebp - 0x24], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008954b1: mov ebx, 0x36314c41 */ r_ebx = 0x36314c41u;
    /* 008954b6: mov edi, 0x36315220 */ r_edi = 0x36315220u;
    /* 008954bb: jne 0x8954f8 */ if (!fZ) goto L_008954f8;
L_008954bd:; BB(0x008954bd);
    /* 008954bd: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008954c0: call 0x8a49a9 */ r_esp -= 4; W32(r_esp, 0x8954c5u); f_008a49a9();
    /* 008954c5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008954c7: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008954ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008954cb: je 0x8954f6 */ if (fZ) goto L_008954f6;
L_008954cd:; BB(0x008954cd);
    /* 008954cd: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008954ce: je 0x8954ee */ if (fZ) goto L_008954ee;
L_008954d0:; BB(0x008954d0);
    /* 008954d0: sub eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fC = (a < b); }
    /* 008954d3: je 0x8954e6 */ if (fZ) goto L_008954e6;
L_008954d5:; BB(0x008954d5);
    /* 008954d5: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008954d6: je 0x8954e2 */ if (fZ) goto L_008954e2;
L_008954d8:; BB(0x008954d8);
    /* 008954d8: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 008954dd: jmp 0x89593c */ goto L_0089593c;
L_008954e2:; BB(0x008954e2);
    /* 008954e2: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 008954e4: jmp 0x8954f8 */ goto L_008954f8;
L_008954e6:; BB(0x008954e6);
    /* 008954e6: mov dword ptr [esi], 0x36314c20 */ W32((u32)(r_esi), 0x36314c20u);
    /* 008954ec: jmp 0x8954f8 */ goto L_008954f8;
L_008954ee:; BB(0x008954ee);
    /* 008954ee: mov dword ptr [esi], 0x36315241 */ W32((u32)(r_esi), 0x36315241u);
    /* 008954f4: jmp 0x8954f8 */ goto L_008954f8;
L_008954f6:; BB(0x008954f6);
    /* 008954f6: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
L_008954f8:; BB(0x008954f8);
    /* 008954f8: cmp dword ptr [ebp - 0x24], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008954fc: jge 0x895507 */ if ((fS==fO)) goto L_00895507;
L_008954fe:; BB(0x008954fe);
    /* 008954fe: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895501: call 0x8a49bb */ r_esp -= 4; W32(r_esp, 0x895506u); f_008a49bb();
    /* 00895506: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00895507:; BB(0x00895507);
    /* 00895507: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089550b: jne 0x89551c */ if (!fZ) goto L_0089551c;
L_0089550d:; BB(0x0089550d);
    /* 0089550d: cmp dword ptr [ebp - 0x24], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00895511: jge 0x89551c */ if ((fS==fO)) goto L_0089551c;
L_00895513:; BB(0x00895513);
    /* 00895513: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895516: call 0x8a4b5c */ r_esp -= 4; W32(r_esp, 0x89551bu); f_008a4b5c();
    /* 0089551b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089551c:; BB(0x0089551c);
    /* 0089551c: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0089551f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895520: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895523: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895526: call 0x8a480a */ r_esp -= 4; W32(r_esp, 0x89552bu); f_008a480a();
    /* 0089552b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089552e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895530: je 0x895545 */ if (fZ) goto L_00895545;
L_00895532:; BB(0x00895532);
    /* 00895532: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895535: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895538: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089553b: call 0x8a61bd */ r_esp -= 4; W32(r_esp, 0x895540u); f_008a61bd();
    /* 00895540: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00895543: jmp 0x895579 */ goto L_00895579;
L_00895545:; BB(0x00895545);
    /* 00895545: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 00895548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895549: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089554c: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089554f: call 0x8a47e1 */ r_esp -= 4; W32(r_esp, 0x895554u); f_008a47e1();
    /* 00895554: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00895557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895559: je 0x895579 */ if (fZ) goto L_00895579;
L_0089555b:; BB(0x0089555b);
    /* 0089555b: fld qword ptr [ebp - 0x54] */ FPUSH(R_F64((u32)(r_ebp+0xffffffacu)));
    /* 0089555e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00895561: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00895565: fld qword ptr [0x99ba58] */ FPUSH(R_F64((u32)(0x99ba58u)));
    /* 0089556b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0089556e: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895571: call 0x8a4b26 */ r_esp -= 4; W32(r_esp, 0x895576u); f_008a4b26();
    /* 00895576: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00895579:; BB(0x00895579);
    /* 00895579: cmp dword ptr [esi], 0x29 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089557c: je 0x8955cc */ if (fZ) goto L_008955cc;
L_0089557e:; BB(0x0089557e);
    /* 0089557e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00895580: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895583: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895586: call 0x8a479b */ r_esp -= 4; W32(r_esp, 0x89558bu); f_008a479b();
    /* 0089558b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089558e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895590: je 0x8955cc */ if (fZ) goto L_008955cc;
L_00895592:; BB(0x00895592);
    /* 00895592: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895595: call 0x8a4b5c */ r_esp -= 4; W32(r_esp, 0x89559au); f_008a4b5c();
    /* 0089559a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089559c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089559f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008955a0: je 0x8955c6 */ if (fZ) goto L_008955c6;
L_008955a2:; BB(0x008955a2);
    /* 008955a2: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008955a5: je 0x8955be */ if (fZ) goto L_008955be;
L_008955a7:; BB(0x008955a7);
    /* 008955a7: cmp eax, 0x36314c20 */ {  u32 a = r_eax; u32 b = 0x36314c20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008955ac: je 0x8955ba */ if (fZ) goto L_008955ba;
L_008955ae:; BB(0x008955ae);
    /* 008955ae: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008955b0: jne 0x8955cc */ if (!fZ) goto L_008955cc;
L_008955b2:; BB(0x008955b2);
    /* 008955b2: mov dword ptr [esi], 0x36315241 */ W32((u32)(r_esi), 0x36315241u);
    /* 008955b8: jmp 0x8955cc */ goto L_008955cc;
L_008955ba:; BB(0x008955ba);
    /* 008955ba: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 008955bc: jmp 0x8955cc */ goto L_008955cc;
L_008955be:; BB(0x008955be);
    /* 008955be: mov dword ptr [esi], 0x33 */ W32((u32)(r_esi), 0x33u);
    /* 008955c4: jmp 0x8955cc */ goto L_008955cc;
L_008955c6:; BB(0x008955c6);
    /* 008955c6: mov dword ptr [esi], 0x15 */ W32((u32)(r_esi), 0x15u);
L_008955cc:; BB(0x008955cc);
    /* 008955cc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008955ce: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008955d1: je 0x8955e3 */ if (fZ) goto L_008955e3;
L_008955d3:; BB(0x008955d3);
    /* 008955d3: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008955d5: je 0x8955e3 */ if (fZ) goto L_008955e3;
L_008955d7:; BB(0x008955d7);
    /* 008955d7: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008955da: je 0x8955e3 */ if (fZ) goto L_008955e3;
L_008955dc:; BB(0x008955dc);
    /* 008955dc: cmp eax, 0x36315241 */ {  u32 a = r_eax; u32 b = 0x36315241u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008955e1: jne 0x8955ec */ if (!fZ) goto L_008955ec;
L_008955e3:; BB(0x008955e3);
    /* 008955e3: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008955e6: call 0x8a49a0 */ r_esp -= 4; W32(r_esp, 0x8955ebu); f_008a49a0();
    /* 008955eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008955ec:; BB(0x008955ec);
    /* 008955ec: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008955ee: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008955ef: cmp dword ptr [esi], 0x14 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008955f2: jne 0x89560b */ if (!fZ) goto L_0089560b;
L_008955f4:; BB(0x008955f4);
    /* 008955f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008955f5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 008955fa: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008955fd: call 0x8a49ed */ r_esp -= 4; W32(r_esp, 0x895602u); f_008a49ed();
    /* 00895602: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00895605: mov dword ptr [esi], 0x16 */ W32((u32)(r_esi), 0x16u);
L_0089560b:; BB(0x0089560b);
    /* 0089560b: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089560e: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895611: call 0x8a41e3 */ r_esp -= 4; W32(r_esp, 0x895616u); f_008a41e3();
    /* 00895616: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00895618: cmp eax, 0x33 */ {  u32 a = r_eax; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089561b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089561c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089561d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089561f: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 00895620: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00895622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895623: jg 0x89565e */ if ((!fZ&&fS==fO)) goto L_0089565e;
L_00895625:; BB(0x00895625);
    /* 00895625: je 0x895680 */ if (fZ) goto L_00895680;
L_00895627:; BB(0x00895627);
    /* 00895627: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089562a: je 0x89567b */ if (fZ) goto L_0089567b;
L_0089562c:; BB(0x0089562c);
    /* 0089562c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089562d: je 0x895676 */ if (fZ) goto L_00895676;
L_0089562f:; BB(0x0089562f);
    /* 0089562f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895630: je 0x895676 */ if (fZ) goto L_00895676;
L_00895632:; BB(0x00895632);
    /* 00895632: sub eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895635: je 0x89563c */ if (fZ) goto L_0089563c;
L_00895637:; BB(0x00895637);
    /* 00895637: sub eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089563a: jne 0x89563f */ if (!fZ) goto L_0089563f;
L_0089563c:; BB(0x0089563c);
    /* 0089563c: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
L_0089563f:; BB(0x0089563f);
    /* 0089563f: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895642: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895645: call 0x8a47cb */ r_esp -= 4; W32(r_esp, 0x89564au); f_008a47cb();
    /* 0089564a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0089564d: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895650: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895651: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895652: je 0x895689 */ if (fZ) goto L_00895689;
L_00895654:; BB(0x00895654);
    /* 00895654: mov esi, 0x80004005 */ r_esi = 0x80004005u;
    /* 00895659: jmp 0x895914 */ goto L_00895914;
L_0089565e:; BB(0x0089565e);
    /* 0089565e: sub eax, 0x36314c20 */ {  u32 a = r_eax; u32 b = 0x36314c20u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895663: je 0x89563c */ if (fZ) goto L_0089563c;
L_00895665:; BB(0x00895665);
    /* 00895665: sub eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895668: je 0x895680 */ if (fZ) goto L_00895680;
L_0089566a:; BB(0x0089566a);
    /* 0089566a: sub eax, 0x5df */ {  u32 a = r_eax; u32 b = 0x5dfu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089566f: je 0x89567b */ if (fZ) goto L_0089567b;
L_00895671:; BB(0x00895671);
    /* 00895671: sub eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895674: jne 0x89563f */ if (!fZ) goto L_0089563f;
L_00895676:; BB(0x00895676);
    /* 00895676: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00895679: jmp 0x89563f */ goto L_0089563f;
L_0089567b:; BB(0x0089567b);
    /* 0089567b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0089567e: jmp 0x89563f */ goto L_0089563f;
L_00895680:; BB(0x00895680);
    /* 00895680: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00895687: jmp 0x89563f */ goto L_0089563f;
L_00895689:; BB(0x00895689);
    /* 00895689: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0089568c: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089568f: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00895692: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00895695: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895698: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0089569b: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 0089569e: call 0x8a47b5 */ r_esp -= 4; W32(r_esp, 0x8956a3u); f_008a47b5();
    /* 008956a3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008956a5: cmp dword ptr [esi + 0x40], edi */ {  u32 a = R32((u32)(r_esi+0x40u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008956a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008956a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008956aa: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 008956ad: mov dword ptr [esi + 0x34], edi */ W32((u32)(r_esi+0x34u), r_edi);
    /* 008956b0: je 0x895912 */ if (fZ) goto L_00895912;
L_008956b6:; BB(0x008956b6);
    /* 008956b6: imul eax, dword ptr [ebp - 0x18] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008956ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008956bb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8956c0u); f_008581c5();
    /* 008956c0: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008956c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008956c3: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008956c6: je 0x895810 */ if (fZ) goto L_00895810;
L_008956cc:; BB(0x008956cc);
    /* 008956cc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008956cf: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008956d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008956d3: mov dword ptr [esi + 0x38], ebx */ W32((u32)(r_esi+0x38u), r_ebx);
    /* 008956d6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8956dbu); f_008581c5();
    /* 008956db: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008956dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008956de: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008956e1: je 0x895810 */ if (fZ) goto L_00895810;
L_008956e7:; BB(0x008956e7);
    /* 008956e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008956e9: cmp dword ptr [ebp - 0x18], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008956ec: jbe 0x895703 */ if ((fC||fZ)) goto L_00895703;
L_008956ee:; BB(0x008956ee);
    /* 008956ee: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 008956f1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008956f4: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008956f7: add ecx, dword ptr [esi + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008956fa: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 008956fd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008956fe: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00895701: jb 0x8956ee */ if (fC) goto L_008956ee;
L_00895703:; BB(0x00895703);
    /* 00895703: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895706: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895709: call 0x8a45aa */ r_esp -= 4; W32(r_esp, 0x89570eu); f_008a45aa();
    /* 0089570e: cmp dword ptr [esi], 0x29 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895711: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895712: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895713: jne 0x895912 */ if (!fZ) goto L_00895912;
L_00895719:; BB(0x00895719);
    /* 00895719: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0089571b: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089571e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00895721: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895724: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00895727: call 0x8a479b */ r_esp -= 4; W32(r_esp, 0x89572cu); f_008a479b();
    /* 0089572c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089572f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895731: je 0x895749 */ if (fZ) goto L_00895749;
L_00895733:; BB(0x00895733);
    /* 00895733: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00895736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895737: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0089573a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089573b: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089573e: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895741: call 0x8a4906 */ r_esp -= 4; W32(r_esp, 0x895746u); f_008a4906();
    /* 00895746: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00895749:; BB(0x00895749);
    /* 00895749: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089574b: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089574e: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895751: call 0x8a479b */ r_esp -= 4; W32(r_esp, 0x895756u); f_008a479b();
    /* 00895756: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00895759: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089575b: je 0x895774 */ if (fZ) goto L_00895774;
L_0089575d:; BB(0x0089575d);
    /* 0089575d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089575e: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00895761: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895762: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00895765: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895766: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895769: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089576c: call 0x8a4939 */ r_esp -= 4; W32(r_esp, 0x895771u); f_008a4939();
    /* 00895771: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00895774:; BB(0x00895774);
    /* 00895774: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00895777: fld dword ptr [edx + 0x130] */ FPUSH(R_F32((u32)(r_edx+0x130u)));
    /* 0089577d: fcomp qword ptr [0x99ba50] */ fx_compare(ST(0), R_F64((u32)(0x99ba50u))); FPOP();
    /* 00895783: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00895785: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00895788: jne 0x8957ed */ if (!fZ) goto L_008957ed;
L_0089578a:; BB(0x0089578a);
    /* 0089578a: lea ecx, [edx + 0x134] */ r_ecx = (u32)(r_edx+0x134u);
    /* 00895790: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00895792: fcomp qword ptr [0x99ba50] */ fx_compare(ST(0), R_F64((u32)(0x99ba50u))); FPOP();
    /* 00895798: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089579a: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0089579d: jne 0x8957ed */ if (!fZ) goto L_008957ed;
L_0089579f:; BB(0x0089579f);
    /* 0089579f: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008957a1: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008957a4: fmul dword ptr [edx + 0x130] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x130u));
    /* 008957aa: fdivr qword ptr [0x998178] */ ST(0) = R_F64((u32)(0x998178u)) / ST(0);
    /* 008957b0: fstp qword ptr [ebp - 0x4c] */ W_F64((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
L_008957b3:; BB(0x008957b3);
    /* 008957b3: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 008957b6: fmul qword ptr [0x99ba48] */ ST(0) = ST(0) * R_F64((u32)(0x99ba48u));
    /* 008957bc: fld qword ptr [ebp - 0x4c] */ FPUSH(R_F64((u32)(r_ebp+0xffffffb4u)));
    /* 008957bf: call 0x8c9c00 */ r_esp -= 4; W32(r_esp, 0x8957c4u); f_008c9c00();
    /* 008957c4: fmul qword ptr [0x99ba40] */ ST(0) = ST(0) * R_F64((u32)(0x99ba40u));
    /* 008957ca: fadd qword ptr [0x99ba38] */ ST(0) = ST(0) + R_F64((u32)(0x99ba38u));
    /* 008957d0: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8957d5u); f_008cb1e8();
    /* 008957d5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008957d8: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008957db: cmp dword ptr [ebp - 0x14], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008957e2: mov byte ptr [ebp + ecx - 0x154], al */ W8((u32)(r_ebp+r_ecx+0xfffffeacu), (u8)r_eax);
    /* 008957e9: jl 0x8957b3 */ if ((fS!=fO)) goto L_008957b3;
L_008957eb:; BB(0x008957eb);
    /* 008957eb: jmp 0x8957fe */ goto L_008957fe;
L_008957ed:; BB(0x008957ed);
    /* 008957ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008957ef:; BB(0x008957ef);
    /* 008957ef: mov byte ptr [ebp + eax - 0x154], al */ W8((u32)(r_ebp+r_eax+0xfffffeacu), (u8)r_eax);
    /* 008957f6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008957f7: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008957fc: jl 0x8957ef */ if ((fS!=fO)) goto L_008957ef;
L_008957fe:; BB(0x008957fe);
    /* 008957fe: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00895803: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x895808u); f_008581c5();
    /* 00895808: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089580a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089580b: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0089580e: jne 0x89581a */ if (!fZ) goto L_0089581a;
L_00895810:; BB(0x00895810);
    /* 00895810: mov esi, 0x8007000e */ r_esi = 0x8007000eu;
    /* 00895815: jmp 0x895914 */ goto L_00895914;
L_0089581a:; BB(0x0089581a);
    /* 0089581a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089581c: cmp dword ptr [ebp - 0x28], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089581f: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
    /* 00895822: jle 0x895881 */ if ((fZ||fS!=fO)) goto L_00895881;
L_00895824:; BB(0x00895824);
    /* 00895824: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00895826:; BB(0x00895826);
    /* 00895826: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00895829: movzx edx, byte ptr [edi + edx] */ r_edx = (u32)R8((u32)(r_edi+r_edx));
    /* 0089582d: mov dl, byte ptr [ebp + edx - 0x154] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xfffffeacu))) & 0xffu);
    /* 00895834: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00895837: mov ecx, eax */ r_ecx = r_eax;
    /* 00895839: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0089583c: mov byte ptr [ecx + ebx], dl */ W8((u32)(r_ecx+r_ebx), (u8)r_edx);
    /* 0089583f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00895842: movzx edx, byte ptr [edi + edx + 1] */ r_edx = (u32)R8((u32)(r_edi+r_edx+0x1u));
    /* 00895847: mov dl, byte ptr [ebp + edx - 0x154] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xfffffeacu))) & 0xffu);
    /* 0089584e: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00895851: mov byte ptr [ebx + ecx + 1], dl */ W8((u32)(r_ebx+r_ecx+0x1u), (u8)r_edx);
    /* 00895855: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00895858: movzx edx, byte ptr [edi + edx + 2] */ r_edx = (u32)R8((u32)(r_edi+r_edx+0x2u));
    /* 0089585d: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00895860: mov dl, byte ptr [ebp + edx - 0x154] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xfffffeacu))) & 0xffu);
    /* 00895867: mov byte ptr [ebx + ecx + 2], dl */ W8((u32)(r_ebx+r_ecx+0x2u), (u8)r_edx);
    /* 0089586b: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0089586e: mov bl, byte ptr [eax + ebx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebx))) & 0xffu);
    /* 00895871: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00895874: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00895875: mov byte ptr [edx + ecx + 3], bl */ W8((u32)(r_edx+r_ecx+0x3u), (u8)r_ebx);
    /* 00895879: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089587c: cmp eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089587f: jl 0x895826 */ if ((fS!=fO)) goto L_00895826;
L_00895881:; BB(0x00895881);
    /* 00895881: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00895884: jge 0x8958df */ if ((fS==fO)) goto L_008958df;
L_00895886:; BB(0x00895886);
    /* 00895886: lea edi, [eax + eax*2] */ r_edi = (u32)(r_eax+r_eax*2);
L_00895889:; BB(0x00895889);
    /* 00895889: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089588c: movzx edx, byte ptr [edi + edx] */ r_edx = (u32)R8((u32)(r_edi+r_edx));
    /* 00895890: mov dl, byte ptr [ebp + edx - 0x154] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xfffffeacu))) & 0xffu);
    /* 00895897: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 0089589a: mov ecx, eax */ r_ecx = r_eax;
    /* 0089589c: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0089589f: mov byte ptr [ecx + ebx], dl */ W8((u32)(r_ecx+r_ebx), (u8)r_edx);
    /* 008958a2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008958a5: movzx edx, byte ptr [edi + edx + 1] */ r_edx = (u32)R8((u32)(r_edi+r_edx+0x1u));
    /* 008958aa: mov dl, byte ptr [ebp + edx - 0x154] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xfffffeacu))) & 0xffu);
    /* 008958b1: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 008958b4: mov byte ptr [ebx + ecx + 1], dl */ W8((u32)(r_ebx+r_ecx+0x1u), (u8)r_edx);
    /* 008958b8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008958bb: movzx edx, byte ptr [edi + edx + 2] */ r_edx = (u32)R8((u32)(r_edi+r_edx+0x2u));
    /* 008958c0: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 008958c3: mov dl, byte ptr [ebp + edx - 0x154] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xfffffeacu))) & 0xffu);
    /* 008958ca: mov byte ptr [ebx + ecx + 2], dl */ W8((u32)(r_ebx+r_ecx+0x2u), (u8)r_edx);
    /* 008958ce: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008958d1: or byte ptr [edx + ecx + 3], 0xff */ { u32 ad = (u32)(r_edx+r_ecx+0x3u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008958d6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008958d7: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008958da: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008958dd: jl 0x895889 */ if ((fS!=fO)) goto L_00895889;
L_008958df:; BB(0x008958df);
    /* 008958df: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008958e4: jge 0x895912 */ if ((fS==fO)) goto L_00895912;
L_008958e6:; BB(0x008958e6);
    /* 008958e6: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
L_008958e9:; BB(0x008958e9);
    /* 008958e9: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008958ec: or byte ptr [eax + ecx], 0xff */ { u32 ad = (u32)(r_eax+r_ecx);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008958f0: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008958f3: or byte ptr [eax + ecx + 1], 0xff */ { u32 ad = (u32)(r_eax+r_ecx+0x1u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008958f8: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008958fb: or byte ptr [eax + ecx + 2], 0xff */ { u32 ad = (u32)(r_eax+r_ecx+0x2u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00895900: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00895903: or byte ptr [eax + ecx + 3], 0xff */ { u32 ad = (u32)(r_eax+r_ecx+0x3u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00895908: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089590b: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00895910: jl 0x8958e9 */ if ((fS!=fO)) goto L_008958e9;
L_00895912:; BB(0x00895912);
    /* 00895912: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00895914:; BB(0x00895914);
    /* 00895914: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00895916: cmp dword ptr [ebp - 4], edi */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895919: je 0x89592c */ if (fZ) goto L_0089592c;
L_0089591b:; BB(0x0089591b);
    /* 0089591b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089591c: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0089591f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895920: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00895923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895924: call 0x8a471a */ r_esp -= 4; W32(r_esp, 0x895929u); f_008a471a();
    /* 00895929: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0089592c:; BB(0x0089592c);
    /* 0089592c: cmp dword ptr [ebp - 0x1c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089592f: je 0x89593a */ if (fZ) goto L_0089593a;
L_00895931:; BB(0x00895931);
    /* 00895931: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895934: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x895939u); f_00857e98();
    /* 00895939: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089593a:; BB(0x0089593a);
    /* 0089593a: mov eax, esi */ r_eax = r_esi;
L_0089593c:; BB(0x0089593c);
    /* 0089593c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089593d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089593e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089593f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00895940: ret 8 */ FN_RET(0x008953ad); r_esp += 12; return;
}

void f_00895943(void) /* sub_895943 */
{
    FN_ENTER(0x00895943);
    /* 00895943: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00895944: mov ebp, esp */ r_ebp = r_esp;
    /* 00895946: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00895949: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089594d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089594e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00895950: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00895951: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 00895954: jb 0x89596e */ if (fC) goto L_0089596e;
L_00895956:; BB(0x00895956);
    /* 00895956: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00895959: cmp dword ptr [eax], 0x20534444 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x20534444u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089595f: jne 0x89596e */ if (!fZ) goto L_0089596e;
L_00895961:; BB(0x00895961);
    /* 00895961: sub dword ptr [ebp + 0xc], 4 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00895965: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00895968: cmp dword ptr [ebp + 0xc], 0x7c */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089596c: jae 0x895978 */ if (!fC) goto L_00895978;
L_0089596e:; BB(0x0089596e);
    /* 0089596e: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00895973: jmp 0x895c7e */ goto L_00895c7e;
L_00895978:; BB(0x00895978);
    /* 00895978: sub dword ptr [ebp + 0xc], 0x7c */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0089597c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089597d: mov esi, eax */ r_esi = r_eax;
    /* 0089597f: add eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00895982: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00895985: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00895988: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0089598b: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0089598e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00895990: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 00895993: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00895994: test byte ptr [esi + 6], 0x80 */ {  u32 a = R8((u32)(r_esi+0x6u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00895998: je 0x89599f */ if (fZ) goto L_0089599f;
L_0089599a:; BB(0x0089599a);
    /* 0089599a: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0089599d: jmp 0x8959a1 */ goto L_008959a1;
L_0089599f:; BB(0x0089599f);
    /* 0089599f: mov eax, edx */ r_eax = r_edx;
L_008959a1:; BB(0x008959a1);
    /* 008959a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008959a3: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 008959a6: jne 0x8959ab */ if (!fZ) goto L_008959ab;
L_008959a8:; BB(0x008959a8);
    /* 008959a8: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
L_008959ab:; BB(0x008959ab);
    /* 008959ab: mov eax, dword ptr [esi + 0x6c] */ r_eax = R32((u32)(r_esi+0x6cu));
    /* 008959ae: mov ecx, 0xfc00 */ r_ecx = 0xfc00u;
    /* 008959b3: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008959b5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008959b7: jne 0x8959c2 */ if (!fZ) goto L_008959c2;
L_008959b9:; BB(0x008959b9);
    /* 008959b9: mov dword ptr [ebp - 0x14], 6 */ W32((u32)(r_ebp+0xffffffecu), 0x6u);
    /* 008959c0: jmp 0x8959cd */ goto L_008959cd;
L_008959c2:; BB(0x008959c2);
    /* 008959c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008959c4: jne 0x895c78 */ if (!fZ) goto L_00895c78;
L_008959ca:; BB(0x008959ca);
    /* 008959ca: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_008959cd:; BB(0x008959cd);
    /* 008959cd: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008959d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008959d2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008959d5: jne 0x8959da */ if (!fZ) goto L_008959da;
L_008959d7:; BB(0x008959d7);
    /* 008959d7: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_008959da:; BB(0x008959da);
    /* 008959da: cmp dword ptr [0xa341f8], 0 */ {  u32 a = R32((u32)(0xa341f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008959e1: mov edi, 0xa341f8 */ r_edi = 0xa341f8u;
    /* 008959e6: je 0x895a8c */ if (fZ) goto L_00895a8c;
L_008959ec:; BB(0x008959ec);
    /* 008959ec: cmp dword ptr [esi + 0x48], 0x20 */ {  u32 a = R32((u32)(r_esi+0x48u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008959f0: jne 0x895a7b */ if (!fZ) goto L_00895a7b;
L_008959f6:; BB(0x008959f6);
    /* 008959f6: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 008959f9: cmp dword ptr [esi + 0x4c], eax */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008959fc: jne 0x895a7b */ if (!fZ) goto L_00895a7b;
L_008959fe:; BB(0x008959fe);
    /* 008959fe: mov ebx, eax */ r_ebx = r_eax;
    /* 00895a00: and ebx, 0xc4440 */ {  u32 a = r_ebx; u32 b = 0xc4440u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00895a06: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 00895a09: mov ebx, eax */ r_ebx = r_eax;
    /* 00895a0b: and ebx, 0xc4040 */ {  u32 a = r_ebx; u32 b = 0xc4040u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00895a11: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00895a14: mov ecx, eax */ r_ecx = r_eax;
    /* 00895a16: mov edx, eax */ r_edx = r_eax;
    /* 00895a18: mov ebx, eax */ r_ebx = r_eax;
    /* 00895a1a: and ecx, 0xc4462 */ {  u32 a = r_ecx; u32 b = 0xc4462u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00895a20: and edx, 0xe4040 */ {  u32 a = r_edx; u32 b = 0xe4040u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00895a26: and ebx, 0x80003 */ {  u32 a = r_ebx; u32 b = 0x80003u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00895a2c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00895a2e: je 0x895a38 */ if (fZ) goto L_00895a38;
L_00895a30:; BB(0x00895a30);
    /* 00895a30: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00895a33: cmp eax, dword ptr [edi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a36: jne 0x895a78 */ if (!fZ) goto L_00895a78;
L_00895a38:; BB(0x00895a38);
    /* 00895a38: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a3a: je 0x895a44 */ if (fZ) goto L_00895a44;
L_00895a3c:; BB(0x00895a3c);
    /* 00895a3c: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 00895a3f: cmp eax, dword ptr [edi + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a42: jne 0x895a78 */ if (!fZ) goto L_00895a78;
L_00895a44:; BB(0x00895a44);
    /* 00895a44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a46: je 0x895a50 */ if (fZ) goto L_00895a50;
L_00895a48:; BB(0x00895a48);
    /* 00895a48: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00895a4b: cmp eax, dword ptr [edi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a4e: jne 0x895a78 */ if (!fZ) goto L_00895a78;
L_00895a50:; BB(0x00895a50);
    /* 00895a50: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a54: je 0x895a5e */ if (fZ) goto L_00895a5e;
L_00895a56:; BB(0x00895a56);
    /* 00895a56: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 00895a59: cmp eax, dword ptr [edi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a5c: jne 0x895a78 */ if (!fZ) goto L_00895a78;
L_00895a5e:; BB(0x00895a5e);
    /* 00895a5e: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a62: je 0x895a6c */ if (fZ) goto L_00895a6c;
L_00895a64:; BB(0x00895a64);
    /* 00895a64: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00895a67: cmp eax, dword ptr [edi + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a6a: jne 0x895a78 */ if (!fZ) goto L_00895a78;
L_00895a6c:; BB(0x00895a6c);
    /* 00895a6c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a6e: je 0x895a89 */ if (fZ) goto L_00895a89;
L_00895a70:; BB(0x00895a70);
    /* 00895a70: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 00895a73: cmp eax, dword ptr [edi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a76: je 0x895a89 */ if (fZ) goto L_00895a89;
L_00895a78:; BB(0x00895a78);
    /* 00895a78: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
L_00895a7b:; BB(0x00895a7b);
    /* 00895a7b: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00895a7e: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895a81: jne 0x8959ec */ if (!fZ) goto L_008959ec;
L_00895a87:; BB(0x00895a87);
    /* 00895a87: jmp 0x895a8c */ goto L_00895a8c;
L_00895a89:; BB(0x00895a89);
    /* 00895a89: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
L_00895a8c:; BB(0x00895a8c);
    /* 00895a8c: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 00895a8e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895a90: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00895a93: je 0x895c78 */ if (fZ) goto L_00895c78;
L_00895a99:; BB(0x00895a99);
    /* 00895a99: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00895a9a: call 0x88f68c */ r_esp -= 4; W32(r_esp, 0x895a9fu); f_0088f68c();
    /* 00895a9f: test byte ptr [esi + 6], 0x80 */ {  u32 a = R8((u32)(r_esi+0x6u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00895aa3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895aa4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00895aa7: je 0x895ab2 */ if (fZ) goto L_00895ab2;
L_00895aa9:; BB(0x00895aa9);
    /* 00895aa9: mov dword ptr [ebx + 0x44], 4 */ W32((u32)(r_ebx+0x44u), 0x4u);
    /* 00895ab0: jmp 0x895ac2 */ goto L_00895ac2;
L_00895ab2:; BB(0x00895ab2);
    /* 00895ab2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00895ab4: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895ab8: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00895abb: lea ecx, [ecx + ecx + 3] */ r_ecx = (u32)(r_ecx+r_ecx+0x3u);
    /* 00895abf: mov dword ptr [ebx + 0x44], ecx */ W32((u32)(r_ebx+0x44u), r_ecx);
L_00895ac2:; BB(0x00895ac2);
    /* 00895ac2: cmp dword ptr [eax + 4], 1 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895ac6: jne 0x895ae4 */ if (!fZ) goto L_00895ae4;
L_00895ac8:; BB(0x00895ac8);
    /* 00895ac8: mov eax, 0x400 */ r_eax = 0x400u;
    /* 00895acd: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00895ad0: jb 0x895c78 */ if (fC) goto L_00895c78;
L_00895ad6:; BB(0x00895ad6);
    /* 00895ad6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00895ad9: add dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00895adc: sub dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00895adf: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00895ae2: jmp 0x895ae8 */ goto L_00895ae8;
L_00895ae4:; BB(0x00895ae4);
    /* 00895ae4: and dword ptr [ebp - 0x28], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00895ae8:; BB(0x00895ae8);
    /* 00895ae8: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00895aec: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00895af0: jbe 0x895c6d */ if ((fC||fZ)) goto L_00895c6d;
L_00895af6:; BB(0x00895af6);
    /* 00895af6: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00895af9: jmp 0x895afe */ goto L_00895afe;
L_00895afb:; BB(0x00895afb);
    /* 00895afb: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
L_00895afe:; BB(0x00895afe);
    /* 00895afe: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895b02: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00895b05: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00895b08: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 00895b0b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00895b0e: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00895b11: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00895b14: je 0x895b3b */ if (fZ) goto L_00895b3b;
L_00895b16:; BB(0x00895b16);
    /* 00895b16: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00895b18: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x895b1du); f_008581c5();
    /* 00895b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895b1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895b20: je 0x895b2b */ if (fZ) goto L_00895b2b;
L_00895b22:; BB(0x00895b22);
    /* 00895b22: mov ecx, eax */ r_ecx = r_eax;
    /* 00895b24: call 0x8941db */ r_esp -= 4; W32(r_esp, 0x895b29u); f_008941db();
    /* 00895b29: jmp 0x895b2d */ goto L_00895b2d;
L_00895b2b:; BB(0x00895b2b);
    /* 00895b2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00895b2d:; BB(0x00895b2d);
    /* 00895b2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895b2f: je 0x895c71 */ if (fZ) goto L_00895c71;
L_00895b35:; BB(0x00895b35);
    /* 00895b35: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00895b38: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
L_00895b3b:; BB(0x00895b3b);
    /* 00895b3b: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00895b3f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00895b43: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00895b46: jbe 0x895c5e */ if ((fC||fZ)) goto L_00895c5e;
L_00895b4c:; BB(0x00895b4c);
    /* 00895b4c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895b50: jne 0x895b57 */ if (!fZ) goto L_00895b57;
L_00895b52:; BB(0x00895b52);
    /* 00895b52: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00895b55: jmp 0x895b7b */ goto L_00895b7b;
L_00895b57:; BB(0x00895b57);
    /* 00895b57: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00895b59: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x895b5eu); f_008581c5();
    /* 00895b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895b60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895b61: je 0x895b6c */ if (fZ) goto L_00895b6c;
L_00895b63:; BB(0x00895b63);
    /* 00895b63: mov ecx, eax */ r_ecx = r_eax;
    /* 00895b65: call 0x8941db */ r_esp -= 4; W32(r_esp, 0x895b6au); f_008941db();
    /* 00895b6a: jmp 0x895b6e */ goto L_00895b6e;
L_00895b6c:; BB(0x00895b6c);
    /* 00895b6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00895b6e:; BB(0x00895b6e);
    /* 00895b6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895b70: je 0x895c71 */ if (fZ) goto L_00895c71;
L_00895b76:; BB(0x00895b76);
    /* 00895b76: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00895b79: mov esi, eax */ r_esi = r_eax;
L_00895b7b:; BB(0x00895b7b);
    /* 00895b7b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00895b7e: cmp eax, 0x31545844 */ {  u32 a = r_eax; u32 b = 0x31545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895b83: je 0x895bd7 */ if (fZ) goto L_00895bd7;
L_00895b85:; BB(0x00895b85);
    /* 00895b85: cmp eax, 0x32545844 */ {  u32 a = r_eax; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895b8a: je 0x895bcc */ if (fZ) goto L_00895bcc;
L_00895b8c:; BB(0x00895b8c);
    /* 00895b8c: cmp eax, 0x32595559 */ {  u32 a = r_eax; u32 b = 0x32595559u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895b91: je 0x895bbd */ if (fZ) goto L_00895bbd;
L_00895b93:; BB(0x00895b93);
    /* 00895b93: cmp eax, 0x33545844 */ {  u32 a = r_eax; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895b98: je 0x895bcc */ if (fZ) goto L_00895bcc;
L_00895b9a:; BB(0x00895b9a);
    /* 00895b9a: cmp eax, 0x34545844 */ {  u32 a = r_eax; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895b9f: je 0x895bcc */ if (fZ) goto L_00895bcc;
L_00895ba1:; BB(0x00895ba1);
    /* 00895ba1: cmp eax, 0x35545844 */ {  u32 a = r_eax; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895ba6: je 0x895bcc */ if (fZ) goto L_00895bcc;
L_00895ba8:; BB(0x00895ba8);
    /* 00895ba8: cmp eax, 0x59565955 */ {  u32 a = r_eax; u32 b = 0x59565955u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895bad: je 0x895bbd */ if (fZ) goto L_00895bbd;
L_00895baf:; BB(0x00895baf);
    /* 00895baf: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00895bb2: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00895bb5: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00895bb8: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00895bbb: jmp 0x895bc5 */ goto L_00895bc5;
L_00895bbd:; BB(0x00895bbd);
    /* 00895bbd: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 00895bc0: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00895bc2: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
L_00895bc5:; BB(0x00895bc5);
    /* 00895bc5: mov ecx, eax */ r_ecx = r_eax;
    /* 00895bc7: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00895bca: jmp 0x895be9 */ goto L_00895be9;
L_00895bcc:; BB(0x00895bcc);
    /* 00895bcc: lea eax, [edi + 3] */ r_eax = (u32)(r_edi+0x3u);
    /* 00895bcf: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00895bd2: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00895bd5: jmp 0x895be0 */ goto L_00895be0;
L_00895bd7:; BB(0x00895bd7);
    /* 00895bd7: lea eax, [edi + 3] */ r_eax = (u32)(r_edi+0x3u);
    /* 00895bda: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00895bdd: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
L_00895be0:; BB(0x00895be0);
    /* 00895be0: lea ecx, [ebx + 3] */ r_ecx = (u32)(r_ebx+0x3u);
    /* 00895be3: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00895be6: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
L_00895be9:; BB(0x00895be9);
    /* 00895be9: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00895bec: and dword ptr [esi + 0x38], 0 */ { u32 ad = (u32)(r_esi+0x38u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00895bf0: and dword ptr [esi + 0x3c], 0 */ { u32 ad = (u32)(r_esi+0x3cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00895bf4: mov edx, ecx */ r_edx = r_ecx;
    /* 00895bf6: imul edx, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00895bfa: cmp dword ptr [ebp + 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00895bfd: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 00895bff: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00895c02: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00895c05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00895c08: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00895c0b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00895c0e: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00895c11: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00895c14: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 00895c17: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00895c1a: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 00895c1d: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00895c20: jb 0x895c78 */ if (fC) goto L_00895c78;
L_00895c22:; BB(0x00895c22);
    /* 00895c22: add dword ptr [ebp - 4], edx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00895c25: sub dword ptr [ebp + 0xc], edx */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00895c28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00895c2a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00895c2b: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895c2d: jne 0x895c33 */ if (!fZ) goto L_00895c33;
L_00895c2f:; BB(0x00895c2f);
    /* 00895c2f: mov edi, eax */ r_edi = r_eax;
    /* 00895c31: jmp 0x895c35 */ goto L_00895c35;
L_00895c33:; BB(0x00895c33);
    /* 00895c33: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
L_00895c35:; BB(0x00895c35);
    /* 00895c35: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895c37: jne 0x895c3d */ if (!fZ) goto L_00895c3d;
L_00895c39:; BB(0x00895c39);
    /* 00895c39: mov ebx, eax */ r_ebx = r_eax;
    /* 00895c3b: jmp 0x895c3f */ goto L_00895c3f;
L_00895c3d:; BB(0x00895c3d);
    /* 00895c3d: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
L_00895c3f:; BB(0x00895c3f);
    /* 00895c3f: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895c42: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00895c45: jne 0x895c4c */ if (!fZ) goto L_00895c4c;
L_00895c47:; BB(0x00895c47);
    /* 00895c47: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00895c4a: jmp 0x895c4f */ goto L_00895c4f;
L_00895c4c:; BB(0x00895c4c);
    /* 00895c4c: shr dword ptr [ebp + 8], 1 */ { u32 ad = (u32)(r_ebp+0x8u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); W32(ad, r);  } }
L_00895c4f:; BB(0x00895c4f);
    /* 00895c4f: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00895c52: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00895c55: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00895c58: jb 0x895b4c */ if (fC) goto L_00895b4c;
L_00895c5e:; BB(0x00895c5e);
    /* 00895c5e: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00895c61: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00895c64: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00895c67: jb 0x895afb */ if (fC) goto L_00895afb;
L_00895c6d:; BB(0x00895c6d);
    /* 00895c6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895c6f: jmp 0x895c7d */ goto L_00895c7d;
L_00895c71:; BB(0x00895c71);
    /* 00895c71: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 00895c76: jmp 0x895c7d */ goto L_00895c7d;
L_00895c78:; BB(0x00895c78);
    /* 00895c78: mov eax, 0x80004005 */ r_eax = 0x80004005u;
L_00895c7d:; BB(0x00895c7d);
    /* 00895c7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00895c7e:; BB(0x00895c7e);
    /* 00895c7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00895c7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00895c80: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00895c81: ret 8 */ FN_RET(0x00895943); r_esp += 12; return;
}

void f_00895c84(void) /* sub_895C84 */
{
    FN_ENTER(0x00895c84);
    /* 00895c84: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00895c88: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00895c8b: jb 0x895cac */ if (fC) goto L_00895cac;
L_00895c8d:; BB(0x00895c8d);
    /* 00895c8d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00895c91: cmp word ptr [eax], 0x4d42 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x4d42u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00895c96: jne 0x895cac */ if (!fZ) goto L_00895cac;
L_00895c98:; BB(0x00895c98);
    /* 00895c98: cmp dword ptr [eax + 2], edx */ {  u32 a = R32((u32)(r_eax+0x2u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00895c9b: ja 0x895cac */ if ((!fC&&!fZ)) goto L_00895cac;
L_00895c9d:; BB(0x00895c9d);
    /* 00895c9d: add edx, -0xe */ {  u32 a = r_edx; u32 b = 0xfffffff2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00895ca0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00895ca1: add eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00895ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895ca5: call 0x894269 */ r_esp -= 4; W32(r_esp, 0x895caau); f_00894269();
    /* 00895caa: jmp 0x895cb1 */ goto L_00895cb1;
L_00895cac:; BB(0x00895cac);
    /* 00895cac: mov eax, 0x80004005 */ r_eax = 0x80004005u;
L_00895cb1:; BB(0x00895cb1);
    /* 00895cb1: ret 8 */ FN_RET(0x00895c84); r_esp += 12; return;
}

void f_00895cb4(void) /* sub_895CB4 */
{
    FN_ENTER(0x00895cb4);
    /* 00895cb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00895cb5: mov ebp, esp */ r_ebp = r_esp;
    /* 00895cb7: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00895cba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00895cbb: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00895cbe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00895cbf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00895cc0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00895cc2: mov esi, ecx */ r_esi = r_ecx;
    /* 00895cc4: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00895cc7: mov dword ptr [ebp - 0x1c], 5 */ W32((u32)(r_ebp+0xffffffe4u), 0x5u);
    /* 00895cce: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 00895cd5: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 00895cdc: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 00895ce3: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 00895cea: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 00895cf1: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
L_00895cf4:; BB(0x00895cf4);
    /* 00895cf4: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00895cf7: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00895cfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00895cfd: mov eax, dword ptr [ebp + eax*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 00895d01: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 00895d04: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895d06: mov dword ptr [esi + 0x44], 3 */ W32((u32)(r_esi+0x44u), 0x3u);
    /* 00895d0d: je 0x895d7b */ if (fZ) goto L_00895d7b;
L_00895d0f:; BB(0x00895d0f);
    /* 00895d0f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895d10: je 0x895d6c */ if (fZ) goto L_00895d6c;
L_00895d12:; BB(0x00895d12);
    /* 00895d12: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895d13: je 0x895d5d */ if (fZ) goto L_00895d5d;
L_00895d15:; BB(0x00895d15);
    /* 00895d15: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895d16: je 0x895d4e */ if (fZ) goto L_00895d4e;
L_00895d18:; BB(0x00895d18);
    /* 00895d18: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895d19: je 0x895d3f */ if (fZ) goto L_00895d3f;
L_00895d1b:; BB(0x00895d1b);
    /* 00895d1b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895d1c: je 0x895d30 */ if (fZ) goto L_00895d30;
L_00895d1e:; BB(0x00895d1e);
    /* 00895d1e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00895d1f: jne 0x895d8a */ if (!fZ) goto L_00895d8a;
L_00895d21:; BB(0x00895d21);
    /* 00895d21: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d24: mov ecx, esi */ r_ecx = r_esi;
    /* 00895d26: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d29: call 0x894269 */ r_esp -= 4; W32(r_esp, 0x895d2eu); f_00894269();
    /* 00895d2e: jmp 0x895d88 */ goto L_00895d88;
L_00895d30:; BB(0x00895d30);
    /* 00895d30: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d33: mov ecx, esi */ r_ecx = r_esi;
    /* 00895d35: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d38: call 0x8950d8 */ r_esp -= 4; W32(r_esp, 0x895d3du); f_008950d8();
    /* 00895d3d: jmp 0x895d88 */ goto L_00895d88;
L_00895d3f:; BB(0x00895d3f);
    /* 00895d3f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d42: mov ecx, esi */ r_ecx = r_esi;
    /* 00895d44: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d47: call 0x895943 */ r_esp -= 4; W32(r_esp, 0x895d4cu); f_00895943();
    /* 00895d4c: jmp 0x895d88 */ goto L_00895d88;
L_00895d4e:; BB(0x00895d4e);
    /* 00895d4e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d51: mov ecx, esi */ r_ecx = r_esi;
    /* 00895d53: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d56: call 0x8953ad */ r_esp -= 4; W32(r_esp, 0x895d5bu); f_008953ad();
    /* 00895d5b: jmp 0x895d88 */ goto L_00895d88;
L_00895d5d:; BB(0x00895d5d);
    /* 00895d5d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d60: mov ecx, esi */ r_ecx = r_esi;
    /* 00895d62: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d65: call 0x894c31 */ r_esp -= 4; W32(r_esp, 0x895d6au); f_00894c31();
    /* 00895d6a: jmp 0x895d88 */ goto L_00895d88;
L_00895d6c:; BB(0x00895d6c);
    /* 00895d6c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d6f: mov ecx, esi */ r_ecx = r_esi;
    /* 00895d71: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d74: call 0x8949c1 */ r_esp -= 4; W32(r_esp, 0x895d79u); f_008949c1();
    /* 00895d79: jmp 0x895d88 */ goto L_00895d88;
L_00895d7b:; BB(0x00895d7b);
    /* 00895d7b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d7e: mov ecx, esi */ r_ecx = r_esi;
    /* 00895d80: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00895d83: call 0x895c84 */ r_esp -= 4; W32(r_esp, 0x895d88u); f_00895c84();
L_00895d88:; BB(0x00895d88);
    /* 00895d88: mov ebx, eax */ r_ebx = r_eax;
L_00895d8a:; BB(0x00895d8a);
    /* 00895d8a: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00895d8c: jge 0x895def */ if ((fS==fO)) goto L_00895def;
L_00895d8e:; BB(0x00895d8e);
    /* 00895d8e: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00895d91: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895d93: je 0x895da1 */ if (fZ) goto L_00895da1;
L_00895d95:; BB(0x00895d95);
    /* 00895d95: cmp dword ptr [esi + 0x38], edi */ {  u32 a = R32((u32)(r_esi+0x38u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895d98: je 0x895da1 */ if (fZ) goto L_00895da1;
L_00895d9a:; BB(0x00895d9a);
    /* 00895d9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895d9b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x895da0u); f_00857e98();
    /* 00895da0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00895da1:; BB(0x00895da1);
    /* 00895da1: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00895da4: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895da6: je 0x895db4 */ if (fZ) goto L_00895db4;
L_00895da8:; BB(0x00895da8);
    /* 00895da8: cmp dword ptr [esi + 0x3c], edi */ {  u32 a = R32((u32)(r_esi+0x3cu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895dab: je 0x895db4 */ if (fZ) goto L_00895db4;
L_00895dad:; BB(0x00895dad);
    /* 00895dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00895dae: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x895db3u); f_00857e98();
    /* 00895db3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00895db4:; BB(0x00895db4);
    /* 00895db4: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 00895db7: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895db9: je 0x895dc2 */ if (fZ) goto L_00895dc2;
L_00895dbb:; BB(0x00895dbb);
    /* 00895dbb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00895dbd: call 0x89424d */ r_esp -= 4; W32(r_esp, 0x895dc2u); f_0089424d();
L_00895dc2:; BB(0x00895dc2);
    /* 00895dc2: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 00895dc5: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895dc7: je 0x895dd0 */ if (fZ) goto L_00895dd0;
L_00895dc9:; BB(0x00895dc9);
    /* 00895dc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00895dcb: call 0x89424d */ r_esp -= 4; W32(r_esp, 0x895dd0u); f_0089424d();
L_00895dd0:; BB(0x00895dd0);
    /* 00895dd0: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00895dd3: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00895dd7: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 00895dda: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 00895ddd: mov dword ptr [esi + 0x38], edi */ W32((u32)(r_esi+0x38u), r_edi);
    /* 00895de0: mov dword ptr [esi + 0x3c], edi */ W32((u32)(r_esi+0x3cu), r_edi);
    /* 00895de3: mov dword ptr [esi + 0x4c], edi */ W32((u32)(r_esi+0x4cu), r_edi);
    /* 00895de6: mov dword ptr [esi + 0x50], edi */ W32((u32)(r_esi+0x50u), r_edi);
    /* 00895de9: jb 0x895cf4 */ if (fC) goto L_00895cf4;
L_00895def:; BB(0x00895def);
    /* 00895def: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00895df1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895df2: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00895df5: jne 0x895e01 */ if (!fZ) goto L_00895e01;
L_00895df7:; BB(0x00895df7);
    /* 00895df7: mov eax, 0x88760b59 */ r_eax = 0x88760b59u;
    /* 00895dfc: jmp 0x895e82 */ goto L_00895e82;
L_00895e01:; BB(0x00895e01);
    /* 00895e01: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00895e04: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895e06: je 0x895e51 */ if (fZ) goto L_00895e51;
L_00895e08:; BB(0x00895e08);
    /* 00895e08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00895e0a: mov edi, ebx */ r_edi = r_ebx;
    /* 00895e0c: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00895e0e: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00895e11: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00895e13: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00895e16: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00895e19: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00895e1c: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00895e1f: mov dword ptr [ebx + 0xc], 1 */ W32((u32)(r_ebx+0xcu), 0x1u);
    /* 00895e26: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00895e28: call 0x88f807 */ r_esp -= 4; W32(r_esp, 0x895e2du); f_0088f807();
    /* 00895e2d: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 00895e30: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 00895e33: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 00895e36: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 00895e39: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 00895e3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895e3d: lea eax, [esi + 0x4c] */ r_eax = (u32)(r_esi+0x4cu);
L_00895e40:; BB(0x00895e40);
    /* 00895e40: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895e43: je 0x895e4f */ if (fZ) goto L_00895e4f;
L_00895e45:; BB(0x00895e45);
    /* 00895e45: inc dword ptr [ebx + 0xc] */ { u32 ad = (u32)(r_ebx+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00895e48: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00895e4a: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00895e4d: jmp 0x895e40 */ goto L_00895e40;
L_00895e4f:; BB(0x00895e4f);
    /* 00895e4f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00895e51:; BB(0x00895e51);
    /* 00895e51: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895e53: mov eax, esi */ r_eax = r_esi;
    /* 00895e55: je 0x895e79 */ if (fZ) goto L_00895e79;
L_00895e57:; BB(0x00895e57);
    /* 00895e57: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00895e5a: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00895e5d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00895e60: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00895e63: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00895e66: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00895e69: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 00895e6c: mov dword ptr [eax + 0x28], edi */ W32((u32)(r_eax+0x28u), r_edi);
    /* 00895e6f: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 00895e72: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 00895e75: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895e77: jne 0x895e57 */ if (!fZ) goto L_00895e57;
L_00895e79:; BB(0x00895e79);
    /* 00895e79: mov esi, dword ptr [esi + 0x50] */ r_esi = R32((u32)(r_esi+0x50u));
    /* 00895e7c: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895e7e: jne 0x895e51 */ if (!fZ) goto L_00895e51;
L_00895e80:; BB(0x00895e80);
    /* 00895e80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00895e82:; BB(0x00895e82);
    /* 00895e82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00895e83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00895e84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00895e85: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00895e86: ret 0x10 */ FN_RET(0x00895cb4); r_esp += 20; return;
}

void f_00895d59(void)
{
    FN_ENTER(0x00895d59);
}

void f_00895e93(void) /* sub_895E93 */
{
    FN_ENTER(0x00895e93);
    /* 00895e93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00895e94: mov esi, ecx */ r_esi = r_ecx;
    /* 00895e96: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00895e99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895e9b: je 0x895ea3 */ if (fZ) goto L_00895ea3;
L_00895e9d:; BB(0x00895e9d);
    /* 00895e9d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00895e9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00895ea1: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x895ea3u); call_ind(t); }
L_00895ea3:; BB(0x00895ea3);
    /* 00895ea3: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00895ea5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895ea7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00895ea8: je 0x895eb0 */ if (fZ) goto L_00895eb0;
L_00895eaa:; BB(0x00895eaa);
    /* 00895eaa: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00895eac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00895eae: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x895eb0u); call_ind(t); }
L_00895eb0:; BB(0x00895eb0);
    /* 00895eb0: ret  */ FN_RET(0x00895e93); r_esp += 4; return;
}

void f_00895ec7(void) /* sub_895EC7 */
{
    FN_ENTER(0x00895ec7);
    /* 00895ec7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00895ec8: mov ebp, esp */ r_ebp = r_esp;
    /* 00895eca: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00895ecd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00895ece: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00895ed1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00895ed2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00895ed3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00895ed5: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895ed7: je 0x89617d */ if (fZ) goto L_0089617d;
L_00895edd:; BB(0x00895edd);
    /* 00895edd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00895ee0: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895ee2: je 0x89617d */ if (fZ) goto L_0089617d;
L_00895ee8:; BB(0x00895ee8);
    /* 00895ee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00895eea: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00895eed: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00895ef0: jge 0x895ef8 */ if ((fS==fO)) goto L_00895ef8;
L_00895ef2:; BB(0x00895ef2);
    /* 00895ef2: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00895ef8:; BB(0x00895ef8);
    /* 00895ef8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00895efa: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00895efd: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00895f00: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00895f03: jge 0x895f0b */ if ((fS==fO)) goto L_00895f0b;
L_00895f05:; BB(0x00895f05);
    /* 00895f05: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00895f0b:; BB(0x00895f0b);
    /* 00895f0b: fst dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 00895f0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00895f10: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00895f13: cmp dword ptr [ebp + 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895f16: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00895f18: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00895f1a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00895f1d: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00895f1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00895f20: fst dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 00895f23: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00895f25: fld dword ptr [0x99b9b4] */ FPUSH(R_F32((u32)(0x99b9b4u)));
    /* 00895f2b: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00895f2d: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00895f30: jbe 0x895f7d */ if ((fC||fZ)) goto L_00895f7d;
L_00895f32:; BB(0x00895f32);
    /* 00895f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00895f34: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00895f37: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00895f3a: jge 0x895f42 */ if ((fS==fO)) goto L_00895f42;
L_00895f3c:; BB(0x00895f3c);
    /* 00895f3c: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00895f42:; BB(0x00895f42);
    /* 00895f42: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00895f44: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 00895f47: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00895f4a: jge 0x895f52 */ if ((fS==fO)) goto L_00895f52;
L_00895f4c:; BB(0x00895f4c);
    /* 00895f4c: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00895f52:; BB(0x00895f52);
    /* 00895f52: fsub dword ptr [0x99b9b4] */ ST(0) = ST(0) - R_F32((u32)(0x99b9b4u));
    /* 00895f58: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00895f5a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00895f5c: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00895f5e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00895f60: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00895f62: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 00895f68: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x895f6du); f_008cb1e8();
    /* 00895f6d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00895f6f: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00895f72: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00895f73: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00895f75: lea esi, [esi + eax + 0xc] */ r_esi = (u32)(r_esi+r_eax+0xcu);
    /* 00895f79: jb 0x895f42 */ if (fC) goto L_00895f42;
L_00895f7b:; BB(0x00895f7b);
    /* 00895f7b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00895f7d:; BB(0x00895f7d);
    /* 00895f7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00895f7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00895f80: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x895f85u); f_008581c5();
    /* 00895f85: mov edi, eax */ r_edi = r_eax;
    /* 00895f87: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895f89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895f8a: je 0x89617d */ if (fZ) goto L_0089617d;
L_00895f90:; BB(0x00895f90);
    /* 00895f90: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00895f92: fldz  */ FPUSH(0.0);
    /* 00895f94: and dword ptr [ebp - 0x18], ebx */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00895f97: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00895f9a: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00895f9d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00895f9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00895fa0: jbe 0x896177 */ if ((fC||fZ)) goto L_00896177;
L_00895fa6:; BB(0x00895fa6);
    /* 00895fa6: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00895faa: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 00895fad: lea eax, [esi + edi] */ r_eax = (u32)(r_esi+r_edi);
    /* 00895fb0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00895fb3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00895fb6: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00895fb9: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00895fbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00895fbe: jge 0x895fc6 */ if ((fS==fO)) goto L_00895fc6;
L_00895fc0:; BB(0x00895fc0);
    /* 00895fc0: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00895fc6:; BB(0x00895fc6);
    /* 00895fc6: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
L_00895fc9:; BB(0x00895fc9);
    /* 00895fc9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00895fcc: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 00895fcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00895fd1: jge 0x895fd9 */ if ((fS==fO)) goto L_00895fd9;
L_00895fd3:; BB(0x00895fd3);
    /* 00895fd3: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00895fd9:; BB(0x00895fd9);
    /* 00895fd9: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00895fdd: fadd dword ptr [ebp - 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd4u));
    /* 00895fe0: fsub dword ptr [0x99b9b4] */ ST(0) = ST(0) - R_F32((u32)(0x99b9b4u));
    /* 00895fe6: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 00895fe9: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 00895fec: fst dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0));
    /* 00895fef: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00895ff2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00895ff4: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00895ff7: jne 0x896020 */ if (!fZ) goto L_00896020;
L_00895ff9:; BB(0x00895ff9);
    /* 00895ff9: fcom dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); 
    /* 00895fff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00896001: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00896004: jp 0x89600d */ if (fP) goto L_0089600d;
L_00896006:; BB(0x00896006);
    /* 00896006: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00896008: fldz  */ FPUSH(0.0);
    /* 0089600a: fst dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0));
L_0089600d:; BB(0x0089600d);
    /* 0089600d: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00896010: fcomp dword ptr [ebp - 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffe4u))); FPOP();
    /* 00896013: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00896015: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00896018: jne 0x896020 */ if (!fZ) goto L_00896020;
L_0089601a:; BB(0x0089601a);
    /* 0089601a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0089601d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00896020:; BB(0x00896020);
    /* 00896020: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00896021: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00896022: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00896025: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x89602au); f_008c9b50();
    /* 0089602a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089602b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089602c: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x896031u); f_008cb1e8();
    /* 00896031: mov edx, eax */ r_edx = r_eax;
    /* 00896033: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00896036: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 00896039: fcom dword ptr [ebp - 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff8u))); 
    /* 0089603c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0089603e: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00896041: jp 0x89612c */ if (fP) goto L_0089612c;
L_00896047:; BB(0x00896047);
    /* 00896047: mov ecx, edx */ r_ecx = r_edx;
    /* 00896049: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0089604c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0089604f: jmp 0x896054 */ goto L_00896054;
L_00896051:; BB(0x00896051);
    /* 00896051: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00896054:; BB(0x00896054);
    /* 00896054: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00896056: fld dword ptr [0x99b9b8] */ FPUSH(R_F32((u32)(0x99b9b8u)));
    /* 0089605c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0089605e: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 00896061: jge 0x89606b */ if ((fS==fO)) goto L_0089606b;
L_00896063:; BB(0x00896063);
    /* 00896063: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00896066: lea ecx, [edx + eax] */ r_ecx = (u32)(r_edx+r_eax);
    /* 00896069: jmp 0x896072 */ goto L_00896072;
L_0089606b:; BB(0x0089606b);
    /* 0089606b: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0089606e: jge 0x896072 */ if ((fS==fO)) goto L_00896072;
L_00896070:; BB(0x00896070);
    /* 00896070: mov ecx, edx */ r_ecx = r_edx;
L_00896072:; BB(0x00896072);
    /* 00896072: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00896074: je 0x89609b */ if (fZ) goto L_0089609b;
L_00896076:; BB(0x00896076);
    /* 00896076: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00896079: fcomp dword ptr [0x99ba68] */ fx_compare(ST(0), R_F32((u32)(0x99ba68u))); FPOP();
    /* 0089607f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00896081: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00896084: jne 0x896094 */ if (!fZ) goto L_00896094;
L_00896086:; BB(0x00896086);
    /* 00896086: lea eax, [esi + edi] */ r_eax = (u32)(r_esi+r_edi);
    /* 00896089: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0089608b: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089608e: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00896091: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
L_00896094:; BB(0x00896094);
    /* 00896094: fldz  */ FPUSH(0.0);
    /* 00896096: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00896098: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
L_0089609b:; BB(0x0089609b);
    /* 0089609b: fcom dword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffe0u))); 
    /* 0089609e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008960a0: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008960a3: jp 0x8960aa */ if (fP) goto L_008960aa;
L_008960a5:; BB(0x008960a5);
    /* 008960a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008960a7: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
L_008960aa:; BB(0x008960aa);
    /* 008960aa: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008960ad: fcomp dword ptr [ebp - 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 008960b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008960b2: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008960b5: jne 0x8960bd */ if (!fZ) goto L_008960bd;
L_008960b7:; BB(0x008960b7);
    /* 008960b7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008960ba: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_008960bd:; BB(0x008960bd);
    /* 008960bd: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008960c1: jne 0x8960ee */ if (!fZ) goto L_008960ee;
L_008960c3:; BB(0x008960c3);
    /* 008960c3: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008960c6: fcomp dword ptr [0x99b9cc] */ fx_compare(ST(0), R_F32((u32)(0x99b9ccu))); FPOP();
    /* 008960cc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008960ce: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 008960d1: jp 0x8960d7 */ if (fP) goto L_008960d7;
L_008960d3:; BB(0x008960d3);
    /* 008960d3: fld1  */ FPUSH(1.0);
    /* 008960d5: jmp 0x8960f9 */ goto L_008960f9;
L_008960d7:; BB(0x008960d7);
    /* 008960d7: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 008960da: fadd dword ptr [0x99b9b8] */ ST(0) = ST(0) + R_F32((u32)(0x99b9b8u));
    /* 008960e0: fcomp dword ptr [ebp - 0x30] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffd0u))); FPOP();
    /* 008960e3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008960e5: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008960e8: jne 0x8960ee */ if (!fZ) goto L_008960ee;
L_008960ea:; BB(0x008960ea);
    /* 008960ea: fldz  */ FPUSH(0.0);
    /* 008960ec: jmp 0x8960f9 */ goto L_008960f9;
L_008960ee:; BB(0x008960ee);
    /* 008960ee: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 008960f1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008960f3: fmul dword ptr [ebp - 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffccu));
    /* 008960f6: fsub dword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff0u));
L_008960f9:; BB(0x008960f9);
    /* 008960f9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008960fd: je 0x896103 */ if (fZ) goto L_00896103;
L_008960ff:; BB(0x008960ff);
    /* 008960ff: fld1  */ FPUSH(1.0);
    /* 00896101: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
L_00896103:; BB(0x00896103);
    /* 00896103: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00896106: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00896107: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00896109: inc dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089610c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0089610f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00896111: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00896114: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00896117: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00896119: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089611b: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0089611e: fcom dword ptr [ebp - 8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xfffffff8u))); 
    /* 00896121: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00896123: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00896126: jnp 0x896051 */ if (!fP) goto L_00896051;
L_0089612c:; BB(0x0089612c);
    /* 0089612c: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089612f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00896131: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896135: jb 0x895fc9 */ if (fC) goto L_00895fc9;
L_0089613b:; BB(0x0089613b);
    /* 0089613b: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 0089613e: fcomp dword ptr [0x99ba68] */ fx_compare(ST(0), R_F32((u32)(0x99ba68u))); FPOP();
    /* 00896144: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00896146: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00896149: jne 0x896159 */ if (!fZ) goto L_00896159;
L_0089614b:; BB(0x0089614b);
    /* 0089614b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089614e: lea eax, [esi + edi] */ r_eax = (u32)(r_esi+r_edi);
    /* 00896151: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00896154: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00896156: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_00896159:; BB(0x00896159);
    /* 00896159: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0089615c: fldz  */ FPUSH(0.0);
    /* 0089615e: mov eax, esi */ r_eax = r_esi;
    /* 00896160: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00896163: sub eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00896166: inc dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00896169: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0089616b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089616e: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00896171: jb 0x895fa6 */ if (fC) goto L_00895fa6;
L_00896177:; BB(0x00896177);
    /* 00896177: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 00896179: mov eax, edi */ r_eax = r_edi;
    /* 0089617b: jmp 0x89617f */ goto L_0089617f;
L_0089617d:; BB(0x0089617d);
    /* 0089617d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0089617f:; BB(0x0089617f);
    /* 0089617f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00896180: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00896181: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00896182: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00896183: ret  */ FN_RET(0x00895ec7); r_esp += 4; return;
}

