#include "protos.h"

void f_00861345(void) /* ___loctotime_t */
{
    FN_ENTER(0x00861345);
    /* 00861345: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00861346: mov ebp, esp */ r_ebp = r_esp;
    /* 00861348: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086134b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086134c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0086134f: sub esi, 0x76c */ {  u32 a = r_esi; u32 b = 0x76cu; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00861355: cmp esi, 0x46 */ {  u32 a = r_esi; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00861358: jl 0x86144d */ if ((fS!=fO)) goto L_0086144d;
L_0086135e:; BB(0x0086135e);
    /* 0086135e: cmp esi, 0x8a */ {  u32 a = r_esi; u32 b = 0x8au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00861364: jg 0x86144d */ if ((!fZ&&fS==fO)) goto L_0086144d;
L_0086136a:; BB(0x0086136a);
    /* 0086136a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086136b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086136c: mov eax, esi */ r_eax = r_esi;
    /* 0086136e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00861370: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00861371: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00861372: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00861372, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00861372, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00861374: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00861377: mov edi, dword ptr [ecx*4 + 0xa24298] */ r_edi = R32((u32)(r_ecx*4+0xa24298u));
    /* 0086137e: add edi, dword ptr [ebp + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00861381: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861383: jne 0x861391 */ if (!fZ) goto L_00861391;
L_00861385:; BB(0x00861385);
    /* 00861385: mov eax, esi */ r_eax = r_esi;
    /* 00861387: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00861389: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0086138a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086138b: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0086138b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0086138b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0086138d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086138f: jne 0x8613a3 */ if (!fZ) goto L_008613a3;
L_00861391:; BB(0x00861391);
    /* 00861391: lea eax, [esi + 0x76c] */ r_eax = (u32)(r_esi+0x76cu);
    /* 00861397: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00861398: mov ebx, 0x190 */ r_ebx = 0x190u;
    /* 0086139d: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0086139d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0086139d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0086139f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008613a1: jne 0x8613a9 */ if (!fZ) goto L_008613a9;
L_008613a3:; BB(0x008613a3);
    /* 008613a3: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008613a6: jle 0x8613a9 */ if ((fZ||fS!=fO)) goto L_008613a9;
L_008613a8:; BB(0x008613a8);
    /* 008613a8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008613a9:; BB(0x008613a9);
    /* 008613a9: call 0x864428 */ r_esp -= 4; W32(r_esp, 0x8613aeu); f_00864428();
    /* 008613ae: lea eax, [esi + 0x12b] */ r_eax = (u32)(r_esi+0x12bu);
    /* 008613b4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008613b5: mov ebx, 0x190 */ r_ebx = 0x190u;
    /* 008613ba: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008613ba, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008613ba, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008613bc: lea ecx, [esi - 1] */ r_ecx = (u32)(r_esi+0xffffffffu);
    /* 008613bf: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 008613c1: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 008613c4: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008613c7: mov ebx, eax */ r_ebx = r_eax;
    /* 008613c9: mov eax, ecx */ r_eax = r_ecx;
    /* 008613cb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008613cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008613cd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008613cd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008613cd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008613cf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008613d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008613d2: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008613d4: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 008613d7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008613d8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008613d8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008613d8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008613da: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008613dd: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 008613e0: mov ecx, eax */ r_ecx = r_eax;
    /* 008613e2: mov eax, esi */ r_eax = r_esi;
    /* 008613e4: imul eax, eax, 0x16d */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x16du; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008613ea: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008613ec: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008613ee: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008613f0: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008613f3: lea ecx, [eax + eax*2] */ r_ecx = (u32)(r_eax+r_eax*2);
    /* 008613f6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008613f9: lea ebx, [eax + ecx*8] */ r_ebx = (u32)(r_eax+r_ecx*8);
    /* 008613fc: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008613ff: imul ebx, ebx, 0x3c */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x3cu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00861402: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00861404: imul ebx, ebx, 0x3c */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x3cu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00861407: add ebx, dword ptr [0xa24070] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa24070u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086140d: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086140e: cmp dword ptr [ebp + 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861412: lea ebx, [ebx + ecx + 0x7c558180] */ r_ebx = (u32)(r_ebx+r_ecx+0x7c558180u);
    /* 00861419: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0086141c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086141f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00861422: je 0x861441 */ if (fZ) goto L_00861441;
L_00861424:; BB(0x00861424);
    /* 00861424: cmp dword ptr [ebp + 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861428: jne 0x861447 */ if (!fZ) goto L_00861447;
L_0086142a:; BB(0x0086142a);
    /* 0086142a: cmp dword ptr [0xa24074], 0 */ {  u32 a = R32((u32)(0xa24074u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861431: je 0x861447 */ if (fZ) goto L_00861447;
L_00861433:; BB(0x00861433);
    /* 00861433: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00861436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861437: call 0x864474 */ r_esp -= 4; W32(r_esp, 0x86143cu); f_00864474();
    /* 0086143c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086143e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086143f: je 0x861447 */ if (fZ) goto L_00861447;
L_00861441:; BB(0x00861441);
    /* 00861441: add ebx, dword ptr [0xa24078] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa24078u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00861447:; BB(0x00861447);
    /* 00861447: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00861448: mov eax, ebx */ r_eax = r_ebx;
    /* 0086144a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086144b: jmp 0x861450 */ goto L_00861450;
L_0086144d:; BB(0x0086144d);
    /* 0086144d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00861450:; BB(0x00861450);
    /* 00861450: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861451: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00861452: ret  */ FN_RET(0x00861345); r_esp += 4; return;
}

